// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_testharness.h for the primary calling header

#ifndef VERILATED_VAQUILA_TESTHARNESS_DP_RAM_H_
#define VERILATED_VAQUILA_TESTHARNESS_DP_RAM_H_  // guard

#include "verilated.h"

class Vaquila_testharness__Syms;

class Vaquila_testharness_dp_ram final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__strobe_imem,0,0);
    VL_OUT8(__PVT__done_imem_o,0,0);
    VL_IN8(__PVT__strobe_dmem,0,0);
    VL_IN8(__PVT__rw_dmem_i,0,0);
    VL_OUT8(__PVT__done_dmem_o,0,0);
    CData/*1:0*/ __PVT__imem_cur_state;
    CData/*1:0*/ __PVT__imem_next_state;
    CData/*1:0*/ __PVT__dmem_cur_state;
    CData/*1:0*/ __PVT__dmem_next_state;
    CData/*7:0*/ __PVT__imem_delay_counter;
    CData/*7:0*/ __PVT__dmem_delay_counter;
    VL_IN(__PVT__addr_imem_i,31,0);
    VL_OUTW(__PVT__rdata_imem_o,255,0,8);
    VL_IN(__PVT__addr_dmem_i,31,0);
    VL_INW(__PVT__wdata_dmem_i,255,0,8);
    VL_OUTW(__PVT__rdata_dmem_o,255,0,8);
    IData/*31:0*/ __PVT__i;
    VlWide<8>/*255:0*/ __Vdly__rdata_dmem_o;
    VlUnpacked<IData/*31:0*/, 268435456> mem;

    // INTERNAL VARIABLES
    Vaquila_testharness__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ MEM_SIZE = 0x40000000U;
    static constexpr IData/*31:0*/ MEM_OFFSET = 0x80000000U;

    // CONSTRUCTORS
    Vaquila_testharness_dp_ram(Vaquila_testharness__Syms* symsp, const char* name);
    ~Vaquila_testharness_dp_ram();
    VL_UNCOPYABLE(Vaquila_testharness_dp_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t readByte(uint32_t byte_addr);
    void writeByte(uint32_t byte_addr, uint32_t val);
    void writeWord(uint32_t byte_addr, uint32_t val);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
