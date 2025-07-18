// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_core_top.h"

VL_INLINE_OPT void Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__Vfuncout;
    IData/*31:0*/ __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num;
    IData/*31:0*/ __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__Vfuncout;
    IData/*31:0*/ __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v0;
    CData/*0:0*/ __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v0;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v1;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v2;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v3;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v4;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v5;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v6;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v7;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v8;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v9;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v10;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v11;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v12;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v13;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v14;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v15;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v16;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v17;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v18;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v19;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v20;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v21;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v22;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v23;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v24;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v25;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v26;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v27;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v28;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v29;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v30;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v31;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v32;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v33;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v34;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v35;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v36;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v37;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v38;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v39;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v40;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v41;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v42;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v43;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v44;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v45;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v46;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v47;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v48;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v49;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v50;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v51;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v52;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v53;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v54;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v55;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v56;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v57;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v58;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v59;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v60;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v61;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v62;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v63;
    CData/*5:0*/ __Vdlyvdim0__Branch_Prediction_Unit__DOT__branch_likelihood__v64;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v64;
    CData/*0:0*/ __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v64;
    CData/*5:0*/ __Vdlyvdim0__Branch_Prediction_Unit__DOT__branch_likelihood__v65;
    CData/*1:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v65;
    CData/*0:0*/ __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v65;
    CData/*0:0*/ __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v66;
    CData/*5:0*/ __Vdlyvdim0__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0;
    QData/*63:0*/ __Vdlyvval__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0;
    CData/*4:0*/ __Vdlyvdim0__Register_File__DOT__x__v0;
    IData/*31:0*/ __Vdlyvval__Register_File__DOT__x__v0;
    CData/*0:0*/ __Vdlyvset__Register_File__DOT__x__v0;
    CData/*0:0*/ __Vdlyvset__Register_File__DOT__x__v1;
    CData/*0:0*/ __Vdly__fet_branch_hit;
    CData/*0:0*/ __Vdly__fet_branch_decision;
    IData/*31:0*/ __Vdly__dec_pc;
    CData/*0:0*/ __Vdly__dec2exe_re;
    CData/*0:0*/ __Vdly__dec2exe_we;
    CData/*0:0*/ __Vdly__dec2exe_rd_we;
    CData/*0:0*/ __Vdly__dec_is_jal;
    CData/*0:0*/ __Vdly__dec_is_branch;
    IData/*31:0*/ __Vdly__dec2exe_imm;
    CData/*0:0*/ __Vdly__dec_branch_hit;
    CData/*0:0*/ __Vdly__dec_branch_decision;
    CData/*1:0*/ __Vdly__dec2exe_dsize_sel;
    CData/*0:0*/ __Vdly__dec2exe_is_amo;
    CData/*0:0*/ __Vdly__dec2exe_sys_jump;
    CData/*1:0*/ __Vdly__dec2exe_sys_jump_csr_addr;
    CData/*0:0*/ __Vdly__dec2exe_xcpt_valid;
    CData/*0:0*/ __Vdly__exe2mem_rd_we;
    CData/*4:0*/ __Vdly__exe2mem_rd_addr;
    CData/*2:0*/ __Vdly__exe2mem_rd_input_sel;
    CData/*0:0*/ __Vdly__exe2mem_signex_sel;
    CData/*0:0*/ __Vdly__exe2mem_xcpt_valid;
    IData/*31:0*/ __Vdly__exe2mem_p_data;
    VlWide<3>/*64:0*/ __Vdly__Execute__DOT__MulDiv__DOT__result;
    CData/*5:0*/ __Vdly__Execute__DOT__MulDiv__DOT__cnt;
    IData/*31:0*/ __Vdly__Execute__DOT__muldiv_result;
    CData/*4:0*/ __Vdly__mem2wbk_rd_addr;
    VlWide<3>/*95:0*/ __Vtemp_h6e66fce9__0;
    VlWide<3>/*95:0*/ __Vtemp_h19e8b7de__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f910a5b__0;
    VlWide<3>/*95:0*/ __Vtemp_h972d98ba__0;
    VlWide<3>/*95:0*/ __Vtemp_h4beb8c85__0;
    VlWide<3>/*95:0*/ __Vtemp_ha71931b8__0;
    VlWide<3>/*95:0*/ __Vtemp_hd8b634d1__0;
    VlWide<3>/*95:0*/ __Vtemp_ha71931b8__1;
    VlWide<3>/*95:0*/ __Vtemp_ha71931b8__2;
    VlWide<3>/*95:0*/ __Vtemp_h21bea038__0;
    VlWide<3>/*95:0*/ __Vtemp_ha71931b8__3;
    VlWide<3>/*95:0*/ __Vtemp_ha71931b8__4;
    CData/*31:0*/ __Vtemp_h67944a15__0;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdly__fet_branch_decision = vlSelf->__PVT__fet_branch_decision;
    __Vdly__fet_branch_hit = vlSelf->__PVT__fet_branch_hit;
    __Vdlyvset__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0 = 0U;
    vlSelf->__Vdly__Writeback__DOT__xcpt_tval_r = vlSelf->__PVT__Writeback__DOT__xcpt_tval_r;
    vlSelf->__Vdly__Writeback__DOT__sys_jump_csr_addr_r 
        = vlSelf->__PVT__Writeback__DOT__sys_jump_csr_addr_r;
    __Vdly__dec2exe_xcpt_valid = vlSelf->__PVT__dec2exe_xcpt_valid;
    vlSelf->__Vdly__mem2wbk_csr_we = vlSelf->__PVT__mem2wbk_csr_we;
    vlSelf->__Vdly__mem2wbk_csr_addr = vlSelf->__PVT__mem2wbk_csr_addr;
    vlSelf->__Vdly__mem2wbk_csr_data = vlSelf->__PVT__mem2wbk_csr_data;
    vlSelf->__Vdly__Writeback__DOT__sys_jump_r = vlSelf->__PVT__Writeback__DOT__sys_jump_r;
    __Vdly__dec2exe_sys_jump_csr_addr = vlSelf->__PVT__dec2exe_sys_jump_csr_addr;
    __Vdly__dec2exe_sys_jump = vlSelf->__PVT__dec2exe_sys_jump;
    __Vdly__dec2exe_is_amo = vlSelf->__PVT__dec2exe_is_amo;
    vlSelf->__Vdly__Writeback__DOT__xcpt_cause_r = vlSelf->__PVT__Writeback__DOT__xcpt_cause_r;
    __Vdly__dec2exe_we = vlSelf->__PVT__dec2exe_we;
    __Vdly__Execute__DOT__muldiv_result = vlSelf->__PVT__Execute__DOT__muldiv_result;
    __Vdly__dec_branch_decision = vlSelf->__PVT__dec_branch_decision;
    __Vdly__dec_pc = vlSelf->__PVT__dec_pc;
    __Vdly__exe2mem_signex_sel = vlSelf->__PVT__exe2mem_signex_sel;
    vlSelf->__Vdly__exe2mem_amo_type = vlSelf->__PVT__exe2mem_amo_type;
    __Vdly__exe2mem_rd_input_sel = vlSelf->__PVT__exe2mem_rd_input_sel;
    __Vdly__dec2exe_re = vlSelf->__PVT__dec2exe_re;
    __Vdly__exe2mem_xcpt_valid = vlSelf->__PVT__exe2mem_xcpt_valid;
    __Vdly__dec_branch_hit = vlSelf->__PVT__dec_branch_hit;
    vlSelf->__Vdly__Writeback__DOT__xcpt_valid_r = vlSelf->__PVT__Writeback__DOT__xcpt_valid_r;
    __Vdly__dec2exe_rd_we = vlSelf->__PVT__dec2exe_rd_we;
    __Vdly__Execute__DOT__MulDiv__DOT__cnt = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__cnt;
    __Vdly__dec_is_jal = vlSelf->__PVT__dec_is_jal;
    __Vdly__dec_is_branch = vlSelf->__PVT__dec_is_branch;
    vlSelf->__Vdly__exe_is_fencei = vlSelf->__PVT__exe_is_fencei;
    __Vdly__Execute__DOT__MulDiv__DOT__result[0U] = 
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U];
    __Vdly__Execute__DOT__MulDiv__DOT__result[1U] = 
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U];
    __Vdly__Execute__DOT__MulDiv__DOT__result[2U] = 
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[2U];
    __Vdly__exe2mem_rd_we = vlSelf->__PVT__exe2mem_rd_we;
    __Vdly__exe2mem_rd_addr = vlSelf->__PVT__exe2mem_rd_addr;
    __Vdly__exe2mem_p_data = vlSelf->__PVT__exe2mem_p_data;
    __Vdly__mem2wbk_rd_addr = vlSelf->__PVT__mem2wbk_rd_addr;
    __Vdlyvset__Register_File__DOT__x__v0 = 0U;
    __Vdlyvset__Register_File__DOT__x__v1 = 0U;
    __Vdly__dec2exe_dsize_sel = vlSelf->__PVT__dec2exe_dsize_sel;
    vlSelf->__Vdly__exe2mem_is_amo = vlSelf->__PVT__exe2mem_is_amo;
    __Vdly__dec2exe_imm = vlSelf->__PVT__dec2exe_imm;
    __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v0 = 0U;
    __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v64 = 0U;
    __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v65 = 0U;
    __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v66 = 0U;
    vlSelf->__Vdly__Program_Counter__DOT__pc_r = vlSelf->__PVT__Program_Counter__DOT__pc_r;
    vlSelf->__Vdly__exe_we = vlSelf->__PVT__exe_we;
    vlSelf->__Vdly__exe2mem_addr = vlSelf->__PVT__exe2mem_addr;
    __Vdly__fet_branch_decision = ((IData)(vlSymsp->TOP.rst_n) 
                                   & ((IData)(vlSelf->__Vcellinp__Fetch__stall_i)
                                       ? (IData)(vlSelf->__PVT__fet_branch_decision)
                                       : ((~ (IData)(vlSelf->__Vcellinp__Fetch__flush_i)) 
                                          & (IData)(vlSelf->__PVT__bpu_branch_decision))));
    __Vdly__fet_branch_hit = ((IData)(vlSymsp->TOP.rst_n) 
                              & ((IData)(vlSelf->__Vcellinp__Fetch__stall_i)
                                  ? (IData)(vlSelf->__PVT__fet_branch_hit)
                                  : ((~ (IData)(vlSelf->__Vcellinp__Fetch__flush_i)) 
                                     & (IData)(vlSelf->__PVT__bpu_branch_hit))));
    if (vlSelf->__PVT__Branch_Prediction_Unit__DOT__we) {
        __Vdlyvval__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0 
            = (((QData)((IData)(vlSelf->__PVT__Execute__DOT__alu_result)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__dec_pc)));
        __Vdlyvset__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0 = 1U;
        __Vdlyvdim0__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0 
            = (0x3fU & (vlSelf->__PVT__dec_pc >> 2U));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | ((IData)(vlSelf->__Vcellinp__Memory__flush_i) 
                                                  & (~ (IData)(vlSelf->stall_pipeline)))))) {
        vlSelf->__Vdly__Writeback__DOT__xcpt_tval_r = 0U;
        vlSelf->__Vdly__Writeback__DOT__sys_jump_csr_addr_r = 0U;
        vlSelf->__PVT__mem2wbk_pc = ((IData)(vlSelf->__Vcellinp__Memory__flush_i)
                                      ? vlSelf->__PVT__exe2mem_pc
                                      : 0U);
        vlSelf->__Vdly__mem2wbk_csr_addr = 0U;
        vlSelf->__Vdly__mem2wbk_csr_data = 0U;
        vlSelf->__Vdly__Writeback__DOT__xcpt_cause_r = 0U;
        __Vdly__mem2wbk_rd_addr = 0U;
        vlSelf->__PVT__mem2wbk_rd_input_sel = 4U;
        vlSelf->__PVT__mem2wbk_p_data = 0U;
        vlSelf->__PVT__mem2wbk_aligned_data = 0U;
    } else if (vlSelf->stall_pipeline) {
        vlSelf->__Vdly__Writeback__DOT__xcpt_tval_r 
            = vlSelf->__PVT__Writeback__DOT__xcpt_tval_r;
        vlSelf->__Vdly__Writeback__DOT__sys_jump_csr_addr_r 
            = vlSelf->__PVT__Writeback__DOT__sys_jump_csr_addr_r;
        vlSelf->__PVT__mem2wbk_pc = vlSelf->__PVT__mem2wbk_pc;
        vlSelf->__Vdly__mem2wbk_csr_addr = vlSelf->__PVT__mem2wbk_csr_addr;
        vlSelf->__Vdly__mem2wbk_csr_data = vlSelf->__PVT__mem2wbk_csr_data;
        vlSelf->__Vdly__Writeback__DOT__xcpt_cause_r 
            = vlSelf->__PVT__Writeback__DOT__xcpt_cause_r;
        __Vdly__mem2wbk_rd_addr = vlSelf->__PVT__mem2wbk_rd_addr;
        vlSelf->__PVT__mem2wbk_rd_input_sel = vlSelf->__PVT__mem2wbk_rd_input_sel;
        vlSelf->__PVT__mem2wbk_p_data = vlSelf->__PVT__mem2wbk_p_data;
        vlSelf->__PVT__mem2wbk_aligned_data = vlSelf->__PVT__mem2wbk_aligned_data;
    } else {
        vlSelf->__Vdly__Writeback__DOT__xcpt_tval_r 
            = vlSelf->__PVT__mem2wbk_xcpt_tval;
        vlSelf->__Vdly__Writeback__DOT__sys_jump_csr_addr_r 
            = ((IData)(vlSelf->__PVT__mem2wbk_xcpt_valid)
                ? 0U : (IData)(vlSelf->__PVT__exe2mem_sys_jump_csr_addr));
        vlSelf->__PVT__mem2wbk_pc = vlSelf->__PVT__exe2mem_pc;
        if (vlSelf->__PVT__exe2mem_xcpt_valid) {
            vlSelf->__Vdly__mem2wbk_csr_addr = 0U;
            vlSelf->__Vdly__mem2wbk_csr_data = 0U;
            __Vdly__mem2wbk_rd_addr = 0U;
            vlSelf->__PVT__mem2wbk_rd_input_sel = 4U;
            vlSelf->__PVT__mem2wbk_p_data = 0U;
            vlSelf->__PVT__mem2wbk_aligned_data = 0U;
        } else {
            vlSelf->__Vdly__mem2wbk_csr_addr = vlSelf->__PVT__exe2mem_csr_addr;
            vlSelf->__Vdly__mem2wbk_csr_data = vlSelf->__PVT__exe2mem_csr_data;
            __Vdly__mem2wbk_rd_addr = vlSelf->__PVT__exe2mem_rd_addr;
            vlSelf->__PVT__mem2wbk_rd_input_sel = vlSelf->__PVT__exe2mem_rd_input_sel;
            vlSelf->__PVT__mem2wbk_p_data = vlSelf->__PVT__exe2mem_p_data;
            vlSelf->__PVT__mem2wbk_aligned_data = (
                                                   (2U 
                                                    & vlSelf->__PVT__exe2mem_addr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__exe2mem_addr)
                                                     ? 
                                                    ((vlSelf->__PVT__data_read_mem 
                                                      << 8U) 
                                                     | (vlSelf->__PVT__data_read_mem 
                                                        >> 0x18U))
                                                     : 
                                                    ((vlSelf->__PVT__data_read_mem 
                                                      << 0x10U) 
                                                     | (vlSelf->__PVT__data_read_mem 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->__PVT__exe2mem_addr)
                                                     ? 
                                                    ((vlSelf->__PVT__data_read_mem 
                                                      << 0x18U) 
                                                     | (vlSelf->__PVT__data_read_mem 
                                                        >> 8U))
                                                     : vlSelf->__PVT__data_read_mem));
        }
        vlSelf->__Vdly__Writeback__DOT__xcpt_cause_r 
            = vlSelf->__PVT__mem2wbk_xcpt_cause;
    }
    vlSelf->__PVT__iS = ((IData)(vlSymsp->TOP.rst_n) 
                         & (IData)(vlSelf->__PVT__iS_nxt));
    vlSelf->__PVT__mem2wbk_fetch_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                              | ((IData)(vlSelf->__Vcellinp__Memory__flush_i) 
                                                 & (~ (IData)(vlSelf->stall_pipeline))))) 
                                          & ((IData)(vlSelf->stall_pipeline)
                                              ? (IData)(vlSelf->__PVT__mem2wbk_fetch_valid)
                                              : ((IData)(vlSelf->__PVT__exe2mem_xcpt_valid) 
                                                 | (IData)(vlSelf->__PVT__exe2mem_fetch_valid))));
    __Vdly__dec2exe_xcpt_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                      | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                         & (~ (IData)(vlSelf->stall_pipeline))))) 
                                  & ((IData)(vlSelf->stall_pipeline)
                                      ? (IData)(vlSelf->__PVT__dec2exe_xcpt_valid)
                                      : ((IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)
                                          ? (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)
                                          : (IData)(vlSelf->__PVT__fet2dec_xcpt_valid))));
    vlSelf->__Vdly__mem2wbk_csr_we = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                          | ((IData)(vlSelf->__Vcellinp__Memory__flush_i) 
                                             & (~ (IData)(vlSelf->stall_pipeline))))) 
                                      & ((IData)(vlSelf->stall_pipeline)
                                          ? (IData)(vlSelf->__PVT__mem2wbk_csr_we)
                                          : ((~ (IData)(vlSelf->__PVT__exe2mem_xcpt_valid)) 
                                             & (IData)(vlSelf->__PVT__exe2mem_csr_we))));
    vlSelf->__Vdly__Writeback__DOT__sys_jump_r = ((~ 
                                                   ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                                    | ((IData)(vlSelf->__Vcellinp__Memory__flush_i) 
                                                       & (~ (IData)(vlSelf->stall_pipeline))))) 
                                                  & ((IData)(vlSelf->stall_pipeline)
                                                      ? (IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r)
                                                      : 
                                                     ((~ (IData)(vlSelf->__PVT__mem2wbk_xcpt_valid)) 
                                                      & (IData)(vlSelf->__PVT__exe2mem_sys_jump))));
    __Vdly__dec2exe_sys_jump = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                    | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                       & (~ (IData)(vlSelf->stall_pipeline))))) 
                                & ((IData)(vlSelf->stall_pipeline)
                                    ? (IData)(vlSelf->__PVT__dec2exe_sys_jump)
                                    : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                       & ((IData)(vlSelf->__PVT__Decode__DOT__rv32_mret) 
                                          | (IData)(vlSelf->__PVT__Decode__DOT__rv32_sret)))));
    __Vdly__dec2exe_is_amo = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                  | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                     & (~ (IData)(vlSelf->stall_pipeline))))) 
                              & ((IData)(vlSelf->stall_pipeline)
                                  ? (IData)(vlSelf->__PVT__dec2exe_is_amo)
                                  : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                     & (IData)(vlSelf->__PVT__Decode__DOT__rv32_amo))));
    __Vdly__dec2exe_we = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                 & (~ (IData)(vlSelf->stall_pipeline))))) 
                          & ((IData)(vlSelf->stall_pipeline)
                              ? (IData)(vlSelf->__PVT__dec2exe_we)
                              : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                 & (IData)(vlSelf->__PVT__Decode__DOT__rv32_store))));
    __Vdly__Execute__DOT__muldiv_result = ((3U == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S))
                                            ? (((((- (IData)(
                                                             (0U 
                                                              == (IData)(vlSelf->__PVT__dec2exe_operation_sel)))) 
                                                  & vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U]) 
                                                 | ((- (IData)(
                                                               (((1U 
                                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                                 | (2U 
                                                                    == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
                                                                | (3U 
                                                                   == (IData)(vlSelf->__PVT__dec2exe_operation_sel))))) 
                                                    & vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])) 
                                                | ((- (IData)(
                                                              ((4U 
                                                                == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                               | (5U 
                                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel))))) 
                                                   & vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U])) 
                                               | ((- (IData)(
                                                             ((6U 
                                                               == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                              | (7U 
                                                                 == (IData)(vlSelf->__PVT__dec2exe_operation_sel))))) 
                                                  & ((vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[2U] 
                                                      << 0x1fU) 
                                                     | (vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U] 
                                                        >> 1U))))
                                            : vlSelf->__PVT__Execute__DOT__muldiv_result);
    __Vdly__dec_branch_decision = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                       | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                          & (~ (IData)(vlSelf->stall_pipeline))))) 
                                   & ((IData)(vlSelf->stall_pipeline)
                                       ? (IData)(vlSelf->__PVT__dec_branch_decision)
                                       : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                          & (IData)(vlSelf->__PVT__fet_branch_decision))));
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                                  & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i)))))) {
        vlSelf->__PVT__exe2mem_sys_jump_csr_addr = 0U;
        vlSelf->__Vdly__exe2mem_amo_type = 0U;
        __Vdly__exe2mem_rd_input_sel = 0U;
        vlSelf->__PVT__exe2mem_xcpt_cause = 0U;
        vlSelf->__PVT__exe2mem_xcpt_tval = 0U;
        vlSelf->__PVT__exe2mem_csr_addr = 0U;
        vlSelf->__PVT__exe2mem_pc = 0U;
        vlSelf->__PVT__exe2mem_csr_data = 0U;
        vlSelf->__PVT__exe2mem_rs2_data = 0U;
        vlSelf->__PVT__exe2mem_dsize_sel = 0U;
        __Vdly__exe2mem_rd_addr = 0U;
        __Vdly__exe2mem_p_data = 0U;
        vlSelf->__Vdly__exe2mem_addr = 0U;
    } else if (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))) {
        vlSelf->__PVT__exe2mem_sys_jump_csr_addr = vlSelf->__PVT__exe2mem_sys_jump_csr_addr;
        vlSelf->__Vdly__exe2mem_amo_type = vlSelf->__PVT__exe2mem_amo_type;
        __Vdly__exe2mem_rd_input_sel = vlSelf->__PVT__exe2mem_rd_input_sel;
        vlSelf->__PVT__exe2mem_xcpt_cause = vlSelf->__PVT__exe2mem_xcpt_cause;
        vlSelf->__PVT__exe2mem_xcpt_tval = vlSelf->__PVT__exe2mem_xcpt_tval;
        vlSelf->__PVT__exe2mem_csr_addr = vlSelf->__PVT__exe2mem_csr_addr;
        vlSelf->__PVT__exe2mem_pc = vlSelf->__PVT__exe2mem_pc;
        vlSelf->__PVT__exe2mem_csr_data = vlSelf->__PVT__exe2mem_csr_data;
        vlSelf->__PVT__exe2mem_rs2_data = vlSelf->__PVT__exe2mem_rs2_data;
        vlSelf->__PVT__exe2mem_dsize_sel = vlSelf->__PVT__exe2mem_dsize_sel;
        __Vdly__exe2mem_rd_addr = vlSelf->__PVT__exe2mem_rd_addr;
        __Vdly__exe2mem_p_data = vlSelf->__PVT__exe2mem_p_data;
        vlSelf->__Vdly__exe2mem_addr = vlSelf->__PVT__exe2mem_addr;
    } else {
        vlSelf->__PVT__exe2mem_sys_jump_csr_addr = vlSelf->__PVT__dec2exe_sys_jump_csr_addr;
        vlSelf->__Vdly__exe2mem_amo_type = vlSelf->__PVT__dec2exe_amo_type;
        __Vdly__exe2mem_rd_input_sel = vlSelf->__PVT__dec2exe_rd_input_sel;
        vlSelf->__PVT__exe2mem_xcpt_cause = vlSelf->__PVT__dec2exe_xcpt_cause;
        vlSelf->__PVT__exe2mem_xcpt_tval = vlSelf->__PVT__dec2exe_xcpt_tval;
        vlSelf->__PVT__exe2mem_csr_addr = vlSelf->__PVT__dec2fwd_csr_addr;
        vlSelf->__PVT__exe2mem_pc = vlSelf->__PVT__dec_pc;
        vlSelf->__PVT__exe2mem_csr_data = ((1U == (3U 
                                                   & (IData)(vlSelf->__PVT__dec2exe_operation_sel)))
                                            ? vlSelf->__PVT__Execute__DOT__csr_inputB
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->__PVT__dec2exe_operation_sel)))
                                                ? (vlSelf->__PVT__Forwarding_Unit__DOT__correct_csr_data 
                                                   | vlSelf->__PVT__Execute__DOT__csr_inputB)
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->__PVT__dec2exe_operation_sel)))
                                                    ? 
                                                   (vlSelf->__PVT__Forwarding_Unit__DOT__correct_csr_data 
                                                    & (~ vlSelf->__PVT__Execute__DOT__csr_inputB))
                                                    : vlSelf->__PVT__Forwarding_Unit__DOT__correct_csr_data)));
        vlSelf->__PVT__exe2mem_rs2_data = vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data;
        vlSelf->__PVT__exe2mem_dsize_sel = vlSelf->__PVT__dec2exe_dsize_sel;
        __Vdly__exe2mem_rd_addr = vlSelf->__PVT__dec2exe_rd_addr;
        __Vdly__exe2mem_p_data = ((3U == (IData)(vlSelf->__PVT__dec2exe_rd_input_sel))
                                   ? ((IData)(4U) + vlSelf->__PVT__dec_pc)
                                   : ((4U == (IData)(vlSelf->__PVT__dec2exe_rd_input_sel))
                                       ? ((IData)(vlSelf->__PVT__dec2exe_alu_muldiv_sel)
                                           ? vlSelf->__PVT__Execute__DOT__muldiv_result
                                           : vlSelf->__PVT__Execute__DOT__alu_result)
                                       : ((5U == (IData)(vlSelf->__PVT__dec2exe_rd_input_sel))
                                           ? vlSelf->__PVT__Forwarding_Unit__DOT__correct_csr_data
                                           : 0U)));
        vlSelf->__Vdly__exe2mem_addr = (vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                        + vlSelf->__PVT__dec2exe_imm);
    }
    vlSelf->__PVT__exe2mem_sys_jump = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                           | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                              & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                                       & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                           | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                           ? (IData)(vlSelf->__PVT__exe2mem_sys_jump)
                                           : (IData)(vlSelf->__PVT__dec2exe_sys_jump)));
    __Vdly__exe2mem_signex_sel = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                      | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                         & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                                  & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                      | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                      ? (IData)(vlSelf->__PVT__exe2mem_signex_sel)
                                      : (IData)(vlSelf->__PVT__dec2exe_signex_sel)));
    __Vdly__dec2exe_re = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                 & (~ (IData)(vlSelf->stall_pipeline))))) 
                          & ((IData)(vlSelf->stall_pipeline)
                              ? (IData)(vlSelf->__PVT__dec2exe_re)
                              : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                 & ((IData)(vlSelf->__PVT__Decode__DOT__rv32_load) 
                                    | (IData)(vlSelf->__PVT__Decode__DOT__rv32_amo)))));
    __Vdly__exe2mem_xcpt_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                      | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                         & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                                  & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                      | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                      ? (IData)(vlSelf->__PVT__exe2mem_xcpt_valid)
                                      : (IData)(vlSelf->__PVT__dec2exe_xcpt_valid)));
    vlSelf->__PVT__exe2mem_csr_we = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                         | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                            & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                                     & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                         | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                         ? (IData)(vlSelf->__PVT__exe2mem_csr_we)
                                         : (IData)(vlSelf->__PVT__dec2exe_csr_we)));
    vlSelf->__PVT__exe2mem_fetch_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                              | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                                 & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                                          & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                              | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                              ? (IData)(vlSelf->__PVT__exe2mem_fetch_valid)
                                              : (IData)(vlSelf->__PVT__dec2exe_fetch_valid)));
    __Vdly__dec_branch_hit = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                  | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                     & (~ (IData)(vlSelf->stall_pipeline))))) 
                              & ((IData)(vlSelf->stall_pipeline)
                                  ? (IData)(vlSelf->__PVT__dec_branch_hit)
                                  : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                     & (IData)(vlSelf->__PVT__fet_branch_hit))));
    vlSelf->__Vdly__Writeback__DOT__xcpt_valid_r = 
        ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) | ((IData)(vlSelf->__Vcellinp__Memory__flush_i) 
                                                & (~ (IData)(vlSelf->stall_pipeline))))) 
         & ((IData)(vlSelf->stall_pipeline) ? (IData)(vlSelf->__PVT__Writeback__DOT__xcpt_valid_r)
             : (IData)(vlSelf->__PVT__mem2wbk_xcpt_valid)));
    __Vdly__dec2exe_rd_we = (1U & (((~ (IData)(vlSymsp->TOP.rst_n)) 
                                    | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                       & (~ (IData)(vlSelf->stall_pipeline)))) 
                                   | ((IData)(vlSelf->stall_pipeline)
                                       ? (IData)(vlSelf->__PVT__dec2exe_rd_we)
                                       : ((IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid) 
                                          | (((((((((IData)(vlSelf->__PVT__Decode__DOT__rv32_lui) 
                                                    | (IData)(vlSelf->__PVT__Decode__DOT__rv32_auipc)) 
                                                   | (IData)(vlSelf->__PVT__Decode__DOT__rv32_load)) 
                                                  | (IData)(vlSelf->__PVT__Decode__DOT__rv32_op_imm)) 
                                                 | (IData)(vlSelf->__PVT__Decode__DOT__rv32_op)) 
                                                | (IData)(vlSelf->__PVT__Decode__DOT__rv32_csr)) 
                                               | (IData)(vlSelf->__PVT__Decode__DOT__rv32_amo)) 
                                              | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jal)) 
                                             | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jalr))))));
    if (((0U == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S)) 
         & (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))) {
        VL_EXTEND_WI(65,32, __Vtemp_h6e66fce9__0, vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_a);
        VL_EXTEND_WI(65,32, __Vtemp_h19e8b7de__0, vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_b);
        if ((4U & (IData)(vlSelf->__PVT__dec2exe_operation_sel))) {
            if ((0U != vlSelf->__PVT__Execute__DOT__inputB)) {
                vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32 
                    = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_b;
                __Vdly__Execute__DOT__MulDiv__DOT__cnt = 0x20U;
            }
            if ((0U == vlSelf->__PVT__Execute__DOT__inputB)) {
                __Vdly__Execute__DOT__MulDiv__DOT__result[0U] = 0xffffffffU;
                __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                    = (vlSelf->__PVT__Execute__DOT__inputA 
                       << 1U);
                __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                    = (vlSelf->__PVT__Execute__DOT__inputA 
                       >> 0x1fU);
            } else {
                __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                    = __Vtemp_h6e66fce9__0[0U];
                __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                    = __Vtemp_h6e66fce9__0[1U];
                __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                    = __Vtemp_h6e66fce9__0[2U];
            }
        } else {
            if ((1U & (~ ((0U == vlSelf->__PVT__Execute__DOT__inputA) 
                          | (0U == vlSelf->__PVT__Execute__DOT__inputB))))) {
                vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32 
                    = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_a;
                __Vdly__Execute__DOT__MulDiv__DOT__cnt = 0x1fU;
            }
            if (((0U == vlSelf->__PVT__Execute__DOT__inputA) 
                 | (0U == vlSelf->__PVT__Execute__DOT__inputB))) {
                __Vdly__Execute__DOT__MulDiv__DOT__result[0U] = 0U;
                __Vdly__Execute__DOT__MulDiv__DOT__result[1U] = 0U;
                __Vdly__Execute__DOT__MulDiv__DOT__result[2U] = 0U;
            } else {
                __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                    = __Vtemp_h19e8b7de__0[0U];
                __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                    = __Vtemp_h19e8b7de__0[1U];
                __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                    = __Vtemp_h19e8b7de__0[2U];
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S))) {
        __Vdly__Execute__DOT__MulDiv__DOT__cnt = (0x3fU 
                                                  & ((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__cnt) 
                                                     - (IData)(1U)));
        VL_EXTEND_WQ(65,64, __Vtemp_h0f910a5b__0, (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[0U])) 
                                                         >> 1U))));
        VL_EXTEND_WQ(65,64, __Vtemp_h972d98ba__0, (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U])) 
                                                         >> 1U))));
        if ((4U & (IData)(vlSelf->__PVT__dec2exe_operation_sel))) {
            if (vlSelf->__PVT__Execute__DOT__MulDiv__DOT__div_sub) {
                __Vtemp_h4beb8c85__0[1U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[0U])))) 
                                             >> 0x1fU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[0U]))) 
                                                        >> 0x20U)) 
                                               << 1U));
                __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                    = (1U | ((IData)((((QData)((IData)(
                                                       vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[0U])))) 
                             << 1U));
                __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                    = __Vtemp_h4beb8c85__0[1U];
                __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                    = ((IData)(((((QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[0U]))) 
                                >> 0x20U)) >> 0x1fU);
            } else {
                __Vtemp_h4beb8c85__0[1U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U])))) 
                                             >> 0x1fU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U]))) 
                                                        >> 0x20U)) 
                                               << 1U));
                __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                    = ((IData)((((QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U])))) 
                       << 1U);
                __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                    = __Vtemp_h4beb8c85__0[1U];
                __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                    = ((IData)(((((QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U]))) 
                                >> 0x20U)) >> 0x1fU);
            }
        } else if (vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul_add) {
            __Vtemp_h4beb8c85__0[1U] = __Vtemp_h0f910a5b__0[1U];
            __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                = __Vtemp_h0f910a5b__0[0U];
            __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                = __Vtemp_h4beb8c85__0[1U];
            __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                = __Vtemp_h0f910a5b__0[2U];
        } else {
            __Vtemp_h4beb8c85__0[1U] = __Vtemp_h972d98ba__0[1U];
            __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                = __Vtemp_h972d98ba__0[0U];
            __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                = __Vtemp_h4beb8c85__0[1U];
            __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                = __Vtemp_h972d98ba__0[2U];
        }
    } else if ((2U == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S))) {
        if ((4U & (IData)(vlSelf->__PVT__dec2exe_operation_sel))) {
            __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                = ((1U & __Vdly__Execute__DOT__MulDiv__DOT__result[1U]) 
                   | (((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg)
                        ? (- vlSelf->__PVT__Execute__DOT__MulDiv__DOT__remainder)
                        : vlSelf->__PVT__Execute__DOT__MulDiv__DOT__remainder) 
                      << 1U));
            __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                = (((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg)
                     ? (- vlSelf->__PVT__Execute__DOT__MulDiv__DOT__remainder)
                     : vlSelf->__PVT__Execute__DOT__MulDiv__DOT__remainder) 
                   >> 0x1fU);
            __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                = ((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__signed_adjust)
                    ? (- vlSelf->__PVT__Execute__DOT__MulDiv__DOT__quotient)
                    : vlSelf->__PVT__Execute__DOT__MulDiv__DOT__quotient);
        } else {
            VL_EXTEND_WQ(65,64, __Vtemp_ha71931b8__0, vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_result);
            VL_NEGATE_W(3, __Vtemp_hd8b634d1__0, __Vtemp_ha71931b8__0);
            VL_EXTEND_WQ(65,64, __Vtemp_ha71931b8__1, vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_result);
            VL_EXTEND_WQ(65,64, __Vtemp_ha71931b8__2, vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_result);
            VL_NEGATE_W(3, __Vtemp_h21bea038__0, __Vtemp_ha71931b8__2);
            VL_EXTEND_WQ(65,64, __Vtemp_ha71931b8__3, vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_result);
            VL_EXTEND_WQ(65,64, __Vtemp_ha71931b8__4, vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_result);
            if (((1U == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                 | (3U == (IData)(vlSelf->__PVT__dec2exe_operation_sel)))) {
                if (vlSelf->__PVT__Execute__DOT__MulDiv__DOT__signed_adjust) {
                    __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                        = __Vtemp_hd8b634d1__0[0U];
                    __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                        = __Vtemp_hd8b634d1__0[1U];
                    __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                        = (1U & __Vtemp_hd8b634d1__0[2U]);
                } else {
                    __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                        = __Vtemp_ha71931b8__1[0U];
                    __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                        = __Vtemp_ha71931b8__1[1U];
                    __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                        = (1U & __Vtemp_ha71931b8__1[2U]);
                }
            } else if ((2U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) {
                if (vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg) {
                    __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                        = __Vtemp_h21bea038__0[0U];
                    __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                        = __Vtemp_h21bea038__0[1U];
                    __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                        = (1U & __Vtemp_h21bea038__0[2U]);
                } else {
                    __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                        = __Vtemp_ha71931b8__3[0U];
                    __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                        = __Vtemp_ha71931b8__3[1U];
                    __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                        = (1U & __Vtemp_ha71931b8__3[2U]);
                }
            } else {
                __Vdly__Execute__DOT__MulDiv__DOT__result[0U] 
                    = __Vtemp_ha71931b8__4[0U];
                __Vdly__Execute__DOT__MulDiv__DOT__result[1U] 
                    = __Vtemp_ha71931b8__4[1U];
                __Vdly__Execute__DOT__MulDiv__DOT__result[2U] 
                    = (1U & __Vtemp_ha71931b8__4[2U]);
            }
        }
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | ((0U 
                                                   == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S)) 
                                                  & (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))))) {
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter = 0U;
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_result = 0ULL;
    } else {
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter 
            = (3U & ((3U == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter))
                      ? (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter)
                      : ((IData)(1U) + (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter))));
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_result 
            = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul1;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                                  & (~ (IData)(vlSelf->stall_pipeline)))))) {
        vlSelf->__PVT__dec2fwd_csr_data = 0U;
        __Vdly__dec2exe_sys_jump_csr_addr = 0U;
        __Vdly__dec_pc = ((IData)(vlSelf->__Vcellinp__Decode__flush_i)
                           ? vlSelf->fet2dec_pc : 0U);
        vlSelf->__PVT__dec2exe_inA_sel = 2U;
        vlSelf->__PVT__dec2exe_xcpt_cause = 0U;
        __Vdly__dec2exe_dsize_sel = 0U;
        __Vdly__dec2exe_dsize_sel = 0U;
        vlSelf->__PVT__dec2exe_amo_type = 0U;
        vlSelf->__PVT__dec2exe_csr_imm = 0U;
        vlSelf->__PVT__dec2fwd_csr_addr = 0U;
        vlSelf->__PVT__dec2exe_xcpt_tval = 0U;
        vlSelf->__PVT__dec2exe_rd_addr = 0U;
        __Vtemp_h67944a15__0 = 4U;
        vlSelf->__PVT__dec2exe_inB_sel = 0U;
        vlSelf->__PVT__dec2exe_operation_sel = 0U;
        __Vdly__dec2exe_imm = 0U;
        vlSelf->__PVT__dec2fwd_rs2_addr = 0U;
        vlSelf->__PVT__dec2fwd_rs1_addr = 0U;
        vlSelf->__PVT__dec2fwd_rs2_data = 0U;
        vlSelf->__PVT__dec2fwd_rs1_data = 0U;
    } else if (vlSelf->stall_pipeline) {
        vlSelf->__PVT__dec2fwd_csr_data = vlSelf->__PVT__dec2fwd_csr_data;
        __Vdly__dec2exe_sys_jump_csr_addr = (3U & (IData)(vlSelf->__PVT__dec2exe_sys_jump_csr_addr));
        __Vdly__dec_pc = vlSelf->__PVT__dec_pc;
        vlSelf->__PVT__dec2exe_inA_sel = vlSelf->__PVT__dec2exe_inA_sel;
        vlSelf->__PVT__dec2exe_xcpt_cause = (0xfU & (IData)(vlSelf->__PVT__dec2exe_xcpt_cause));
        __Vdly__dec2exe_dsize_sel = vlSelf->__PVT__dec2exe_dsize_sel;
        vlSelf->__PVT__dec2exe_amo_type = (0x1fU & (IData)(vlSelf->__PVT__dec2exe_amo_type));
        vlSelf->__PVT__dec2exe_csr_imm = (0x1fU & (IData)(vlSelf->__PVT__dec2exe_csr_imm));
        vlSelf->__PVT__dec2fwd_csr_addr = (0xfffU & (IData)(vlSelf->__PVT__dec2fwd_csr_addr));
        vlSelf->__PVT__dec2exe_xcpt_tval = vlSelf->__PVT__dec2exe_xcpt_tval;
        vlSelf->__PVT__dec2exe_rd_addr = (0x1fU & (IData)(vlSelf->__PVT__dec2exe_rd_addr));
        __Vtemp_h67944a15__0 = vlSelf->__PVT__dec2exe_rd_input_sel;
        vlSelf->__PVT__dec2exe_inB_sel = vlSelf->__PVT__dec2exe_inB_sel;
        vlSelf->__PVT__dec2exe_operation_sel = (7U 
                                                & (IData)(vlSelf->__PVT__dec2exe_operation_sel));
        __Vdly__dec2exe_imm = vlSelf->__PVT__dec2exe_imm;
        vlSelf->__PVT__dec2fwd_rs2_addr = (0x1fU & (IData)(vlSelf->__PVT__dec2fwd_rs2_addr));
        vlSelf->__PVT__dec2fwd_rs1_addr = (0x1fU & (IData)(vlSelf->__PVT__dec2fwd_rs1_addr));
        vlSelf->__PVT__dec2fwd_rs2_data = vlSelf->__PVT__dec2fwd_rs2_data;
        vlSelf->__PVT__dec2fwd_rs1_data = vlSelf->__PVT__dec2fwd_rs1_data;
    } else {
        if (vlSelf->__PVT__Decode__DOT__xcpt_valid) {
            vlSelf->__PVT__dec2fwd_csr_data = 0U;
            __Vdly__dec2exe_sys_jump_csr_addr = (3U 
                                                 & 0U);
            vlSelf->__PVT__dec2exe_inA_sel = 2U;
            vlSelf->__PVT__dec2exe_xcpt_cause = (0xfU 
                                                 & ((IData)(vlSelf->__PVT__Decode__DOT__rv32_ecall)
                                                     ? 
                                                    ((3U 
                                                      == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))
                                                       ? 9U
                                                       : 8U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__Decode__DOT__rv32_ebreak)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlSelf->__PVT__Decode__DOT__rv32_illegal_instr_xcpt)
                                                       ? 2U
                                                       : 0U))));
            __Vdly__dec2exe_dsize_sel = 0U;
            __Vdly__dec2exe_dsize_sel = 0U;
            vlSelf->__PVT__dec2exe_amo_type = (0x1fU 
                                               & 0U);
            vlSelf->__PVT__dec2exe_csr_imm = (0x1fU 
                                              & 0U);
            vlSelf->__PVT__dec2fwd_csr_addr = (0xfffU 
                                               & 0U);
            vlSelf->__PVT__dec2exe_xcpt_tval = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_illegal_instr_xcpt)
                                                 ? vlSelf->__PVT__fet2dec_instr
                                                 : 0U);
            vlSelf->__PVT__dec2exe_rd_addr = (0x1fU 
                                              & 0U);
            __Vtemp_h67944a15__0 = 4U;
            vlSelf->__PVT__dec2exe_inB_sel = 0U;
            vlSelf->__PVT__dec2exe_operation_sel = 
                (7U & 0U);
            __Vdly__dec2exe_imm = 0U;
            vlSelf->__PVT__dec2fwd_rs2_addr = (0x1fU 
                                               & 0U);
            vlSelf->__PVT__dec2fwd_rs1_addr = (0x1fU 
                                               & 0U);
            vlSelf->__PVT__dec2fwd_rs2_data = 0U;
            vlSelf->__PVT__dec2fwd_rs1_data = 0U;
        } else {
            vlSelf->__PVT__dec2fwd_csr_data = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__csr_data;
            __Vdly__dec2exe_sys_jump_csr_addr = (3U 
                                                 & ((- (IData)((IData)(vlSelf->__PVT__Decode__DOT__rv32_mret))) 
                                                    | (1U 
                                                       & (- (IData)((IData)(vlSelf->__PVT__Decode__DOT__rv32_sret))))));
            vlSelf->__PVT__dec2exe_inA_sel = ((((IData)(vlSelf->__PVT__Decode__DOT__rv32_auipc) 
                                                | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jal)) 
                                               | (IData)(vlSelf->__PVT__Decode__DOT__rv32_branch))
                                               ? 1U
                                               : (((IData)(vlSelf->__PVT__Decode__DOT__rv32_lui) 
                                                   | (IData)(vlSelf->__PVT__Decode__DOT__rv32_store))
                                                   ? 0U
                                                   : 2U));
            vlSelf->__PVT__dec2exe_xcpt_cause = (0xfU 
                                                 & (IData)(vlSelf->__PVT__fet2dec_xcpt_cause));
            __Vdly__dec2exe_dsize_sel = (3U & (vlSelf->__PVT__fet2dec_instr 
                                               >> 0xcU));
            vlSelf->__PVT__dec2exe_amo_type = (0x1fU 
                                               & (vlSelf->__PVT__fet2dec_instr 
                                                  >> 0x1bU));
            vlSelf->__PVT__dec2exe_csr_imm = (0x1fU 
                                              & (vlSelf->__PVT__fet2dec_instr 
                                                 >> 0xfU));
            vlSelf->__PVT__dec2fwd_csr_addr = (0xfffU 
                                               & (vlSelf->__PVT__fet2dec_instr 
                                                  >> 0x14U));
            vlSelf->__PVT__dec2exe_xcpt_tval = vlSelf->__PVT__fet2dec_xcpt_tval;
            vlSelf->__PVT__dec2exe_rd_addr = (0x1fU 
                                              & (vlSelf->__PVT__fet2dec_instr 
                                                 >> 7U));
            __Vtemp_h67944a15__0 = (((IData)(vlSelf->__PVT__Decode__DOT__rv32_load) 
                                     & ((0U == (7U 
                                                & (vlSelf->__PVT__fet2dec_instr 
                                                   >> 0xcU))) 
                                        | (4U == (7U 
                                                  & (vlSelf->__PVT__fet2dec_instr 
                                                     >> 0xcU)))))
                                     ? 0U : (((IData)(vlSelf->__PVT__Decode__DOT__rv32_load) 
                                              & ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__fet2dec_instr 
                                                      >> 0xcU))) 
                                                 | (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->__PVT__fet2dec_instr 
                                                        >> 0xcU)))))
                                              ? 1U : 
                                             ((((IData)(vlSelf->__PVT__Decode__DOT__rv32_load) 
                                                & (0x2000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->__PVT__fet2dec_instr))) 
                                               | (IData)(vlSelf->__PVT__Decode__DOT__rv32_amo))
                                               ? 2U
                                               : (((IData)(vlSelf->__PVT__Decode__DOT__rv32_jal) 
                                                   | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jalr))
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->__PVT__Decode__DOT__rv32_csr)
                                                    ? 5U
                                                    : 4U)))));
            vlSelf->__PVT__dec2exe_inB_sel = (((IData)(vlSelf->__PVT__Decode__DOT__rv32_op) 
                                               & (0x40000000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSelf->__PVT__fet2dec_instr)))
                                               ? 2U
                                               : ((
                                                   ((IData)(vlSelf->__PVT__Decode__DOT__rv32_store) 
                                                    | (IData)(vlSelf->__PVT__Decode__DOT__rv32_op)) 
                                                   | (IData)(vlSelf->__PVT__Decode__DOT__rv32_amo))
                                                   ? 1U
                                                   : 0U));
            vlSelf->__PVT__dec2exe_operation_sel = 
                (7U & (((IData)(vlSelf->__PVT__Decode__DOT__rv32_lui) 
                        | (IData)(vlSelf->__PVT__Decode__DOT__rv32_auipc))
                        ? 0U : (vlSelf->__PVT__fet2dec_instr 
                                >> 0xcU)));
            __Vdly__dec2exe_imm = ((((((- (IData)((
                                                   ((IData)(vlSelf->__PVT__Decode__DOT__rv32_op_imm) 
                                                    | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jalr)) 
                                                   | (IData)(vlSelf->__PVT__Decode__DOT__rv32_load)))) 
                                       & (((- (IData)(
                                                      (vlSelf->__PVT__fet2dec_instr 
                                                       >> 0x1fU))) 
                                           << 0xbU) 
                                          | (0x7ffU 
                                             & (vlSelf->__PVT__fet2dec_instr 
                                                >> 0x14U)))) 
                                      | ((- (IData)((IData)(vlSelf->__PVT__Decode__DOT__rv32_store))) 
                                         & (((- (IData)(
                                                        (vlSelf->__PVT__fet2dec_instr 
                                                         >> 0x1fU))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSelf->__PVT__fet2dec_instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__PVT__fet2dec_instr 
                                                     >> 7U)))))) 
                                     | ((- (IData)((IData)(vlSelf->__PVT__Decode__DOT__rv32_branch))) 
                                        & (((- (IData)(
                                                       (vlSelf->__PVT__fet2dec_instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->__PVT__fet2dec_instr 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->__PVT__fet2dec_instr 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->__PVT__fet2dec_instr 
                                                       >> 7U))))))) 
                                    | (0xfffff000U 
                                       & ((- (IData)(
                                                     ((IData)(vlSelf->__PVT__Decode__DOT__rv32_lui) 
                                                      | (IData)(vlSelf->__PVT__Decode__DOT__rv32_auipc)))) 
                                          & vlSelf->__PVT__fet2dec_instr))) 
                                   | ((- (IData)((IData)(vlSelf->__PVT__Decode__DOT__rv32_jal))) 
                                      & (((- (IData)(
                                                     (vlSelf->__PVT__fet2dec_instr 
                                                      >> 0x1fU))) 
                                          << 0x14U) 
                                         | ((0xff000U 
                                             & vlSelf->__PVT__fet2dec_instr) 
                                            | ((0x800U 
                                                & (vlSelf->__PVT__fet2dec_instr 
                                                   >> 9U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__PVT__fet2dec_instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->__PVT__fet2dec_instr 
                                                        >> 0x14U))))))));
            vlSelf->__PVT__dec2fwd_rs2_addr = (0x1fU 
                                               & (vlSelf->__PVT__fet2dec_instr 
                                                  >> 0x14U));
            vlSelf->__PVT__dec2fwd_rs1_addr = (0x1fU 
                                               & (vlSelf->__PVT__fet2dec_instr 
                                                  >> 0xfU));
            vlSelf->__PVT__dec2fwd_rs2_data = (((IData)(vlSelf->__PVT__Register_File__DOT__we) 
                                                & ((0x1fU 
                                                    & (vlSelf->__PVT__fet2dec_instr 
                                                       >> 0x14U)) 
                                                   == (IData)(vlSelf->__PVT__mem2wbk_rd_addr)))
                                                ? vlSelf->__PVT__Writeback__DOT__rd_data
                                                : vlSelf->__PVT__Register_File__DOT__x
                                               [(0x1fU 
                                                 & (vlSelf->__PVT__fet2dec_instr 
                                                    >> 0x14U))]);
            vlSelf->__PVT__dec2fwd_rs1_data = (((IData)(vlSelf->__PVT__Register_File__DOT__we) 
                                                & ((0x1fU 
                                                    & (vlSelf->__PVT__fet2dec_instr 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->__PVT__mem2wbk_rd_addr)))
                                                ? vlSelf->__PVT__Writeback__DOT__rd_data
                                                : vlSelf->__PVT__Register_File__DOT__x
                                               [(0x1fU 
                                                 & (vlSelf->__PVT__fet2dec_instr 
                                                    >> 0xfU))]);
        }
        __Vdly__dec_pc = vlSelf->fet2dec_pc;
    }
    __Vdly__dec_is_jal = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                 & (~ (IData)(vlSelf->stall_pipeline))))) 
                          & ((IData)(vlSelf->stall_pipeline)
                              ? (IData)(vlSelf->__PVT__dec_is_jal)
                              : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                 & (IData)(vlSelf->__PVT__Decode__DOT__rv32_jal))));
    vlSelf->__PVT__dec_is_jalr = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                      | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                         & (~ (IData)(vlSelf->stall_pipeline))))) 
                                  & ((IData)(vlSelf->stall_pipeline)
                                      ? (IData)(vlSelf->__PVT__dec_is_jalr)
                                      : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                         & (IData)(vlSelf->__PVT__Decode__DOT__rv32_jalr))));
    vlSelf->__PVT__csr_irq_taken_r = ((IData)(vlSymsp->TOP.rst_n) 
                                      & ((((~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)) 
                                           | (IData)(vlSelf->__PVT__stall_data_fetch)) 
                                          | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req)) 
                                         & ((IData)(vlSelf->__PVT__csr_irq_taken_r) 
                                            | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__irq_taken))));
    __Vdly__dec_is_branch = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                 | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                    & (~ (IData)(vlSelf->stall_pipeline))))) 
                             & ((IData)(vlSelf->stall_pipeline)
                                 ? (IData)(vlSelf->__PVT__dec_is_branch)
                                 : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                    & (IData)(vlSelf->__PVT__Decode__DOT__rv32_branch))));
    vlSelf->__PVT__Execute__DOT__muldiv_ready = ((3U 
                                                  == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S)) 
                                                 | ((4U 
                                                     == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S)) 
                                                    & (0U 
                                                       != (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S_nxt))));
    vlSelf->__Vdly__exe_is_fencei = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                         | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                            & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                                     & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                         | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                         ? (IData)(vlSelf->__PVT__exe_is_fencei)
                                         : (IData)(vlSelf->__PVT__dec2exe_is_fencei)));
    __Vdly__exe2mem_rd_we = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                 | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                    & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                             & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                 | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                 ? (IData)(vlSelf->__PVT__exe2mem_rd_we)
                                 : (IData)(vlSelf->__PVT__dec2exe_rd_we)));
    vlSelf->__PVT__mem2wbk_rd_we = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                        | ((IData)(vlSelf->__Vcellinp__Memory__flush_i) 
                                           & (~ (IData)(vlSelf->stall_pipeline))))) 
                                    & ((IData)(vlSelf->stall_pipeline)
                                        ? (IData)(vlSelf->__PVT__mem2wbk_rd_we)
                                        : ((~ (IData)(vlSelf->__PVT__exe2mem_xcpt_valid)) 
                                           & (IData)(vlSelf->__PVT__exe2mem_rd_we))));
    vlSelf->__PVT__dec2exe_signex_sel = (1U & ((~ (
                                                   (~ (IData)(vlSymsp->TOP.rst_n)) 
                                                   | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                                      & (~ (IData)(vlSelf->stall_pipeline))))) 
                                               & ((IData)(vlSelf->stall_pipeline)
                                                   ? (IData)(vlSelf->__PVT__dec2exe_signex_sel)
                                                   : 
                                                  ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                                   & (vlSelf->__PVT__fet2dec_instr 
                                                      >> 0xeU)))));
    vlSelf->__PVT__dec2exe_shift_sel = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                            | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                               & (~ (IData)(vlSelf->stall_pipeline))))) 
                                        & ((IData)(vlSelf->stall_pipeline)
                                            ? (IData)(vlSelf->__PVT__dec2exe_shift_sel)
                                            : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->__PVT__fet2dec_instr 
                                                   >> 0x19U)))));
    vlSelf->__PVT__dec2exe_fetch_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                              | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                                 & (~ (IData)(vlSelf->stall_pipeline))))) 
                                          & ((IData)(vlSelf->stall_pipeline)
                                              ? (IData)(vlSelf->__PVT__dec2exe_fetch_valid)
                                              : ((IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid) 
                                                 | (IData)(vlSelf->__PVT__fet2dec_valid))));
    vlSelf->__PVT__dec2exe_csr_we = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                         | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                            & (~ (IData)(vlSelf->stall_pipeline))))) 
                                     & ((IData)(vlSelf->stall_pipeline)
                                         ? (IData)(vlSelf->__PVT__dec2exe_csr_we)
                                         : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                            & ((IData)(vlSelf->__PVT__Decode__DOT__rv32_csr) 
                                               & (~ (IData)(
                                                            ((0U 
                                                              == 
                                                              (0xf8000U 
                                                               & vlSelf->__PVT__fet2dec_instr)) 
                                                             & ((IData)(vlSelf->__PVT__Decode__DOT__rv32_csrrs) 
                                                                | (IData)(vlSelf->__PVT__Decode__DOT__rv32_csrrc)))))))));
    vlSelf->__PVT__dec2exe_is_fencei = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                            | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                               & (~ (IData)(vlSelf->stall_pipeline))))) 
                                        & ((IData)(vlSelf->stall_pipeline)
                                            ? (IData)(vlSelf->__PVT__dec2exe_is_fencei)
                                            : ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                               & ((IData)(vlSelf->__PVT__Decode__DOT__rv32_miscmem) 
                                                  & (0x1000U 
                                                     == 
                                                     (0x7000U 
                                                      & vlSelf->__PVT__fet2dec_instr))))));
    vlSelf->__PVT__dec2exe_rd_input_sel = __Vtemp_h67944a15__0;
    vlSelf->__Vdly__exe2mem_is_amo = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                          | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                             & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                                      & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                          | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                          ? (IData)(vlSelf->__PVT__exe2mem_is_amo)
                                          : (IData)(vlSelf->__PVT__dec2exe_is_amo)));
    vlSelf->__PVT__dec2exe_alu_muldiv_sel = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                                 | ((IData)(vlSelf->__Vcellinp__Decode__flush_i) 
                                                    & (~ (IData)(vlSelf->stall_pipeline))))) 
                                             & ((IData)(vlSelf->stall_pipeline)
                                                 ? (IData)(vlSelf->__PVT__dec2exe_alu_muldiv_sel)
                                                 : 
                                                ((~ (IData)(vlSelf->__PVT__Decode__DOT__xcpt_valid)) 
                                                 & ((IData)(vlSelf->__PVT__Decode__DOT__rv32_op) 
                                                    & (1U 
                                                       == 
                                                       (vlSelf->__PVT__fet2dec_instr 
                                                        >> 0x19U))))));
    vlSelf->__PVT__mem2wbk_signex_sel = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                             | ((IData)(vlSelf->__Vcellinp__Memory__flush_i) 
                                                & (~ (IData)(vlSelf->stall_pipeline))))) 
                                         & ((IData)(vlSelf->stall_pipeline)
                                             ? (IData)(vlSelf->__PVT__mem2wbk_signex_sel)
                                             : ((~ (IData)(vlSelf->__PVT__exe2mem_xcpt_valid)) 
                                                & (IData)(vlSelf->__PVT__exe2mem_signex_sel))));
    vlSelf->__PVT__Fetch__DOT__flush_delay = vlSelf->__Vcellinp__Fetch__flush_i;
    vlSelf->__PVT__fet2dec_valid = ((IData)(vlSymsp->TOP.rst_n) 
                                    & ((IData)(vlSelf->__Vcellinp__Fetch__stall_i)
                                        ? (IData)(vlSelf->__PVT__fet2dec_valid)
                                        : (~ (IData)(vlSelf->__Vcellinp__Fetch__flush_i))));
    vlSelf->__PVT__Fetch__DOT__instruction_delay = 
        ((IData)(vlSelf->__PVT__Fetch__DOT__stall_delay)
          ? vlSelf->__PVT__Fetch__DOT__instruction_delay
          : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_code);
    vlSelf->__PVT__exe_re = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                 | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                    & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                             & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                 | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                 ? (IData)(vlSelf->__PVT__exe_re)
                                 : (IData)(vlSelf->__PVT__dec2exe_re)));
    vlSelf->__Vdly__exe_we = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                  | ((IData)(vlSelf->__Vcellinp__Execute__flush_i) 
                                     & (~ (IData)(vlSelf->__Vcellinp__Execute__stall_i))))) 
                              & (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                  | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req))
                                  ? (IData)(vlSelf->__PVT__exe_we)
                                  : (IData)(vlSelf->__PVT__dec2exe_we)));
    if (__Vdlyvset__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0) {
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[__Vdlyvdim0__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM__v0;
    }
    vlSelf->__PVT__fet_branch_decision = __Vdly__fet_branch_decision;
    vlSelf->__PVT__dec2exe_sys_jump_csr_addr = __Vdly__dec2exe_sys_jump_csr_addr;
    vlSelf->__PVT__dec2exe_sys_jump = __Vdly__dec2exe_sys_jump;
    vlSelf->__PVT__dec2exe_xcpt_valid = __Vdly__dec2exe_xcpt_valid;
    vlSelf->__PVT__fet_branch_hit = __Vdly__fet_branch_hit;
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__cnt = __Vdly__Execute__DOT__MulDiv__DOT__cnt;
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U] 
        = __Vdly__Execute__DOT__MulDiv__DOT__result[0U];
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U] 
        = __Vdly__Execute__DOT__MulDiv__DOT__result[1U];
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[2U] 
        = __Vdly__Execute__DOT__MulDiv__DOT__result[2U];
    vlSelf->__PVT__dec2exe_rd_we = __Vdly__dec2exe_rd_we;
    vlSelf->__PVT__Execute__DOT__muldiv_result = __Vdly__Execute__DOT__muldiv_result;
    vlSelf->__PVT__exe2mem_rd_we = __Vdly__exe2mem_rd_we;
    vlSelf->__PVT__exe2mem_rd_addr = __Vdly__exe2mem_rd_addr;
    vlSelf->__PVT__dec2exe_dsize_sel = __Vdly__dec2exe_dsize_sel;
    vlSelf->__PVT__dec2exe_is_amo = __Vdly__dec2exe_is_amo;
    vlSelf->__PVT__exe2mem_rd_input_sel = __Vdly__exe2mem_rd_input_sel;
    vlSelf->__PVT__exe2mem_signex_sel = __Vdly__exe2mem_signex_sel;
    vlSelf->__PVT__exe2mem_p_data = __Vdly__exe2mem_p_data;
    if (vlSymsp->TOP.rst_n) {
        if (vlSelf->stall_pipeline) {
            vlSelf->__PVT__Branch_Prediction_Unit__DOT__idx = 0x40U;
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v0 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0U];
            __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v0 = 1U;
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v1 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [1U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v2 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [2U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v3 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [3U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v4 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [4U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v5 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [5U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v6 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [6U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v7 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [7U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v8 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [8U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v9 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [9U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v10 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0xaU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v11 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0xbU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v12 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0xcU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v13 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0xdU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v14 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0xeU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v15 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0xfU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v16 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x10U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v17 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x11U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v18 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x12U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v19 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x13U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v20 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x14U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v21 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x15U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v22 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x16U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v23 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x17U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v24 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x18U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v25 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x19U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v26 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x1aU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v27 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x1bU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v28 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x1cU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v29 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x1dU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v30 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x1eU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v31 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x1fU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v32 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x20U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v33 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x21U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v34 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x22U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v35 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x23U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v36 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x24U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v37 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x25U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v38 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x26U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v39 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x27U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v40 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x28U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v41 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x29U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v42 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x2aU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v43 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x2bU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v44 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x2cU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v45 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x2dU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v46 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x2eU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v47 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x2fU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v48 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x30U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v49 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x31U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v50 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x32U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v51 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x33U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v52 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x34U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v53 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x35U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v54 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x36U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v55 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x37U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v56 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x38U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v57 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x39U];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v58 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x3aU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v59 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x3bU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v60 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x3cU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v61 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x3dU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v62 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x3eU];
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v63 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                [0x3fU];
        } else if (vlSelf->__PVT__Branch_Prediction_Unit__DOT__we) {
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v64 
                = (3U & (- (IData)((IData)(vlSelf->__PVT__exe_branch_taken))));
            __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v64 = 1U;
            __Vdlyvdim0__Branch_Prediction_Unit__DOT__branch_likelihood__v64 
                = (0x3fU & (vlSelf->__PVT__dec_pc >> 2U));
        } else if (((IData)(vlSelf->__PVT__dec_is_branch) 
                    | (IData)(vlSelf->__PVT__dec_is_jal))) {
            __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v65 
                = ((2U & vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                    [(0x3fU & (vlSelf->__PVT__dec_pc 
                               >> 2U))]) ? ((1U & vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                                             [(0x3fU 
                                               & (vlSelf->__PVT__dec_pc 
                                                  >> 2U))])
                                             ? ((IData)(vlSelf->__PVT__exe_branch_taken)
                                                 ? 3U
                                                 : 2U)
                                             : ((IData)(vlSelf->__PVT__exe_branch_taken)
                                                 ? 3U
                                                 : 0U))
                    : ((1U & vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                        [(0x3fU & (vlSelf->__PVT__dec_pc 
                                   >> 2U))]) ? ((IData)(vlSelf->__PVT__exe_branch_taken)
                                                 ? 3U
                                                 : 0U)
                        : ((IData)(vlSelf->__PVT__exe_branch_taken)
                            ? 1U : 0U)));
            __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v65 = 1U;
            __Vdlyvdim0__Branch_Prediction_Unit__DOT__branch_likelihood__v65 
                = (0x3fU & (vlSelf->__PVT__dec_pc >> 2U));
        }
        if ((1U & (~ (IData)(vlSelf->stall_pipeline)))) {
            vlSelf->__PVT__Branch_Prediction_Unit__DOT__BHT_hit 
                = vlSelf->__PVT__Branch_Prediction_Unit__DOT__BHT_hit_ff;
        }
        if (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_d_ready) {
            vlSelf->__PVT__data_read_reg = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_d_mem2core;
        }
        if (vlSelf->__PVT__Register_File__DOT__we) {
            __Vdlyvval__Register_File__DOT__x__v0 = vlSelf->__PVT__Writeback__DOT__rd_data;
            __Vdlyvset__Register_File__DOT__x__v0 = 1U;
            __Vdlyvdim0__Register_File__DOT__x__v0 
                = vlSelf->__PVT__mem2wbk_rd_addr;
        }
    } else {
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__idx = 0x40U;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__BHT_hit = 0U;
        vlSelf->__PVT__data_read_reg = 0U;
        __Vdlyvset__Register_File__DOT__x__v1 = 1U;
        __Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v66 = 1U;
    }
    if (__Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v0) {
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v0;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[1U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v1;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[2U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v2;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[3U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v3;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[4U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v4;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[5U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v5;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[6U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v6;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[7U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v7;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[8U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v8;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[9U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v9;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0xaU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v10;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0xbU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v11;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0xcU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v12;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0xdU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v13;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0xeU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v14;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0xfU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v15;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x10U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v16;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x11U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v17;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x12U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v18;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x13U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v19;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x14U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v20;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x15U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v21;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x16U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v22;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x17U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v23;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x18U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v24;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x19U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v25;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x1aU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v26;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x1bU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v27;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x1cU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v28;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x1dU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v29;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x1eU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v30;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x1fU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v31;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x20U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v32;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x21U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v33;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x22U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v34;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x23U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v35;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x24U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v36;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x25U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v37;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x26U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v38;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x27U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v39;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x28U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v40;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x29U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v41;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x2aU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v42;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x2bU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v43;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x2cU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v44;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x2dU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v45;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x2eU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v46;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x2fU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v47;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x30U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v48;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x31U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v49;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x32U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v50;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x33U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v51;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x34U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v52;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x35U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v53;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x36U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v54;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x37U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v55;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x38U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v56;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x39U] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v57;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x3aU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v58;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x3bU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v59;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x3cU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v60;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x3dU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v61;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x3eU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v62;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0x3fU] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v63;
    }
    if (__Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v64) {
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[__Vdlyvdim0__Branch_Prediction_Unit__DOT__branch_likelihood__v64] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v64;
    }
    if (__Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v65) {
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[__Vdlyvdim0__Branch_Prediction_Unit__DOT__branch_likelihood__v65] 
            = __Vdlyvval__Branch_Prediction_Unit__DOT__branch_likelihood__v65;
    }
    if (__Vdlyvset__Branch_Prediction_Unit__DOT__branch_likelihood__v66) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->__PVT__dec_is_branch = __Vdly__dec_is_branch;
    vlSelf->__PVT__dec_is_jal = __Vdly__dec_is_jal;
    if (__Vdlyvset__Register_File__DOT__x__v0) {
        vlSelf->__PVT__Register_File__DOT__x[__Vdlyvdim0__Register_File__DOT__x__v0] 
            = __Vdlyvval__Register_File__DOT__x__v0;
    }
    if (__Vdlyvset__Register_File__DOT__x__v1) {
        vlSelf->__PVT__Register_File__DOT__x[0U] = 0U;
        vlSelf->__PVT__Register_File__DOT__x[2U] = 0U;
    }
    vlSelf->__PVT__mem2wbk_rd_addr = __Vdly__mem2wbk_rd_addr;
    if (vlSymsp->TOP.rst_n) {
        vlSelf->fet2dec_pc = ((IData)(vlSelf->__Vcellinp__Fetch__stall_i)
                               ? vlSelf->fet2dec_pc
                               : vlSelf->__PVT__Program_Counter__DOT__pc_r);
        vlSelf->__Vdly__Program_Counter__DOT__pc_r 
            = (((IData)(vlSelf->stall_pipeline) | ((IData)(vlSelf->dec2plc_load_hazard) 
                                                   & (~ (IData)(vlSelf->irq_taken))))
                ? vlSelf->__PVT__Program_Counter__DOT__pc_r
                : ((IData)(vlSelf->irq_taken) ? ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__trap_to_M)
                                                  ? 
                                                 ((1U 
                                                   & ((0U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r)) 
                                                      | (~ 
                                                         (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mcause_d 
                                                          >> 0x1fU))))
                                                   ? 
                                                  (0xfffffffcU 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r)
                                                   : 
                                                  ((0xfffffffcU 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r) 
                                                   + 
                                                   (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mcause_d 
                                                    << 2U)))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r))
                                                   ? 
                                                  (0xfffffffcU 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__stvec_r)
                                                   : 
                                                  ((0xfffffffcU 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__stvec_r) 
                                                   + 
                                                   (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__scause_d 
                                                    << 2U))))
                    : ((IData)(vlSelf->__PVT__exe_is_fencei)
                        ? vlSelf->__PVT__dec_pc : (
                                                   ((IData)(vlSelf->__PVT__exe_branch_taken) 
                                                    & (~ (IData)(vlSelf->__PVT__dec_branch_hit)))
                                                    ? vlSelf->__PVT__Execute__DOT__alu_result
                                                    : 
                                                   ((IData)(vlSelf->__PVT__exe_branch_misprediction)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__dec_branch_decision)
                                                      ? 
                                                     ((IData)(4U) 
                                                      + vlSelf->__PVT__dec_pc)
                                                      : vlSelf->__PVT__Execute__DOT__alu_result)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r)
                                                      ? 
                                                     ((3U 
                                                       == (IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_csr_addr_r))
                                                       ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mepc_r
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_csr_addr_r))
                                                        ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__sepc_r
                                                        : 0U))
                                                      : 
                                                     (((IData)(vlSelf->__PVT__bpu_branch_hit) 
                                                       & (IData)(vlSelf->__PVT__bpu_branch_decision))
                                                       ? (IData)(
                                                                 (vlSelf->Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o 
                                                                  >> 0x20U))
                                                       : vlSelf->__PVT__Program_Counter__DOT__pc_increment)))))));
    } else {
        vlSelf->fet2dec_pc = 0U;
        vlSelf->__Vdly__Program_Counter__DOT__pc_r 
            = vlSymsp->TOP.main_memory_addr;
    }
    vlSelf->__PVT__dec_branch_decision = __Vdly__dec_branch_decision;
    vlSelf->__PVT__dec_pc = __Vdly__dec_pc;
    vlSelf->__PVT__dec_branch_hit = __Vdly__dec_branch_hit;
    vlSelf->__PVT__exe2mem_xcpt_valid = __Vdly__exe2mem_xcpt_valid;
    vlSelf->__PVT__dec2exe_re = __Vdly__dec2exe_re;
    vlSelf->__PVT__dec2exe_we = __Vdly__dec2exe_we;
    vlSelf->__PVT__dec2exe_imm = __Vdly__dec2exe_imm;
    vlSelf->__PVT__fet2dec_xcpt_valid = 0U;
    vlSelf->__PVT__fet2dec_xcpt_cause = 0U;
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__quotient 
        = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U];
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__remainder 
        = ((vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[2U] 
            << 0x1fU) | (vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U] 
                         >> 1U));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul_add 
        = (1U & vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U]);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__div_sub 
        = (vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U] 
           >= vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32);
    vlSelf->__PVT__fet2dec_xcpt_tval = 0U;
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[0U] 
        = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U];
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & (((4U & (IData)(vlSelf->__PVT__dec2exe_operation_sel))
                                       ? (- (QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32)))
                                       : (QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32))) 
                                     + (QData)((IData)(
                                                       vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])))));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & (((4U & (IData)(vlSelf->__PVT__dec2exe_operation_sel))
                                        ? (- (QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32)))
                                        : (QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32))) 
                                      + (QData)((IData)(
                                                        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])))) 
                   >> 0x20U));
    vlSelf->__PVT__Execute__DOT__alu_operation = ((
                                                   ((IData)(vlSelf->__PVT__dec_is_branch) 
                                                    | (IData)(vlSelf->__PVT__dec_is_jal)) 
                                                   | (IData)(vlSelf->__PVT__dec_is_jalr))
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__dec2exe_operation_sel));
    vlSelf->__PVT__Register_File__DOT__we = ((IData)(vlSelf->__PVT__mem2wbk_rd_we) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__mem2wbk_rd_addr)));
    vlSelf->__PVT__Fetch__DOT__stall_delay = vlSelf->__Vcellinp__Fetch__stall_i;
    vlSelf->__PVT__Writeback__DOT__rd_data = ((0U == (IData)(vlSelf->__PVT__mem2wbk_rd_input_sel))
                                               ? ((IData)(vlSelf->__PVT__mem2wbk_signex_sel)
                                                   ? 
                                                  (0xffU 
                                                   & vlSelf->__PVT__mem2wbk_aligned_data)
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->__PVT__mem2wbk_aligned_data 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->__PVT__mem2wbk_aligned_data)))
                                               : ((1U 
                                                   == (IData)(vlSelf->__PVT__mem2wbk_rd_input_sel))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mem2wbk_signex_sel)
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__mem2wbk_aligned_data)
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->__PVT__mem2wbk_aligned_data 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->__PVT__mem2wbk_aligned_data)))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__mem2wbk_rd_input_sel))
                                                    ? vlSelf->__PVT__mem2wbk_aligned_data
                                                    : vlSelf->__PVT__mem2wbk_p_data)));
    vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data 
        = ((((IData)(vlSelf->__PVT__exe2mem_rd_we) 
             & ((IData)(vlSelf->__PVT__dec2fwd_rs2_addr) 
                == (IData)(vlSelf->__PVT__exe2mem_rd_addr))) 
            & (0U != (IData)(vlSelf->__PVT__exe2mem_rd_addr)))
            ? vlSelf->__PVT__exe2mem_p_data : ((((IData)(vlSelf->__PVT__mem2wbk_rd_we) 
                                                 & ((IData)(vlSelf->__PVT__dec2fwd_rs2_addr) 
                                                    == (IData)(vlSelf->__PVT__mem2wbk_rd_addr))) 
                                                & (0U 
                                                   != (IData)(vlSelf->__PVT__mem2wbk_rd_addr)))
                                                ? vlSelf->__PVT__Writeback__DOT__rd_data
                                                : vlSelf->__PVT__dec2fwd_rs2_data));
    vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
        = ((((IData)(vlSelf->__PVT__exe2mem_rd_we) 
             & ((IData)(vlSelf->__PVT__dec2fwd_rs1_addr) 
                == (IData)(vlSelf->__PVT__exe2mem_rd_addr))) 
            & (0U != (IData)(vlSelf->__PVT__exe2mem_rd_addr)))
            ? vlSelf->__PVT__exe2mem_p_data : ((((IData)(vlSelf->__PVT__mem2wbk_rd_we) 
                                                 & ((IData)(vlSelf->__PVT__dec2fwd_rs1_addr) 
                                                    == (IData)(vlSelf->__PVT__mem2wbk_rd_addr))) 
                                                & (0U 
                                                   != (IData)(vlSelf->__PVT__mem2wbk_rd_addr)))
                                                ? vlSelf->__PVT__Writeback__DOT__rd_data
                                                : vlSelf->__PVT__dec2fwd_rs1_data));
    if ((1U & (~ ((~ (IData)(vlSymsp->TOP.rst_n)) | 
                  ((0U == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S)) 
                   & (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req)))))) {
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul1 
            = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul0;
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul0 
            = ((QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_a_r)) 
               * (QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_b_r)));
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_a_r 
            = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_a;
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_b_r 
            = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_b;
    }
    if (vlSymsp->TOP.rst_n) {
        vlSelf->__PVT__dS = vlSelf->__PVT__dS_nxt;
        if ((1U & (~ (IData)(vlSelf->stall_pipeline)))) {
            vlSelf->__PVT__Branch_Prediction_Unit__DOT__BHT_hit_ff 
                = vlSelf->__PVT__bpu_branch_hit;
        }
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S 
            = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S_nxt;
    } else {
        vlSelf->__PVT__dS = 0U;
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__BHT_hit_ff = 0U;
        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S = 0U;
    }
    vlSelf->__PVT__Execute__DOT__inputB = ((0U == (IData)(vlSelf->__PVT__dec2exe_inB_sel))
                                            ? vlSelf->__PVT__dec2exe_imm
                                            : ((1U 
                                                == (IData)(vlSelf->__PVT__dec2exe_inB_sel))
                                                ? vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__dec2exe_inB_sel))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data))
                                                    : 0U)));
    vlSelf->__PVT__Execute__DOT__csr_inputB = ((4U 
                                                & (IData)(vlSelf->__PVT__dec2exe_operation_sel))
                                                ? (IData)(vlSelf->__PVT__dec2exe_csr_imm)
                                                : vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data);
    vlSelf->__PVT__Execute__DOT__inputA = ((0U == (IData)(vlSelf->__PVT__dec2exe_inA_sel))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->__PVT__dec2exe_inA_sel))
                                             ? vlSelf->__PVT__dec_pc
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__dec2exe_inA_sel))
                                                 ? vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data
                                                 : 0U)));
    vlSelf->__PVT__exe_branch_taken = ((((IData)(vlSelf->__PVT__dec_is_branch) 
                                         & (((((((0U 
                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                 & ((vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                                     == vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                     ? 1U
                                                     : 0U)) 
                                                | ((1U 
                                                    == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                   & ((vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                                       != vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                       ? 1U
                                                       : 0U))) 
                                               | ((4U 
                                                   == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                  & (VL_LTS_III(32, vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data, vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                      ? 1U
                                                      : 0U))) 
                                              | ((5U 
                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                 & (VL_GTES_III(32, vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data, vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                     ? 1U
                                                     : 0U))) 
                                             | ((6U 
                                                 == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                & ((vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                                    < vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                    ? 1U
                                                    : 0U))) 
                                            | ((7U 
                                                == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                               & ((vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                                   >= vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                   ? 1U
                                                   : 0U)))) 
                                        | (IData)(vlSelf->__PVT__dec_is_jal)) 
                                       | (IData)(vlSelf->__PVT__dec_is_jalr));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_b_neg 
        = ((vlSelf->__PVT__Execute__DOT__inputB >> 0x1fU) 
           & (((1U == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
               | (4U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
              | (6U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))));
    vlSelf->__PVT__Execute__DOT__alu_result = (((((
                                                   ((((- (IData)(
                                                                 (0U 
                                                                  == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                      & (vlSelf->__PVT__Execute__DOT__inputA 
                                                         + vlSelf->__PVT__Execute__DOT__inputB)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                        & (vlSelf->__PVT__Execute__DOT__inputA 
                                                           << 
                                                           (0x1fU 
                                                            & vlSelf->__PVT__Execute__DOT__inputB)))) 
                                                    | ((- (IData)(
                                                                  (2U 
                                                                   == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                       & (VL_LTS_III(32, vlSelf->__PVT__Execute__DOT__inputA, vlSelf->__PVT__Execute__DOT__inputB)
                                                           ? 1U
                                                           : 0U))) 
                                                   | ((- (IData)(
                                                                 (3U 
                                                                  == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                      & ((vlSelf->__PVT__Execute__DOT__inputA 
                                                          < vlSelf->__PVT__Execute__DOT__inputB)
                                                          ? 1U
                                                          : 0U))) 
                                                  | ((- (IData)(
                                                                (4U 
                                                                 == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                     & (vlSelf->__PVT__Execute__DOT__inputA 
                                                        ^ vlSelf->__PVT__Execute__DOT__inputB))) 
                                                 | ((- (IData)(
                                                               (5U 
                                                                == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                    & ((IData)(vlSelf->__PVT__dec2exe_shift_sel)
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__Execute__DOT__inputA, 
                                                                      (0x1fU 
                                                                       & vlSelf->__PVT__Execute__DOT__inputB))
                                                        : 
                                                       (vlSelf->__PVT__Execute__DOT__inputA 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->__PVT__Execute__DOT__inputB))))) 
                                                | ((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                   & (vlSelf->__PVT__Execute__DOT__inputA 
                                                      | vlSelf->__PVT__Execute__DOT__inputB))) 
                                               | ((- (IData)(
                                                             (7U 
                                                              == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                  & (vlSelf->__PVT__Execute__DOT__inputA 
                                                     & vlSelf->__PVT__Execute__DOT__inputB)));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg 
        = ((vlSelf->__PVT__Execute__DOT__inputA >> 0x1fU) 
           & ((((1U == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                | (2U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
               | (4U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
              | (6U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))));
    vlSelf->__PVT__exe_branch_misprediction = ((IData)(vlSelf->__PVT__dec_branch_hit) 
                                               & ((IData)(vlSelf->__PVT__dec_branch_decision) 
                                                  ^ (IData)(vlSelf->__PVT__exe_branch_taken)));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__signed_adjust 
        = ((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg) 
           ^ (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_b_neg));
    vlSelf->__PVT__Pipeline_Control__DOT__branch_flush 
        = (((IData)(vlSelf->__PVT__exe_branch_taken) 
            & (~ (IData)(vlSelf->__PVT__dec_branch_hit))) 
           | (IData)(vlSelf->__PVT__exe_branch_misprediction));
    __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num 
        = vlSelf->__PVT__Execute__DOT__inputA;
    __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__Vfuncout 
        = ((__Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num 
            >> 0x1fU) ? (- __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num)
            : __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_a 
        = ((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg)
            ? __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__Vfuncout
            : vlSelf->__PVT__Execute__DOT__inputA);
    __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num 
        = vlSelf->__PVT__Execute__DOT__inputB;
    __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__Vfuncout 
        = ((__Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num 
            >> 0x1fU) ? (- __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num)
            : __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_b 
        = ((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_b_neg)
            ? __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__Vfuncout
            : vlSelf->__PVT__Execute__DOT__inputB);
    vlSelf->__PVT__Execute__DOT__muldiv_req = ((IData)(vlSelf->__PVT__dec2exe_alu_muldiv_sel) 
                                               & (~ (IData)(vlSelf->__PVT__Execute__DOT__muldiv_ready)));
}

VL_INLINE_OPT void Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__3(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__3\n"); );
    // Body
    vlSelf->__PVT__irq_enable = (1U & (~ (((0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel)) 
                                           & ((IData)(vlSelf->__PVT__exe_we) 
                                              | (IData)(vlSelf->__PVT__exe_re))) 
                                          | (IData)(vlSelf->__PVT__exe2mem_is_amo))));
    if (vlSelf->__PVT__iS) {
        if (vlSelf->__PVT__iS) {
            vlSelf->__PVT__iS_nxt = (1U & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)));
        }
    } else {
        vlSelf->__PVT__iS_nxt = (1U & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)));
    }
    vlSelf->__Vcellinp__CSR__sft_irq_i = ((0U != vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                           [4U]) & (IData)(vlSelf->__PVT__irq_enable));
    vlSelf->__Vcellinp__CSR__ext_irq_i = ((IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__irq) 
                                          & (IData)(vlSelf->__PVT__irq_enable));
    vlSelf->__Vcellinp__CSR__tmr_irq_i = ((((((QData)((IData)(
                                                              vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                                              [1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                                               [0U]))) 
                                            >= vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__mtimecmp) 
                                           & (0U != vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__mtimecmp)) 
                                          & (IData)(vlSelf->__PVT__irq_enable));
}

VL_INLINE_OPT void Vaquila_testharness_core_top___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0\n"); );
    // Body
    vlSelf->__PVT__nxt_unwb_PC = ((IData)(vlSelf->__PVT__Writeback__DOT__xcpt_valid_r)
                                   ? vlSelf->__PVT__mem2wbk_pc
                                   : ((IData)(vlSelf->__PVT__exe2mem_fetch_valid)
                                       ? vlSelf->__PVT__exe2mem_pc
                                       : ((IData)(vlSelf->__PVT__dec2exe_fetch_valid)
                                           ? vlSelf->__PVT__dec_pc
                                           : ((IData)(vlSelf->__PVT__fet2dec_valid)
                                               ? vlSelf->fet2dec_pc
                                               : vlSelf->__PVT__Program_Counter__DOT__pc_r))));
    vlSelf->__PVT__code_req_o = (1U & ((~ (IData)(vlSelf->__PVT__iS)) 
                                       | (vlSelf->__PVT__Program_Counter__DOT__pc_r 
                                          == vlSymsp->TOP.main_memory_addr)));
    vlSelf->__PVT__fet2dec_instr = ((IData)(vlSymsp->TOP.rst_n)
                                     ? ((IData)(vlSelf->__PVT__fet2dec_valid)
                                         ? ((IData)(vlSelf->__PVT__Fetch__DOT__stall_delay)
                                             ? vlSelf->__PVT__Fetch__DOT__instruction_delay
                                             : ((IData)(vlSelf->__PVT__Fetch__DOT__flush_delay)
                                                 ? 0x13U
                                                 : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_code))
                                         : 0x13U) : 0x13U);
    vlSelf->irq_taken = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__irq_taken) 
                         | (IData)(vlSelf->__PVT__csr_irq_taken_r));
    vlSelf->__PVT__Decode__DOT__rv32_jal = (IData)(
                                                   (0x6cU 
                                                    == 
                                                    (0x7cU 
                                                     & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_lui = (IData)(
                                                   (0x34U 
                                                    == 
                                                    (0x7cU 
                                                     & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_auipc = (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x7cU 
                                                       & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_op_imm = (IData)(
                                                      (0x10U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_jalr = (IData)(
                                                    (0x64U 
                                                     == 
                                                     (0x7cU 
                                                      & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_load = (IData)(
                                                    (0U 
                                                     == 
                                                     (0x7cU 
                                                      & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_amo = (IData)(
                                                   (0x2cU 
                                                    == 
                                                    (0x7cU 
                                                     & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_store = (IData)(
                                                     (0x20U 
                                                      == 
                                                      (0x7cU 
                                                       & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_branch = (IData)(
                                                      (0x60U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_op = (IData)((0x30U 
                                                   == 
                                                   (0x7cU 
                                                    & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_miscmem = (IData)(
                                                       (0xcU 
                                                        == 
                                                        (0x7cU 
                                                         & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_system = (IData)(
                                                      (0x70U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__Vcellinp__Memory__flush_i = ((IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r) 
                                           | (IData)(vlSelf->irq_taken));
    vlSelf->__Vcellinp__Execute__flush_i = (((IData)(vlSelf->__PVT__exe_is_fencei) 
                                             | (IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r)) 
                                            | (IData)(vlSelf->irq_taken));
    vlSelf->__Vcellinp__Fetch__flush_i = ((((IData)(vlSelf->__PVT__Pipeline_Control__DOT__branch_flush) 
                                            | (IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r)) 
                                           | (IData)(vlSelf->__PVT__exe_is_fencei)) 
                                          | (IData)(vlSelf->irq_taken));
    vlSelf->__PVT__Decode__DOT__is_s_type = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_store) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__is_b_type = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_branch) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_fence = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_miscmem) 
                                              & (0U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_csr = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                            & (0U != 
                                               (7U 
                                                & (vlSelf->__PVT__fet2dec_instr 
                                                   >> 0xcU))));
    vlSelf->__PVT__Decode__DOT__rv32_csrrs = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                              & (0x2000U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_csrrc = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                              & (0x3000U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__is_r_type = (((IData)(vlSelf->__PVT__Decode__DOT__rv32_op) 
                                              | (IData)(vlSelf->__PVT__Decode__DOT__rv32_system)) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_sys_op = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->dec2plc_load_hazard = (((((0x1fU & (vlSelf->__PVT__fet2dec_instr 
                                                >> 0xfU)) 
                                      == (IData)(vlSelf->__PVT__dec2exe_rd_addr)) 
                                     & (((((((IData)(vlSelf->__PVT__Decode__DOT__is_r_type) 
                                             | (IData)(vlSelf->__PVT__Decode__DOT__is_s_type)) 
                                            | (IData)(vlSelf->__PVT__Decode__DOT__is_b_type)) 
                                           | ((((IData)(vlSelf->__PVT__Decode__DOT__rv32_load) 
                                                | (IData)(vlSelf->__PVT__Decode__DOT__rv32_op_imm)) 
                                               | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jalr)) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->__PVT__fet2dec_instr)))) 
                                          | ((IData)(vlSelf->__PVT__Decode__DOT__rv32_fence) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & vlSelf->__PVT__fet2dec_instr)))) 
                                         | (((((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                               & (0x1000U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->__PVT__fet2dec_instr))) 
                                              | (IData)(vlSelf->__PVT__Decode__DOT__rv32_csrrs)) 
                                             | (IData)(vlSelf->__PVT__Decode__DOT__rv32_csrrc)) 
                                            & (3U == 
                                               (3U 
                                                & vlSelf->__PVT__fet2dec_instr)))) 
                                        | ((IData)(vlSelf->__PVT__Decode__DOT__rv32_amo) 
                                           & (3U == 
                                              (3U & vlSelf->__PVT__fet2dec_instr))))) 
                                    | (((0x1fU & (vlSelf->__PVT__fet2dec_instr 
                                                  >> 0x14U)) 
                                        == (IData)(vlSelf->__PVT__dec2exe_rd_addr)) 
                                       & (((IData)(vlSelf->__PVT__Decode__DOT__is_r_type) 
                                           | (IData)(vlSelf->__PVT__Decode__DOT__is_s_type)) 
                                          | (IData)(vlSelf->__PVT__Decode__DOT__is_b_type)))) 
                                   & (IData)(vlSelf->__PVT__dec2exe_re));
    vlSelf->__PVT__Decode__DOT__rv32_ecall = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sys_op) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->__PVT__fet2dec_instr 
                                                  >> 0x14U)));
    vlSelf->__PVT__Decode__DOT__rv32_mret = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sys_op) 
                                             & (0x302U 
                                                == 
                                                (vlSelf->__PVT__fet2dec_instr 
                                                 >> 0x14U)));
    vlSelf->__PVT__Decode__DOT__rv32_sret = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sys_op) 
                                             & (0x102U 
                                                == 
                                                (vlSelf->__PVT__fet2dec_instr 
                                                 >> 0x14U)));
    vlSelf->__PVT__Decode__DOT__rv32_ebreak = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sys_op) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->__PVT__fet2dec_instr 
                                                   >> 0x14U)));
    vlSelf->__PVT__Decode__DOT__rv32_illegal_instr_xcpt 
        = (1U & ((((~ (((((((((((((IData)(vlSelf->__PVT__Decode__DOT__rv32_op) 
                                  | (IData)(vlSelf->__PVT__Decode__DOT__rv32_op_imm)) 
                                 | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jal)) 
                                | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jalr)) 
                               | (IData)(vlSelf->__PVT__Decode__DOT__rv32_load)) 
                              | (IData)(vlSelf->__PVT__Decode__DOT__rv32_store)) 
                             | (IData)(vlSelf->__PVT__Decode__DOT__rv32_branch)) 
                            | (IData)(vlSelf->__PVT__Decode__DOT__rv32_lui)) 
                           | (IData)(vlSelf->__PVT__Decode__DOT__rv32_auipc)) 
                          | (IData)(vlSelf->__PVT__Decode__DOT__rv32_miscmem)) 
                         | (IData)(vlSelf->__PVT__Decode__DOT__rv32_system)) 
                        | (IData)(vlSelf->__PVT__Decode__DOT__rv32_amo)) 
                       & (3U == (3U & vlSelf->__PVT__fet2dec_instr)))) 
                   | (((IData)(vlSelf->__PVT__Decode__DOT__rv32_op_imm) 
                       & ((1U == (7U & (vlSelf->__PVT__fet2dec_instr 
                                        >> 0xcU))) 
                          | (5U == (7U & (vlSelf->__PVT__fet2dec_instr 
                                          >> 0xcU))))) 
                      & (vlSelf->__PVT__fet2dec_instr 
                         >> 0x19U))) | (((IData)(vlSelf->__PVT__Decode__DOT__rv32_mret) 
                                         & (3U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))) 
                                        | ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sret) 
                                           & (0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))))) 
                 | ((IData)(vlSelf->__PVT__Decode__DOT__rv32_csr) 
                    & (((((((0xc01U == (vlSelf->__PVT__fet2dec_instr 
                                        >> 0x14U)) 
                            | (0xc81U == (vlSelf->__PVT__fet2dec_instr 
                                          >> 0x14U))) 
                           | (0x14dU == (vlSelf->__PVT__fet2dec_instr 
                                         >> 0x14U))) 
                          | (0x15dU == (vlSelf->__PVT__fet2dec_instr 
                                        >> 0x14U))) 
                         | (0xda0U == (vlSelf->__PVT__fet2dec_instr 
                                       >> 0x14U))) 
                        | (0xfb0U == (vlSelf->__PVT__fet2dec_instr 
                                      >> 0x14U))) | 
                       (0x30cU == (vlSelf->__PVT__fet2dec_instr 
                                   >> 0x14U))))));
    vlSelf->dec_unsupported_instr = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_fence) 
                                     | (IData)(vlSelf->__PVT__Decode__DOT__rv32_ebreak));
    vlSelf->__PVT__Decode__DOT__xcpt_valid = (((IData)(vlSelf->__PVT__Decode__DOT__rv32_ecall) 
                                               | (IData)(vlSelf->__PVT__Decode__DOT__rv32_ebreak)) 
                                              | (IData)(vlSelf->__PVT__Decode__DOT__rv32_illegal_instr_xcpt));
    vlSelf->plc2dec_flush = (((((IData)(vlSelf->__PVT__Pipeline_Control__DOT__branch_flush) 
                                | (IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r)) 
                               | (IData)(vlSelf->__PVT__exe_is_fencei)) 
                              | (IData)(vlSelf->dec2plc_load_hazard)) 
                             | (IData)(vlSelf->dec_unsupported_instr));
    vlSelf->__Vcellinp__Decode__flush_i = ((IData)(vlSelf->plc2dec_flush) 
                                           | (IData)(vlSelf->irq_taken));
}

extern const VlUnpacked<CData/*1:0*/, 256> Vaquila_testharness__ConstPool__TABLE_h2f7e189b_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vaquila_testharness__ConstPool__TABLE_h7b99fb3e_0;

VL_INLINE_OPT void Vaquila_testharness_core_top___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->__PVT__Execute__DOT__muldiv_req) 
                     << 7U) | ((0x40U & ((~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)) 
                                         << 6U)) | 
                               (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_d_ready) 
                                 << 5U) | (((IData)(vlSelf->__PVT__mem_align_exception) 
                                            << 4U) 
                                           | (((IData)(vlSelf->__PVT__exe_we) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__exe_re) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->__PVT__dS)))))));
    vlSelf->__PVT__dS_nxt = Vaquila_testharness__ConstPool__TABLE_h2f7e189b_0
        [__Vtableidx1];
    vlSelf->__PVT__data_read_mem = ((2U == (IData)(vlSelf->__PVT__dS))
                                     ? vlSelf->__PVT__data_read_reg
                                     : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_d_mem2core);
    vlSelf->__PVT__stall_data_fetch = ((1U == (IData)(vlSelf->__PVT__dS_nxt)) 
                                       & (~ (IData)(vlSelf->__PVT__exe_is_fencei)));
    vlSelf->stall_pipeline = (1U & (((~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)) 
                                     | (IData)(vlSelf->__PVT__stall_data_fetch)) 
                                    | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req)));
    vlSelf->__Vcellinp__Execute__stall_i = (1U & ((~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)) 
                                                  | (IData)(vlSelf->__PVT__stall_data_fetch)));
    vlSelf->__Vcellinp__Fetch__stall_i = ((IData)(vlSelf->stall_pipeline) 
                                          | ((IData)(vlSelf->dec2plc_load_hazard) 
                                             & (~ (IData)(vlSelf->irq_taken))));
    vlSelf->__PVT__Branch_Prediction_Unit__DOT__we 
        = (((~ (IData)(vlSelf->stall_pipeline)) & ((IData)(vlSelf->__PVT__dec_is_branch) 
                                                   | (IData)(vlSelf->__PVT__dec_is_jal))) 
           & (~ (IData)(vlSelf->__PVT__Branch_Prediction_Unit__DOT__BHT_hit)));
    __Vtableidx2 = (((0U == vlSelf->__PVT__Execute__DOT__inputB) 
                     << 7U) | (((0U == vlSelf->__PVT__Execute__DOT__inputA) 
                                << 6U) | (((IData)(vlSelf->__PVT__Execute__DOT__muldiv_req) 
                                           << 5U) | 
                                          ((0x10U & 
                                            ((((((0U 
                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                 | (1U 
                                                    == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
                                                | (2U 
                                                   == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
                                               | (3U 
                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel)))
                                               ? (3U 
                                                  == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter))
                                               : (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__cnt))))) 
                                             << 4U)) 
                                           | (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                               << 3U) 
                                              | (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S))))));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S_nxt 
        = Vaquila_testharness__ConstPool__TABLE_h7b99fb3e_0
        [__Vtableidx2];
}
