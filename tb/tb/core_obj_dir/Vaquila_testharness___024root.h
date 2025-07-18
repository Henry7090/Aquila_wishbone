// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_testharness.h for the primary calling header

#ifndef VERILATED_VAQUILA_TESTHARNESS___024ROOT_H_
#define VERILATED_VAQUILA_TESTHARNESS___024ROOT_H_  // guard

#include "verilated.h"

class Vaquila_testharness__Syms;
class Vaquila_testharness_aquila_testharness;


class Vaquila_testharness___024root final : public VerilatedModule {
  public:
    // CELLS
    Vaquila_testharness_aquila_testharness* aquila_testharness;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(spi_ss,0,0);
    VL_OUT8(spi_sck,0,0);
    VL_OUT8(spi_mosi,0,0);
    VL_IN8(spi_miso,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(main_memory_addr,31,0);
    VL_OUT(cur_instr_addr,31,0);
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vaquila_testharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_testharness___024root(Vaquila_testharness__Syms* symsp, const char* name);
    ~Vaquila_testharness___024root();
    VL_UNCOPYABLE(Vaquila_testharness___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
