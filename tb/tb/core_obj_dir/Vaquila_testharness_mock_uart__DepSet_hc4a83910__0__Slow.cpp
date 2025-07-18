// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_mock_uart.h"

VL_ATTR_COLD void Vaquila_testharness_mock_uart___ctor_var_reset(Vaquila_testharness_mock_uart* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_mock_uart___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_DEVICE_strobe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_DEVICE_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__M_DEVICE_rw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_DEVICE_byte_enable = VL_RAND_RESET_I(4);
    vlSelf->__PVT__M_DEVICE_core2dev_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__M_DEVICE_data_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_DEVICE_dev2core_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cur_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(2);
    vlSelf->tohost_val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uart_tx_fifo = VL_RAND_RESET_I(8);
    vlSelf->__PVT__uart_rx_fifo = VL_RAND_RESET_I(8);
    vlSelf->__PVT__uart_control = VL_RAND_RESET_I(8);
    vlSelf->__PVT__uart_tx_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rx_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_tx_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uart_rx_fifo_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__transmit_counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__read_counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__write_counter = VL_RAND_RESET_I(8);
    vlSelf->dev_rvalid = VL_RAND_RESET_I(1);
    vlSelf->dev_rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__transmit_counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__uart_tx_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uart_rx_fifo_full = VL_RAND_RESET_I(1);
}
