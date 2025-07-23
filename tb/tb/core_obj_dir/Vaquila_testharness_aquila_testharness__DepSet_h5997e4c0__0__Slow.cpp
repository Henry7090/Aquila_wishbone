// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_aquila_testharness.h"

VL_ATTR_COLD void Vaquila_testharness_aquila_testharness___settle__TOP__aquila_testharness__0(Vaquila_testharness_aquila_testharness* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness___settle__TOP__aquila_testharness__0\n"); );
    // Body
    vlSelf->debug_pc = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r;
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data 
        = (0xffffU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_data) 
                      << 1U));
    if ((IData)((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_data) 
                  >> 0xfU) ^ (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_gearbox 
                              >> 0x1fU)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data 
            = (0x1021U ^ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data));
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data 
        = (0xffffU & ((1U & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data) 
                              >> 0xfU) ^ (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_gearbox 
                                          >> 0x1eU)))
                       ? (0x1021U ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data) 
                                     << 1U)) : ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data) 
                                                << 1U)));
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte 
        = (0x7eU & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_byte));
    if ((IData)((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_byte) 
                  >> 7U) ^ (vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_shift_reg 
                            >> 0x27U)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte 
            = (9U ^ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte));
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte 
        = (0x7fU & ((1U & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte) 
                            >> 6U) ^ (IData)((vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_shift_reg 
                                              >> 0x26U))))
                     ? (9U ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte) 
                              << 1U)) : ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte) 
                                         << 1U)));
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data 
        = (0xffffU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data) 
                      << 1U));
    if ((IData)((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data) 
                  >> 0xfU) ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_gearbox) 
                              >> 7U)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data 
            = (0x1021U ^ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data));
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__next_crc_data 
        = (0xffffU & ((1U & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data) 
                              >> 0xfU) ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_gearbox) 
                                          >> 6U))) ? 
                      (0x1021U ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data) 
                                  << 1U)) : ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data) 
                                             << 1U)));
    vlSelf->__PVT__SD_Card_Controller__DOT__w_reset 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog_err)));
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber13 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_stb) 
           & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)));
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_stb) 
           & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)));
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__startup_hold 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold;
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__powerup_hold 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold;
    vlSelf->__PVT__SD_Card_Controller__DOT__ll_idle 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_idle) 
           & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter));
    vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr 
        = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o;
    vlSelf->dev_sel = ((0U == (0xfU & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o 
                                       >> 0x18U))) ? 0U
                        : ((4U == (0xfU & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o 
                                           >> 0x18U)))
                            ? 1U : 0U));
    vlSelf->is_dev_req = (3U == (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o 
                                 >> 0x1eU));
    vlSelf->M_DEVICE_strobe = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__data_req_o) 
                               & (2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel)));
    vlSelf->__PVT__SD_Card_Controller__DOT__write_stb 
        = (((IData)(vlSelf->__PVT__wishbone_stb) & (IData)(vlSelf->__PVT__wishbone_we)) 
           & (0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel)));
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__w_reset) 
           | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err));
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber2 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__w_reset) 
           | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err));
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__token 
        = (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__data_sent) 
            & (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber13)) 
           & (1U == (0x11U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat))));
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__done 
        = ((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7) 
           & (1U < (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte)));
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token = 0U;
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat) 
                        >> 4U)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token = 1U;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token = 1U;
    }
    if ((1U & ((~ (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7)) 
               | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token = 0U;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__ll_advance 
        = (1U & ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb)) 
                 | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_idle)));
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb) 
           & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_idle));
    if (((IData)(vlSelf->is_dev_req) & (IData)(vlSelf->dev_sel))) {
        vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_rw 
            = (1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_rw_o));
        vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_strobe 
            = (1U & (IData)(vlSelf->M_DEVICE_strobe));
    } else {
        vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_rw = 0U;
        vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_strobe = 0U;
    }
    if (((IData)(vlSelf->is_dev_req) & (~ (IData)(vlSelf->dev_sel)))) {
        vlSelf->__PVT__uart_rw = (1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_rw_o));
        vlSelf->__PVT__uart_strobe = (1U & (IData)(vlSelf->M_DEVICE_strobe));
    } else {
        vlSelf->__PVT__uart_rw = 0U;
        vlSelf->__PVT__uart_strobe = 0U;
    }
    vlSelf->__Vcellinp__Core2Wishbone_0__S_DEVICE_strobe_i 
        = ((IData)(vlSelf->M_DEVICE_strobe) & ((IData)(vlSelf->is_dev_req) 
                                               & (0x2000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))));
    vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb 
        = ((((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy)) 
             & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__write_stb)) 
            & (0xfU == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel))) 
           & (0U == (IData)(vlSelf->__PVT__wishbone_addr)));
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber10 
        = (1U & ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_advance)) 
                 | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)));
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__restart_counter 
        = (1U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold)
                  ? (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold))
                  : (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold) 
                      | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy))) 
                     | ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted) 
                        | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_idle))))));
    vlSelf->__PVT__Core2Wishbone_0__DOT__wb_stb = ((IData)(vlSelf->__Vcellinp__Core2Wishbone_0__S_DEVICE_strobe_i) 
                                                   & (~ (IData)(vlSelf->__PVT__wishbone_ack)));
}

VL_ATTR_COLD void Vaquila_testharness_aquila_testharness___settle__TOP__aquila_testharness__1(Vaquila_testharness_aquila_testharness* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness___settle__TOP__aquila_testharness__1\n"); );
    // Body
    vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_core2dev_data 
        = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o;
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spicmdi____pinNumber3 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb) 
           & (0x40U == (0xc0U & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o)));
}
