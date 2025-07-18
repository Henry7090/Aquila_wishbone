// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_dp_ram.h"

void Vaquila_testharness_dp_ram::writeWord(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::writeWord\n"); );
    // Body
    IData/*31:0*/ unnamedblk2__DOT__tmp_addr;
    IData/*28:0*/ unnamedblk2__DOT__word_addr;
    unnamedblk2__DOT__tmp_addr = ((IData)(0x80000000U) 
                                  + byte_addr);
    unnamedblk2__DOT__word_addr = (0x1fffffffU & (unnamedblk2__DOT__tmp_addr 
                                                  >> 2U));
    if ((VL_LTES_III(32, 0x80000000U, byte_addr) & 
         VL_GTS_III(32, 0xc0000000U, byte_addr))) {
        this->mem[(0xfffffffU & unnamedblk2__DOT__word_addr)] 
            = val;
    }
}

void Vaquila_testharness_dp_ram::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::writeByte\n"); );
    // Body
    IData/*31:0*/ unnamedblk3__DOT__tmp_addr;
    unnamedblk3__DOT__tmp_addr = (byte_addr - (IData)(0x80000000U));
    if ((VL_LTES_III(32, 0x80000000U, byte_addr) & 
         VL_GTS_III(32, 0xc0000000U, byte_addr))) {
        this->mem[(0xfffffffU & unnamedblk3__DOT__tmp_addr)] 
            = val;
    }
}

uint32_t Vaquila_testharness_dp_ram::readByte(uint32_t byte_addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram::readByte\n"); );
    VL_OUT8(readByte__Vfuncrtn,7,0);
    // Body
    IData/*31:0*/ unnamedblk4__DOT__tmp_addr;
    unnamedblk4__DOT__tmp_addr = (byte_addr - (IData)(0x80000000U));
    readByte__Vfuncrtn = ((VL_LTES_III(32, 0x80000000U, byte_addr) 
                           & VL_GTS_III(32, 0xc0000000U, byte_addr))
                           ? (0xffU & this->mem[(0xfffffffU 
                                                 & unnamedblk4__DOT__tmp_addr)])
                           : 0xefU);
    // Final
    return (readByte__Vfuncrtn);
}
