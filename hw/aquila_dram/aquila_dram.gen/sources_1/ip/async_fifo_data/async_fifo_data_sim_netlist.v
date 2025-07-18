// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.2 (lin64) Build 5239630 Fri Nov 08 22:34:34 MST 2024
// Date        : Wed Jul 16 22:41:10 2025
// Host        : henry7090-ROG-Zephyrus-G16 running 64-bit Ubuntu 24.04.1 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/henry7090/Downloads/qmcore2/aquila_dram/aquila_dram/aquila_dram.gen/sources_1/ip/async_fifo_data/async_fifo_data_sim_netlist.v
// Design      : async_fifo_data
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7k325tffg676-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "async_fifo_data,fifo_generator_v13_2_11,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "fifo_generator_v13_2_11,Vivado 2024.2" *) 
(* NotValidForBitStream *)
module async_fifo_data
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
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_DATA" *) (* x_interface_mode = "slave FIFO_WRITE" *) input [127:0]din;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_EN" *) input wr_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_EN" *) (* x_interface_mode = "slave FIFO_READ" *) input rd_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_DATA" *) output [127:0]dout;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE FULL" *) output full;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ EMPTY" *) output empty;

  wire [127:0]din;
  wire [127:0]dout;
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
  (* C_DIN_WIDTH = "128" *) 
  (* C_DIN_WIDTH_AXIS = "1" *) 
  (* C_DIN_WIDTH_RACH = "32" *) 
  (* C_DIN_WIDTH_RDCH = "64" *) 
  (* C_DIN_WIDTH_WACH = "1" *) 
  (* C_DIN_WIDTH_WDCH = "64" *) 
  (* C_DIN_WIDTH_WRCH = "2" *) 
  (* C_DOUT_RST_VAL = "0" *) 
  (* C_DOUT_WIDTH = "128" *) 
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
  (* C_PRIM_FIFO_TYPE = "512x72" *) 
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
  async_fifo_data_fifo_generator_v13_2_11 U0
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
module async_fifo_data_xpm_cdc_gray
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
module async_fifo_data_xpm_cdc_gray__2
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 133488)
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
