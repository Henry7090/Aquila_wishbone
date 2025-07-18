// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_csr_file.h"

VL_ATTR_COLD void Vaquila_testharness_csr_file___ctor_var_reset(Vaquila_testharness_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_testharness_csr_file___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_raddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_waddr_i = VL_RAND_RESET_I(12);
    vlSelf->__PVT__csr_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ext_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tmr_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sft_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irq_taken_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_handler_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__nxt_unwb_PC_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sys_jump_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_addr_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sys_jump_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__privilege_level_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__xcpt_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xcpt_cause_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__xcpt_tval_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mstatus_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__misa_r = VL_RAND_RESET_I(32);
    vlSelf->mie_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mip_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mtvec_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mepc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcause_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcause_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mtval_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__medeleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mideleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mcycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__satp_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stvec_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sscratch_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sepc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__scause_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__scause_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stval_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sedeleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sideleg_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cycle_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__privilege_level_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__trap_to_M = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interrupt_cause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__irq_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sret_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mret_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sys_jump_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_flush_o = VL_RAND_RESET_I(1);
}
