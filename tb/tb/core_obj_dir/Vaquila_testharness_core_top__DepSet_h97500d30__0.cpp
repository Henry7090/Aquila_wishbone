// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_core_top.h"

VL_INLINE_OPT void Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1\n"); );
    // Body
    vlSelf->__PVT__exe_is_fencei = vlSelf->__Vdly__exe_is_fencei;
    vlSelf->__PVT__exe_we = vlSelf->__Vdly__exe_we;
    vlSelf->__PVT__exe2mem_amo_type = vlSelf->__Vdly__exe2mem_amo_type;
    vlSelf->__PVT__Writeback__DOT__xcpt_tval_r = vlSelf->__Vdly__Writeback__DOT__xcpt_tval_r;
    vlSelf->__PVT__Writeback__DOT__xcpt_cause_r = vlSelf->__Vdly__Writeback__DOT__xcpt_cause_r;
    vlSelf->__PVT__Writeback__DOT__xcpt_valid_r = vlSelf->__Vdly__Writeback__DOT__xcpt_valid_r;
    vlSelf->__PVT__mem2wbk_csr_we = vlSelf->__Vdly__mem2wbk_csr_we;
    vlSelf->__PVT__mem2wbk_csr_addr = vlSelf->__Vdly__mem2wbk_csr_addr;
    vlSelf->__PVT__mem2wbk_csr_data = vlSelf->__Vdly__mem2wbk_csr_data;
    vlSelf->__PVT__Writeback__DOT__sys_jump_r = vlSelf->__Vdly__Writeback__DOT__sys_jump_r;
    vlSelf->__PVT__Writeback__DOT__sys_jump_csr_addr_r 
        = vlSelf->__Vdly__Writeback__DOT__sys_jump_csr_addr_r;
    vlSelf->__PVT__data_req_o = ((0U == (IData)(vlSelf->__PVT__dS)) 
                                 & ((IData)(vlSelf->__PVT__exe_re) 
                                    | (IData)(vlSelf->__PVT__exe_we)));
    vlSelf->__PVT__Forwarding_Unit__DOT__correct_csr_data 
        = (((IData)(vlSelf->__PVT__exe2mem_csr_we) 
            & ((IData)(vlSelf->__PVT__dec2fwd_csr_addr) 
               == (IData)(vlSelf->__PVT__exe2mem_csr_addr)))
            ? vlSelf->__PVT__exe2mem_csr_data : (((IData)(vlSelf->__PVT__mem2wbk_csr_we) 
                                                  & ((IData)(vlSelf->__PVT__dec2fwd_csr_addr) 
                                                     == (IData)(vlSelf->__PVT__mem2wbk_csr_addr)))
                                                  ? vlSelf->__PVT__mem2wbk_csr_data
                                                  : vlSelf->__PVT__dec2fwd_csr_data));
}

VL_INLINE_OPT void Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__2(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__2\n"); );
    // Body
    vlSelf->__PVT__Program_Counter__DOT__pc_r = vlSelf->__Vdly__Program_Counter__DOT__pc_r;
    vlSelf->__PVT__exe2mem_addr = vlSelf->__Vdly__exe2mem_addr;
    vlSelf->__PVT__exe2mem_is_amo = vlSelf->__Vdly__exe2mem_is_amo;
    vlSelf->__PVT__Program_Counter__DOT__pc_increment 
        = ((IData)(4U) + vlSelf->__PVT__Program_Counter__DOT__pc_r);
    vlSelf->__PVT__bpu_branch_decision = (1U & (vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                                                [(0x3fU 
                                                  & (vlSelf->__PVT__Program_Counter__DOT__pc_r 
                                                     >> 2U))] 
                                                >> 1U));
    vlSelf->Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o 
        = vlSelf->__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM
        [(0x3fU & (vlSelf->__PVT__Program_Counter__DOT__pc_r 
                   >> 2U))];
    if ((2U & vlSelf->__PVT__exe2mem_addr)) {
        if ((1U & vlSelf->__PVT__exe2mem_addr)) {
            if ((0U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
                vlSelf->__PVT__mem_dataout = (vlSelf->__PVT__exe2mem_rs2_data 
                                              << 0x18U);
                vlSelf->__PVT__mem_byte_sel = 8U;
            } else {
                vlSelf->__PVT__mem_dataout = 0U;
                vlSelf->__PVT__mem_byte_sel = 0U;
            }
            vlSelf->__PVT__mem_align_exception = (0U 
                                                  != (IData)(vlSelf->__PVT__exe2mem_dsize_sel));
        } else {
            if ((0U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
                vlSelf->__PVT__mem_dataout = (0xff0000U 
                                              & (vlSelf->__PVT__exe2mem_rs2_data 
                                                 << 0x10U));
                vlSelf->__PVT__mem_byte_sel = 4U;
            } else if ((1U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
                vlSelf->__PVT__mem_dataout = (vlSelf->__PVT__exe2mem_rs2_data 
                                              << 0x10U);
                vlSelf->__PVT__mem_byte_sel = 0xcU;
            } else {
                vlSelf->__PVT__mem_dataout = 0U;
                vlSelf->__PVT__mem_byte_sel = 0U;
            }
            vlSelf->__PVT__mem_align_exception = ((0U 
                                                   != (IData)(vlSelf->__PVT__exe2mem_dsize_sel)) 
                                                  & (1U 
                                                     != (IData)(vlSelf->__PVT__exe2mem_dsize_sel)));
        }
    } else if ((1U & vlSelf->__PVT__exe2mem_addr)) {
        if ((0U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
            vlSelf->__PVT__mem_dataout = (0xff00U & 
                                          (vlSelf->__PVT__exe2mem_rs2_data 
                                           << 8U));
            vlSelf->__PVT__mem_byte_sel = 2U;
        } else {
            vlSelf->__PVT__mem_dataout = 0U;
            vlSelf->__PVT__mem_byte_sel = 0U;
        }
        vlSelf->__PVT__mem_align_exception = (0U != (IData)(vlSelf->__PVT__exe2mem_dsize_sel));
    } else {
        if ((0U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
            vlSelf->__PVT__mem_dataout = (0xffU & vlSelf->__PVT__exe2mem_rs2_data);
            vlSelf->__PVT__mem_byte_sel = 1U;
        } else if ((1U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
            vlSelf->__PVT__mem_dataout = (0xffffU & vlSelf->__PVT__exe2mem_rs2_data);
            vlSelf->__PVT__mem_byte_sel = 3U;
        } else if ((2U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
            vlSelf->__PVT__mem_dataout = vlSelf->__PVT__exe2mem_rs2_data;
            vlSelf->__PVT__mem_byte_sel = 0xfU;
        } else {
            vlSelf->__PVT__mem_dataout = 0U;
            vlSelf->__PVT__mem_byte_sel = 0U;
        }
        vlSelf->__PVT__mem_align_exception = ((0U != (IData)(vlSelf->__PVT__exe2mem_dsize_sel)) 
                                              & ((1U 
                                                  != (IData)(vlSelf->__PVT__exe2mem_dsize_sel)) 
                                                 & (2U 
                                                    != (IData)(vlSelf->__PVT__exe2mem_dsize_sel))));
    }
    vlSelf->__PVT__bpu_branch_hit = ((IData)(vlSelf->Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o) 
                                     == vlSelf->__PVT__Program_Counter__DOT__pc_r);
    vlSelf->__PVT__mem2wbk_xcpt_valid = (((IData)(vlSelf->__PVT__mem_align_exception) 
                                          & ((IData)(vlSelf->__PVT__exe_we) 
                                             | (IData)(vlSelf->__PVT__exe_re))) 
                                         | (IData)(vlSelf->__PVT__exe2mem_xcpt_valid));
    if (((IData)(vlSelf->__PVT__mem_align_exception) 
         & ((IData)(vlSelf->__PVT__exe_we) | (IData)(vlSelf->__PVT__exe_re)))) {
        vlSelf->__PVT__mem2wbk_xcpt_cause = (0xfU & 
                                             ((IData)(vlSelf->__PVT__exe_we)
                                               ? 6U
                                               : 4U));
        vlSelf->__PVT__mem2wbk_xcpt_tval = vlSelf->__PVT__exe2mem_addr;
    } else {
        vlSelf->__PVT__mem2wbk_xcpt_cause = (0xfU & (IData)(vlSelf->__PVT__exe2mem_xcpt_cause));
        vlSelf->__PVT__mem2wbk_xcpt_tval = vlSelf->__PVT__exe2mem_xcpt_tval;
    }
}
