`timescale 1ns / 1ps
// =============================================================================
//  Program : core2axi_if.v
//  Author  : Chun-Jen Tsai
//  Date    : Dec/22/2022
// -----------------------------------------------------------------------------
//  Description:
//  This is the AXI bus interface for the Aquila core. This module converts
//  the Aquila device I/O interface to the AXI-lite bus master interface such
//  that you can connect it to an AXI-lite salve device.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  None.
// -----------------------------------------------------------------------------
//  License information:
//
//  This software is released under the BSD-3-Clause Licence,
//  see https://opensource.org/licenses/BSD-3-Clause for details.
//  In the following license statements, "software" refers to the
//  "source code" of the complete hardware/software system.
//
//  Copyright 2022,
//                    Embedded Intelligent Systems Lab (EISL)
//                    Deparment of Computer Science
//                    National Chiao Tung Uniersity
//                    Hsinchu, Taiwan.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//  3. Neither the name of the copyright holder nor the names of its contributors
//     may be used to endorse or promote products derived from this software
//     without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
// =============================================================================
`include "aquila_config.vh"

module core2wishbone_if #(parameter XLEN = 32, AXI_ADDR_LEN = 8, AXI_DATA_LEN = 32, AW = 2, DW = 32)
(
    input                 clk_i,
    input                 rst_i,   // level-sensitive reset signal.

    // Aquila M_DEVICE master interface signals.
    input                 S_DEVICE_strobe_i,
    input  [XLEN-1 : 0]   S_DEVICE_addr_i,
    input                 S_DEVICE_rw_i,
    input  [XLEN/8-1 : 0] S_DEVICE_byte_enable_i,
    input  [XLEN-1 : 0]   S_DEVICE_data_i,
    output                S_DEVICE_data_ready_o,
    output [XLEN-1 : 0]   S_DEVICE_data_o,

    // Converted WISHBONE interface signals 
    output  reg                     wb_cyc_o,
    output  reg                     wb_stb_o,
    output  reg                     wb_we_o,
    output  reg [AW-1:0]	        wb_addr_o,
	output  [DW-1:0]	            wb_data_o,
	output  [DW/8 - 1:0]            wb_sel_o,
	input   		                wb_stall_i,
	input   		                wb_ack_i,
	input   [DW-1:0]            	wb_data_i
);

//  wb_cyc_o
always @(posedge clk_i)begin
    if (rst_i)
        wb_cyc_o <= 0;
    else if(S_DEVICE_strobe_i)
        wb_cyc_o <= 1;
    else if(wb_ack_i)
        wb_cyc_o <= 0;
    else 
        wb_cyc_o <= wb_cyc_o;
end

//  wb_stb_o
reg wb_stb_r;
wire wb_stb;
always @(posedge clk_i)begin
    wb_stb_r <= wb_stb;
end
always @(posedge clk_i)begin
    if(rst_i) wb_stb_o <= 0;
    else if(wb_stb && !wb_stb_r) wb_stb_o <= 1;
    else wb_stb_o <= 0;
end

assign wb_stb = S_DEVICE_strobe_i && wb_ack_i == 0;

//  wb_we_o
always @(posedge clk_i)begin
    if (rst_i)
        wb_we_o <= 0;
    else if(S_DEVICE_strobe_i && S_DEVICE_rw_i)
        wb_we_o <= 1;
    else if(wb_ack_i)
        wb_we_o <= 0;
    else 
        wb_we_o <= wb_we_o;
end

//  wb_addr_o
always @(posedge clk_i) // Write Addresses
begin
    if (rst_i)
        wb_addr_o <= 0;
    else if (S_DEVICE_strobe_i) begin
        if(S_DEVICE_addr_i[3:0] == 12) wb_addr_o <= 3;
        else if(S_DEVICE_addr_i[3:0] == 8) wb_addr_o <= 2;
        else if(S_DEVICE_addr_i[3:0] == 4) wb_addr_o <= 1;
        else if(S_DEVICE_addr_i[3:0] == 0) wb_addr_o <= 0;
        else wb_addr_o <= wb_addr_o;
    end
end

// 	wb_data_o
assign wb_data_o = S_DEVICE_data_i;

// 	wb_sel_o
assign wb_sel_o = S_DEVICE_byte_enable_i;


//  S_DEVICE_data_ready_o
assign S_DEVICE_data_ready_o = wb_ack_i;

//  S_DEVICE_data_o
assign S_DEVICE_data_o = wb_data_i;

endmodule
