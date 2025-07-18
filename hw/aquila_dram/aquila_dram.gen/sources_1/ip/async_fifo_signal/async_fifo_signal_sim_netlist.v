// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.2 (lin64) Build 5239630 Fri Nov 08 22:34:34 MST 2024
// Date        : Wed Jul 16 22:41:10 2025
// Host        : henry7090-ROG-Zephyrus-G16 running 64-bit Ubuntu 24.04.1 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/henry7090/Downloads/qmcore2/aquila_dram/aquila_dram/aquila_dram.gen/sources_1/ip/async_fifo_signal/async_fifo_signal_sim_netlist.v
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
EGqdBlAqewJszJK5gpfXAKYYE9Y4TW8=
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
