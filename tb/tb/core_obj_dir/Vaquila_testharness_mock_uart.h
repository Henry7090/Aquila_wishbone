// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_testharness.h for the primary calling header

#ifndef VERILATED_VAQUILA_TESTHARNESS_MOCK_UART_H_
#define VERILATED_VAQUILA_TESTHARNESS_MOCK_UART_H_  // guard

#include "verilated.h"

class Vaquila_testharness__Syms;

class Vaquila_testharness_mock_uart final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__M_DEVICE_strobe,0,0);
    VL_IN8(__PVT__M_DEVICE_rw,0,0);
    VL_IN8(__PVT__M_DEVICE_byte_enable,3,0);
    VL_OUT8(__PVT__M_DEVICE_data_ready,0,0);
    VL_OUT8(__PVT__intr_o,0,0);
    CData/*1:0*/ __PVT__cur_state;
    CData/*1:0*/ __PVT__next_state;
    CData/*7:0*/ __PVT__uart_tx_fifo;
    CData/*7:0*/ __PVT__uart_rx_fifo;
    CData/*7:0*/ __PVT__uart_control;
    CData/*0:0*/ __PVT__uart_tx_push;
    CData/*0:0*/ __PVT__uart_rx_pop;
    CData/*0:0*/ __PVT__uart_tx_fifo_full;
    CData/*0:0*/ __PVT__uart_tx_fifo_empty;
    CData/*0:0*/ __PVT__uart_rx_fifo_full;
    CData/*0:0*/ __PVT__uart_rx_fifo_valid;
    CData/*7:0*/ __PVT__transmit_counter;
    CData/*7:0*/ __PVT__read_counter;
    CData/*7:0*/ __PVT__write_counter;
    CData/*0:0*/ dev_rvalid;
    CData/*7:0*/ __Vdly__transmit_counter;
    CData/*0:0*/ __Vdly__uart_tx_fifo_empty;
    CData/*0:0*/ __Vdly__uart_rx_fifo_full;
    VL_IN(__PVT__M_DEVICE_addr,31,0);
    VL_IN(__PVT__M_DEVICE_core2dev_data,31,0);
    VL_OUT(__PVT__M_DEVICE_dev2core_data,31,0);
    IData/*31:0*/ tohost_val;
    IData/*31:0*/ dev_rdata;

    // INTERNAL VARIABLES
    Vaquila_testharness__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ TOHOST_VAL_ADDR = 0xc1000000U;

    // CONSTRUCTORS
    Vaquila_testharness_mock_uart(Vaquila_testharness__Syms* symsp, const char* name);
    ~Vaquila_testharness_mock_uart();
    VL_UNCOPYABLE(Vaquila_testharness_mock_uart);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t read_tohost();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
