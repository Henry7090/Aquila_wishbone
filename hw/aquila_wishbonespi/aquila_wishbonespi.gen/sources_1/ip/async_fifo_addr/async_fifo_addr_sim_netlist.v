// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.2 (lin64) Build 5239630 Fri Nov 08 22:34:34 MST 2024
// Date        : Thu Jul 24 17:38:22 2025
// Host        : henry7090-ROG-Zephyrus-G16 running 64-bit Ubuntu 24.04.1 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/henry7090/Desktop/Aquila_wishbone/hw/aquila_wishbonespi/aquila_wishbonespi.gen/sources_1/ip/async_fifo_addr/async_fifo_addr_sim_netlist.v
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
