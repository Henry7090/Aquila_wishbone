// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.2 (lin64) Build 5239630 Fri Nov 08 22:34:34 MST 2024
// Date        : Thu Jul 24 17:38:22 2025
// Host        : henry7090-ROG-Zephyrus-G16 running 64-bit Ubuntu 24.04.1 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/henry7090/Desktop/Aquila_wishbone/hw/aquila_wishbonespi/aquila_wishbonespi.gen/sources_1/ip/async_fifo_signal/async_fifo_signal_sim_netlist.v
// Design      : async_fifo_signal
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7k325tffg676-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "async_fifo_signal,fifo_generator_v13_2_11,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "fifo_generator_v13_2_11,Vivado 2024.2" *) 
(* NotValidForBitStream *)
module async_fifo_signal
   (wr_clk,
    rd_clk,
    din,
    wr_en,
    rd_en,
    dout,
    full,
    empty);
  (* x_interface_info = "xilinx.com:signal:clock:1.0 write_clk CLK" *) (* x_interface_mode = "slave write_clk" *) (* x_interface_parameter = "XIL_INTERFACENAME write_clk, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, INSERT_VIP 0" *) input wr_clk;
  (* x_interface_info = "xilinx.com:signal:clock:1.0 read_clk CLK" *) (* x_interface_mode = "slave read_clk" *) (* x_interface_parameter = "XIL_INTERFACENAME read_clk, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, INSERT_VIP 0" *) input rd_clk;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_DATA" *) (* x_interface_mode = "slave FIFO_WRITE" *) input [0:0]din;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_EN" *) input wr_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_EN" *) (* x_interface_mode = "slave FIFO_READ" *) input rd_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_DATA" *) output [0:0]dout;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE FULL" *) output full;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ EMPTY" *) output empty;

  wire [0:0]din;
  wire [0:0]dout;
  wire empty;
  wire full;
  wire rd_clk;
  wire rd_en;
  wire wr_clk;
  wire wr_en;
  wire NLW_U0_almost_empty_UNCONNECTED;
  wire NLW_U0_almost_full_UNCONNECTED;
  wire NLW_U0_axi_ar_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_ar_overflow_UNCONNECTED;
  wire NLW_U0_axi_ar_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_ar_prog_full_UNCONNECTED;
  wire NLW_U0_axi_ar_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_ar_underflow_UNCONNECTED;
  wire NLW_U0_axi_aw_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_aw_overflow_UNCONNECTED;
  wire NLW_U0_axi_aw_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_aw_prog_full_UNCONNECTED;
  wire NLW_U0_axi_aw_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_aw_underflow_UNCONNECTED;
  wire NLW_U0_axi_b_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_b_overflow_UNCONNECTED;
  wire NLW_U0_axi_b_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_b_prog_full_UNCONNECTED;
  wire NLW_U0_axi_b_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_b_underflow_UNCONNECTED;
  wire NLW_U0_axi_r_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_r_overflow_UNCONNECTED;
  wire NLW_U0_axi_r_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_r_prog_full_UNCONNECTED;
  wire NLW_U0_axi_r_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_r_underflow_UNCONNECTED;
  wire NLW_U0_axi_w_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_w_overflow_UNCONNECTED;
  wire NLW_U0_axi_w_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_w_prog_full_UNCONNECTED;
  wire NLW_U0_axi_w_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_w_underflow_UNCONNECTED;
  wire NLW_U0_axis_dbiterr_UNCONNECTED;
  wire NLW_U0_axis_overflow_UNCONNECTED;
  wire NLW_U0_axis_prog_empty_UNCONNECTED;
  wire NLW_U0_axis_prog_full_UNCONNECTED;
  wire NLW_U0_axis_sbiterr_UNCONNECTED;
  wire NLW_U0_axis_underflow_UNCONNECTED;
  wire NLW_U0_dbiterr_UNCONNECTED;
  wire NLW_U0_m_axi_arvalid_UNCONNECTED;
  wire NLW_U0_m_axi_awvalid_UNCONNECTED;
  wire NLW_U0_m_axi_bready_UNCONNECTED;
  wire NLW_U0_m_axi_rready_UNCONNECTED;
  wire NLW_U0_m_axi_wlast_UNCONNECTED;
  wire NLW_U0_m_axi_wvalid_UNCONNECTED;
  wire NLW_U0_m_axis_tlast_UNCONNECTED;
  wire NLW_U0_m_axis_tvalid_UNCONNECTED;
  wire NLW_U0_overflow_UNCONNECTED;
  wire NLW_U0_prog_empty_UNCONNECTED;
  wire NLW_U0_prog_full_UNCONNECTED;
  wire NLW_U0_rd_rst_busy_UNCONNECTED;
  wire NLW_U0_s_axi_arready_UNCONNECTED;
  wire NLW_U0_s_axi_awready_UNCONNECTED;
  wire NLW_U0_s_axi_bvalid_UNCONNECTED;
  wire NLW_U0_s_axi_rlast_UNCONNECTED;
  wire NLW_U0_s_axi_rvalid_UNCONNECTED;
  wire NLW_U0_s_axi_wready_UNCONNECTED;
  wire NLW_U0_s_axis_tready_UNCONNECTED;
  wire NLW_U0_sbiterr_UNCONNECTED;
  wire NLW_U0_underflow_UNCONNECTED;
  wire NLW_U0_valid_UNCONNECTED;
  wire NLW_U0_wr_ack_UNCONNECTED;
  wire NLW_U0_wr_rst_busy_UNCONNECTED;
  wire [4:0]NLW_U0_axi_ar_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_ar_rd_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_ar_wr_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_aw_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_aw_rd_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_aw_wr_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_b_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_b_rd_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_b_wr_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_r_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_r_rd_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_r_wr_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_w_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_w_rd_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_w_wr_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axis_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axis_rd_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axis_wr_data_count_UNCONNECTED;
  wire [3:0]NLW_U0_data_count_UNCONNECTED;
  wire [31:0]NLW_U0_m_axi_araddr_UNCONNECTED;
  wire [1:0]NLW_U0_m_axi_arburst_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_arcache_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_arid_UNCONNECTED;
  wire [7:0]NLW_U0_m_axi_arlen_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_arlock_UNCONNECTED;
  wire [2:0]NLW_U0_m_axi_arprot_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_arqos_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_arregion_UNCONNECTED;
  wire [2:0]NLW_U0_m_axi_arsize_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_aruser_UNCONNECTED;
  wire [31:0]NLW_U0_m_axi_awaddr_UNCONNECTED;
  wire [1:0]NLW_U0_m_axi_awburst_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_awcache_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_awid_UNCONNECTED;
  wire [7:0]NLW_U0_m_axi_awlen_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_awlock_UNCONNECTED;
  wire [2:0]NLW_U0_m_axi_awprot_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_awqos_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_awregion_UNCONNECTED;
  wire [2:0]NLW_U0_m_axi_awsize_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_awuser_UNCONNECTED;
  wire [63:0]NLW_U0_m_axi_wdata_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_wid_UNCONNECTED;
  wire [7:0]NLW_U0_m_axi_wstrb_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_wuser_UNCONNECTED;
  wire [7:0]NLW_U0_m_axis_tdata_UNCONNECTED;
  wire [0:0]NLW_U0_m_axis_tdest_UNCONNECTED;
  wire [0:0]NLW_U0_m_axis_tid_UNCONNECTED;
  wire [0:0]NLW_U0_m_axis_tkeep_UNCONNECTED;
  wire [0:0]NLW_U0_m_axis_tstrb_UNCONNECTED;
  wire [3:0]NLW_U0_m_axis_tuser_UNCONNECTED;
  wire [3:0]NLW_U0_rd_data_count_UNCONNECTED;
  wire [0:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [0:0]NLW_U0_s_axi_buser_UNCONNECTED;
  wire [63:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [0:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;
  wire [0:0]NLW_U0_s_axi_ruser_UNCONNECTED;
  wire [3:0]NLW_U0_wr_data_count_UNCONNECTED;

  (* C_ADD_NGC_CONSTRAINT = "0" *) 
  (* C_APPLICATION_TYPE_AXIS = "0" *) 
  (* C_APPLICATION_TYPE_RACH = "0" *) 
  (* C_APPLICATION_TYPE_RDCH = "0" *) 
  (* C_APPLICATION_TYPE_WACH = "0" *) 
  (* C_APPLICATION_TYPE_WDCH = "0" *) 
  (* C_APPLICATION_TYPE_WRCH = "0" *) 
  (* C_AXIS_TDATA_WIDTH = "8" *) 
  (* C_AXIS_TDEST_WIDTH = "1" *) 
  (* C_AXIS_TID_WIDTH = "1" *) 
  (* C_AXIS_TKEEP_WIDTH = "1" *) 
  (* C_AXIS_TSTRB_WIDTH = "1" *) 
  (* C_AXIS_TUSER_WIDTH = "4" *) 
  (* C_AXIS_TYPE = "0" *) 
  (* C_AXI_ADDR_WIDTH = "32" *) 
  (* C_AXI_ARUSER_WIDTH = "1" *) 
  (* C_AXI_AWUSER_WIDTH = "1" *) 
  (* C_AXI_BUSER_WIDTH = "1" *) 
  (* C_AXI_DATA_WIDTH = "64" *) 
  (* C_AXI_ID_WIDTH = "1" *) 
  (* C_AXI_LEN_WIDTH = "8" *) 
  (* C_AXI_LOCK_WIDTH = "1" *) 
  (* C_AXI_RUSER_WIDTH = "1" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_AXI_WUSER_WIDTH = "1" *) 
  (* C_COMMON_CLOCK = "0" *) 
  (* C_COUNT_TYPE = "0" *) 
  (* C_DATA_COUNT_WIDTH = "4" *) 
  (* C_DEFAULT_VALUE = "BlankString" *) 
  (* C_DIN_WIDTH = "1" *) 
  (* C_DIN_WIDTH_AXIS = "1" *) 
  (* C_DIN_WIDTH_RACH = "32" *) 
  (* C_DIN_WIDTH_RDCH = "64" *) 
  (* C_DIN_WIDTH_WACH = "1" *) 
  (* C_DIN_WIDTH_WDCH = "64" *) 
  (* C_DIN_WIDTH_WRCH = "2" *) 
  (* C_DOUT_RST_VAL = "0" *) 
  (* C_DOUT_WIDTH = "1" *) 
  (* C_ENABLE_RLOCS = "0" *) 
  (* C_ENABLE_RST_SYNC = "1" *) 
  (* C_EN_SAFETY_CKT = "0" *) 
  (* C_ERROR_INJECTION_TYPE = "0" *) 
  (* C_ERROR_INJECTION_TYPE_AXIS = "0" *) 
  (* C_ERROR_INJECTION_TYPE_RACH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_RDCH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WACH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WDCH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WRCH = "0" *) 
  (* C_FAMILY = "kintex7" *) 
  (* C_FULL_FLAGS_RST_VAL = "0" *) 
  (* C_HAS_ALMOST_EMPTY = "0" *) 
  (* C_HAS_ALMOST_FULL = "0" *) 
  (* C_HAS_AXIS_TDATA = "1" *) 
  (* C_HAS_AXIS_TDEST = "0" *) 
  (* C_HAS_AXIS_TID = "0" *) 
  (* C_HAS_AXIS_TKEEP = "0" *) 
  (* C_HAS_AXIS_TLAST = "0" *) 
  (* C_HAS_AXIS_TREADY = "1" *) 
  (* C_HAS_AXIS_TSTRB = "0" *) 
  (* C_HAS_AXIS_TUSER = "1" *) 
  (* C_HAS_AXI_ARUSER = "0" *) 
  (* C_HAS_AXI_AWUSER = "0" *) 
  (* C_HAS_AXI_BUSER = "0" *) 
  (* C_HAS_AXI_ID = "0" *) 
  (* C_HAS_AXI_RD_CHANNEL = "1" *) 
  (* C_HAS_AXI_RUSER = "0" *) 
  (* C_HAS_AXI_WR_CHANNEL = "1" *) 
  (* C_HAS_AXI_WUSER = "0" *) 
  (* C_HAS_BACKUP = "0" *) 
  (* C_HAS_DATA_COUNT = "0" *) 
  (* C_HAS_DATA_COUNTS_AXIS = "0" *) 
  (* C_HAS_DATA_COUNTS_RACH = "0" *) 
  (* C_HAS_DATA_COUNTS_RDCH = "0" *) 
  (* C_HAS_DATA_COUNTS_WACH = "0" *) 
  (* C_HAS_DATA_COUNTS_WDCH = "0" *) 
  (* C_HAS_DATA_COUNTS_WRCH = "0" *) 
  (* C_HAS_INT_CLK = "0" *) 
  (* C_HAS_MASTER_CE = "0" *) 
  (* C_HAS_MEMINIT_FILE = "0" *) 
  (* C_HAS_OVERFLOW = "0" *) 
  (* C_HAS_PROG_FLAGS_AXIS = "0" *) 
  (* C_HAS_PROG_FLAGS_RACH = "0" *) 
  (* C_HAS_PROG_FLAGS_RDCH = "0" *) 
  (* C_HAS_PROG_FLAGS_WACH = "0" *) 
  (* C_HAS_PROG_FLAGS_WDCH = "0" *) 
  (* C_HAS_PROG_FLAGS_WRCH = "0" *) 
  (* C_HAS_RD_DATA_COUNT = "0" *) 
  (* C_HAS_RD_RST = "0" *) 
  (* C_HAS_RST = "0" *) 
  (* C_HAS_SLAVE_CE = "0" *) 
  (* C_HAS_SRST = "0" *) 
  (* C_HAS_UNDERFLOW = "0" *) 
  (* C_HAS_VALID = "0" *) 
  (* C_HAS_WR_ACK = "0" *) 
  (* C_HAS_WR_DATA_COUNT = "0" *) 
  (* C_HAS_WR_RST = "0" *) 
  (* C_IMPLEMENTATION_TYPE = "2" *) 
  (* C_IMPLEMENTATION_TYPE_AXIS = "1" *) 
  (* C_IMPLEMENTATION_TYPE_RACH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_RDCH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WACH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WDCH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WRCH = "1" *) 
  (* C_INIT_WR_PNTR_VAL = "0" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_MEMORY_TYPE = "2" *) 
  (* C_MIF_FILE_NAME = "BlankString" *) 
  (* C_MSGON_VAL = "1" *) 
  (* C_OPTIMIZATION_MODE = "0" *) 
  (* C_OVERFLOW_LOW = "0" *) 
  (* C_POWER_SAVING_MODE = "0" *) 
  (* C_PRELOAD_LATENCY = "0" *) 
  (* C_PRELOAD_REGS = "1" *) 
  (* C_PRIM_FIFO_TYPE = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_AXIS = "1kx18" *) 
  (* C_PRIM_FIFO_TYPE_RACH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_RDCH = "1kx36" *) 
  (* C_PRIM_FIFO_TYPE_WACH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_WDCH = "1kx36" *) 
  (* C_PRIM_FIFO_TYPE_WRCH = "512x36" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL = "4" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_AXIS = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RACH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RDCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WACH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WDCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WRCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_NEGATE_VAL = "5" *) 
  (* C_PROG_EMPTY_TYPE = "0" *) 
  (* C_PROG_EMPTY_TYPE_AXIS = "0" *) 
  (* C_PROG_EMPTY_TYPE_RACH = "0" *) 
  (* C_PROG_EMPTY_TYPE_RDCH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WACH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WDCH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WRCH = "0" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL = "15" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_AXIS = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_RACH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_RDCH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WACH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WDCH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WRCH = "1023" *) 
  (* C_PROG_FULL_THRESH_NEGATE_VAL = "14" *) 
  (* C_PROG_FULL_TYPE = "0" *) 
  (* C_PROG_FULL_TYPE_AXIS = "0" *) 
  (* C_PROG_FULL_TYPE_RACH = "0" *) 
  (* C_PROG_FULL_TYPE_RDCH = "0" *) 
  (* C_PROG_FULL_TYPE_WACH = "0" *) 
  (* C_PROG_FULL_TYPE_WDCH = "0" *) 
  (* C_PROG_FULL_TYPE_WRCH = "0" *) 
  (* C_RACH_TYPE = "0" *) 
  (* C_RDCH_TYPE = "0" *) 
  (* C_RD_DATA_COUNT_WIDTH = "4" *) 
  (* C_RD_DEPTH = "16" *) 
  (* C_RD_FREQ = "1" *) 
  (* C_RD_PNTR_WIDTH = "4" *) 
  (* C_REG_SLICE_MODE_AXIS = "0" *) 
  (* C_REG_SLICE_MODE_RACH = "0" *) 
  (* C_REG_SLICE_MODE_RDCH = "0" *) 
  (* C_REG_SLICE_MODE_WACH = "0" *) 
  (* C_REG_SLICE_MODE_WDCH = "0" *) 
  (* C_REG_SLICE_MODE_WRCH = "0" *) 
  (* C_SELECT_XPM = "0" *) 
  (* C_SYNCHRONIZER_STAGE = "3" *) 
  (* C_UNDERFLOW_LOW = "0" *) 
  (* C_USE_COMMON_OVERFLOW = "0" *) 
  (* C_USE_COMMON_UNDERFLOW = "0" *) 
  (* C_USE_DEFAULT_SETTINGS = "0" *) 
  (* C_USE_DOUT_RST = "0" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_ECC_AXIS = "0" *) 
  (* C_USE_ECC_RACH = "0" *) 
  (* C_USE_ECC_RDCH = "0" *) 
  (* C_USE_ECC_WACH = "0" *) 
  (* C_USE_ECC_WDCH = "0" *) 
  (* C_USE_ECC_WRCH = "0" *) 
  (* C_USE_EMBEDDED_REG = "0" *) 
  (* C_USE_FIFO16_FLAGS = "0" *) 
  (* C_USE_FWFT_DATA_COUNT = "0" *) 
  (* C_USE_PIPELINE_REG = "0" *) 
  (* C_VALID_LOW = "0" *) 
  (* C_WACH_TYPE = "0" *) 
  (* C_WDCH_TYPE = "0" *) 
  (* C_WRCH_TYPE = "0" *) 
  (* C_WR_ACK_LOW = "0" *) 
  (* C_WR_DATA_COUNT_WIDTH = "4" *) 
  (* C_WR_DEPTH = "16" *) 
  (* C_WR_DEPTH_AXIS = "1024" *) 
  (* C_WR_DEPTH_RACH = "16" *) 
  (* C_WR_DEPTH_RDCH = "1024" *) 
  (* C_WR_DEPTH_WACH = "16" *) 
  (* C_WR_DEPTH_WDCH = "1024" *) 
  (* C_WR_DEPTH_WRCH = "16" *) 
  (* C_WR_FREQ = "1" *) 
  (* C_WR_PNTR_WIDTH = "4" *) 
  (* C_WR_PNTR_WIDTH_AXIS = "10" *) 
  (* C_WR_PNTR_WIDTH_RACH = "4" *) 
  (* C_WR_PNTR_WIDTH_RDCH = "10" *) 
  (* C_WR_PNTR_WIDTH_WACH = "4" *) 
  (* C_WR_PNTR_WIDTH_WDCH = "10" *) 
  (* C_WR_PNTR_WIDTH_WRCH = "4" *) 
  (* C_WR_RESPONSE_LATENCY = "1" *) 
  (* is_du_within_envelope = "true" *) 
  async_fifo_signal_fifo_generator_v13_2_11 U0
       (.almost_empty(NLW_U0_almost_empty_UNCONNECTED),
        .almost_full(NLW_U0_almost_full_UNCONNECTED),
        .axi_ar_data_count(NLW_U0_axi_ar_data_count_UNCONNECTED[4:0]),
        .axi_ar_dbiterr(NLW_U0_axi_ar_dbiterr_UNCONNECTED),
        .axi_ar_injectdbiterr(1'b0),
        .axi_ar_injectsbiterr(1'b0),
        .axi_ar_overflow(NLW_U0_axi_ar_overflow_UNCONNECTED),
        .axi_ar_prog_empty(NLW_U0_axi_ar_prog_empty_UNCONNECTED),
        .axi_ar_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_ar_prog_full(NLW_U0_axi_ar_prog_full_UNCONNECTED),
        .axi_ar_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_ar_rd_data_count(NLW_U0_axi_ar_rd_data_count_UNCONNECTED[4:0]),
        .axi_ar_sbiterr(NLW_U0_axi_ar_sbiterr_UNCONNECTED),
        .axi_ar_underflow(NLW_U0_axi_ar_underflow_UNCONNECTED),
        .axi_ar_wr_data_count(NLW_U0_axi_ar_wr_data_count_UNCONNECTED[4:0]),
        .axi_aw_data_count(NLW_U0_axi_aw_data_count_UNCONNECTED[4:0]),
        .axi_aw_dbiterr(NLW_U0_axi_aw_dbiterr_UNCONNECTED),
        .axi_aw_injectdbiterr(1'b0),
        .axi_aw_injectsbiterr(1'b0),
        .axi_aw_overflow(NLW_U0_axi_aw_overflow_UNCONNECTED),
        .axi_aw_prog_empty(NLW_U0_axi_aw_prog_empty_UNCONNECTED),
        .axi_aw_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_aw_prog_full(NLW_U0_axi_aw_prog_full_UNCONNECTED),
        .axi_aw_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_aw_rd_data_count(NLW_U0_axi_aw_rd_data_count_UNCONNECTED[4:0]),
        .axi_aw_sbiterr(NLW_U0_axi_aw_sbiterr_UNCONNECTED),
        .axi_aw_underflow(NLW_U0_axi_aw_underflow_UNCONNECTED),
        .axi_aw_wr_data_count(NLW_U0_axi_aw_wr_data_count_UNCONNECTED[4:0]),
        .axi_b_data_count(NLW_U0_axi_b_data_count_UNCONNECTED[4:0]),
        .axi_b_dbiterr(NLW_U0_axi_b_dbiterr_UNCONNECTED),
        .axi_b_injectdbiterr(1'b0),
        .axi_b_injectsbiterr(1'b0),
        .axi_b_overflow(NLW_U0_axi_b_overflow_UNCONNECTED),
        .axi_b_prog_empty(NLW_U0_axi_b_prog_empty_UNCONNECTED),
        .axi_b_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_b_prog_full(NLW_U0_axi_b_prog_full_UNCONNECTED),
        .axi_b_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_b_rd_data_count(NLW_U0_axi_b_rd_data_count_UNCONNECTED[4:0]),
        .axi_b_sbiterr(NLW_U0_axi_b_sbiterr_UNCONNECTED),
        .axi_b_underflow(NLW_U0_axi_b_underflow_UNCONNECTED),
        .axi_b_wr_data_count(NLW_U0_axi_b_wr_data_count_UNCONNECTED[4:0]),
        .axi_r_data_count(NLW_U0_axi_r_data_count_UNCONNECTED[10:0]),
        .axi_r_dbiterr(NLW_U0_axi_r_dbiterr_UNCONNECTED),
        .axi_r_injectdbiterr(1'b0),
        .axi_r_injectsbiterr(1'b0),
        .axi_r_overflow(NLW_U0_axi_r_overflow_UNCONNECTED),
        .axi_r_prog_empty(NLW_U0_axi_r_prog_empty_UNCONNECTED),
        .axi_r_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_r_prog_full(NLW_U0_axi_r_prog_full_UNCONNECTED),
        .axi_r_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_r_rd_data_count(NLW_U0_axi_r_rd_data_count_UNCONNECTED[10:0]),
        .axi_r_sbiterr(NLW_U0_axi_r_sbiterr_UNCONNECTED),
        .axi_r_underflow(NLW_U0_axi_r_underflow_UNCONNECTED),
        .axi_r_wr_data_count(NLW_U0_axi_r_wr_data_count_UNCONNECTED[10:0]),
        .axi_w_data_count(NLW_U0_axi_w_data_count_UNCONNECTED[10:0]),
        .axi_w_dbiterr(NLW_U0_axi_w_dbiterr_UNCONNECTED),
        .axi_w_injectdbiterr(1'b0),
        .axi_w_injectsbiterr(1'b0),
        .axi_w_overflow(NLW_U0_axi_w_overflow_UNCONNECTED),
        .axi_w_prog_empty(NLW_U0_axi_w_prog_empty_UNCONNECTED),
        .axi_w_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_w_prog_full(NLW_U0_axi_w_prog_full_UNCONNECTED),
        .axi_w_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_w_rd_data_count(NLW_U0_axi_w_rd_data_count_UNCONNECTED[10:0]),
        .axi_w_sbiterr(NLW_U0_axi_w_sbiterr_UNCONNECTED),
        .axi_w_underflow(NLW_U0_axi_w_underflow_UNCONNECTED),
        .axi_w_wr_data_count(NLW_U0_axi_w_wr_data_count_UNCONNECTED[10:0]),
        .axis_data_count(NLW_U0_axis_data_count_UNCONNECTED[10:0]),
        .axis_dbiterr(NLW_U0_axis_dbiterr_UNCONNECTED),
        .axis_injectdbiterr(1'b0),
        .axis_injectsbiterr(1'b0),
        .axis_overflow(NLW_U0_axis_overflow_UNCONNECTED),
        .axis_prog_empty(NLW_U0_axis_prog_empty_UNCONNECTED),
        .axis_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axis_prog_full(NLW_U0_axis_prog_full_UNCONNECTED),
        .axis_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axis_rd_data_count(NLW_U0_axis_rd_data_count_UNCONNECTED[10:0]),
        .axis_sbiterr(NLW_U0_axis_sbiterr_UNCONNECTED),
        .axis_underflow(NLW_U0_axis_underflow_UNCONNECTED),
        .axis_wr_data_count(NLW_U0_axis_wr_data_count_UNCONNECTED[10:0]),
        .backup(1'b0),
        .backup_marker(1'b0),
        .clk(1'b0),
        .data_count(NLW_U0_data_count_UNCONNECTED[3:0]),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .din(din),
        .dout(dout),
        .empty(empty),
        .full(full),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .int_clk(1'b0),
        .m_aclk(1'b0),
        .m_aclk_en(1'b0),
        .m_axi_araddr(NLW_U0_m_axi_araddr_UNCONNECTED[31:0]),
        .m_axi_arburst(NLW_U0_m_axi_arburst_UNCONNECTED[1:0]),
        .m_axi_arcache(NLW_U0_m_axi_arcache_UNCONNECTED[3:0]),
        .m_axi_arid(NLW_U0_m_axi_arid_UNCONNECTED[0]),
        .m_axi_arlen(NLW_U0_m_axi_arlen_UNCONNECTED[7:0]),
        .m_axi_arlock(NLW_U0_m_axi_arlock_UNCONNECTED[0]),
        .m_axi_arprot(NLW_U0_m_axi_arprot_UNCONNECTED[2:0]),
        .m_axi_arqos(NLW_U0_m_axi_arqos_UNCONNECTED[3:0]),
        .m_axi_arready(1'b0),
        .m_axi_arregion(NLW_U0_m_axi_arregion_UNCONNECTED[3:0]),
        .m_axi_arsize(NLW_U0_m_axi_arsize_UNCONNECTED[2:0]),
        .m_axi_aruser(NLW_U0_m_axi_aruser_UNCONNECTED[0]),
        .m_axi_arvalid(NLW_U0_m_axi_arvalid_UNCONNECTED),
        .m_axi_awaddr(NLW_U0_m_axi_awaddr_UNCONNECTED[31:0]),
        .m_axi_awburst(NLW_U0_m_axi_awburst_UNCONNECTED[1:0]),
        .m_axi_awcache(NLW_U0_m_axi_awcache_UNCONNECTED[3:0]),
        .m_axi_awid(NLW_U0_m_axi_awid_UNCONNECTED[0]),
        .m_axi_awlen(NLW_U0_m_axi_awlen_UNCONNECTED[7:0]),
        .m_axi_awlock(NLW_U0_m_axi_awlock_UNCONNECTED[0]),
        .m_axi_awprot(NLW_U0_m_axi_awprot_UNCONNECTED[2:0]),
        .m_axi_awqos(NLW_U0_m_axi_awqos_UNCONNECTED[3:0]),
        .m_axi_awready(1'b0),
        .m_axi_awregion(NLW_U0_m_axi_awregion_UNCONNECTED[3:0]),
        .m_axi_awsize(NLW_U0_m_axi_awsize_UNCONNECTED[2:0]),
        .m_axi_awuser(NLW_U0_m_axi_awuser_UNCONNECTED[0]),
        .m_axi_awvalid(NLW_U0_m_axi_awvalid_UNCONNECTED),
        .m_axi_bid(1'b0),
        .m_axi_bready(NLW_U0_m_axi_bready_UNCONNECTED),
        .m_axi_bresp({1'b0,1'b0}),
        .m_axi_buser(1'b0),
        .m_axi_bvalid(1'b0),
        .m_axi_rdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .m_axi_rid(1'b0),
        .m_axi_rlast(1'b0),
        .m_axi_rready(NLW_U0_m_axi_rready_UNCONNECTED),
        .m_axi_rresp({1'b0,1'b0}),
        .m_axi_ruser(1'b0),
        .m_axi_rvalid(1'b0),
        .m_axi_wdata(NLW_U0_m_axi_wdata_UNCONNECTED[63:0]),
        .m_axi_wid(NLW_U0_m_axi_wid_UNCONNECTED[0]),
        .m_axi_wlast(NLW_U0_m_axi_wlast_UNCONNECTED),
        .m_axi_wready(1'b0),
        .m_axi_wstrb(NLW_U0_m_axi_wstrb_UNCONNECTED[7:0]),
        .m_axi_wuser(NLW_U0_m_axi_wuser_UNCONNECTED[0]),
        .m_axi_wvalid(NLW_U0_m_axi_wvalid_UNCONNECTED),
        .m_axis_tdata(NLW_U0_m_axis_tdata_UNCONNECTED[7:0]),
        .m_axis_tdest(NLW_U0_m_axis_tdest_UNCONNECTED[0]),
        .m_axis_tid(NLW_U0_m_axis_tid_UNCONNECTED[0]),
        .m_axis_tkeep(NLW_U0_m_axis_tkeep_UNCONNECTED[0]),
        .m_axis_tlast(NLW_U0_m_axis_tlast_UNCONNECTED),
        .m_axis_tready(1'b0),
        .m_axis_tstrb(NLW_U0_m_axis_tstrb_UNCONNECTED[0]),
        .m_axis_tuser(NLW_U0_m_axis_tuser_UNCONNECTED[3:0]),
        .m_axis_tvalid(NLW_U0_m_axis_tvalid_UNCONNECTED),
        .overflow(NLW_U0_overflow_UNCONNECTED),
        .prog_empty(NLW_U0_prog_empty_UNCONNECTED),
        .prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .prog_empty_thresh_assert({1'b0,1'b0,1'b0,1'b0}),
        .prog_empty_thresh_negate({1'b0,1'b0,1'b0,1'b0}),
        .prog_full(NLW_U0_prog_full_UNCONNECTED),
        .prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .prog_full_thresh_assert({1'b0,1'b0,1'b0,1'b0}),
        .prog_full_thresh_negate({1'b0,1'b0,1'b0,1'b0}),
        .rd_clk(rd_clk),
        .rd_data_count(NLW_U0_rd_data_count_UNCONNECTED[3:0]),
        .rd_en(rd_en),
        .rd_rst(1'b0),
        .rd_rst_busy(NLW_U0_rd_rst_busy_UNCONNECTED),
        .rst(1'b0),
        .s_aclk(1'b0),
        .s_aclk_en(1'b0),
        .s_aresetn(1'b0),
        .s_axi_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arburst({1'b0,1'b0}),
        .s_axi_arcache({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arid(1'b0),
        .s_axi_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlock(1'b0),
        .s_axi_arprot({1'b0,1'b0,1'b0}),
        .s_axi_arqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(NLW_U0_s_axi_arready_UNCONNECTED),
        .s_axi_arregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arsize({1'b0,1'b0,1'b0}),
        .s_axi_aruser(1'b0),
        .s_axi_arvalid(1'b0),
        .s_axi_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awburst({1'b0,1'b0}),
        .s_axi_awcache({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awid(1'b0),
        .s_axi_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlock(1'b0),
        .s_axi_awprot({1'b0,1'b0,1'b0}),
        .s_axi_awqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(NLW_U0_s_axi_awready_UNCONNECTED),
        .s_axi_awregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awsize({1'b0,1'b0,1'b0}),
        .s_axi_awuser(1'b0),
        .s_axi_awvalid(1'b0),
        .s_axi_bid(NLW_U0_s_axi_bid_UNCONNECTED[0]),
        .s_axi_bready(1'b0),
        .s_axi_bresp(NLW_U0_s_axi_bresp_UNCONNECTED[1:0]),
        .s_axi_buser(NLW_U0_s_axi_buser_UNCONNECTED[0]),
        .s_axi_bvalid(NLW_U0_s_axi_bvalid_UNCONNECTED),
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[63:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_ruser(NLW_U0_s_axi_ruser_UNCONNECTED[0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wid(1'b0),
        .s_axi_wlast(1'b0),
        .s_axi_wready(NLW_U0_s_axi_wready_UNCONNECTED),
        .s_axi_wstrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wuser(1'b0),
        .s_axi_wvalid(1'b0),
        .s_axis_tdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tdest(1'b0),
        .s_axis_tid(1'b0),
        .s_axis_tkeep(1'b0),
        .s_axis_tlast(1'b0),
        .s_axis_tready(NLW_U0_s_axis_tready_UNCONNECTED),
        .s_axis_tstrb(1'b0),
        .s_axis_tuser({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .sleep(1'b0),
        .srst(1'b0),
        .underflow(NLW_U0_underflow_UNCONNECTED),
        .valid(NLW_U0_valid_UNCONNECTED),
        .wr_ack(NLW_U0_wr_ack_UNCONNECTED),
        .wr_clk(wr_clk),
        .wr_data_count(NLW_U0_wr_data_count_UNCONNECTED[3:0]),
        .wr_en(wr_en),
        .wr_rst(1'b0),
        .wr_rst_busy(NLW_U0_wr_rst_busy_UNCONNECTED));
endmodule

(* DEST_SYNC_FF = "3" *) (* INIT_SYNC_FF = "0" *) (* ORIG_REF_NAME = "xpm_cdc_gray" *) 
(* REG_OUTPUT = "1" *) (* SIM_ASSERT_CHK = "0" *) (* SIM_LOSSLESS_GRAY_CHK = "0" *) 
(* VERSION = "0" *) (* WIDTH = "4" *) (* XPM_MODULE = "TRUE" *) 
(* is_du_within_envelope = "true" *) (* keep_hierarchy = "true" *) (* xpm_cdc = "GRAY" *) 
module async_fifo_signal_xpm_cdc_gray
   (src_clk,
    src_in_bin,
    dest_clk,
    dest_out_bin);
  input src_clk;
  input [3:0]src_in_bin;
  input dest_clk;
  output [3:0]dest_out_bin;

  wire [3:0]async_path;
  wire [2:0]binval;
  wire dest_clk;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[0] ;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[1] ;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[2] ;
  wire [3:0]dest_out_bin;
  wire [2:0]gray_enc;
  wire src_clk;
  wire [3:0]src_in_bin;

  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[0]),
        .Q(\dest_graysync_ff[0] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[1]),
        .Q(\dest_graysync_ff[0] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[2]),
        .Q(\dest_graysync_ff[0] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[3]),
        .Q(\dest_graysync_ff[0] [3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [0]),
        .Q(\dest_graysync_ff[1] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [1]),
        .Q(\dest_graysync_ff[1] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [2]),
        .Q(\dest_graysync_ff[1] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [3]),
        .Q(\dest_graysync_ff[1] [3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [0]),
        .Q(\dest_graysync_ff[2] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [1]),
        .Q(\dest_graysync_ff[2] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [2]),
        .Q(\dest_graysync_ff[2] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [3]),
        .Q(\dest_graysync_ff[2] [3]),
        .R(1'b0));
  LUT4 #(
    .INIT(16'h6996)) 
    \dest_out_bin_ff[0]_i_1 
       (.I0(\dest_graysync_ff[2] [0]),
        .I1(\dest_graysync_ff[2] [2]),
        .I2(\dest_graysync_ff[2] [3]),
        .I3(\dest_graysync_ff[2] [1]),
        .O(binval[0]));
  LUT3 #(
    .INIT(8'h96)) 
    \dest_out_bin_ff[1]_i_1 
       (.I0(\dest_graysync_ff[2] [1]),
        .I1(\dest_graysync_ff[2] [3]),
        .I2(\dest_graysync_ff[2] [2]),
        .O(binval[1]));
  LUT2 #(
    .INIT(4'h6)) 
    \dest_out_bin_ff[2]_i_1 
       (.I0(\dest_graysync_ff[2] [2]),
        .I1(\dest_graysync_ff[2] [3]),
        .O(binval[2]));
  FDRE \dest_out_bin_ff_reg[0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[0]),
        .Q(dest_out_bin[0]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[1]),
        .Q(dest_out_bin[1]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[2]),
        .Q(dest_out_bin[2]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[2] [3]),
        .Q(dest_out_bin[3]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[0]_i_1 
       (.I0(src_in_bin[1]),
        .I1(src_in_bin[0]),
        .O(gray_enc[0]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[1]_i_1 
       (.I0(src_in_bin[2]),
        .I1(src_in_bin[1]),
        .O(gray_enc[1]));
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[2]_i_1 
       (.I0(src_in_bin[3]),
        .I1(src_in_bin[2]),
        .O(gray_enc[2]));
  FDRE \src_gray_ff_reg[0] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[0]),
        .Q(async_path[0]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[1] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[1]),
        .Q(async_path[1]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[2] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[2]),
        .Q(async_path[2]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[3] 
       (.C(src_clk),
        .CE(1'b1),
        .D(src_in_bin[3]),
        .Q(async_path[3]),
        .R(1'b0));
endmodule

(* DEST_SYNC_FF = "3" *) (* INIT_SYNC_FF = "0" *) (* ORIG_REF_NAME = "xpm_cdc_gray" *) 
(* REG_OUTPUT = "1" *) (* SIM_ASSERT_CHK = "0" *) (* SIM_LOSSLESS_GRAY_CHK = "0" *) 
(* VERSION = "0" *) (* WIDTH = "4" *) (* XPM_MODULE = "TRUE" *) 
(* is_du_within_envelope = "true" *) (* keep_hierarchy = "true" *) (* xpm_cdc = "GRAY" *) 
module async_fifo_signal_xpm_cdc_gray__2
   (src_clk,
    src_in_bin,
    dest_clk,
    dest_out_bin);
  input src_clk;
  input [3:0]src_in_bin;
  input dest_clk;
  output [3:0]dest_out_bin;

  wire [3:0]async_path;
  wire [2:0]binval;
  wire dest_clk;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[0] ;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[1] ;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[2] ;
  wire [3:0]dest_out_bin;
  wire [2:0]gray_enc;
  wire src_clk;
  wire [3:0]src_in_bin;

  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[0]),
        .Q(\dest_graysync_ff[0] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[1]),
        .Q(\dest_graysync_ff[0] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[2]),
        .Q(\dest_graysync_ff[0] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[3]),
        .Q(\dest_graysync_ff[0] [3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [0]),
        .Q(\dest_graysync_ff[1] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [1]),
        .Q(\dest_graysync_ff[1] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [2]),
        .Q(\dest_graysync_ff[1] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [3]),
        .Q(\dest_graysync_ff[1] [3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [0]),
        .Q(\dest_graysync_ff[2] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [1]),
        .Q(\dest_graysync_ff[2] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [2]),
        .Q(\dest_graysync_ff[2] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [3]),
        .Q(\dest_graysync_ff[2] [3]),
        .R(1'b0));
  LUT4 #(
    .INIT(16'h6996)) 
    \dest_out_bin_ff[0]_i_1 
       (.I0(\dest_graysync_ff[2] [0]),
        .I1(\dest_graysync_ff[2] [2]),
        .I2(\dest_graysync_ff[2] [3]),
        .I3(\dest_graysync_ff[2] [1]),
        .O(binval[0]));
  LUT3 #(
    .INIT(8'h96)) 
    \dest_out_bin_ff[1]_i_1 
       (.I0(\dest_graysync_ff[2] [1]),
        .I1(\dest_graysync_ff[2] [3]),
        .I2(\dest_graysync_ff[2] [2]),
        .O(binval[1]));
  LUT2 #(
    .INIT(4'h6)) 
    \dest_out_bin_ff[2]_i_1 
       (.I0(\dest_graysync_ff[2] [2]),
        .I1(\dest_graysync_ff[2] [3]),
        .O(binval[2]));
  FDRE \dest_out_bin_ff_reg[0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[0]),
        .Q(dest_out_bin[0]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[1]),
        .Q(dest_out_bin[1]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[2]),
        .Q(dest_out_bin[2]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[2] [3]),
        .Q(dest_out_bin[3]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[0]_i_1 
       (.I0(src_in_bin[1]),
        .I1(src_in_bin[0]),
        .O(gray_enc[0]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[1]_i_1 
       (.I0(src_in_bin[2]),
        .I1(src_in_bin[1]),
        .O(gray_enc[1]));
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[2]_i_1 
       (.I0(src_in_bin[3]),
        .I1(src_in_bin[2]),
        .O(gray_enc[2]));
  FDRE \src_gray_ff_reg[0] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[0]),
        .Q(async_path[0]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[1] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[1]),
        .Q(async_path[1]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[2] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[2]),
        .Q(async_path[2]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[3] 
       (.C(src_clk),
        .CE(1'b1),
        .D(src_in_bin[3]),
        .Q(async_path[3]),
        .R(1'b0));
endmodule
`pragma protect begin_protected
`pragma protect version = 1
`pragma protect encrypt_agent = "XILINX"
`pragma protect encrypt_agent_info = "Xilinx Encryption Tool 2024.2"
`pragma protect key_keyowner="Synopsys", key_keyname="SNPS-VCS-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
md0AksSCeI3fOZtF7nrw91OgSzGoACBon4GH9ENTzaI4jlg22H1uTtXayX2Kz+g4ZH2j52rtMH8H
Xc49HVcThMzO1cRXu+SkL59MRQ87klGca4XtjrTtunJoQ+jyOKRwRBeIMHUdntbk2T1kbXHf9KkB
bNYGEMqSrbiDt7IJUx8=

`pragma protect key_keyowner="Aldec", key_keyname="ALDEC15_001", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
r6CzxR0T3O2wvZRQe25aX3/CWOx/3d/3vJvvS/XsrKr7v852GNQNqCBn+PKsunj0Ncep8DqHtVie
BE6tKIqZW+3txAUjrhSri5liuFWSnzAk+Drsb4RnvIy7BeOdAK6NhVhn8ZyplkJSHVwaGjN8gtPE
LeWEHPHf5qLnzqGKV7B6oIC7POGV6Vamos1p2z1xv2cEw4udvmtZ5EjzeyCMf+omtxEPxhPi6Z2h
ENlGOmuPMkWGMjP6HQCZ1Mi0uiST/zDo29UDIMmOGcsDMe97imU/z2ekKTPXXwjcV+9q+4zHRgJV
6JWWgjU9cztV5OMaEfpBgRBWae/ijWpPZaGuFA==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VELOCE-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
glFrHilvyO7nq7/OYhnyb9uU9d8UNGJruNnkmJWuTpgvyCDmtx7iVKPBPe1Bj9jUDT/HM9AGxvu0
g7b4TuMdVkegkVPeHhw31IW0HoTL8wPnrLEpzDVK+B7xl953hPKPe0vn+0EQh2UKeL5K8VLxmsSv
gbpEeToeR90yzlSUzDE=

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VERIF-SIM-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
D4uBhES8Mkd0GCwY2aQOmEzTqz6hO5B9Wa2oyfVBEODkWyt+AHkIXn4tuBN05FcP2FVmgtVbvZX5
K6iog51IoPw5tv+pM5x8+bQBX/aZpf0c4to3qiX6RZuITpuSUWq/7sqQDqtMqDWOFMMnUBpTX+qI
t61NvyIZcfqRWo4yvIUV2Zh1etqYKDlhqRnMoBZKMeHFpVsp19nU4sf5Km7sSlPQ08vYD8qtJqgJ
ZDYC2KWFTHsnT+5anHvc80FgHt4zBHpPrGprgpltQmVmMZxUD6NRC9EvvXf+pBhgfwPHHePWIKUn
elLld/HEVeFw76SlVV8i4LsS4KWWOM+KmMprEg==

`pragma protect key_keyowner="Real Intent", key_keyname="RI-RSA-KEY-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
EW9gHDqS12MVhy+y/xQVscLd4qOim+cNTepYzlas7WzqDJogZthddOuGjpm3a3fS/cMbF/h0O1Hb
Wjow664GIga0y96lkbkcJ3W8x/IGAsvgyrYT6ScsFhyq7tSd1HjvRG81BhhGM1mmpxfzh0Uqbfso
q+uVKPUmPnbQ/Gdu9YRoxmYVJdmUTpXJ5waYOdib8WNMPLdDfIo/FGrYrx2zYQBtpU5DwwVUTMrB
ZasEyxOj++icI5k5lR3Tx+3gdCFTy4XYQfcj2COm4gnVZ8FN/X1/+0ywsVGAc/OKL+mjMYH3NNH3
zfDO/TpYft+HaVl+CfF/U6IgJJeJs4qI4gB4FA==

`pragma protect key_keyowner="Xilinx", key_keyname="xilinxt_2023_11", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
Myfv5Skg7QCxlNBoFiSTLAeIRYS0J0ArRihYk7dGAHZWAFlxJLgqo51W9P9zTVBurMJjZLtonoDJ
19RfxQj5GqhqN1A20s8xOFfLq6+uDG/V39xQFY32O626Kh4MMlH07hNJL5u1NjJWg1yze0XdFEe9
oLwKQz5lSKGMIh+VPXDuCGhShS+KhHwGEdS0lmA/IHPFNlRG1LsK0zQmUiNkG4kQ5OEVkQgvknNC
B6++ZDIYlT9WbZPs5giRY0zAhUepLPaO+N9F3fIBKVGw4ejbZOt0kXKixF86DDfLmF2+dov+PrTX
1MXJaea3YoQdR2c2MSHAk/TTkzg9ayjvxKaXpg==

`pragma protect key_keyowner="Metrics Technologies Inc.", key_keyname="DSim", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
ks9l+EPHXfDNnWd0exs1j0Q9iSNYaIExwQnpsi8TFJimjPtOkX050wFklsLBM83WyfuD+F2KLNnZ
Jg/aiIiGe9o424jOiEFdnAJuzrD0QL9WmhQ3W9iRJ7uPhha6NfR2WGTCCM4TpN8rTKLQDKxenVfv
6x83rnL5NQxvpp9cQh3zMma73qoEJjhTR9MD9cwA4VeKq2u/R0iTWBplX81vYFd9TW2qW5/Qyzzj
A0+pXzczcJKdggV8h8bYcO+PRC3t2XrufhnjvhjMLG2tPHSMW/soDH/v8KorXyWe5N/q12fo5auN
SXr3olNuB5kpiVS3mJAPV0z4UsFfu2A4hLH7MQ==

`pragma protect key_keyowner="Atrenta", key_keyname="ATR-SG-RSA-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=384)
`pragma protect key_block
e3AJKDEM9byJqwpkFZqMIMKMQPOR1VrLFkshor7HR0C+ol7Uv3XTGyvQrINdBEArX0eazF0cHWjC
9B4BhDnysAhT6SENcNHIYHUGQE7uiF7zgL7WhCxClwEnIAVj+PU9FmqlvbreEikHQfbeIDPyCLii
NAS97RDxWki/MfR33zvZX4eEolA/oTyRzr1MagBs7LN1UXyGPvnze8JzHxA3zHVedIIrBrZxkfoj
Loqe6tLYRlC45h1Yr3Wa2gh3LJGtOSji+m7E9Xua/pPh8A/CAD+TNBa5d/X7C3a4AWl2bYTi7HBY
Y8vaIjHiSosru5F2UOEQG9xekCbNRK1Apew1UIvntzCmDMMhlAgB78AUOE2YEWKd9GOl+aTZjMS3
GxAYzrtv/bDRkPOYbcG0SNT9xf+izRM3lX1E2vN3i3uU2Qrh73fjU1lk3PIe/A/H56UrNPDnGT9W
TvlJR47bLDtGyX2+dLvfTaZGRP8aepePOXXLIlvqwCJSMVhCB/hIbz7E

`pragma protect key_keyowner="Cadence Design Systems.", key_keyname="CDS_RSA_KEY_VER_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
TfuXOFQtE7YhtTL4354NvKETmBCLSVnb+pbrT8gtzjU7pERE1Hu2ZVzHgVQXwt5RvwG1R/z2je+U
PzszCBhPNqUaXEhuJ0A/q0S/vvOOa6h6tW9MhiB3gnuqEFVWz5pbHZNfgrwh2gT8XyqLI8f1CoJM
xpcB2TbREV/kAAFMxIfH1Dg0KSO2dCeVV1na6N0AiMOQPvXZOB7QpXwNDbYfarWLtF0/l0hi4Fxu
Kgho2ggrUhajP0aKlrCQ9mLsqOyqJELeJldeD+vuUUqhYq4K4RrwtQF+B67lYc4AjznwQ92tUvYJ
ZspFoHJEScNvdFoHFTA2TQ2KToepsqXRiOCL1A==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
tmfbBpNtCYJ7zsgNxUzw7Dvn+hNn2PPUBeRfXSci/q2/OcQeF/eAAML8YIN1V+AEoAqZTE2/xRQz
+6zwVOLyAOLynMIBQ7EG7xReDJ9kEEiBjnMGO6NWdAsa/VcreVHrLD1PFtA1+WoVe6yOvNGK+Nbh
HjPkXyycyP6RQ4Rx/PtTxw31LOFVezddSgRlaKHTprKTP4LbjPG//onRBg3fAl8zwU1wYYNLzYCX
jwY7xfMkQyhUSpV2Tx3seqy2IYVl8jjxynFxfyxulvrJiqmc6aaKKBdkoOVbJ5eO2sCXFJB1mKEU
WR2Ee2ozisABzk9IcGILewCW7ghdLP82CRZv4A==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-PREC-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
GfDCxx9db4ripD5mvQy16BVlwPYfeC7ZobZXaX1my6WUDiKwd69J5SreUXKYD9lvZfI7djLgHkYm
5G247T4NX7zoBwc88bUD+tNvGNmzWFfSVVZqu8hjgd31lZXjy9uYdXA/gsE+T+JqEfRYdV8YoGgm
sREyiJjWRPDbx6kc8um8vlAK/Rjwz0EGVkGUoi/+UvxcnjG1PqCl7GSMOQ3gFMEOaxIflShnF2/c
//ioADxl3WjUGyTstMK54XlP8G1Hk95sSe/7Y+SbaIyoG8t6gGDimDJNuGs4JjDUi1V7Gxfzxk9+
O2J++9clyLkMZ3rRyxSvR+Xyrmn3YxjVC68GXw==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 64832)
`pragma protect data_block
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
7ogBcW1R9A+Tq9wNni+pjB2/n4E7a4M=
`pragma protect end_protected
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
