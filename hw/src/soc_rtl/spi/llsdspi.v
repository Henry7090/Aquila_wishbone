////////////////////////////////////////////////////////////////////////////////
//
// Filename:	rtl/llsdspi.v
// {{{
// Project:	SD-Card controller
//
// Purpose:	This file implements the "lower-level" interface to the
//		SD-Card controller.  Specifically, it turns byte-level
//	interaction requests into SPI bit-wise interactions.  Further, it
//	handles the request and grant for the SPI wires (i.e., it requests
//	the SPI port by pulling o_cs_n low, and then waits for i_bus_grant
//	to be true before continuing.).  Finally, the speed/clock rate of the
//	communication is adjustable as a division of the current clock rate.
//
//	i_speed
//		This is the number of clocks (minus one) between SPI clock
//		transitions.  Hence a '0' (not tested, doesn't work) would
//		result in a SPI clock that alternated on every input clock
//		equivalently dividing the input clock by two, whereas a '1'
//		would divide the input clock by four.
//
//		In general, the SPI clock frequency will be given by the
//		master clock frequency divided by twice this number plus one.
//		In other words,
//
//		SPIFREQ=(i_clk FREQ) / (2*(i_speed+1))
//
//	i_stb
//		True if the master controller is requesting to send a byte.
//		This will be ignored unless o_idle is false.
//
//	i_byte
//		The byte that the master controller wishes to send across the
//		interface.
//
//	(The external SPI interface)
//
//	o_stb
//		Only true for one clock--when a byte is valid coming in from the
//		interface, this will be true for one clock (a strobe) indicating
//		that a valid byte is ready to be read.
//
//	o_byte
//		The value of the byte coming in.
//
//	o_idle
//		True if this low-level device handler is ready to accept a
//		byte from the incoming interface, false otherwise.
//
//	i_bus_grant
//		True if the SPI bus has been granted to this interface, false
//		otherwise.  This has been placed here so that the interface of
//		the XuLA2 board may be shared between SPI-Flash and the SPI
//		based SDCard.  An external arbiter will determine which of the
//		two gets to control the clock and mosi outputs given their
//		cs_n requests.  If control is not granted, i_bus_grant will
//		remain low as will the actual cs_n going out of the FPGA.
//
//
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
// }}}
// Copyright (C) 2016-2025, Gisselquist Technology, LLC
// {{{
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
// target there if the PDF file isn't present.)  If not, see
// <http://www.gnu.org/licenses/> for a copy.
// }}}
// License:	GPL, v3, as defined and found on www.gnu.org,
// {{{
//		http://www.gnu.org/licenses/gpl.html
//
////////////////////////////////////////////////////////////////////////////////
//
`timescale	1ns/1ps
// }}}
module	llsdspi #(
		// {{{
		parameter	SPDBITS = 7,
				// Minimum startup clocks
				STARTUP_CLOCKS = 150,
				// System clocks to wait before the startup
				// clock sequence
				POWERUP_IDLE = 1000,
		//
		// This core was originally developed for a shared SPI bus
		// implementation on a XuLA2-LX25 board--one that shared flash
		// with the SD-card.  Few cards support such an implementation
		// any more, since per protocol CS high (inactive) and clock
		// and data pins toggling could well put the SD card into it's
		// SD mode instead of SPI mode.
		parameter [0:0]	OPT_SPI_ARBITRATION = 1'b0,
		//
		//
		localparam [0:0]	CSN_ON_STARTUP = 1'b1,
		//
		// The MOSI INACTIVE VALUE *MUST* be 1'b1 to be compliant
		localparam [0:0]	MOSI_INACTIVE_VALUE = 1'b1,
		//
		// Normally, an SPI transaction shuts the clock down when
		// finished.  If OPT_CONTINUOUS_CLOCK is set, the clock will be
		// continuous.  This also means that any driving program must
		// be ready when the SDSPI is idle.
		parameter [0:0]	OPT_CONTINUOUS_CLOCK = 1'b0
		// }}}
	) (
		// {{{
		input	wire		i_clk, i_reset,
		// Parameters/setup
		input	wire	[(SPDBITS-1):0]	i_speed,
		// The incoming interface
		input	wire		i_cs,
		input	wire		i_stb,
		input	wire	[7:0]	i_byte,
		// The actual SPI interface
		output	reg		o_cs_n, o_sclk, o_mosi,
		input	wire		i_miso,
		// The outgoing interface
		output	reg		o_stb,
		output	reg	[7:0]	o_byte,
		output	reg		o_idle,
		// And whether or not we actually own the interface (yet)
		input	wire		i_bus_grant
		// }}}
	);

	// Signal / localparam declarations
	// {{{
	localparam [3:0]	LLSDSPI_IDLE    = 4'h0,
						LLSDSPI_HOTIDLE	= 4'h1,
						LLSDSPI_WAIT	= 4'h2,
					LLSDSPI_START	= 4'h3,
					LLSDSPI_END	= 4'hb;
	//
	reg			r_z_counter;
	reg	[(SPDBITS-1):0]	r_clk_counter;
	reg			r_idle;
	reg		[3:0]	r_state;
	reg		[7:0]	r_byte, r_ireg;
	wire			byte_accepted;
	reg			restart_counter;

	wire			bus_grant, startup_hold, powerup_hold;
`ifdef	FORMAL
	reg	f_past_valid;
`endif
	// }}}

	assign	bus_grant = (OPT_SPI_ARBITRATION ? i_bus_grant : 1'b1);

	// Wait for power up
	// {{{
	generate if (POWERUP_IDLE > 0)
	begin : WAIT_FOR_POWERUP
		// {{{
		localparam	POWERUP_BITS = $clog2(POWERUP_IDLE);
		reg	[POWERUP_BITS-1:0]	powerup_counter;
		reg				r_powerup_hold;

		initial powerup_counter = POWERUP_IDLE[POWERUP_BITS-1:0];
		initial	r_powerup_hold = 1;
		always @(posedge i_clk)
		if (i_reset)
		begin
			powerup_counter <= POWERUP_IDLE;
			r_powerup_hold    <= 1;
		end else if (powerup_hold)
		begin
			if (|powerup_counter)
				powerup_counter <= powerup_counter - 1;
			r_powerup_hold <= (powerup_counter > 0);
		end

		assign	powerup_hold = r_powerup_hold;
`ifdef	FORMAL
		always @(*)
		if (!f_past_valid)
			assume(powerup_counter > 2);
		always @(*)
		if (powerup_counter > 0)
			assert(powerup_hold);
`endif
		// }}}
	end else begin : NO_POWERUP_HOLD

		assign	powerup_hold = 0;
	end endgenerate
	// }}}

	// Send a minimum number of start up clocks after power up
	// {{{
	generate if (STARTUP_CLOCKS > 0)
	begin : WAIT_FOR_STARTUP
		// {{{
		localparam	STARTUP_BITS = $clog2(STARTUP_CLOCKS);
		reg	[STARTUP_BITS-1:0]	startup_counter;
		reg				r_startup_hold;

		initial startup_counter = STARTUP_CLOCKS[STARTUP_BITS-1:0];
		initial	r_startup_hold = 1;
		always @(posedge i_clk)
		if (i_reset || powerup_hold)
		begin
			startup_counter <= STARTUP_CLOCKS;
			r_startup_hold    <= 1;
		end else if (startup_hold && r_z_counter && !o_sclk)
		begin
			if (|startup_counter)
				startup_counter <= startup_counter - 1;
			r_startup_hold <= (startup_counter > 0);
		end

		assign	startup_hold = r_startup_hold;
`ifdef	FORMAL
		always @(*)
		if (!f_past_valid)
			assume(startup_counter > 1);
		always @(*)
		if (startup_counter > 0)
			assert(startup_hold);
`endif
		// }}}
	end else begin : NO_STARTUP_HOLD

		assign	startup_hold = 0;

	end endgenerate
	// }}}

	assign	byte_accepted = (i_stb)&&(o_idle);

`ifdef	FORMAL
	// {{{
	always @(*)
	if (powerup_hold)
		assert(startup_hold);
	// }}}
`endif
	////////////////////////////////////////////////////////////////////////
	//
	// Clock divider and speed control
	// {{{
	////////////////////////////////////////////////////////////////////////
	//
	//
	initial	r_clk_counter = 0;
	initial	r_z_counter = 1'b1;

	// restart_counter
	// {{{
	always @(*)
	if (OPT_CONTINUOUS_CLOCK || powerup_hold)
		restart_counter = !powerup_hold;
	else begin
		restart_counter = 1'b0;

		if (startup_hold || !i_cs)
			restart_counter = 1'b1;
		else if (!OPT_SPI_ARBITRATION && byte_accepted)
			restart_counter = 1'b1;
		else if (OPT_SPI_ARBITRATION && r_state == LLSDSPI_IDLE)
			restart_counter = 1'b0;
		else if (OPT_SPI_ARBITRATION && r_state == LLSDSPI_WAIT
				&& !bus_grant)
			restart_counter = 1'b0;
		else if (OPT_SPI_ARBITRATION && byte_accepted)
			restart_counter = 1'b1;
		else
			restart_counter = !r_idle;
	end
	// }}}

	// r_clk_counter, r_z_counter
	// {{{
	always @(posedge i_clk)
	begin
		if (!r_z_counter)
		begin
			r_clk_counter <= (r_clk_counter - 1);
			r_z_counter <= (r_clk_counter == 1);
		end else if (restart_counter)
		begin
			r_clk_counter <= i_speed;
			r_z_counter <= (i_speed == 0);
		end
	end
	// }}}

	// }}}
	////////////////////////////////////////////////////////////////////////
	//
	// Control o_stb, o_cs_n, and o_mosi
	// {{{
	////////////////////////////////////////////////////////////////////////
	//
	//

	// o_cs_n, r_state
	// {{{
	initial	o_cs_n = CSN_ON_STARTUP;
	initial	r_state = LLSDSPI_IDLE;
	always @(posedge i_clk)
	if (i_reset || (!CSN_ON_STARTUP && startup_hold))
	begin
		o_cs_n <= CSN_ON_STARTUP;
		r_state <= LLSDSPI_IDLE;
	end else if (r_z_counter)
	begin
		if (!i_cs)
		begin
			// No request for action.  If anything, a request
			// to close up/seal up the bus for the next transaction
			// Expect to lose arbitration here.
			r_state <= LLSDSPI_IDLE;
			o_cs_n <= 1'b1;
		end else if (r_state == LLSDSPI_IDLE)
		begin
			if (byte_accepted)
			begin
				o_cs_n <= 1'b0;
				if (OPT_SPI_ARBITRATION)
					// Wait for arbitration
					r_state <= LLSDSPI_WAIT;
				else
					r_state <= LLSDSPI_START + (OPT_CONTINUOUS_CLOCK ? 1:0);
			end
		end else if (r_state == LLSDSPI_WAIT)
		begin
			if (bus_grant)
				r_state <= LLSDSPI_START;
		end else if (byte_accepted)
			r_state <= LLSDSPI_START+1;
		else if (o_sclk && r_state >= LLSDSPI_START)
		begin
			r_state <= r_state + 1;
			if (r_state >= LLSDSPI_END)
				r_state <= LLSDSPI_HOTIDLE;
		end

		if (startup_hold)
			o_cs_n <= 1;
	end
	// }}}

	// r_ireg
	// {{{
	always @(posedge i_clk)
	if (r_z_counter && !o_sclk)
		r_ireg <= { r_ireg[6:0], i_miso };
	// }}}

	// o_byte
	// {{{
	always @(posedge i_clk)
	if (r_z_counter && o_sclk && r_state == LLSDSPI_END)
		o_byte <= r_ireg;
	// }}}

	// r_idle
	// {{{
	initial	r_idle  = 0;
	always @(posedge i_clk)
	if (startup_hold || i_reset)
		r_idle <= 0;
	else if (r_z_counter)
	begin
		if (byte_accepted)
			r_idle <= 1'b0;
		else if ((r_state == LLSDSPI_END)
				||(r_state == LLSDSPI_HOTIDLE))
			r_idle <= 1'b1;
		else if (r_state == LLSDSPI_IDLE)
			r_idle <= 1'b1;
		else
			r_idle <= 1'b0;
	end
	// }}}

	// o_sclk
	// {{{
	initial	o_sclk = 1;
	always @(posedge i_clk)
	if (i_reset)
		o_sclk <= 1;
	else if (r_z_counter)
	begin
		if (OPT_CONTINUOUS_CLOCK)
			o_sclk <= !o_sclk;
		else if (restart_counter
			&& (startup_hold || (i_cs && !o_cs_n) || !o_sclk))
			o_sclk <= (r_state == LLSDSPI_WAIT) || !o_sclk;
	end
	// }}}

	// r_byte, o_mosi
	// {{{
	initial	r_byte = -1;
	initial	o_mosi = MOSI_INACTIVE_VALUE;
	always @(posedge i_clk)
	if (i_reset)
	begin
		r_byte <= {(8){MOSI_INACTIVE_VALUE}};
		o_mosi <= MOSI_INACTIVE_VALUE;
	end else if (r_z_counter)
	begin
		if (byte_accepted)
		begin
			o_mosi <= MOSI_INACTIVE_VALUE;
			if (o_cs_n && !OPT_CONTINUOUS_CLOCK)
				r_byte <= i_byte[7:0];
			else begin
				r_byte <= { i_byte[6:0], MOSI_INACTIVE_VALUE };
				o_mosi <= i_byte[7];
			end
		end else if (o_sclk && (!OPT_SPI_ARBITRATION
				|| (bus_grant && r_state != LLSDSPI_WAIT)))
		begin
			r_byte <= { r_byte[6:0], MOSI_INACTIVE_VALUE };
			if (r_state >= LLSDSPI_START && r_state < LLSDSPI_END)
				o_mosi <= r_byte[7];
			else if (!i_cs)
				o_mosi <= MOSI_INACTIVE_VALUE;
		end
	end
	// }}}

	// o_stb
	// {{{
	initial	o_stb  = 1'b0;
	always @(posedge i_clk)
	if (i_reset || startup_hold || !i_cs || !r_z_counter || !o_sclk)
		o_stb <= 1'b0;
	else
		o_stb <= (r_state >= LLSDSPI_END);
	// }}}

	// o_idle
	// {{{
	always @(*)
	begin
		if (OPT_CONTINUOUS_CLOCK)
			o_idle = (r_idle)&&(r_z_counter)&&(o_sclk);
		else
			o_idle = (r_idle)&&(r_z_counter);
	end
	// }}}
	// }}}

endmodule
