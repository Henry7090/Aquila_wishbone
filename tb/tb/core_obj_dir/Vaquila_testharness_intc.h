// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_testharness.h for the primary calling header

#ifndef VERILATED_VAQUILA_TESTHARNESS_INTC_H_
#define VERILATED_VAQUILA_TESTHARNESS_INTC_H_  // guard

#include "verilated.h"

class Vaquila_testharness__Syms;

class Vaquila_testharness_intc final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(M_DEVICE_strobe,0,0);
    VL_IN8(M_DEVICE_rw,0,0);
    VL_IN8(__PVT__M_DEVICE_byte_enable,3,0);
    VL_OUT8(M_DEVICE_data_ready,0,0);
    VL_IN8(__PVT__intr,0,0);
    VL_OUT8(__PVT__irq,0,0);
    CData/*1:0*/ __PVT__cur_state;
    CData/*1:0*/ __PVT__next_state;
    CData/*7:0*/ __PVT__read_counter;
    CData/*7:0*/ __PVT__write_counter;
    CData/*0:0*/ __PVT__isr_write;
    CData/*0:0*/ __PVT__iar_write;
    CData/*0:0*/ __PVT__sie_write;
    CData/*0:0*/ __PVT__cie_write;
    CData/*0:0*/ __PVT__hie;
    CData/*0:0*/ __PVT__has_enable_interrupt;
    VL_IN(M_DEVICE_addr,31,0);
    VL_IN(M_DEVICE_core2dev_data,31,0);
    VL_OUT(M_DEVICE_dev2core_data,31,0);
    IData/*31:0*/ __PVT__isr;
    IData/*31:0*/ __PVT__ipr;
    IData/*31:0*/ __PVT__ier;
    IData/*31:0*/ __PVT__iar;
    IData/*31:0*/ __PVT__sie;
    IData/*31:0*/ __PVT__cie;
    IData/*31:0*/ __PVT__ivr;
    IData/*31:0*/ __PVT__mer;
    IData/*31:0*/ __PVT__imr;
    IData/*31:0*/ __PVT__ilr;
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __PVT__read_data;

    // INTERNAL VARIABLES
    Vaquila_testharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_testharness_intc(Vaquila_testharness__Syms* symsp, const char* name);
    ~Vaquila_testharness_intc();
    VL_UNCOPYABLE(Vaquila_testharness_intc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
