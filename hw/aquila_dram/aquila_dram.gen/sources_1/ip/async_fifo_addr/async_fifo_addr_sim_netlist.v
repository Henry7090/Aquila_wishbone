// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.2 (lin64) Build 5239630 Fri Nov 08 22:34:34 MST 2024
// Date        : Wed Jul 16 22:41:10 2025
// Host        : henry7090-ROG-Zephyrus-G16 running 64-bit Ubuntu 24.04.1 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/henry7090/Downloads/qmcore2/aquila_dram/aquila_dram/aquila_dram.gen/sources_1/ip/async_fifo_addr/async_fifo_addr_sim_netlist.v
// Design      : async_fifo_addr
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7k325tffg676-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "async_fifo_addr,fifo_generator_v13_2_11,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "fifo_generator_v13_2_11,Vivado 2024.2" *) 
(* NotValidForBitStream *)
module async_fifo_addr
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
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_DATA" *) (* x_interface_mode = "slave FIFO_WRITE" *) input [31:0]din;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_EN" *) input wr_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_EN" *) (* x_interface_mode = "slave FIFO_READ" *) input rd_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_DATA" *) output [31:0]dout;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE FULL" *) output full;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ EMPTY" *) output empty;

  wire [31:0]din;
  wire [31:0]dout;
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
  (* C_DIN_WIDTH = "32" *) 
  (* C_DIN_WIDTH_AXIS = "1" *) 
  (* C_DIN_WIDTH_RACH = "32" *) 
  (* C_DIN_WIDTH_RDCH = "64" *) 
  (* C_DIN_WIDTH_WACH = "1" *) 
  (* C_DIN_WIDTH_WDCH = "64" *) 
  (* C_DIN_WIDTH_WRCH = "2" *) 
  (* C_DOUT_RST_VAL = "0" *) 
  (* C_DOUT_WIDTH = "32" *) 
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
  async_fifo_addr_fifo_generator_v13_2_11 U0
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
module async_fifo_addr_xpm_cdc_gray
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
module async_fifo_addr_xpm_cdc_gray__2
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 82288)
`pragma protect data_block
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
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
