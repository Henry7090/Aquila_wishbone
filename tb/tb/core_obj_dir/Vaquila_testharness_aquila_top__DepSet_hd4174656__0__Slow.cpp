// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_aquila_top.h"

VL_ATTR_COLD void Vaquila_testharness_aquila_top___initial__TOP__aquila_testharness__aquila_core__0(Vaquila_testharness_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_aquila_top___initial__TOP__aquila_testharness__aquila_core__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h245b5462__0;
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__i = 0x80U;
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__i = 0x80U;
    __Vtemp_h245b5462__0[0U] = 0x2e6d656dU;
    __Vtemp_h245b5462__0[1U] = 0x626f6f74U;
    __Vtemp_h245b5462__0[2U] = 0x75617274U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h245b5462__0)
                 ,  &(vlSelf->__PVT__TCM__DOT__RAM)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vaquila_testharness_aquila_top___ctor_var_reset(Vaquila_testharness_aquila_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_aquila_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__base_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__M_IMEM_strobe_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_IMEM_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__M_IMEM_done_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__PVT__M_IMEM_data_i);
    vlSelf->__PVT__M_DMEM_strobe_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_DMEM_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__M_DMEM_rw_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__PVT__M_DMEM_data_o);
    vlSelf->__PVT__M_DMEM_done_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__PVT__M_DMEM_data_i);
    vlSelf->__PVT__M_DEVICE_strobe_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_DEVICE_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__M_DEVICE_rw_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_DEVICE_byte_enable_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__M_DEVICE_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__M_DEVICE_data_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M_DEVICE_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ext_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dcache_flushing = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p_i_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p_i_code = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code_from_tcm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tcm_i_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p_d_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p_d_mem2core = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_from_tcm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tcm_d_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_i_strobe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_d_strobe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_d_rw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_i_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_d_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->__PVT__m_d_cache2dram);
    vlSelf->__PVT__m_d_is_amo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_d_amo_type = VL_RAND_RESET_I(5);
    vlSelf->__PVT__atomic_unit_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_sel_r = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__TCM__we2_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__TCM__en2_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__TCM__en1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clint_dout = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clint_d_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__CLINT__en_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__D_Cache__p_strobe_i = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        vlSelf->__PVT__TCM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__TCM__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__TCM__DOT__idx2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__PVT__CLINT__DOT__clint_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__CLINT__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__CLINT__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->CLINT__DOT____Vlvbound_he7837cd2__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->__PVT__ATOM_U__DOT__m_data);
    vlSelf->__PVT__ATOM_U__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ATOM_U__DOT__state_next = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__ATOM_U__DOT__reservation_addr[__Vi0] = VL_RAND_RESET_I(30);
    }
    vlSelf->__PVT__ATOM_U__DOT__reservation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ATOM_U__DOT__addr_h_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ATOM_U__DOT__addr_l_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ATOM_U__DOT__rm_reservation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ATOM_U__DOT__sc_fail = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ATOM_U__DOT__amo_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ATOM_U__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ATOM_U__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ATOM_U__DOT__rs1_SLT_rs2 = VL_RAND_RESET_I(1);
    vlSelf->ATOM_U__DOT____Vlvbound_h3f58e671__1 = VL_RAND_RESET_I(1);
    vlSelf->ATOM_U__DOT____Vlvbound_h7f1d83f5__0 = VL_RAND_RESET_I(30);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__way_hit[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__I_Cache__DOT__cache_hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__I_Cache__DOT__c_block[__Vi0]);
    }
    VL_RAND_RESET_W(256, vlSelf->__PVT__I_Cache__DOT__c_data_hit);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__cache_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__valid_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__c_tag_o[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__c_valid_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__I_Cache__DOT__init_count = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__FIFO_cnt[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__I_Cache__DOT__victim_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__I_Cache__DOT__index_prev = VL_RAND_RESET_I(7);
    vlSelf->__PVT__I_Cache__DOT__p_data_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__I_Cache__DOT__is_diff_index_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__I_Cache__DOT__line_offset_reg = VL_RAND_RESET_I(3);
    vlSelf->__PVT__I_Cache__DOT__way_offset_reg = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(256, vlSelf->__PVT__I_Cache__DOT__c_data_fwd);
    vlSelf->__PVT__I_Cache__DOT__S = VL_RAND_RESET_I(3);
    vlSelf->__PVT__I_Cache__DOT__S_nxt = VL_RAND_RESET_I(3);
    vlSelf->__PVT__I_Cache__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->__PVT__I_Cache__DOT__m_strobe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__I_Cache__DOT__m_strobe_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o);
    VL_RAND_RESET_W(256, vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o);
    VL_RAND_RESET_W(256, vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o);
    VL_RAND_RESET_W(256, vlSelf->I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__way_hit[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__hit_index = VL_RAND_RESET_I(2);
    vlSelf->__PVT__D_Cache__DOT__cache_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__c_data_i);
    VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__c_data_update);
    VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__m_data_update);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__c_block[__Vi0]);
    }
    VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__c_data_hit);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__cache_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__valid_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__dirty_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__c_tag_o[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__c_valid_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__c_dirty_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__init_count = VL_RAND_RESET_I(7);
    vlSelf->__PVT__D_Cache__DOT__idx = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__FIFO_cnt[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__D_Cache__DOT__victim_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__D_Cache__DOT__line_offset = VL_RAND_RESET_I(3);
    vlSelf->__PVT__D_Cache__DOT__line_index = VL_RAND_RESET_I(7);
    vlSelf->__PVT__D_Cache__DOT__addr_sram = VL_RAND_RESET_I(7);
    vlSelf->__PVT__D_Cache__DOT__p_addr_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__D_Cache__DOT__datain_from_p = VL_RAND_RESET_I(32);
    vlSelf->__PVT__D_Cache__DOT__rw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__D_Cache__DOT__byte_enable_from_p = VL_RAND_RESET_I(4);
    vlSelf->__PVT__D_Cache__DOT__is_amo_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__m_data);
    vlSelf->__PVT__D_Cache__DOT__N_LINES_cnt = VL_RAND_RESET_I(7);
    vlSelf->__PVT__D_Cache__DOT__N_WAYS_cnt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__D_Cache__DOT__NeedtoWb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__D_Cache__DOT__WbAllFinish_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__D_Cache__DOT__S = VL_RAND_RESET_I(4);
    vlSelf->__PVT__D_Cache__DOT__S_nxt = VL_RAND_RESET_I(4);
    vlSelf->__PVT__D_Cache__DOT__fromCache = VL_RAND_RESET_I(32);
    vlSelf->__PVT__D_Cache__DOT__fromMem = VL_RAND_RESET_I(32);
    vlSelf->__PVT__D_Cache__DOT__m_strobe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__D_Cache__DOT__m_strobe_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__D_Cache__DOT__update_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__D_Cache__DOT__dirty_raddr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__D_Cache__DOT__dirty_waddr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__D_Cache__DOT__dirty_datai = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o);
    VL_RAND_RESET_W(256, vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o);
    VL_RAND_RESET_W(256, vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o);
    VL_RAND_RESET_W(256, vlSelf->D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o);
    vlSelf->D_Cache__DOT____Vcellout__genblk2__BRA__0__KET____DOT__TAG_BRAM__data_o = VL_RAND_RESET_I(20);
    vlSelf->D_Cache__DOT____Vcellout__genblk2__BRA__1__KET____DOT__TAG_BRAM__data_o = VL_RAND_RESET_I(20);
    vlSelf->D_Cache__DOT____Vcellout__genblk2__BRA__2__KET____DOT__TAG_BRAM__data_o = VL_RAND_RESET_I(20);
    vlSelf->D_Cache__DOT____Vcellout__genblk2__BRA__3__KET____DOT__TAG_BRAM__data_o = VL_RAND_RESET_I(20);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__D_Cache__DOT__FIFO_cnt__v0 = 0;
    vlSelf->__Vdlyvval__D_Cache__DOT__FIFO_cnt__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__D_Cache__DOT__FIFO_cnt__v0 = 0;
    vlSelf->__Vdlyvset__D_Cache__DOT__FIFO_cnt__v1 = 0;
    vlSelf->__Vdly__D_Cache__DOT__N_LINES_cnt = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__D_Cache__DOT__N_WAYS_cnt = VL_RAND_RESET_I(2);
}
