// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_dp_ram.h"

VL_ATTR_COLD void Vaquila_testharness_dp_ram___ctor_var_reset(Vaquila_testharness_dp_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__strobe_imem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_imem_i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->__PVT__rdata_imem_o);
    vlSelf->__PVT__done_imem_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__strobe_dmem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_dmem_i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->__PVT__wdata_dmem_i);
    VL_RAND_RESET_W(256, vlSelf->__PVT__rdata_dmem_o);
    vlSelf->__PVT__rw_dmem_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__done_dmem_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_cur_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__imem_next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmem_cur_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dmem_next_state = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<268435456; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__imem_delay_counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dmem_delay_counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->__Vdly__rdata_dmem_o);
}
