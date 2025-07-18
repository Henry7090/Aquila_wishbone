// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness___024root.h"

VL_ATTR_COLD void Vaquila_testharness___024root___final(Vaquila_testharness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root___final\n"); );
}

VL_ATTR_COLD void Vaquila_testharness___024root___ctor_var_reset(Vaquila_testharness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->main_memory_addr = VL_RAND_RESET_I(32);
    vlSelf->cur_instr_addr = VL_RAND_RESET_I(32);
    vlSelf->spi_ss = VL_RAND_RESET_I(1);
    vlSelf->spi_sck = VL_RAND_RESET_I(1);
    vlSelf->spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->spi_miso = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
