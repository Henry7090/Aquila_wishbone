// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_intc.h"

extern const VlUnpacked<CData/*1:0*/, 64> Vaquila_testharness__ConstPool__TABLE_he9fccd82_0;

VL_INLINE_OPT void Vaquila_testharness_intc___combo__TOP__aquila_testharness__intc_0__0(Vaquila_testharness_intc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_intc___combo__TOP__aquila_testharness__intc_0__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->__PVT__isr_write = ((2U == (IData)(vlSelf->__PVT__cur_state)) 
                                & (0U == (0xffU & vlSelf->M_DEVICE_addr)));
    vlSelf->__PVT__iar_write = ((2U == (IData)(vlSelf->__PVT__cur_state)) 
                                & (0xcU == (0xffU & vlSelf->M_DEVICE_addr)));
    vlSelf->__PVT__sie_write = ((2U == (IData)(vlSelf->__PVT__cur_state)) 
                                & (0x10U == (0xffU 
                                             & vlSelf->M_DEVICE_addr)));
    vlSelf->__PVT__cie_write = ((2U == (IData)(vlSelf->__PVT__cur_state)) 
                                & (0x14U == (0xffU 
                                             & vlSelf->M_DEVICE_addr)));
    vlSelf->__PVT__read_data = ((0x80U & vlSelf->M_DEVICE_addr)
                                 ? 0xdeadbeafU : ((0x40U 
                                                   & vlSelf->M_DEVICE_addr)
                                                   ? 0xdeadbeafU
                                                   : 
                                                  ((0x20U 
                                                    & vlSelf->M_DEVICE_addr)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->M_DEVICE_addr)
                                                     ? 0xdeadbeafU
                                                     : 
                                                    ((8U 
                                                      & vlSelf->M_DEVICE_addr)
                                                      ? 0xdeadbeafU
                                                      : 
                                                     ((4U 
                                                       & vlSelf->M_DEVICE_addr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__ilr))
                                                       : 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__imr)))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->M_DEVICE_addr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->M_DEVICE_addr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->M_DEVICE_addr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__mer))
                                                       : 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__ivr)))
                                                      : 
                                                     ((4U 
                                                       & vlSelf->M_DEVICE_addr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__cie))
                                                       : 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__sie))))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->M_DEVICE_addr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->M_DEVICE_addr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__iar))
                                                       : 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__ier)))
                                                      : 
                                                     ((4U 
                                                       & vlSelf->M_DEVICE_addr)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__ipr))
                                                       : 
                                                      ((2U 
                                                        & vlSelf->M_DEVICE_addr)
                                                        ? 0xdeadbeafU
                                                        : 
                                                       ((1U 
                                                         & vlSelf->M_DEVICE_addr)
                                                         ? 0xdeadbeafU
                                                         : vlSelf->__PVT__isr))))))));
    __Vtableidx1 = (((IData)(vlSelf->M_DEVICE_rw) << 5U) 
                    | (((IData)(vlSelf->M_DEVICE_strobe) 
                        << 4U) | (((0xaU <= (IData)(vlSelf->__PVT__read_counter)) 
                                   << 3U) | (((0xaU 
                                               <= (IData)(vlSelf->__PVT__write_counter)) 
                                              << 2U) 
                                             | (IData)(vlSelf->__PVT__cur_state)))));
    vlSelf->__PVT__next_state = Vaquila_testharness__ConstPool__TABLE_he9fccd82_0
        [__Vtableidx1];
}
