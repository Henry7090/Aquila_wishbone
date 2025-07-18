// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_aquila_top.h"

extern const VlWide<8>/*255:0*/ Vaquila_testharness__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vaquila_testharness_aquila_top___settle__TOP__aquila_testharness__aquila_core__0(Vaquila_testharness_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_aquila_top___settle__TOP__aquila_testharness__aquila_core__0\n"); );
    // Init
    CData/*0:0*/ ATOM_U__DOT____Vlvbound_h413be166__0;
    CData/*0:0*/ ATOM_U__DOT____Vlvbound_h6aa51910__0;
    CData/*0:0*/ ATOM_U__DOT____Vlvbound_h9c7470b5__0;
    // Body
    vlSelf->__PVT__ATOM_U__DOT__i = 1U;
    vlSelf->__PVT__I_Cache__DOT__idx = 4U;
    vlSelf->__PVT__D_Cache__DOT__idx = 4U;
    vlSelf->__PVT__CLINT__DOT__carry = (0xffffffffU 
                                        == vlSelf->__PVT__CLINT__DOT__clint_mem
                                        [0U]);
    vlSelf->__PVT__CLINT__DOT__mtimecmp = (((QData)((IData)(
                                                            vlSelf->__PVT__CLINT__DOT__clint_mem
                                                            [3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__CLINT__DOT__clint_mem
                                                             [2U])));
    vlSelf->__PVT__I_Cache__DOT__c_block[0U][0U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[0U];
    vlSelf->__PVT__I_Cache__DOT__c_block[0U][1U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[1U];
    vlSelf->__PVT__I_Cache__DOT__c_block[0U][2U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[2U];
    vlSelf->__PVT__I_Cache__DOT__c_block[0U][3U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[3U];
    vlSelf->__PVT__I_Cache__DOT__c_block[0U][4U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[4U];
    vlSelf->__PVT__I_Cache__DOT__c_block[0U][5U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[5U];
    vlSelf->__PVT__I_Cache__DOT__c_block[0U][6U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[6U];
    vlSelf->__PVT__I_Cache__DOT__c_block[0U][7U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[7U];
    vlSelf->__PVT__I_Cache__DOT__c_block[1U][0U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[0U];
    vlSelf->__PVT__I_Cache__DOT__c_block[1U][1U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[1U];
    vlSelf->__PVT__I_Cache__DOT__c_block[1U][2U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[2U];
    vlSelf->__PVT__I_Cache__DOT__c_block[1U][3U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[3U];
    vlSelf->__PVT__I_Cache__DOT__c_block[1U][4U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[4U];
    vlSelf->__PVT__I_Cache__DOT__c_block[1U][5U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[5U];
    vlSelf->__PVT__I_Cache__DOT__c_block[1U][6U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[6U];
    vlSelf->__PVT__I_Cache__DOT__c_block[1U][7U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[7U];
    vlSelf->__PVT__I_Cache__DOT__c_block[2U][0U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[0U];
    vlSelf->__PVT__I_Cache__DOT__c_block[2U][1U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[1U];
    vlSelf->__PVT__I_Cache__DOT__c_block[2U][2U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[2U];
    vlSelf->__PVT__I_Cache__DOT__c_block[2U][3U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[3U];
    vlSelf->__PVT__I_Cache__DOT__c_block[2U][4U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[4U];
    vlSelf->__PVT__I_Cache__DOT__c_block[2U][5U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[5U];
    vlSelf->__PVT__I_Cache__DOT__c_block[2U][6U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[6U];
    vlSelf->__PVT__I_Cache__DOT__c_block[2U][7U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[7U];
    vlSelf->__PVT__I_Cache__DOT__c_block[3U][0U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[0U];
    vlSelf->__PVT__I_Cache__DOT__c_block[3U][1U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[1U];
    vlSelf->__PVT__I_Cache__DOT__c_block[3U][2U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[2U];
    vlSelf->__PVT__I_Cache__DOT__c_block[3U][3U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[3U];
    vlSelf->__PVT__I_Cache__DOT__c_block[3U][4U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[4U];
    vlSelf->__PVT__I_Cache__DOT__c_block[3U][5U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[5U];
    vlSelf->__PVT__I_Cache__DOT__c_block[3U][6U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[6U];
    vlSelf->__PVT__I_Cache__DOT__c_block[3U][7U] = 
        vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[7U];
    vlSelf->__PVT__D_Cache__DOT__c_block[0U][0U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[0U];
    vlSelf->__PVT__D_Cache__DOT__c_block[0U][1U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[1U];
    vlSelf->__PVT__D_Cache__DOT__c_block[0U][2U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[2U];
    vlSelf->__PVT__D_Cache__DOT__c_block[0U][3U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[3U];
    vlSelf->__PVT__D_Cache__DOT__c_block[0U][4U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[4U];
    vlSelf->__PVT__D_Cache__DOT__c_block[0U][5U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[5U];
    vlSelf->__PVT__D_Cache__DOT__c_block[0U][6U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[6U];
    vlSelf->__PVT__D_Cache__DOT__c_block[0U][7U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o[7U];
    vlSelf->__PVT__D_Cache__DOT__c_block[1U][0U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[0U];
    vlSelf->__PVT__D_Cache__DOT__c_block[1U][1U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[1U];
    vlSelf->__PVT__D_Cache__DOT__c_block[1U][2U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[2U];
    vlSelf->__PVT__D_Cache__DOT__c_block[1U][3U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[3U];
    vlSelf->__PVT__D_Cache__DOT__c_block[1U][4U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[4U];
    vlSelf->__PVT__D_Cache__DOT__c_block[1U][5U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[5U];
    vlSelf->__PVT__D_Cache__DOT__c_block[1U][6U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[6U];
    vlSelf->__PVT__D_Cache__DOT__c_block[1U][7U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o[7U];
    vlSelf->__PVT__D_Cache__DOT__c_block[2U][0U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[0U];
    vlSelf->__PVT__D_Cache__DOT__c_block[2U][1U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[1U];
    vlSelf->__PVT__D_Cache__DOT__c_block[2U][2U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[2U];
    vlSelf->__PVT__D_Cache__DOT__c_block[2U][3U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[3U];
    vlSelf->__PVT__D_Cache__DOT__c_block[2U][4U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[4U];
    vlSelf->__PVT__D_Cache__DOT__c_block[2U][5U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[5U];
    vlSelf->__PVT__D_Cache__DOT__c_block[2U][6U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[6U];
    vlSelf->__PVT__D_Cache__DOT__c_block[2U][7U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o[7U];
    vlSelf->__PVT__D_Cache__DOT__c_block[3U][0U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[0U];
    vlSelf->__PVT__D_Cache__DOT__c_block[3U][1U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[1U];
    vlSelf->__PVT__D_Cache__DOT__c_block[3U][2U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[2U];
    vlSelf->__PVT__D_Cache__DOT__c_block[3U][3U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[3U];
    vlSelf->__PVT__D_Cache__DOT__c_block[3U][4U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[4U];
    vlSelf->__PVT__D_Cache__DOT__c_block[3U][5U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[5U];
    vlSelf->__PVT__D_Cache__DOT__c_block[3U][6U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[6U];
    vlSelf->__PVT__D_Cache__DOT__c_block[3U][7U] = 
        vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o[7U];
    vlSelf->__PVT__D_Cache__DOT__c_tag_o[0U] = vlSelf->D_Cache__DOT____Vcellout__genblk2__BRA__0__KET____DOT__TAG_BRAM__data_o;
    vlSelf->__PVT__D_Cache__DOT__c_tag_o[1U] = vlSelf->D_Cache__DOT____Vcellout__genblk2__BRA__1__KET____DOT__TAG_BRAM__data_o;
    vlSelf->__PVT__D_Cache__DOT__c_tag_o[2U] = vlSelf->D_Cache__DOT____Vcellout__genblk2__BRA__2__KET____DOT__TAG_BRAM__data_o;
    vlSelf->__PVT__D_Cache__DOT__c_tag_o[3U] = vlSelf->D_Cache__DOT____Vcellout__genblk2__BRA__3__KET____DOT__TAG_BRAM__data_o;
    vlSelf->__PVT__ATOM_U__DOT__rs1_SLT_rs2 = VL_LTS_IQQ(33, 
                                                         (((QData)((IData)(
                                                                           ((~ 
                                                                             ((IData)(vlSelf->__PVT__m_d_amo_type) 
                                                                              >> 3U)) 
                                                                            & (vlSelf->__PVT__ATOM_U__DOT__m_data[7U] 
                                                                               >> 0x1fU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__ATOM_U__DOT__m_data[7U]))), 
                                                         (((QData)((IData)(
                                                                           ((~ 
                                                                             ((IData)(vlSelf->__PVT__m_d_amo_type) 
                                                                              >> 3U)) 
                                                                            & (vlSelf->__PVT__m_d_cache2dram[7U] 
                                                                               >> 0x1fU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__m_d_cache2dram[7U]))));
    ATOM_U__DOT____Vlvbound_h6aa51910__0 = ((7U & vlSelf->__PVT__ATOM_U__DOT__reservation_addr
                                             [0U]) 
                                            == (7U 
                                                & (vlSelf->__PVT__m_d_addr 
                                                   >> 2U)));
    vlSelf->__PVT__ATOM_U__DOT__addr_l_match = ATOM_U__DOT____Vlvbound_h6aa51910__0;
    ATOM_U__DOT____Vlvbound_h413be166__0 = ((0x7ffffffU 
                                             & (vlSelf->__PVT__ATOM_U__DOT__reservation_addr
                                                [0U] 
                                                >> 3U)) 
                                            == (vlSelf->__PVT__m_d_addr 
                                                >> 5U));
    vlSelf->__PVT__ATOM_U__DOT__addr_h_match = ATOM_U__DOT____Vlvbound_h413be166__0;
    ATOM_U__DOT____Vlvbound_h9c7470b5__0 = ((3U == 
                                             (3U & (IData)(vlSelf->__PVT__m_d_amo_type))) 
                                            | (((2U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelf->__PVT__m_d_amo_type))) 
                                                & (IData)(vlSelf->__PVT__m_d_rw)) 
                                               & (IData)(vlSelf->__PVT__ATOM_U__DOT__addr_h_match)));
    vlSelf->__PVT__ATOM_U__DOT__rm_reservation = ATOM_U__DOT____Vlvbound_h9c7470b5__0;
    vlSelf->__PVT__data_sel = ((0U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                       >> 0x1cU)) ? 0U
                                : ((0xcU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                             >> 0x1cU))
                                    ? 2U : ((0xfU == 
                                             (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                              >> 0x1cU))
                                             ? 3U : 1U)));
    vlSelf->__PVT__m_d_is_amo = ((9U == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                 & (IData)(vlSelf->__PVT__D_Cache__DOT__is_amo_reg));
    vlSelf->__PVT__I_Cache__DOT__c_tag_o[0U] = vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM
        [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                   >> 5U))];
    vlSelf->__PVT__I_Cache__DOT__c_tag_o[1U] = vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM
        [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                   >> 5U))];
    vlSelf->__PVT__I_Cache__DOT__c_tag_o[2U] = vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM
        [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                   >> 5U))];
    vlSelf->__PVT__I_Cache__DOT__c_tag_o[3U] = vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM
        [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                   >> 5U))];
    vlSelf->__PVT__I_Cache__DOT__c_valid_o[0U] = vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM
        [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                   >> 5U))];
    vlSelf->__PVT__I_Cache__DOT__c_valid_o[1U] = vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM
        [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                   >> 5U))];
    vlSelf->__PVT__I_Cache__DOT__c_valid_o[2U] = vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM
        [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                   >> 5U))];
    vlSelf->__PVT__I_Cache__DOT__c_valid_o[3U] = vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM
        [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                   >> 5U))];
    if ((8U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
        if ((4U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[7U];
        } else if ((2U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[7U];
        } else if ((1U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[7U];
        } else {
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [0U][0U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [0U][1U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [0U][2U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [0U][3U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [0U][4U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [0U][5U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [0U][6U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [0U][7U];
        }
    } else if ((4U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
        if ((2U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[7U];
        } else if ((1U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[7U];
        } else {
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [1U][0U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [1U][1U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [1U][2U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [1U][3U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [1U][4U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [1U][5U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [1U][6U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [1U][7U];
        }
    } else if ((2U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
        if ((1U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[7U];
        } else {
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [2U][0U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [2U][1U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [2U][2U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [2U][3U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [2U][4U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [2U][5U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [2U][6U];
            vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
                = vlSelf->__PVT__I_Cache__DOT__c_block
                [2U][7U];
        }
    } else if ((1U & (IData)(vlSelf->__PVT__I_Cache__DOT__way_offset_reg))) {
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
            = vlSelf->__PVT__I_Cache__DOT__c_block[3U][0U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
            = vlSelf->__PVT__I_Cache__DOT__c_block[3U][1U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
            = vlSelf->__PVT__I_Cache__DOT__c_block[3U][2U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
            = vlSelf->__PVT__I_Cache__DOT__c_block[3U][3U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
            = vlSelf->__PVT__I_Cache__DOT__c_block[3U][4U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
            = vlSelf->__PVT__I_Cache__DOT__c_block[3U][5U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
            = vlSelf->__PVT__I_Cache__DOT__c_block[3U][6U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
            = vlSelf->__PVT__I_Cache__DOT__c_block[3U][7U];
    } else {
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U] 
            = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U] 
            = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U] 
            = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U] 
            = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U] 
            = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U] 
            = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U] 
            = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U] 
            = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelf->__PVT__ATOM_U__DOT__result = ((0x10U & (IData)(vlSelf->__PVT__m_d_amo_type))
                                           ? ((8U & (IData)(vlSelf->__PVT__m_d_amo_type))
                                               ? ((4U 
                                                   & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                    ? 
                                                   vlSelf->__PVT__m_d_cache2dram[7U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                     ? 
                                                    vlSelf->__PVT__m_d_cache2dram[7U]
                                                     : 
                                                    ((IData)(vlSelf->__PVT__ATOM_U__DOT__rs1_SLT_rs2)
                                                      ? 
                                                     vlSelf->__PVT__m_d_cache2dram[7U]
                                                      : 
                                                     vlSelf->__PVT__ATOM_U__DOT__m_data[7U])))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                    ? 
                                                   vlSelf->__PVT__m_d_cache2dram[7U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                     ? 
                                                    vlSelf->__PVT__m_d_cache2dram[7U]
                                                     : 
                                                    ((IData)(vlSelf->__PVT__ATOM_U__DOT__rs1_SLT_rs2)
                                                      ? 
                                                     vlSelf->__PVT__ATOM_U__DOT__m_data[7U]
                                                      : 
                                                     vlSelf->__PVT__m_d_cache2dram[7U]))))
                                               : ((4U 
                                                   & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                    ? 
                                                   vlSelf->__PVT__m_d_cache2dram[7U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                     ? 
                                                    vlSelf->__PVT__m_d_cache2dram[7U]
                                                     : 
                                                    ((IData)(vlSelf->__PVT__ATOM_U__DOT__rs1_SLT_rs2)
                                                      ? 
                                                     vlSelf->__PVT__m_d_cache2dram[7U]
                                                      : 
                                                     vlSelf->__PVT__ATOM_U__DOT__m_data[7U])))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                    ? 
                                                   vlSelf->__PVT__m_d_cache2dram[7U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                     ? 
                                                    vlSelf->__PVT__m_d_cache2dram[7U]
                                                     : 
                                                    ((IData)(vlSelf->__PVT__ATOM_U__DOT__rs1_SLT_rs2)
                                                      ? 
                                                     vlSelf->__PVT__ATOM_U__DOT__m_data[7U]
                                                      : 
                                                     vlSelf->__PVT__m_d_cache2dram[7U])))))
                                           : ((8U & (IData)(vlSelf->__PVT__m_d_amo_type))
                                               ? ((4U 
                                                   & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                    ? 
                                                   vlSelf->__PVT__m_d_cache2dram[7U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                     ? 
                                                    vlSelf->__PVT__m_d_cache2dram[7U]
                                                     : 
                                                    (vlSelf->__PVT__ATOM_U__DOT__m_data[7U] 
                                                     & vlSelf->__PVT__m_d_cache2dram[7U])))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                    ? 
                                                   vlSelf->__PVT__m_d_cache2dram[7U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                     ? 
                                                    vlSelf->__PVT__m_d_cache2dram[7U]
                                                     : 
                                                    (vlSelf->__PVT__ATOM_U__DOT__m_data[7U] 
                                                     | vlSelf->__PVT__m_d_cache2dram[7U]))))
                                               : ((4U 
                                                   & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                    ? 
                                                   vlSelf->__PVT__m_d_cache2dram[7U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                     ? 
                                                    vlSelf->__PVT__m_d_cache2dram[7U]
                                                     : 
                                                    (vlSelf->__PVT__ATOM_U__DOT__m_data[7U] 
                                                     ^ 
                                                     vlSelf->__PVT__m_d_cache2dram[7U])))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                    ? 
                                                   vlSelf->__PVT__m_d_cache2dram[7U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__m_d_amo_type))
                                                     ? 
                                                    vlSelf->__PVT__m_d_cache2dram[7U]
                                                     : 
                                                    (vlSelf->__PVT__ATOM_U__DOT__m_data[7U] 
                                                     + 
                                                     vlSelf->__PVT__m_d_cache2dram[7U]))))));
    vlSelf->__PVT__ATOM_U__DOT__sc_fail = (1U & (~ 
                                                 (((IData)(vlSelf->__PVT__ATOM_U__DOT__reservation) 
                                                   & (IData)(vlSelf->__PVT__ATOM_U__DOT__addr_l_match)) 
                                                  & (IData)(vlSelf->__PVT__ATOM_U__DOT__addr_h_match))));
    vlSelf->__Vcellinp__TCM__we2_i = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_we) 
                                      & (0U == (IData)(vlSelf->__PVT__data_sel)));
    vlSelf->__Vcellinp__CLINT__en_i = (IData)(((0U 
                                                == 
                                                (0xf0000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr)) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__data_sel))));
    if ((2U == (IData)(vlSelf->__PVT__data_sel))) {
        vlSelf->__PVT__M_DEVICE_rw_o = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_we;
        vlSelf->__PVT__M_DEVICE_addr_o = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr;
    } else {
        vlSelf->__PVT__M_DEVICE_rw_o = 0U;
        vlSelf->__PVT__M_DEVICE_addr_o = 0U;
    }
    vlSelf->__PVT__I_Cache__DOT__way_hit[0U] = ((vlSelf->__PVT__I_Cache__DOT__c_valid_o
                                                 [0U] 
                                                 & (vlSelf->__PVT__I_Cache__DOT__c_tag_o
                                                    [0U] 
                                                    == 
                                                    (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U);
    vlSelf->__PVT__I_Cache__DOT__way_hit[1U] = ((vlSelf->__PVT__I_Cache__DOT__c_valid_o
                                                 [1U] 
                                                 & (vlSelf->__PVT__I_Cache__DOT__c_tag_o
                                                    [1U] 
                                                    == 
                                                    (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U);
    vlSelf->__PVT__I_Cache__DOT__way_hit[2U] = ((vlSelf->__PVT__I_Cache__DOT__c_valid_o
                                                 [2U] 
                                                 & (vlSelf->__PVT__I_Cache__DOT__c_tag_o
                                                    [2U] 
                                                    == 
                                                    (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U);
    vlSelf->__PVT__I_Cache__DOT__way_hit[3U] = ((vlSelf->__PVT__I_Cache__DOT__c_valid_o
                                                 [3U] 
                                                 & (vlSelf->__PVT__I_Cache__DOT__c_tag_o
                                                    [3U] 
                                                    == 
                                                    (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U);
    vlSelf->__PVT__p_i_code = (((0U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                        >> 0x1cU)) ? 0U
                                 : 1U) ? ((IData)(vlSelf->__PVT__I_Cache__DOT__is_diff_index_reg)
                                           ? ((4U & (IData)(vlSelf->__PVT__I_Cache__DOT__line_offset_reg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__I_Cache__DOT__line_offset_reg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__I_Cache__DOT__line_offset_reg))
                                                    ? 
                                                   vlSelf->__PVT__I_Cache__DOT__c_data_fwd[0U]
                                                    : 
                                                   vlSelf->__PVT__I_Cache__DOT__c_data_fwd[1U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__I_Cache__DOT__line_offset_reg))
                                                    ? 
                                                   vlSelf->__PVT__I_Cache__DOT__c_data_fwd[2U]
                                                    : 
                                                   vlSelf->__PVT__I_Cache__DOT__c_data_fwd[3U]))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__I_Cache__DOT__line_offset_reg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__I_Cache__DOT__line_offset_reg))
                                                    ? 
                                                   vlSelf->__PVT__I_Cache__DOT__c_data_fwd[4U]
                                                    : 
                                                   vlSelf->__PVT__I_Cache__DOT__c_data_fwd[5U])
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__I_Cache__DOT__line_offset_reg))
                                                    ? 
                                                   vlSelf->__PVT__I_Cache__DOT__c_data_fwd[6U]
                                                    : 
                                                   vlSelf->__PVT__I_Cache__DOT__c_data_fwd[7U])))
                                           : vlSelf->__PVT__I_Cache__DOT__p_data_reg)
                                : vlSelf->__PVT__code_from_tcm);
    vlSelf->__PVT__I_Cache__DOT__c_data_hit[0U] = vlSelf->__PVT__I_Cache__DOT__c_block
        [(vlSelf->__PVT__I_Cache__DOT__way_hit[0U] ? 0U
           : (vlSelf->__PVT__I_Cache__DOT__way_hit[1U]
               ? (vlSelf->__PVT__I_Cache__DOT__way_hit
                  [2U] ? 0U : (vlSelf->__PVT__I_Cache__DOT__way_hit
                               [3U] ? 0U : 1U)) : (
                                                   vlSelf->__PVT__I_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 3U
                                                     : 0U))))][0U];
    vlSelf->__PVT__I_Cache__DOT__c_data_hit[1U] = vlSelf->__PVT__I_Cache__DOT__c_block
        [(vlSelf->__PVT__I_Cache__DOT__way_hit[0U] ? 0U
           : (vlSelf->__PVT__I_Cache__DOT__way_hit[1U]
               ? (vlSelf->__PVT__I_Cache__DOT__way_hit
                  [2U] ? 0U : (vlSelf->__PVT__I_Cache__DOT__way_hit
                               [3U] ? 0U : 1U)) : (
                                                   vlSelf->__PVT__I_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 3U
                                                     : 0U))))][1U];
    vlSelf->__PVT__I_Cache__DOT__c_data_hit[2U] = vlSelf->__PVT__I_Cache__DOT__c_block
        [(vlSelf->__PVT__I_Cache__DOT__way_hit[0U] ? 0U
           : (vlSelf->__PVT__I_Cache__DOT__way_hit[1U]
               ? (vlSelf->__PVT__I_Cache__DOT__way_hit
                  [2U] ? 0U : (vlSelf->__PVT__I_Cache__DOT__way_hit
                               [3U] ? 0U : 1U)) : (
                                                   vlSelf->__PVT__I_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 3U
                                                     : 0U))))][2U];
    vlSelf->__PVT__I_Cache__DOT__c_data_hit[3U] = vlSelf->__PVT__I_Cache__DOT__c_block
        [(vlSelf->__PVT__I_Cache__DOT__way_hit[0U] ? 0U
           : (vlSelf->__PVT__I_Cache__DOT__way_hit[1U]
               ? (vlSelf->__PVT__I_Cache__DOT__way_hit
                  [2U] ? 0U : (vlSelf->__PVT__I_Cache__DOT__way_hit
                               [3U] ? 0U : 1U)) : (
                                                   vlSelf->__PVT__I_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 3U
                                                     : 0U))))][3U];
    vlSelf->__PVT__I_Cache__DOT__c_data_hit[4U] = vlSelf->__PVT__I_Cache__DOT__c_block
        [(vlSelf->__PVT__I_Cache__DOT__way_hit[0U] ? 0U
           : (vlSelf->__PVT__I_Cache__DOT__way_hit[1U]
               ? (vlSelf->__PVT__I_Cache__DOT__way_hit
                  [2U] ? 0U : (vlSelf->__PVT__I_Cache__DOT__way_hit
                               [3U] ? 0U : 1U)) : (
                                                   vlSelf->__PVT__I_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 3U
                                                     : 0U))))][4U];
    vlSelf->__PVT__I_Cache__DOT__c_data_hit[5U] = vlSelf->__PVT__I_Cache__DOT__c_block
        [(vlSelf->__PVT__I_Cache__DOT__way_hit[0U] ? 0U
           : (vlSelf->__PVT__I_Cache__DOT__way_hit[1U]
               ? (vlSelf->__PVT__I_Cache__DOT__way_hit
                  [2U] ? 0U : (vlSelf->__PVT__I_Cache__DOT__way_hit
                               [3U] ? 0U : 1U)) : (
                                                   vlSelf->__PVT__I_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 3U
                                                     : 0U))))][5U];
    vlSelf->__PVT__I_Cache__DOT__c_data_hit[6U] = vlSelf->__PVT__I_Cache__DOT__c_block
        [(vlSelf->__PVT__I_Cache__DOT__way_hit[0U] ? 0U
           : (vlSelf->__PVT__I_Cache__DOT__way_hit[1U]
               ? (vlSelf->__PVT__I_Cache__DOT__way_hit
                  [2U] ? 0U : (vlSelf->__PVT__I_Cache__DOT__way_hit
                               [3U] ? 0U : 1U)) : (
                                                   vlSelf->__PVT__I_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 3U
                                                     : 0U))))][6U];
    vlSelf->__PVT__I_Cache__DOT__c_data_hit[7U] = vlSelf->__PVT__I_Cache__DOT__c_block
        [(vlSelf->__PVT__I_Cache__DOT__way_hit[0U] ? 0U
           : (vlSelf->__PVT__I_Cache__DOT__way_hit[1U]
               ? (vlSelf->__PVT__I_Cache__DOT__way_hit
                  [2U] ? 0U : (vlSelf->__PVT__I_Cache__DOT__way_hit
                               [3U] ? 0U : 1U)) : (
                                                   vlSelf->__PVT__I_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   (vlSelf->__PVT__I_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 3U
                                                     : 0U))))][7U];
    vlSelf->__PVT__I_Cache__DOT__cache_hit = (((vlSelf->__PVT__I_Cache__DOT__way_hit
                                                [0U] 
                                                | vlSelf->__PVT__I_Cache__DOT__way_hit
                                                [1U]) 
                                               | vlSelf->__PVT__I_Cache__DOT__way_hit
                                               [2U]) 
                                              | vlSelf->__PVT__I_Cache__DOT__way_hit
                                              [3U]);
}

extern const VlUnpacked<CData/*2:0*/, 512> Vaquila_testharness__ConstPool__TABLE_h8879e5d9_0;

VL_ATTR_COLD void Vaquila_testharness_aquila_top___settle__TOP__aquila_testharness__aquila_core__1(Vaquila_testharness_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_aquila_top___settle__TOP__aquila_testharness__aquila_core__1\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    // Body
    vlSelf->__Vcellinp__TCM__en2_i = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__data_req_o) 
                                      & (0U == (IData)(vlSelf->__PVT__data_sel)));
    vlSelf->__Vcellinp__D_Cache__p_strobe_i = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__data_req_o) 
                                               & (1U 
                                                  == (IData)(vlSelf->__PVT__data_sel)));
    vlSelf->__Vcellinp__TCM__en1_i = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__code_req_o) 
                                      & (~ ((0U == 
                                             (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                              >> 0x1cU))
                                             ? 0U : 1U)));
    vlSelf->__PVT__M_DEVICE_data_o = ((2U == (IData)(vlSelf->__PVT__data_sel))
                                       ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_dataout
                                       : 0U);
    __Vtableidx1 = (((2U == (3U & (IData)(vlSelf->__PVT__m_d_amo_type))) 
                     << 8U) | (((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dmem_o) 
                                << 7U) | (((IData)(vlSelf->__PVT__ATOM_U__DOT__sc_fail) 
                                           << 6U) | 
                                          (((3U == 
                                             (3U & (IData)(vlSelf->__PVT__m_d_amo_type))) 
                                            << 5U) 
                                           | (((IData)(vlSelf->__PVT__m_d_is_amo) 
                                               << 4U) 
                                              | (((IData)(vlSelf->__PVT__m_d_strobe) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->__PVT__ATOM_U__DOT__state)))))));
    vlSelf->__PVT__ATOM_U__DOT__state_next = Vaquila_testharness__ConstPool__TABLE_h8879e5d9_0
        [__Vtableidx1];
    vlSelf->__PVT__atomic_unit_done = ((IData)(vlSelf->__PVT__m_d_is_amo)
                                        ? (3U == (IData)(vlSelf->__PVT__ATOM_U__DOT__state))
                                        : (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dmem_o));
    vlSelf->__PVT__I_Cache__DOT__m_strobe = ((3U == (IData)(vlSelf->__PVT__I_Cache__DOT__S)) 
                                             & (~ (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_imem_o)));
    if (((3U == (IData)(vlSelf->__PVT__I_Cache__DOT__S)) 
         & (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_imem_o))) {
        vlSelf->__PVT__I_Cache__DOT__cache_write[0U] 
            = (0U == (IData)(vlSelf->__PVT__I_Cache__DOT__victim_sel));
        vlSelf->__PVT__I_Cache__DOT__cache_write[1U] 
            = (1U == (IData)(vlSelf->__PVT__I_Cache__DOT__victim_sel));
        vlSelf->__PVT__I_Cache__DOT__cache_write[2U] 
            = (2U == (IData)(vlSelf->__PVT__I_Cache__DOT__victim_sel));
        vlSelf->__PVT__I_Cache__DOT__cache_write[3U] 
            = (3U == (IData)(vlSelf->__PVT__I_Cache__DOT__victim_sel));
    } else {
        vlSelf->__PVT__I_Cache__DOT__cache_write[0U] = 0U;
        vlSelf->__PVT__I_Cache__DOT__cache_write[1U] = 0U;
        vlSelf->__PVT__I_Cache__DOT__cache_write[2U] = 0U;
        vlSelf->__PVT__I_Cache__DOT__cache_write[3U] = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__I_Cache__DOT__S))) {
        vlSelf->__PVT__I_Cache__DOT__S_nxt = ((0x7fU 
                                               > (IData)(vlSelf->__PVT__I_Cache__DOT__init_count))
                                               ? 0U
                                               : 1U);
        vlSelf->__PVT__I_Cache__DOT__valid_write[0U] = 1U;
        vlSelf->__PVT__I_Cache__DOT__valid_write[1U] = 1U;
        vlSelf->__PVT__I_Cache__DOT__valid_write[2U] = 1U;
        vlSelf->__PVT__I_Cache__DOT__valid_write[3U] = 1U;
    } else {
        vlSelf->__PVT__I_Cache__DOT__S_nxt = ((1U == (IData)(vlSelf->__PVT__I_Cache__DOT__S))
                                               ? (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__code_req_o) 
                                                   & ((0U 
                                                       == 
                                                       (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                                        >> 0x1cU))
                                                       ? 0U
                                                       : 1U))
                                                   ? 2U
                                                   : 1U)
                                               : ((2U 
                                                   == (IData)(vlSelf->__PVT__I_Cache__DOT__S))
                                                   ? 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelf->__PVT__I_Cache__DOT__cache_hit)) 
                                                       & (~ (IData)(vlSelf->__PVT__dcache_flushing))))
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__I_Cache__DOT__S))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_imem_o)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__I_Cache__DOT__S))
                                                     ? 2U
                                                     : 1U))));
        vlSelf->__PVT__I_Cache__DOT__valid_write[0U] 
            = vlSelf->__PVT__I_Cache__DOT__cache_write
            [0U];
        vlSelf->__PVT__I_Cache__DOT__valid_write[1U] 
            = vlSelf->__PVT__I_Cache__DOT__cache_write
            [1U];
        vlSelf->__PVT__I_Cache__DOT__valid_write[2U] 
            = vlSelf->__PVT__I_Cache__DOT__cache_write
            [2U];
        vlSelf->__PVT__I_Cache__DOT__valid_write[3U] 
            = vlSelf->__PVT__I_Cache__DOT__cache_write
            [3U];
    }
    vlSelf->__PVT__p_i_ready = (1U & (((0U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                               >> 0x1cU))
                                        ? 0U : 1U) ? 
                                      ((((2U == (IData)(vlSelf->__PVT__I_Cache__DOT__S)) 
                                         & (IData)(vlSelf->__PVT__I_Cache__DOT__cache_hit)) 
                                        | (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_imem_o))
                                        ? 1U : 0U) : (IData)(vlSelf->__PVT__tcm_i_ready)));
    if (vlSelf->__Vcellinp__D_Cache__p_strobe_i) {
        vlSelf->__PVT__D_Cache__DOT__line_offset = 
            (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                   >> 2U));
        vlSelf->__PVT__D_Cache__DOT__line_index = (0x7fU 
                                                   & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                                      >> 5U));
    } else {
        vlSelf->__PVT__D_Cache__DOT__line_offset = 
            (7U & (vlSelf->__PVT__D_Cache__DOT__p_addr_r 
                   >> 2U));
        vlSelf->__PVT__D_Cache__DOT__line_index = (0x7fU 
                                                   & (vlSelf->__PVT__D_Cache__DOT__p_addr_r 
                                                      >> 5U));
    }
    vlSelf->__PVT__D_Cache__DOT__addr_sram = ((IData)(vlSelf->__PVT__dcache_flushing)
                                               ? (IData)(vlSelf->__PVT__D_Cache__DOT__N_LINES_cnt)
                                               : (IData)(vlSelf->__PVT__D_Cache__DOT__line_index));
    vlSelf->__PVT__D_Cache__DOT__c_valid_o[0U] = vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM
        [vlSelf->__PVT__D_Cache__DOT__line_index];
    vlSelf->__PVT__D_Cache__DOT__c_valid_o[1U] = vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM
        [vlSelf->__PVT__D_Cache__DOT__line_index];
    vlSelf->__PVT__D_Cache__DOT__c_valid_o[2U] = vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM
        [vlSelf->__PVT__D_Cache__DOT__line_index];
    vlSelf->__PVT__D_Cache__DOT__c_valid_o[3U] = vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM
        [vlSelf->__PVT__D_Cache__DOT__line_index];
    vlSelf->__PVT__D_Cache__DOT__dirty_raddr = ((7U 
                                                 == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                 ? (IData)(vlSelf->__PVT__D_Cache__DOT__N_LINES_cnt)
                                                 : (IData)(vlSelf->__PVT__D_Cache__DOT__line_index));
    vlSelf->__PVT__D_Cache__DOT__way_hit[0U] = ((vlSelf->__PVT__D_Cache__DOT__c_valid_o
                                                 [0U] 
                                                 & (vlSelf->__PVT__D_Cache__DOT__c_tag_o
                                                    [0U] 
                                                    == 
                                                    (vlSelf->__PVT__D_Cache__DOT__p_addr_r 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U);
    vlSelf->__PVT__D_Cache__DOT__way_hit[1U] = ((vlSelf->__PVT__D_Cache__DOT__c_valid_o
                                                 [1U] 
                                                 & (vlSelf->__PVT__D_Cache__DOT__c_tag_o
                                                    [1U] 
                                                    == 
                                                    (vlSelf->__PVT__D_Cache__DOT__p_addr_r 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U);
    vlSelf->__PVT__D_Cache__DOT__way_hit[2U] = ((vlSelf->__PVT__D_Cache__DOT__c_valid_o
                                                 [2U] 
                                                 & (vlSelf->__PVT__D_Cache__DOT__c_tag_o
                                                    [2U] 
                                                    == 
                                                    (vlSelf->__PVT__D_Cache__DOT__p_addr_r 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U);
    vlSelf->__PVT__D_Cache__DOT__way_hit[3U] = ((vlSelf->__PVT__D_Cache__DOT__c_valid_o
                                                 [3U] 
                                                 & (vlSelf->__PVT__D_Cache__DOT__c_tag_o
                                                    [3U] 
                                                    == 
                                                    (vlSelf->__PVT__D_Cache__DOT__p_addr_r 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U);
    vlSelf->__PVT__D_Cache__DOT__c_dirty_o[0U] = vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM
        [vlSelf->__PVT__D_Cache__DOT__dirty_raddr];
    vlSelf->__PVT__D_Cache__DOT__c_dirty_o[1U] = vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM
        [vlSelf->__PVT__D_Cache__DOT__dirty_raddr];
    vlSelf->__PVT__D_Cache__DOT__c_dirty_o[2U] = vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM
        [vlSelf->__PVT__D_Cache__DOT__dirty_raddr];
    vlSelf->__PVT__D_Cache__DOT__c_dirty_o[3U] = vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM
        [vlSelf->__PVT__D_Cache__DOT__dirty_raddr];
    vlSelf->__PVT__D_Cache__DOT__hit_index = (vlSelf->__PVT__D_Cache__DOT__way_hit
                                              [0U] ? 0U
                                               : (vlSelf->__PVT__D_Cache__DOT__way_hit
                                                  [1U]
                                                   ? 
                                                  (vlSelf->__PVT__D_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 0U
                                                    : 
                                                   (vlSelf->__PVT__D_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 1U))
                                                   : 
                                                  (vlSelf->__PVT__D_Cache__DOT__way_hit
                                                   [2U]
                                                    ? 
                                                   (vlSelf->__PVT__D_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   (vlSelf->__PVT__D_Cache__DOT__way_hit
                                                    [3U]
                                                     ? 3U
                                                     : 0U))));
    vlSelf->__PVT__D_Cache__DOT__cache_hit = (((vlSelf->__PVT__D_Cache__DOT__way_hit
                                                [0U] 
                                                | vlSelf->__PVT__D_Cache__DOT__way_hit
                                                [1U]) 
                                               | vlSelf->__PVT__D_Cache__DOT__way_hit
                                               [2U]) 
                                              | vlSelf->__PVT__D_Cache__DOT__way_hit
                                              [3U]);
    vlSelf->__PVT__D_Cache__DOT__NeedtoWb = vlSelf->__PVT__D_Cache__DOT__c_dirty_o
        [vlSelf->__PVT__D_Cache__DOT__N_WAYS_cnt];
    vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U] = vlSelf->__PVT__D_Cache__DOT__c_block
        [vlSelf->__PVT__D_Cache__DOT__hit_index][0U];
    vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U] = vlSelf->__PVT__D_Cache__DOT__c_block
        [vlSelf->__PVT__D_Cache__DOT__hit_index][1U];
    vlSelf->__PVT__D_Cache__DOT__c_data_hit[2U] = vlSelf->__PVT__D_Cache__DOT__c_block
        [vlSelf->__PVT__D_Cache__DOT__hit_index][2U];
    vlSelf->__PVT__D_Cache__DOT__c_data_hit[3U] = vlSelf->__PVT__D_Cache__DOT__c_block
        [vlSelf->__PVT__D_Cache__DOT__hit_index][3U];
    vlSelf->__PVT__D_Cache__DOT__c_data_hit[4U] = vlSelf->__PVT__D_Cache__DOT__c_block
        [vlSelf->__PVT__D_Cache__DOT__hit_index][4U];
    vlSelf->__PVT__D_Cache__DOT__c_data_hit[5U] = vlSelf->__PVT__D_Cache__DOT__c_block
        [vlSelf->__PVT__D_Cache__DOT__hit_index][5U];
    vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U] = vlSelf->__PVT__D_Cache__DOT__c_block
        [vlSelf->__PVT__D_Cache__DOT__hit_index][6U];
    vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U] = vlSelf->__PVT__D_Cache__DOT__c_block
        [vlSelf->__PVT__D_Cache__DOT__hit_index][7U];
    vlSelf->__PVT__D_Cache__DOT__dirty_datai = ((((5U 
                                                   == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                                  & (IData)(vlSelf->__PVT__atomic_unit_done)) 
                                                 | ((2U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                                    & (IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit))) 
                                                & (IData)(vlSelf->__PVT__D_Cache__DOT__rw));
    if ((((2U == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
          & (IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit)) 
         & (IData)(vlSelf->__PVT__D_Cache__DOT__rw))) {
        vlSelf->__PVT__D_Cache__DOT__cache_write[0U] 
            = vlSelf->__PVT__D_Cache__DOT__way_hit[0U];
        vlSelf->__PVT__D_Cache__DOT__cache_write[1U] 
            = vlSelf->__PVT__D_Cache__DOT__way_hit[1U];
        vlSelf->__PVT__D_Cache__DOT__cache_write[2U] 
            = vlSelf->__PVT__D_Cache__DOT__way_hit[2U];
        vlSelf->__PVT__D_Cache__DOT__cache_write[3U] 
            = vlSelf->__PVT__D_Cache__DOT__way_hit[3U];
    } else if ((6U == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) {
        vlSelf->__PVT__D_Cache__DOT__cache_write[0U] 
            = (0U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
        vlSelf->__PVT__D_Cache__DOT__cache_write[1U] 
            = (1U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
        vlSelf->__PVT__D_Cache__DOT__cache_write[2U] 
            = (2U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
        vlSelf->__PVT__D_Cache__DOT__cache_write[3U] 
            = (3U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
    } else {
        vlSelf->__PVT__D_Cache__DOT__cache_write[0U] = 0U;
        vlSelf->__PVT__D_Cache__DOT__cache_write[1U] = 0U;
        vlSelf->__PVT__D_Cache__DOT__cache_write[2U] = 0U;
        vlSelf->__PVT__D_Cache__DOT__cache_write[3U] = 0U;
    }
    vlSelf->__PVT__p_d_ready = (1U & ((0U == (IData)(vlSelf->__PVT__data_sel_r))
                                       ? (IData)(vlSelf->__PVT__tcm_d_ready)
                                       : ((1U == (IData)(vlSelf->__PVT__data_sel_r))
                                           ? ((((((
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                                   & (IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit)) 
                                                  & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_is_amo))) 
                                                 & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_is_fencei))) 
                                                | (6U 
                                                   == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                               | (0xaU 
                                                  == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                              | ((8U 
                                                  == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                                 & (IData)(vlSelf->__PVT__D_Cache__DOT__WbAllFinish_r)))
                                           : ((2U == (IData)(vlSelf->__PVT__data_sel_r))
                                               ? ((IData)(vlSymsp->TOP__aquila_testharness.is_dev_req)
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->__PVT__M_DEVICE_addr_o 
                                                        >> 0x18U)))
                                                    ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_ack)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__aquila_testharness.dev_sel)
                                                     ? (IData)(vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_data_ready)
                                                     : (IData)(vlSymsp->TOP__aquila_testharness__mock_uart_0.__PVT__M_DEVICE_data_ready)))
                                                   : 0U)
                                               : ((0U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                                       >> 0x10U)))
                                                   ? (IData)(vlSelf->__PVT__clint_d_ready)
                                                   : 1U)))));
    if ((4U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
        if ((2U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
            if ((1U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
                vlSelf->__PVT__D_Cache__DOT__fromMem 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[0U];
                vlSelf->__PVT__D_Cache__DOT__fromCache 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U];
            } else {
                vlSelf->__PVT__D_Cache__DOT__fromMem 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[1U];
                vlSelf->__PVT__D_Cache__DOT__fromCache 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U];
            }
        } else if ((1U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
            vlSelf->__PVT__D_Cache__DOT__fromMem = 
                vlSelf->__PVT__D_Cache__DOT__m_data[2U];
            vlSelf->__PVT__D_Cache__DOT__fromCache 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[2U];
        } else {
            vlSelf->__PVT__D_Cache__DOT__fromMem = 
                vlSelf->__PVT__D_Cache__DOT__m_data[3U];
            vlSelf->__PVT__D_Cache__DOT__fromCache 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[3U];
        }
    } else if ((2U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
        if ((1U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
            vlSelf->__PVT__D_Cache__DOT__fromMem = 
                vlSelf->__PVT__D_Cache__DOT__m_data[4U];
            vlSelf->__PVT__D_Cache__DOT__fromCache 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[4U];
        } else {
            vlSelf->__PVT__D_Cache__DOT__fromMem = 
                vlSelf->__PVT__D_Cache__DOT__m_data[5U];
            vlSelf->__PVT__D_Cache__DOT__fromCache 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[5U];
        }
    } else if ((1U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
        vlSelf->__PVT__D_Cache__DOT__fromMem = vlSelf->__PVT__D_Cache__DOT__m_data[6U];
        vlSelf->__PVT__D_Cache__DOT__fromCache = vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U];
    } else {
        vlSelf->__PVT__D_Cache__DOT__fromMem = vlSelf->__PVT__D_Cache__DOT__m_data[7U];
        vlSelf->__PVT__D_Cache__DOT__fromCache = vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U];
    }
    vlSelf->__PVT__p_d_mem2core = ((0U == (IData)(vlSelf->__PVT__data_sel_r))
                                    ? vlSelf->__PVT__data_from_tcm
                                    : ((1U == (IData)(vlSelf->__PVT__data_sel_r))
                                        ? ((0xaU == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                            ? vlSelf->__PVT__D_Cache__DOT__m_data[7U]
                                            : ((((2U 
                                                  == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                                 & (IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit)) 
                                                & (~ (IData)(vlSelf->__PVT__D_Cache__DOT__rw)))
                                                ? vlSelf->__PVT__D_Cache__DOT__fromCache
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                                    & (~ (IData)(vlSelf->__PVT__D_Cache__DOT__rw)))
                                                    ? vlSelf->__PVT__D_Cache__DOT__fromMem
                                                    : 0U)))
                                        : ((2U == (IData)(vlSelf->__PVT__data_sel_r))
                                            ? ((IData)(vlSymsp->TOP__aquila_testharness.is_dev_req)
                                                ? (
                                                   (2U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->__PVT__M_DEVICE_addr_o 
                                                        >> 0x18U)))
                                                    ? vlSymsp->TOP__aquila_testharness.__PVT__wishbone_data2core
                                                    : 
                                                   ((IData)(vlSymsp->TOP__aquila_testharness.dev_sel)
                                                     ? vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_dev2core_data
                                                     : vlSymsp->TOP__aquila_testharness__mock_uart_0.__PVT__M_DEVICE_dev2core_data))
                                                : 0U)
                                            : ((0U 
                                                != 
                                                (0xfU 
                                                 & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                                    >> 0x10U)))
                                                ? 0U
                                                : vlSelf->__PVT__clint_dout))));
    vlSelf->__PVT__D_Cache__DOT__m_strobe = (((((5U 
                                                 == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                                | (3U 
                                                   == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                               | (9U 
                                                  == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                              | ((7U 
                                                  == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                                 & (IData)(vlSelf->__PVT__D_Cache__DOT__NeedtoWb))) 
                                             & (~ (IData)(vlSelf->__PVT__atomic_unit_done)));
    vlSelf->__PVT__D_Cache__DOT__S_nxt = (0xfU & ((
                                                   (((((((0U 
                                                          == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                                                         | (1U 
                                                            == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                                        | (2U 
                                                           == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                                       | (3U 
                                                          == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                                      | (4U 
                                                         == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                                     | (5U 
                                                        == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                                    | (6U 
                                                       == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) 
                                                   | (7U 
                                                      == (IData)(vlSelf->__PVT__D_Cache__DOT__S)))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                    ? 
                                                   ((0x7fU 
                                                     > (IData)(vlSelf->__PVT__D_Cache__DOT__init_count))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                     ? 
                                                    (((IData)(vlSelf->__Vcellinp__D_Cache__p_strobe_i) 
                                                      | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_is_fencei))
                                                      ? 2U
                                                      : 1U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__dcache_flushing)
                                                       ? 7U
                                                       : 
                                                      ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_is_amo)
                                                        ? 
                                                       (((IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit) 
                                                         & vlSelf->__PVT__D_Cache__DOT__c_dirty_o
                                                         [vlSelf->__PVT__D_Cache__DOT__hit_index])
                                                         ? 3U
                                                         : 9U)
                                                        : 
                                                       ((IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit)
                                                         ? 1U
                                                         : 
                                                        (vlSelf->__PVT__D_Cache__DOT__c_dirty_o
                                                         [vlSelf->__PVT__D_Cache__DOT__victim_sel]
                                                          ? 3U
                                                          : 5U))))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__atomic_unit_done)
                                                        ? 4U
                                                        : 3U)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                        ? 
                                                       ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_is_amo)
                                                         ? 9U
                                                         : 5U)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__atomic_unit_done)
                                                          ? 6U
                                                          : 5U)
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__D_Cache__DOT__NeedtoWb)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__atomic_unit_done)
                                                            ? 8U
                                                            : 7U)
                                                           : 8U))))))))
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__D_Cache__DOT__WbAllFinish_r)
                                                     ? 1U
                                                     : 7U)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__atomic_unit_done)
                                                      ? 0xaU
                                                      : 9U)
                                                     : 1U))));
    if ((0U == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) {
        vlSelf->__PVT__D_Cache__DOT__valid_write[0U] = 1U;
        vlSelf->__PVT__D_Cache__DOT__valid_write[1U] = 1U;
        vlSelf->__PVT__D_Cache__DOT__valid_write[2U] = 1U;
        vlSelf->__PVT__D_Cache__DOT__valid_write[3U] = 1U;
        vlSelf->__PVT__D_Cache__DOT__dirty_write[0U] = 1U;
        vlSelf->__PVT__D_Cache__DOT__dirty_write[1U] = 1U;
        vlSelf->__PVT__D_Cache__DOT__dirty_write[2U] = 1U;
        vlSelf->__PVT__D_Cache__DOT__dirty_write[3U] = 1U;
    } else {
        if (((5U == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
             & (IData)(vlSelf->__PVT__atomic_unit_done))) {
            vlSelf->__PVT__D_Cache__DOT__valid_write[0U] 
                = (0U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
            vlSelf->__PVT__D_Cache__DOT__valid_write[1U] 
                = (1U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
            vlSelf->__PVT__D_Cache__DOT__valid_write[2U] 
                = (2U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
            vlSelf->__PVT__D_Cache__DOT__valid_write[3U] 
                = (3U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
        } else if ((((9U == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                     & (IData)(vlSelf->__PVT__atomic_unit_done)) 
                    & (IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit))) {
            vlSelf->__PVT__D_Cache__DOT__valid_write[0U] 
                = (0U == (IData)(vlSelf->__PVT__D_Cache__DOT__hit_index));
            vlSelf->__PVT__D_Cache__DOT__valid_write[1U] 
                = (1U == (IData)(vlSelf->__PVT__D_Cache__DOT__hit_index));
            vlSelf->__PVT__D_Cache__DOT__valid_write[2U] 
                = (2U == (IData)(vlSelf->__PVT__D_Cache__DOT__hit_index));
            vlSelf->__PVT__D_Cache__DOT__valid_write[3U] 
                = (3U == (IData)(vlSelf->__PVT__D_Cache__DOT__hit_index));
        } else {
            vlSelf->__PVT__D_Cache__DOT__valid_write[0U] = 0U;
            vlSelf->__PVT__D_Cache__DOT__valid_write[1U] = 0U;
            vlSelf->__PVT__D_Cache__DOT__valid_write[2U] = 0U;
            vlSelf->__PVT__D_Cache__DOT__valid_write[3U] = 0U;
        }
        if ((8U == (IData)(vlSelf->__PVT__D_Cache__DOT__S_nxt))) {
            vlSelf->__PVT__D_Cache__DOT__dirty_write[0U] 
                = (0U == (IData)(vlSelf->__PVT__D_Cache__DOT__N_WAYS_cnt));
            vlSelf->__PVT__D_Cache__DOT__dirty_write[1U] 
                = (1U == (IData)(vlSelf->__PVT__D_Cache__DOT__N_WAYS_cnt));
            vlSelf->__PVT__D_Cache__DOT__dirty_write[2U] 
                = (2U == (IData)(vlSelf->__PVT__D_Cache__DOT__N_WAYS_cnt));
            vlSelf->__PVT__D_Cache__DOT__dirty_write[3U] 
                = (3U == (IData)(vlSelf->__PVT__D_Cache__DOT__N_WAYS_cnt));
        } else if ((((5U == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                     & (IData)(vlSelf->__PVT__atomic_unit_done)) 
                    & (IData)(vlSelf->__PVT__D_Cache__DOT__rw))) {
            vlSelf->__PVT__D_Cache__DOT__dirty_write[0U] 
                = (0U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
            vlSelf->__PVT__D_Cache__DOT__dirty_write[1U] 
                = (1U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
            vlSelf->__PVT__D_Cache__DOT__dirty_write[2U] 
                = (2U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
            vlSelf->__PVT__D_Cache__DOT__dirty_write[3U] 
                = (3U == (IData)(vlSelf->__PVT__D_Cache__DOT__victim_sel));
        } else if (((((2U == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                      & (IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit)) 
                     & (IData)(vlSelf->__PVT__D_Cache__DOT__rw)) 
                    | (((9U == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
                        & (IData)(vlSelf->__PVT__atomic_unit_done)) 
                       & (IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit)))) {
            vlSelf->__PVT__D_Cache__DOT__dirty_write[0U] 
                = (0U == (IData)(vlSelf->__PVT__D_Cache__DOT__hit_index));
            vlSelf->__PVT__D_Cache__DOT__dirty_write[1U] 
                = (1U == (IData)(vlSelf->__PVT__D_Cache__DOT__hit_index));
            vlSelf->__PVT__D_Cache__DOT__dirty_write[2U] 
                = (2U == (IData)(vlSelf->__PVT__D_Cache__DOT__hit_index));
            vlSelf->__PVT__D_Cache__DOT__dirty_write[3U] 
                = (3U == (IData)(vlSelf->__PVT__D_Cache__DOT__hit_index));
        } else {
            vlSelf->__PVT__D_Cache__DOT__dirty_write[0U] = 0U;
            vlSelf->__PVT__D_Cache__DOT__dirty_write[1U] = 0U;
            vlSelf->__PVT__D_Cache__DOT__dirty_write[2U] = 0U;
            vlSelf->__PVT__D_Cache__DOT__dirty_write[3U] = 0U;
        }
    }
    vlSelf->__PVT__D_Cache__DOT__dirty_waddr = ((8U 
                                                 == (IData)(vlSelf->__PVT__D_Cache__DOT__S_nxt))
                                                 ? (IData)(vlSelf->__PVT__D_Cache__DOT__N_LINES_cnt)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                  ? (IData)(vlSelf->__PVT__D_Cache__DOT__init_count)
                                                  : (IData)(vlSelf->__PVT__D_Cache__DOT__line_index)));
    vlSelf->__PVT__D_Cache__DOT__update_data = ((8U 
                                                 & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                    ? vlSelf->__PVT__D_Cache__DOT__datain_from_p
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                    ? 0U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__datain_from_p) 
                                                     | (0xffffU 
                                                        & vlSelf->__PVT__D_Cache__DOT__fromMem))
                                                     : 
                                                    ((0xffff0000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__datain_from_p) 
                                                     | (0xffffU 
                                                        & vlSelf->__PVT__D_Cache__DOT__fromCache)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                    ? 0U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                     ? 
                                                    ((0xff000000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__datain_from_p) 
                                                     | (0xffffffU 
                                                        & vlSelf->__PVT__D_Cache__DOT__fromMem))
                                                     : 
                                                    ((0xff000000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__datain_from_p) 
                                                     | (0xffffffU 
                                                        & vlSelf->__PVT__D_Cache__DOT__fromCache))))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                    ? 0U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                     ? 
                                                    ((0xff000000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__fromMem) 
                                                     | ((0xff0000U 
                                                         & vlSelf->__PVT__D_Cache__DOT__datain_from_p) 
                                                        | (0xffffU 
                                                           & vlSelf->__PVT__D_Cache__DOT__fromMem)))
                                                     : 
                                                    ((0xff000000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__fromCache) 
                                                     | ((0xff0000U 
                                                         & vlSelf->__PVT__D_Cache__DOT__datain_from_p) 
                                                        | (0xffffU 
                                                           & vlSelf->__PVT__D_Cache__DOT__fromCache))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                    ? 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__fromMem) 
                                                     | (0xffffU 
                                                        & vlSelf->__PVT__D_Cache__DOT__datain_from_p))
                                                     : 
                                                    ((0xffff0000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__fromCache) 
                                                     | (0xffffU 
                                                        & vlSelf->__PVT__D_Cache__DOT__datain_from_p)))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__fromMem) 
                                                     | ((0xff00U 
                                                         & vlSelf->__PVT__D_Cache__DOT__datain_from_p) 
                                                        | (0xffU 
                                                           & vlSelf->__PVT__D_Cache__DOT__fromMem)))
                                                     : 
                                                    ((0xffff0000U 
                                                      & vlSelf->__PVT__D_Cache__DOT__fromCache) 
                                                     | ((0xff00U 
                                                         & vlSelf->__PVT__D_Cache__DOT__datain_from_p) 
                                                        | (0xffU 
                                                           & vlSelf->__PVT__D_Cache__DOT__fromCache)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p))
                                                    ? 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__D_Cache__DOT__S))
                                                     ? 
                                                    ((0xffffff00U 
                                                      & vlSelf->__PVT__D_Cache__DOT__fromMem) 
                                                     | (0xffU 
                                                        & vlSelf->__PVT__D_Cache__DOT__datain_from_p))
                                                     : 
                                                    ((0xffffff00U 
                                                      & vlSelf->__PVT__D_Cache__DOT__fromCache) 
                                                     | (0xffU 
                                                        & vlSelf->__PVT__D_Cache__DOT__datain_from_p)))
                                                    : 0U))));
    if ((4U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
        if ((2U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
            if ((1U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
                vlSelf->__PVT__D_Cache__DOT__c_data_update[0U] 
                    = vlSelf->__PVT__D_Cache__DOT__update_data;
                vlSelf->__PVT__D_Cache__DOT__c_data_update[1U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[2U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[2U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[3U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[3U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[4U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[4U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[5U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[5U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[6U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[7U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[0U] 
                    = vlSelf->__PVT__D_Cache__DOT__update_data;
                vlSelf->__PVT__D_Cache__DOT__m_data_update[1U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[1U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[2U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[2U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[3U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[3U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[4U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[4U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[5U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[5U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[6U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[6U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[7U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[7U];
            } else {
                vlSelf->__PVT__D_Cache__DOT__c_data_update[0U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[1U] 
                    = vlSelf->__PVT__D_Cache__DOT__update_data;
                vlSelf->__PVT__D_Cache__DOT__c_data_update[2U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[2U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[3U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[3U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[4U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[4U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[5U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[5U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[6U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U];
                vlSelf->__PVT__D_Cache__DOT__c_data_update[7U] 
                    = vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[0U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[0U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[1U] 
                    = vlSelf->__PVT__D_Cache__DOT__update_data;
                vlSelf->__PVT__D_Cache__DOT__m_data_update[2U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[2U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[3U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[3U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[4U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[4U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[5U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[5U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[6U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[6U];
                vlSelf->__PVT__D_Cache__DOT__m_data_update[7U] 
                    = vlSelf->__PVT__D_Cache__DOT__m_data[7U];
            }
        } else if ((1U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
            vlSelf->__PVT__D_Cache__DOT__c_data_update[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U]))));
            vlSelf->__PVT__D_Cache__DOT__c_data_update[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U]))) 
                           >> 0x20U));
            vlSelf->__PVT__D_Cache__DOT__c_data_update[2U] 
                = vlSelf->__PVT__D_Cache__DOT__update_data;
            vlSelf->__PVT__D_Cache__DOT__c_data_update[3U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[3U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[4U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[4U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[5U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[5U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[6U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[7U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__m_data[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__D_Cache__DOT__m_data[0U]))));
            vlSelf->__PVT__D_Cache__DOT__m_data_update[1U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__m_data[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__D_Cache__DOT__m_data[0U]))) 
                           >> 0x20U));
            vlSelf->__PVT__D_Cache__DOT__m_data_update[2U] 
                = vlSelf->__PVT__D_Cache__DOT__update_data;
            vlSelf->__PVT__D_Cache__DOT__m_data_update[3U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[3U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[4U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[4U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[5U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[5U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[6U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[6U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[7U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[7U];
        } else {
            vlSelf->__PVT__D_Cache__DOT__c_data_update[0U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[1U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[2U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[2U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[3U] 
                = vlSelf->__PVT__D_Cache__DOT__update_data;
            vlSelf->__PVT__D_Cache__DOT__c_data_update[4U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[4U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[5U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[5U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[6U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[7U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[0U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[0U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[1U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[1U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[2U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[2U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[3U] 
                = vlSelf->__PVT__D_Cache__DOT__update_data;
            vlSelf->__PVT__D_Cache__DOT__m_data_update[4U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[4U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[5U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[5U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[6U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[6U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[7U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[7U];
        }
    } else if ((2U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
        if ((1U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
            vlSelf->__PVT__D_Cache__DOT__c_data_update[0U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[1U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[2U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[2U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[3U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[3U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[4U] 
                = vlSelf->__PVT__D_Cache__DOT__update_data;
            vlSelf->__PVT__D_Cache__DOT__c_data_update[5U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[5U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[6U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[7U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[0U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[0U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[1U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[1U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[2U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[2U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[3U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[3U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[4U] 
                = vlSelf->__PVT__D_Cache__DOT__update_data;
            vlSelf->__PVT__D_Cache__DOT__m_data_update[5U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[5U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[6U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[6U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[7U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[7U];
        } else {
            vlSelf->__PVT__D_Cache__DOT__c_data_update[0U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[1U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[2U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[2U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[3U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[3U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[4U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_hit[4U];
            vlSelf->__PVT__D_Cache__DOT__c_data_update[5U] 
                = vlSelf->__PVT__D_Cache__DOT__update_data;
            vlSelf->__PVT__D_Cache__DOT__c_data_update[6U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U]))));
            vlSelf->__PVT__D_Cache__DOT__c_data_update[7U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U]))) 
                           >> 0x20U));
            vlSelf->__PVT__D_Cache__DOT__m_data_update[0U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[0U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[1U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[1U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[2U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[2U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[3U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[3U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[4U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data[4U];
            vlSelf->__PVT__D_Cache__DOT__m_data_update[5U] 
                = vlSelf->__PVT__D_Cache__DOT__update_data;
            vlSelf->__PVT__D_Cache__DOT__m_data_update[6U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__m_data[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->__PVT__D_Cache__DOT__m_data[6U]))));
            vlSelf->__PVT__D_Cache__DOT__m_data_update[7U] 
                = (IData)(((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__m_data[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__D_Cache__DOT__m_data[6U]))) 
                           >> 0x20U));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__D_Cache__DOT__line_offset))) {
        vlSelf->__PVT__D_Cache__DOT__c_data_update[0U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[1U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[2U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[2U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[3U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[3U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[4U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[4U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[5U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[5U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[6U] 
            = (IData)((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U])) 
                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__D_Cache__DOT__update_data))));
        vlSelf->__PVT__D_Cache__DOT__c_data_update[7U] 
            = (IData)(((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__c_data_hit[7U])) 
                         << 0x20U) | (QData)((IData)(vlSelf->__PVT__D_Cache__DOT__update_data))) 
                       >> 0x20U));
        vlSelf->__PVT__D_Cache__DOT__m_data_update[0U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[0U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[1U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[1U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[2U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[2U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[3U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[3U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[4U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[4U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[5U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[5U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[6U] 
            = (IData)((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__m_data[7U])) 
                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__D_Cache__DOT__update_data))));
        vlSelf->__PVT__D_Cache__DOT__m_data_update[7U] 
            = (IData)(((((QData)((IData)(vlSelf->__PVT__D_Cache__DOT__m_data[7U])) 
                         << 0x20U) | (QData)((IData)(vlSelf->__PVT__D_Cache__DOT__update_data))) 
                       >> 0x20U));
    } else {
        vlSelf->__PVT__D_Cache__DOT__c_data_update[0U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[0U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[1U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[1U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[2U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[2U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[3U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[3U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[4U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[4U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[5U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[5U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[6U] 
            = vlSelf->__PVT__D_Cache__DOT__c_data_hit[6U];
        vlSelf->__PVT__D_Cache__DOT__c_data_update[7U] 
            = vlSelf->__PVT__D_Cache__DOT__update_data;
        vlSelf->__PVT__D_Cache__DOT__m_data_update[0U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[0U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[1U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[1U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[2U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[2U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[3U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[3U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[4U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[4U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[5U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[5U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[6U] 
            = vlSelf->__PVT__D_Cache__DOT__m_data[6U];
        vlSelf->__PVT__D_Cache__DOT__m_data_update[7U] 
            = vlSelf->__PVT__D_Cache__DOT__update_data;
    }
    if (vlSelf->__PVT__D_Cache__DOT__rw) {
        if (((2U == (IData)(vlSelf->__PVT__D_Cache__DOT__S)) 
             & (IData)(vlSelf->__PVT__D_Cache__DOT__cache_hit))) {
            vlSelf->__PVT__D_Cache__DOT__c_data_i[0U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_update[0U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[1U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_update[1U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[2U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_update[2U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[3U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_update[3U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[4U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_update[4U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[5U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_update[5U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[6U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_update[6U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[7U] 
                = vlSelf->__PVT__D_Cache__DOT__c_data_update[7U];
        } else if ((6U == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) {
            vlSelf->__PVT__D_Cache__DOT__c_data_i[0U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data_update[0U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[1U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data_update[1U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[2U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data_update[2U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[3U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data_update[3U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[4U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data_update[4U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[5U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data_update[5U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[6U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data_update[6U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[7U] 
                = vlSelf->__PVT__D_Cache__DOT__m_data_update[7U];
        } else {
            vlSelf->__PVT__D_Cache__DOT__c_data_i[0U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[1U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[2U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[3U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[4U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[5U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[6U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->__PVT__D_Cache__DOT__c_data_i[7U] 
                = Vaquila_testharness__ConstPool__CONST_h9e67c271_0[7U];
        }
    } else if ((6U == (IData)(vlSelf->__PVT__D_Cache__DOT__S))) {
        vlSelf->__PVT__D_Cache__DOT__c_data_i[0U] = 
            vlSelf->__PVT__D_Cache__DOT__m_data[0U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[1U] = 
            vlSelf->__PVT__D_Cache__DOT__m_data[1U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[2U] = 
            vlSelf->__PVT__D_Cache__DOT__m_data[2U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[3U] = 
            vlSelf->__PVT__D_Cache__DOT__m_data[3U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[4U] = 
            vlSelf->__PVT__D_Cache__DOT__m_data[4U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[5U] = 
            vlSelf->__PVT__D_Cache__DOT__m_data[5U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[6U] = 
            vlSelf->__PVT__D_Cache__DOT__m_data[6U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[7U] = 
            vlSelf->__PVT__D_Cache__DOT__m_data[7U];
    } else {
        vlSelf->__PVT__D_Cache__DOT__c_data_i[0U] = 
            Vaquila_testharness__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[1U] = 
            Vaquila_testharness__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[2U] = 
            Vaquila_testharness__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[3U] = 
            Vaquila_testharness__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[4U] = 
            Vaquila_testharness__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[5U] = 
            Vaquila_testharness__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[6U] = 
            Vaquila_testharness__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__D_Cache__DOT__c_data_i[7U] = 
            Vaquila_testharness__ConstPool__CONST_h9e67c271_0[7U];
    }
}
