// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_dp_ram.h"

extern const VlUnpacked<CData/*1:0*/, 64> Vaquila_testharness__ConstPool__TABLE_he9fccd82_0;

VL_ATTR_COLD void Vaquila_testharness_dp_ram___settle__TOP__aquila_testharness__mock_ram__0(Vaquila_testharness_dp_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_dp_ram___settle__TOP__aquila_testharness__mock_ram__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->__PVT__imem_next_state = ((0U == (IData)(vlSelf->__PVT__imem_cur_state))
                                       ? ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_strobe)
                                           ? 1U : 0U)
                                       : ((1U == (IData)(vlSelf->__PVT__imem_cur_state))
                                           ? ((4U <= (IData)(vlSelf->__PVT__imem_delay_counter))
                                               ? 3U
                                               : 1U)
                                           : 0U));
    vlSelf->__PVT__done_dmem_o = (((1U == (IData)(vlSelf->__PVT__dmem_cur_state)) 
                                   & (4U <= (IData)(vlSelf->__PVT__dmem_delay_counter))) 
                                  | ((2U == (IData)(vlSelf->__PVT__dmem_cur_state)) 
                                     & (4U <= (IData)(vlSelf->__PVT__dmem_delay_counter))));
    vlSelf->__PVT__done_imem_o = ((1U == (IData)(vlSelf->__PVT__imem_cur_state)) 
                                  & (4U <= (IData)(vlSelf->__PVT__imem_delay_counter)));
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
