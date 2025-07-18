// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_intc.h"

VL_INLINE_OPT void Vaquila_testharness_intc___sequent__TOP__aquila_testharness__intc_0__0(Vaquila_testharness_intc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_intc___sequent__TOP__aquila_testharness__intc_0__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__isr;
    // Body
    __Vdly__isr = vlSelf->__PVT__isr;
    if (vlSymsp->TOP.rst_n) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__isr_write) 
                      & (~ (vlSelf->__PVT__mer >> 1U)))))) {
            if ((1U & (~ ((vlSelf->__PVT__mer & (vlSelf->__PVT__mer 
                                                 >> 1U)) 
                          & (IData)(vlSelf->__PVT__has_enable_interrupt))))) {
                if (vlSelf->__PVT__iar_write) {
                    vlSelf->__PVT__i = 1U;
                }
            }
        }
        if (vlSelf->__PVT__cie_write) {
            vlSelf->__PVT__cie = vlSelf->M_DEVICE_core2dev_data;
        }
        if (vlSelf->__PVT__sie_write) {
            vlSelf->__PVT__sie = vlSelf->M_DEVICE_core2dev_data;
        }
        vlSelf->__PVT__write_counter = ((((0U == (IData)(vlSelf->__PVT__cur_state)) 
                                          | (3U == (IData)(vlSelf->__PVT__cur_state))) 
                                         | (1U == (IData)(vlSelf->__PVT__cur_state)))
                                         ? 0U : (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__write_counter))));
        vlSelf->__PVT__read_counter = ((((0U == (IData)(vlSelf->__PVT__cur_state)) 
                                         | (3U == (IData)(vlSelf->__PVT__cur_state))) 
                                        | (2U == (IData)(vlSelf->__PVT__cur_state)))
                                        ? 0U : (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__read_counter))));
        if (vlSelf->__PVT__iar_write) {
            vlSelf->__PVT__iar = vlSelf->M_DEVICE_core2dev_data;
        } else if ((3U == (IData)(vlSelf->__PVT__cur_state))) {
            vlSelf->__PVT__iar = 0U;
        }
        if ((1U == (IData)(vlSelf->__PVT__cur_state))) {
            vlSelf->M_DEVICE_dev2core_data = vlSelf->__PVT__read_data;
        }
        if (((2U == (IData)(vlSelf->__PVT__cur_state)) 
             & (0x24U == (0xffU & vlSelf->M_DEVICE_addr)))) {
            vlSelf->__PVT__ilr = vlSelf->M_DEVICE_core2dev_data;
        }
        if (((2U == (IData)(vlSelf->__PVT__cur_state)) 
             & (0x20U == (0xffU & vlSelf->M_DEVICE_addr)))) {
            vlSelf->__PVT__imr = vlSelf->M_DEVICE_core2dev_data;
        }
        if (((2U == (IData)(vlSelf->__PVT__cur_state)) 
             & (8U == (0xffU & vlSelf->M_DEVICE_addr)))) {
            vlSelf->__PVT__ier = vlSelf->M_DEVICE_core2dev_data;
        } else if (vlSelf->__PVT__sie_write) {
            vlSelf->__PVT__ier = vlSelf->M_DEVICE_core2dev_data;
        } else if (vlSelf->__PVT__cie_write) {
            vlSelf->__PVT__ier = vlSelf->M_DEVICE_core2dev_data;
        }
        if ((0U == (IData)(vlSelf->__PVT__cur_state))) {
            vlSelf->M_DEVICE_data_ready = 0U;
        } else if ((3U == (IData)(vlSelf->__PVT__cur_state))) {
            vlSelf->M_DEVICE_data_ready = 1U;
        }
        if (vlSymsp->TOP__aquila_testharness__mock_uart_0.__PVT__intr_o) {
            vlSelf->__PVT__ivr = 0U;
        } else if (vlSelf->__PVT__iar_write) {
            vlSelf->__PVT__ivr = 0xffffffffU;
        }
        if (((IData)(vlSelf->__PVT__isr_write) & (~ 
                                                  (vlSelf->__PVT__mer 
                                                   >> 1U)))) {
            __Vdly__isr = vlSelf->M_DEVICE_core2dev_data;
        } else if (((vlSelf->__PVT__mer & (vlSelf->__PVT__mer 
                                           >> 1U)) 
                    & (IData)(vlSelf->__PVT__has_enable_interrupt))) {
            __Vdly__isr = ((0U != vlSelf->__PVT__isr) 
                           | (IData)(vlSymsp->TOP__aquila_testharness__mock_uart_0.__PVT__intr_o));
        } else if (vlSelf->__PVT__iar_write) {
            __Vdly__isr = ((0xfffffffeU & __Vdly__isr) 
                           | ((1U & vlSelf->M_DEVICE_core2dev_data)
                               ? 0U : (1U & vlSelf->__PVT__isr)));
        }
        if (((2U == (IData)(vlSelf->__PVT__cur_state)) 
             & (0x1cU == (0xffU & vlSelf->M_DEVICE_addr)))) {
            vlSelf->__PVT__mer = ((0xfffffffeU & vlSelf->__PVT__mer) 
                                  | (1U & vlSelf->M_DEVICE_core2dev_data));
            vlSelf->__PVT__mer = ((0xfffffffdU & vlSelf->__PVT__mer) 
                                  | (((IData)(vlSelf->__PVT__hie)
                                       ? 1U : (1U & 
                                               (vlSelf->M_DEVICE_core2dev_data 
                                                >> 1U))) 
                                     << 1U));
        }
        vlSelf->__PVT__cur_state = vlSelf->__PVT__next_state;
    } else {
        vlSelf->__PVT__cie = 0U;
        vlSelf->__PVT__sie = 0U;
        vlSelf->__PVT__write_counter = 0U;
        vlSelf->__PVT__read_counter = 0U;
        vlSelf->__PVT__iar = 0U;
        vlSelf->M_DEVICE_dev2core_data = 0U;
        vlSelf->__PVT__ilr = 0U;
        vlSelf->__PVT__imr = 0U;
        vlSelf->__PVT__ier = 0U;
        vlSelf->M_DEVICE_data_ready = 0U;
        vlSelf->__PVT__ivr = 0xffffffffU;
        __Vdly__isr = 0U;
        vlSelf->__PVT__mer = 0U;
        vlSelf->__PVT__cur_state = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_n)))) {
        vlSelf->__PVT__ipr = 0U;
    }
    vlSelf->__PVT__irq = ((IData)(vlSymsp->TOP.rst_n) 
                          & (0U != vlSelf->__PVT__isr));
    vlSelf->__PVT__isr = __Vdly__isr;
    vlSelf->__PVT__hie = (1U & (vlSelf->__PVT__mer 
                                >> 1U));
}

VL_INLINE_OPT void Vaquila_testharness_intc___sequent__TOP__aquila_testharness__intc_0__1(Vaquila_testharness_intc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_intc___sequent__TOP__aquila_testharness__intc_0__1\n"); );
    // Body
    vlSelf->__PVT__has_enable_interrupt = ((0U != vlSelf->__PVT__ier) 
                                           & (IData)(vlSymsp->TOP__aquila_testharness__mock_uart_0.__PVT__intr_o));
}
