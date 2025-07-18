// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_mock_uart.h"

VL_INLINE_OPT void Vaquila_testharness_mock_uart___sequent__TOP__aquila_testharness__mock_uart_0__0(Vaquila_testharness_mock_uart* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_mock_uart___sequent__TOP__aquila_testharness__mock_uart_0__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__uart_tx_fifo_full;
    CData/*0:0*/ __Vdly__uart_rx_fifo_valid;
    CData/*7:0*/ __Vdly__uart_tx_fifo;
    CData/*7:0*/ __Vdly__uart_rx_fifo;
    // Body
    __Vdly__uart_rx_fifo_valid = vlSelf->__PVT__uart_rx_fifo_valid;
    vlSelf->__Vdly__uart_rx_fifo_full = vlSelf->__PVT__uart_rx_fifo_full;
    __Vdly__uart_tx_fifo_full = vlSelf->__PVT__uart_tx_fifo_full;
    vlSelf->__Vdly__uart_tx_fifo_empty = vlSelf->__PVT__uart_tx_fifo_empty;
    vlSelf->__Vdly__transmit_counter = vlSelf->__PVT__transmit_counter;
    __Vdly__uart_tx_fifo = vlSelf->__PVT__uart_tx_fifo;
    __Vdly__uart_rx_fifo = vlSelf->__PVT__uart_rx_fifo;
    __Vdly__uart_rx_fifo_valid = ((IData)(vlSymsp->TOP.rst_n) 
                                  & ((IData)(vlSelf->dev_rvalid) 
                                     | ((~ (IData)(vlSelf->__PVT__uart_rx_pop)) 
                                        & (IData)(vlSelf->__PVT__uart_rx_fifo_valid))));
    vlSelf->__Vdly__uart_rx_fifo_full = ((IData)(vlSymsp->TOP.rst_n) 
                                         & ((IData)(vlSelf->dev_rvalid) 
                                            | ((~ (IData)(vlSelf->__PVT__uart_rx_pop)) 
                                               & (IData)(vlSelf->__PVT__uart_rx_fifo_full))));
    __Vdly__uart_tx_fifo_full = ((IData)(vlSymsp->TOP.rst_n) 
                                 & ((IData)(vlSelf->__PVT__uart_tx_push) 
                                    | ((1U > (IData)(vlSelf->__PVT__transmit_counter)) 
                                       & (IData)(vlSelf->__PVT__uart_tx_fifo_full))));
    vlSelf->__Vdly__uart_tx_fifo_empty = ((IData)(vlSymsp->TOP.rst_n) 
                                          & ((~ (IData)(vlSelf->__PVT__uart_tx_push)) 
                                             & ((1U 
                                                 <= (IData)(vlSelf->__PVT__transmit_counter)) 
                                                | (IData)(vlSelf->__PVT__uart_tx_fifo_empty))));
    if (vlSymsp->TOP.rst_n) {
        if (vlSelf->__PVT__uart_tx_fifo_empty) {
            vlSelf->__Vdly__transmit_counter = 0U;
        } else if (vlSelf->__PVT__uart_tx_fifo_full) {
            vlSelf->__Vdly__transmit_counter = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__transmit_counter)));
            if (VL_UNLIKELY((1U == (IData)(vlSelf->__PVT__transmit_counter)))) {
                VL_WRITEF("%c",8,vlSelf->__PVT__uart_tx_fifo);
            }
        } else {
            vlSelf->__Vdly__transmit_counter = vlSelf->__PVT__transmit_counter;
        }
    } else {
        vlSelf->__Vdly__transmit_counter = 0U;
    }
    if (vlSymsp->TOP.rst_n) {
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
        vlSelf->tohost_val = (((2U == (IData)(vlSelf->__PVT__cur_state)) 
                               & (0xc1000000U == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                               ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o
                               : vlSelf->tohost_val);
        __Vdly__uart_tx_fifo = (0xffU & (((2U == (IData)(vlSelf->__PVT__cur_state)) 
                                          & (0xc0000004U 
                                             == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                                          ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o
                                          : ((((2U 
                                                == (IData)(vlSelf->__PVT__cur_state)) 
                                               & (0xc000000cU 
                                                  == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o)) 
                                              & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o)
                                              ? 0U : (IData)(vlSelf->__PVT__uart_tx_fifo))));
        __Vdly__uart_rx_fifo = (0xffU & ((IData)(vlSelf->dev_rvalid)
                                          ? vlSelf->dev_rdata
                                          : ((((2U 
                                                == (IData)(vlSelf->__PVT__cur_state)) 
                                               & (0xc000000cU 
                                                  == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o)) 
                                              & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                                                 >> 1U))
                                              ? 0U : (IData)(vlSelf->__PVT__uart_rx_fifo))));
        vlSelf->__PVT__M_DEVICE_dev2core_data = ((1U 
                                                  == (IData)(vlSelf->__PVT__cur_state))
                                                  ? 
                                                 ((0xc0000004U 
                                                   == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o)
                                                   ? (IData)(vlSelf->__PVT__uart_tx_fifo)
                                                   : 
                                                  ((0xc0000000U 
                                                    == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o)
                                                    ? (IData)(vlSelf->__PVT__uart_rx_fifo)
                                                    : 
                                                   ((0xc0000008U 
                                                     == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o)
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->__PVT__uart_control)) 
                                                     | (((IData)(vlSelf->__PVT__uart_tx_fifo_full) 
                                                         << 3U) 
                                                        | (((IData)(vlSelf->__PVT__uart_tx_fifo_empty) 
                                                            << 2U) 
                                                           | (((IData)(vlSelf->__PVT__uart_rx_fifo_full) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->__PVT__uart_rx_fifo_valid)))))
                                                     : 0xdeadbeefU)))
                                                  : vlSelf->__PVT__M_DEVICE_dev2core_data);
        vlSelf->__PVT__M_DEVICE_data_ready = ((0U != (IData)(vlSelf->__PVT__cur_state)) 
                                              & ((3U 
                                                  == (IData)(vlSelf->__PVT__cur_state)) 
                                                 | (IData)(vlSelf->__PVT__M_DEVICE_data_ready)));
    } else {
        vlSelf->__PVT__write_counter = 0U;
        vlSelf->__PVT__read_counter = 0U;
        vlSelf->tohost_val = 0U;
        __Vdly__uart_tx_fifo = 0U;
        __Vdly__uart_rx_fifo = 0U;
        vlSelf->__PVT__M_DEVICE_dev2core_data = 0U;
        vlSelf->__PVT__M_DEVICE_data_ready = 0U;
    }
    vlSelf->__PVT__uart_rx_fifo = __Vdly__uart_rx_fifo;
    vlSelf->__PVT__uart_rx_fifo_valid = __Vdly__uart_rx_fifo_valid;
    vlSelf->__PVT__uart_tx_fifo = __Vdly__uart_tx_fifo;
    vlSelf->__PVT__uart_tx_fifo_full = __Vdly__uart_tx_fifo_full;
}

VL_INLINE_OPT void Vaquila_testharness_mock_uart___sequent__TOP__aquila_testharness__mock_uart_0__1(Vaquila_testharness_mock_uart* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_mock_uart___sequent__TOP__aquila_testharness__mock_uart_0__1\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelf->__PVT__intr_o = (((IData)(vlSelf->__PVT__uart_control) 
                                  >> 4U) & (((~ (IData)(vlSelf->__PVT__uart_rx_fifo_full)) 
                                             & (IData)(vlSelf->dev_rvalid)) 
                                            | ((~ (IData)(vlSelf->__PVT__uart_tx_fifo_empty)) 
                                               & (1U 
                                                  <= (IData)(vlSelf->__PVT__transmit_counter)))));
        vlSelf->__PVT__uart_rx_fifo_full = vlSelf->__Vdly__uart_rx_fifo_full;
        vlSelf->__PVT__uart_tx_fifo_empty = vlSelf->__Vdly__uart_tx_fifo_empty;
        vlSelf->__PVT__transmit_counter = vlSelf->__Vdly__transmit_counter;
        if (((2U == (IData)(vlSelf->__PVT__cur_state)) 
             & (0xc000000cU == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))) {
            vlSelf->__PVT__uart_control = (0xffU & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o);
        }
        vlSelf->__PVT__cur_state = vlSelf->__PVT__next_state;
    } else {
        vlSelf->__PVT__intr_o = 0U;
        vlSelf->__PVT__uart_rx_fifo_full = vlSelf->__Vdly__uart_rx_fifo_full;
        vlSelf->__PVT__uart_tx_fifo_empty = vlSelf->__Vdly__uart_tx_fifo_empty;
        vlSelf->__PVT__transmit_counter = vlSelf->__Vdly__transmit_counter;
        vlSelf->__PVT__uart_control = 0U;
        vlSelf->__PVT__cur_state = 0U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vaquila_testharness__ConstPool__TABLE_he9fccd82_0;

VL_INLINE_OPT void Vaquila_testharness_mock_uart___combo__TOP__aquila_testharness__mock_uart_0__0(Vaquila_testharness_mock_uart* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_mock_uart___combo__TOP__aquila_testharness__mock_uart_0__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->__PVT__uart_rx_pop = ((0xc0000000U == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o) 
                                  & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__uart_rw)));
    vlSelf->__PVT__uart_tx_push = (((0xc0000004U == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o) 
                                    & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__uart_rw)) 
                                   & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__uart_strobe));
    __Vtableidx1 = (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__uart_rw) 
                     << 5U) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__uart_strobe) 
                                << 4U) | (((0xaU <= (IData)(vlSelf->__PVT__read_counter)) 
                                           << 3U) | 
                                          (((0xaU <= (IData)(vlSelf->__PVT__write_counter)) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__cur_state)))));
    vlSelf->__PVT__next_state = Vaquila_testharness__ConstPool__TABLE_he9fccd82_0
        [__Vtableidx1];
}
