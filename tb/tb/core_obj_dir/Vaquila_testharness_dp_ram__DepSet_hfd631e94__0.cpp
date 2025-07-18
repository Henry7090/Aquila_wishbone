// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_dp_ram.h"

VL_INLINE_OPT void Vaquila_testharness_dp_ram___sequent__TOP__aquila_testharness__mock_ram__0(Vaquila_testharness_dp_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram___sequent__TOP__aquila_testharness__mock_ram__0\n"); );
    // Init
    IData/*27:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    IData/*27:0*/ __Vdlyvdim0__mem__v1;
    IData/*31:0*/ __Vdlyvval__mem__v1;
    IData/*27:0*/ __Vdlyvdim0__mem__v2;
    IData/*31:0*/ __Vdlyvval__mem__v2;
    IData/*27:0*/ __Vdlyvdim0__mem__v3;
    IData/*31:0*/ __Vdlyvval__mem__v3;
    IData/*27:0*/ __Vdlyvdim0__mem__v4;
    IData/*31:0*/ __Vdlyvval__mem__v4;
    IData/*27:0*/ __Vdlyvdim0__mem__v5;
    IData/*31:0*/ __Vdlyvval__mem__v5;
    IData/*27:0*/ __Vdlyvdim0__mem__v6;
    IData/*31:0*/ __Vdlyvval__mem__v6;
    IData/*27:0*/ __Vdlyvdim0__mem__v7;
    IData/*31:0*/ __Vdlyvval__mem__v7;
    VlWide<8>/*255:0*/ __Vtemp_hf4b5fcec__0;
    // Body
    vlSelf->__Vdly__rdata_dmem_o[0U] = vlSelf->__PVT__rdata_dmem_o[0U];
    vlSelf->__Vdly__rdata_dmem_o[1U] = vlSelf->__PVT__rdata_dmem_o[1U];
    vlSelf->__Vdly__rdata_dmem_o[2U] = vlSelf->__PVT__rdata_dmem_o[2U];
    vlSelf->__Vdly__rdata_dmem_o[3U] = vlSelf->__PVT__rdata_dmem_o[3U];
    vlSelf->__Vdly__rdata_dmem_o[4U] = vlSelf->__PVT__rdata_dmem_o[4U];
    vlSelf->__Vdly__rdata_dmem_o[5U] = vlSelf->__PVT__rdata_dmem_o[5U];
    vlSelf->__Vdly__rdata_dmem_o[6U] = vlSelf->__PVT__rdata_dmem_o[6U];
    vlSelf->__Vdly__rdata_dmem_o[7U] = vlSelf->__PVT__rdata_dmem_o[7U];
    __Vdlyvset__mem__v0 = 0U;
    vlSelf->__PVT__dmem_delay_counter = (((0U == (IData)(vlSelf->__PVT__dmem_cur_state)) 
                                          | (3U == (IData)(vlSelf->__PVT__dmem_cur_state)))
                                          ? 0U : (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__dmem_delay_counter))));
    vlSelf->__PVT__imem_delay_counter = (((0U == (IData)(vlSelf->__PVT__imem_cur_state)) 
                                          | (3U == (IData)(vlSelf->__PVT__imem_cur_state)))
                                          ? 0U : (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__imem_delay_counter))));
    if ((1U == (IData)(vlSelf->__PVT__imem_cur_state))) {
        __Vtemp_hf4b5fcec__0[1U] = vlSelf->mem[(0xfffffffU 
                                                & ((IData)(6U) 
                                                   + 
                                                   (0x1fffffffU 
                                                    & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                        - (IData)(0x80000000U)) 
                                                       >> 2U))))];
        __Vtemp_hf4b5fcec__0[2U] = vlSelf->mem[(0xfffffffU 
                                                & ((IData)(5U) 
                                                   + 
                                                   (0x1fffffffU 
                                                    & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                        - (IData)(0x80000000U)) 
                                                       >> 2U))))];
        __Vtemp_hf4b5fcec__0[3U] = vlSelf->mem[(0xfffffffU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x1fffffffU 
                                                    & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                        - (IData)(0x80000000U)) 
                                                       >> 2U))))];
        __Vtemp_hf4b5fcec__0[4U] = vlSelf->mem[(0xfffffffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0x1fffffffU 
                                                    & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                        - (IData)(0x80000000U)) 
                                                       >> 2U))))];
        __Vtemp_hf4b5fcec__0[5U] = vlSelf->mem[(0xfffffffU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x1fffffffU 
                                                    & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                        - (IData)(0x80000000U)) 
                                                       >> 2U))))];
        __Vtemp_hf4b5fcec__0[6U] = (IData)((((QData)((IData)(
                                                             vlSelf->mem
                                                             [
                                                             (0xfffffffU 
                                                              & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                                  - (IData)(0x80000000U)) 
                                                                 >> 2U))])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->mem
                                                              [
                                                              (0xfffffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (0x1fffffffU 
                                                                   & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                                       - (IData)(0x80000000U)) 
                                                                      >> 2U))))]))));
        __Vtemp_hf4b5fcec__0[7U] = (IData)(((((QData)((IData)(
                                                              vlSelf->mem
                                                              [
                                                              (0xfffffffU 
                                                               & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                                   - (IData)(0x80000000U)) 
                                                                  >> 2U))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->mem
                                                               [
                                                               (0xfffffffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (0x1fffffffU 
                                                                    & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                                        - (IData)(0x80000000U)) 
                                                                       >> 2U))))]))) 
                                            >> 0x20U));
        vlSelf->__PVT__rdata_imem_o[0U] = vlSelf->mem
            [(0xfffffffU & ((IData)(7U) + (0x1fffffffU 
                                           & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                               - (IData)(0x80000000U)) 
                                              >> 2U))))];
    } else {
        __Vtemp_hf4b5fcec__0[1U] = vlSelf->__PVT__rdata_imem_o[1U];
        __Vtemp_hf4b5fcec__0[2U] = vlSelf->__PVT__rdata_imem_o[2U];
        __Vtemp_hf4b5fcec__0[3U] = vlSelf->__PVT__rdata_imem_o[3U];
        __Vtemp_hf4b5fcec__0[4U] = vlSelf->__PVT__rdata_imem_o[4U];
        __Vtemp_hf4b5fcec__0[5U] = vlSelf->__PVT__rdata_imem_o[5U];
        __Vtemp_hf4b5fcec__0[6U] = vlSelf->__PVT__rdata_imem_o[6U];
        __Vtemp_hf4b5fcec__0[7U] = vlSelf->__PVT__rdata_imem_o[7U];
        vlSelf->__PVT__rdata_imem_o[0U] = vlSelf->__PVT__rdata_imem_o[0U];
    }
    vlSelf->__PVT__rdata_imem_o[1U] = __Vtemp_hf4b5fcec__0[1U];
    vlSelf->__PVT__rdata_imem_o[2U] = __Vtemp_hf4b5fcec__0[2U];
    vlSelf->__PVT__rdata_imem_o[3U] = __Vtemp_hf4b5fcec__0[3U];
    vlSelf->__PVT__rdata_imem_o[4U] = __Vtemp_hf4b5fcec__0[4U];
    vlSelf->__PVT__rdata_imem_o[5U] = __Vtemp_hf4b5fcec__0[5U];
    vlSelf->__PVT__rdata_imem_o[6U] = __Vtemp_hf4b5fcec__0[6U];
    vlSelf->__PVT__rdata_imem_o[7U] = __Vtemp_hf4b5fcec__0[7U];
    if ((1U == (IData)(vlSelf->__PVT__dmem_cur_state))) {
        vlSelf->__Vdly__rdata_dmem_o[0U] = vlSelf->mem
            [(0xfffffffU & ((IData)(7U) + (0x1fffffffU 
                                           & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                               - (IData)(0x80000000U)) 
                                              >> 2U))))];
        vlSelf->__Vdly__rdata_dmem_o[1U] = vlSelf->mem
            [(0xfffffffU & ((IData)(6U) + (0x1fffffffU 
                                           & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                               - (IData)(0x80000000U)) 
                                              >> 2U))))];
        vlSelf->__Vdly__rdata_dmem_o[2U] = vlSelf->mem
            [(0xfffffffU & ((IData)(5U) + (0x1fffffffU 
                                           & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                               - (IData)(0x80000000U)) 
                                              >> 2U))))];
        vlSelf->__Vdly__rdata_dmem_o[3U] = vlSelf->mem
            [(0xfffffffU & ((IData)(4U) + (0x1fffffffU 
                                           & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                               - (IData)(0x80000000U)) 
                                              >> 2U))))];
        vlSelf->__Vdly__rdata_dmem_o[4U] = vlSelf->mem
            [(0xfffffffU & ((IData)(3U) + (0x1fffffffU 
                                           & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                               - (IData)(0x80000000U)) 
                                              >> 2U))))];
        vlSelf->__Vdly__rdata_dmem_o[5U] = vlSelf->mem
            [(0xfffffffU & ((IData)(2U) + (0x1fffffffU 
                                           & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                               - (IData)(0x80000000U)) 
                                              >> 2U))))];
        vlSelf->__Vdly__rdata_dmem_o[6U] = (IData)(
                                                   (((QData)((IData)(
                                                                     vlSelf->mem
                                                                     [
                                                                     (0xfffffffU 
                                                                      & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                                          - (IData)(0x80000000U)) 
                                                                         >> 2U))])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->mem
                                                                      [
                                                                      (0xfffffffU 
                                                                       & ((IData)(1U) 
                                                                          + 
                                                                          (0x1fffffffU 
                                                                           & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                                               - (IData)(0x80000000U)) 
                                                                              >> 2U))))]))));
        vlSelf->__Vdly__rdata_dmem_o[7U] = (IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->mem
                                                                      [
                                                                      (0xfffffffU 
                                                                       & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                                           - (IData)(0x80000000U)) 
                                                                          >> 2U))])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->mem
                                                                       [
                                                                       (0xfffffffU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0x1fffffffU 
                                                                            & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                                                - (IData)(0x80000000U)) 
                                                                               >> 2U))))]))) 
                                                    >> 0x20U));
    } else {
        vlSelf->__Vdly__rdata_dmem_o[0U] = vlSelf->__PVT__rdata_dmem_o[0U];
        vlSelf->__Vdly__rdata_dmem_o[1U] = vlSelf->__PVT__rdata_dmem_o[1U];
        vlSelf->__Vdly__rdata_dmem_o[2U] = vlSelf->__PVT__rdata_dmem_o[2U];
        vlSelf->__Vdly__rdata_dmem_o[3U] = vlSelf->__PVT__rdata_dmem_o[3U];
        vlSelf->__Vdly__rdata_dmem_o[4U] = vlSelf->__PVT__rdata_dmem_o[4U];
        vlSelf->__Vdly__rdata_dmem_o[5U] = vlSelf->__PVT__rdata_dmem_o[5U];
        vlSelf->__Vdly__rdata_dmem_o[6U] = vlSelf->__PVT__rdata_dmem_o[6U];
        vlSelf->__Vdly__rdata_dmem_o[7U] = vlSelf->__PVT__rdata_dmem_o[7U];
    }
    if ((2U == (IData)(vlSelf->__PVT__dmem_cur_state))) {
        if (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_is_amo) {
            __Vdlyvval__mem__v0 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__result;
            __Vdlyvval__mem__v1 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[6U];
            __Vdlyvval__mem__v2 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[5U];
            __Vdlyvval__mem__v3 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[4U];
            __Vdlyvval__mem__v4 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[3U];
            __Vdlyvval__mem__v5 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[2U];
            __Vdlyvval__mem__v6 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[1U];
            __Vdlyvval__mem__v7 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[0U];
        } else {
            __Vdlyvval__mem__v0 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[7U];
            __Vdlyvval__mem__v1 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[6U];
            __Vdlyvval__mem__v2 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[5U];
            __Vdlyvval__mem__v3 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[4U];
            __Vdlyvval__mem__v4 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[3U];
            __Vdlyvval__mem__v5 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[2U];
            __Vdlyvval__mem__v6 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[1U];
            __Vdlyvval__mem__v7 = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[0U];
        }
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0xfffffffU & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                               - (IData)(0x80000000U)) 
                                              >> 2U));
        __Vdlyvdim0__mem__v1 = (0xfffffffU & ((IData)(1U) 
                                              + (0x1fffffffU 
                                                 & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U))));
        __Vdlyvdim0__mem__v2 = (0xfffffffU & ((IData)(2U) 
                                              + (0x1fffffffU 
                                                 & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U))));
        __Vdlyvdim0__mem__v3 = (0xfffffffU & ((IData)(3U) 
                                              + (0x1fffffffU 
                                                 & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U))));
        __Vdlyvdim0__mem__v4 = (0xfffffffU & ((IData)(4U) 
                                              + (0x1fffffffU 
                                                 & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U))));
        __Vdlyvdim0__mem__v5 = (0xfffffffU & ((IData)(5U) 
                                              + (0x1fffffffU 
                                                 & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U))));
        __Vdlyvdim0__mem__v6 = (0xfffffffU & ((IData)(6U) 
                                              + (0x1fffffffU 
                                                 & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U))));
        __Vdlyvdim0__mem__v7 = (0xfffffffU & ((IData)(7U) 
                                              + (0x1fffffffU 
                                                 & ((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U))));
    }
    if (__Vdlyvset__mem__v0) {
        vlSelf->mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
        vlSelf->mem[__Vdlyvdim0__mem__v1] = __Vdlyvval__mem__v1;
        vlSelf->mem[__Vdlyvdim0__mem__v2] = __Vdlyvval__mem__v2;
        vlSelf->mem[__Vdlyvdim0__mem__v3] = __Vdlyvval__mem__v3;
        vlSelf->mem[__Vdlyvdim0__mem__v4] = __Vdlyvval__mem__v4;
        vlSelf->mem[__Vdlyvdim0__mem__v5] = __Vdlyvval__mem__v5;
        vlSelf->mem[__Vdlyvdim0__mem__v6] = __Vdlyvval__mem__v6;
        vlSelf->mem[__Vdlyvdim0__mem__v7] = __Vdlyvval__mem__v7;
    }
    if (vlSymsp->TOP.rst_n) {
        vlSelf->__PVT__imem_cur_state = vlSelf->__PVT__imem_next_state;
        vlSelf->__PVT__dmem_cur_state = vlSelf->__PVT__dmem_next_state;
    } else {
        vlSelf->__PVT__imem_cur_state = 0U;
        vlSelf->__PVT__dmem_cur_state = 0U;
    }
    vlSelf->__PVT__imem_next_state = ((0U == (IData)(vlSelf->__PVT__imem_cur_state))
                                       ? ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_strobe)
                                           ? 1U : 0U)
                                       : ((1U == (IData)(vlSelf->__PVT__imem_cur_state))
                                           ? ((4U <= (IData)(vlSelf->__PVT__imem_delay_counter))
                                               ? 3U
                                               : 1U)
                                           : 0U));
    vlSelf->__PVT__done_imem_o = ((1U == (IData)(vlSelf->__PVT__imem_cur_state)) 
                                  & (4U <= (IData)(vlSelf->__PVT__imem_delay_counter)));
    vlSelf->__PVT__done_dmem_o = (((1U == (IData)(vlSelf->__PVT__dmem_cur_state)) 
                                   & (4U <= (IData)(vlSelf->__PVT__dmem_delay_counter))) 
                                  | ((2U == (IData)(vlSelf->__PVT__dmem_cur_state)) 
                                     & (4U <= (IData)(vlSelf->__PVT__dmem_delay_counter))));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vaquila_testharness__ConstPool__TABLE_he9fccd82_0;

VL_INLINE_OPT void Vaquila_testharness_dp_ram___sequent__TOP__aquila_testharness__mock_ram__1(Vaquila_testharness_dp_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram___sequent__TOP__aquila_testharness__mock_ram__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->__PVT__rdata_dmem_o[0U] = vlSelf->__Vdly__rdata_dmem_o[0U];
    vlSelf->__PVT__rdata_dmem_o[1U] = vlSelf->__Vdly__rdata_dmem_o[1U];
    vlSelf->__PVT__rdata_dmem_o[2U] = vlSelf->__Vdly__rdata_dmem_o[2U];
    vlSelf->__PVT__rdata_dmem_o[3U] = vlSelf->__Vdly__rdata_dmem_o[3U];
    vlSelf->__PVT__rdata_dmem_o[4U] = vlSelf->__Vdly__rdata_dmem_o[4U];
    vlSelf->__PVT__rdata_dmem_o[5U] = vlSelf->__Vdly__rdata_dmem_o[5U];
    vlSelf->__PVT__rdata_dmem_o[6U] = vlSelf->__Vdly__rdata_dmem_o[6U];
    vlSelf->__PVT__rdata_dmem_o[7U] = vlSelf->__Vdly__rdata_dmem_o[7U];
    __Vtableidx1 = ((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_is_amo)
                       ? (2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state))
                       : (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_rw)) 
                     << 5U) | ((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_is_amo)
                                  ? ((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state)) 
                                     | (2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state)))
                                  : (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_strobe)) 
                                << 4U) | (((4U <= (IData)(vlSelf->__PVT__dmem_delay_counter)) 
                                           << 3U) | 
                                          (((4U <= (IData)(vlSelf->__PVT__dmem_delay_counter)) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__dmem_cur_state)))));
    vlSelf->__PVT__dmem_next_state = Vaquila_testharness__ConstPool__TABLE_he9fccd82_0
        [__Vtableidx1];
}
