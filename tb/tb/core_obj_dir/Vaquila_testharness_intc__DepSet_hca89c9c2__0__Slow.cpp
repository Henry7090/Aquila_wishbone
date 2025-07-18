// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_intc.h"

VL_ATTR_COLD void Vaquila_testharness_intc___ctor_var_reset(Vaquila_testharness_intc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_intc___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->M_DEVICE_strobe = VL_RAND_RESET_I(1);
    vlSelf->M_DEVICE_addr = VL_RAND_RESET_I(32);
    vlSelf->M_DEVICE_rw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_DEVICE_byte_enable = VL_RAND_RESET_I(4);
    vlSelf->M_DEVICE_core2dev_data = VL_RAND_RESET_I(32);
    vlSelf->M_DEVICE_data_ready = VL_RAND_RESET_I(1);
    vlSelf->M_DEVICE_dev2core_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cur_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__read_counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__write_counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__isr_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iar_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sie_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cie_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__isr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ipr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ier = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iar = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sie = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cie = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ivr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mer = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ilr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__hie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__has_enable_interrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__read_data = VL_RAND_RESET_I(32);
}
