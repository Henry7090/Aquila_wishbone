// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_testharness.h for the primary calling header

#ifndef VERILATED_VAQUILA_TESTHARNESS_AQUILA_TOP_H_
#define VERILATED_VAQUILA_TESTHARNESS_AQUILA_TOP_H_  // guard

#include "verilated.h"

class Vaquila_testharness__Syms;
class Vaquila_testharness_core_top;


class Vaquila_testharness_aquila_top final : public VerilatedModule {
  public:
    // CELLS
    Vaquila_testharness_core_top* RISCV_CORE0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_OUT8(__PVT__M_IMEM_strobe_o,0,0);
        VL_IN8(__PVT__M_IMEM_done_i,0,0);
        VL_OUT8(__PVT__M_DMEM_strobe_o,0,0);
        VL_OUT8(__PVT__M_DMEM_rw_o,0,0);
        VL_IN8(__PVT__M_DMEM_done_i,0,0);
        VL_OUT8(__PVT__M_DEVICE_strobe_o,0,0);
        VL_OUT8(__PVT__M_DEVICE_rw_o,0,0);
        VL_OUT8(__PVT__M_DEVICE_byte_enable_o,3,0);
        VL_IN8(__PVT__M_DEVICE_data_ready_i,0,0);
        VL_IN8(__PVT__ext_irq_i,0,0);
        CData/*1:0*/ __PVT__data_sel;
        CData/*0:0*/ __PVT__dcache_flushing;
        CData/*0:0*/ __PVT__p_i_ready;
        CData/*0:0*/ __PVT__tcm_i_ready;
        CData/*0:0*/ __PVT__p_d_ready;
        CData/*0:0*/ __PVT__tcm_d_ready;
        CData/*0:0*/ __PVT__m_i_strobe;
        CData/*0:0*/ __PVT__m_d_strobe;
        CData/*0:0*/ __PVT__m_d_rw;
        CData/*0:0*/ __PVT__m_d_is_amo;
        CData/*4:0*/ __PVT__m_d_amo_type;
        CData/*0:0*/ __PVT__atomic_unit_done;
        CData/*1:0*/ __PVT__data_sel_r;
        CData/*0:0*/ __Vcellinp__TCM__we2_i;
        CData/*0:0*/ __Vcellinp__TCM__en2_i;
        CData/*0:0*/ __Vcellinp__TCM__en1_i;
        CData/*0:0*/ __PVT__clint_d_ready;
        CData/*0:0*/ __Vcellinp__CLINT__en_i;
        CData/*0:0*/ __Vcellinp__D_Cache__p_strobe_i;
        CData/*0:0*/ __PVT__CLINT__DOT__carry;
        CData/*2:0*/ __PVT__ATOM_U__DOT__state;
        CData/*2:0*/ __PVT__ATOM_U__DOT__state_next;
        CData/*0:0*/ __PVT__ATOM_U__DOT__reservation;
        CData/*0:0*/ __PVT__ATOM_U__DOT__addr_h_match;
        CData/*0:0*/ __PVT__ATOM_U__DOT__addr_l_match;
        CData/*0:0*/ __PVT__ATOM_U__DOT__rm_reservation;
        CData/*0:0*/ __PVT__ATOM_U__DOT__sc_fail;
        CData/*0:0*/ __PVT__ATOM_U__DOT__rs1_SLT_rs2;
        CData/*0:0*/ ATOM_U__DOT____Vlvbound_h3f58e671__1;
        CData/*0:0*/ __PVT__I_Cache__DOT__cache_hit;
        CData/*6:0*/ __PVT__I_Cache__DOT__init_count;
        CData/*1:0*/ __PVT__I_Cache__DOT__victim_sel;
        CData/*6:0*/ __PVT__I_Cache__DOT__index_prev;
        CData/*0:0*/ __PVT__I_Cache__DOT__is_diff_index_reg;
        CData/*2:0*/ __PVT__I_Cache__DOT__line_offset_reg;
        CData/*3:0*/ __PVT__I_Cache__DOT__way_offset_reg;
        CData/*2:0*/ __PVT__I_Cache__DOT__S;
        CData/*2:0*/ __PVT__I_Cache__DOT__S_nxt;
        CData/*0:0*/ __PVT__I_Cache__DOT__m_strobe;
        CData/*0:0*/ __PVT__I_Cache__DOT__m_strobe_r;
        CData/*1:0*/ __PVT__D_Cache__DOT__hit_index;
        CData/*0:0*/ __PVT__D_Cache__DOT__cache_hit;
        CData/*6:0*/ __PVT__D_Cache__DOT__init_count;
        CData/*1:0*/ __PVT__D_Cache__DOT__victim_sel;
        CData/*2:0*/ __PVT__D_Cache__DOT__line_offset;
        CData/*6:0*/ __PVT__D_Cache__DOT__line_index;
        CData/*6:0*/ __PVT__D_Cache__DOT__addr_sram;
        CData/*0:0*/ __PVT__D_Cache__DOT__rw;
        CData/*3:0*/ __PVT__D_Cache__DOT__byte_enable_from_p;
        CData/*0:0*/ __PVT__D_Cache__DOT__is_amo_reg;
        CData/*6:0*/ __PVT__D_Cache__DOT__N_LINES_cnt;
        CData/*1:0*/ __PVT__D_Cache__DOT__N_WAYS_cnt;
    };
    struct {
        CData/*0:0*/ __PVT__D_Cache__DOT__NeedtoWb;
        CData/*0:0*/ __PVT__D_Cache__DOT__WbAllFinish_r;
        CData/*3:0*/ __PVT__D_Cache__DOT__S;
        CData/*3:0*/ __PVT__D_Cache__DOT__S_nxt;
        CData/*0:0*/ __PVT__D_Cache__DOT__m_strobe;
        CData/*0:0*/ __PVT__D_Cache__DOT__m_strobe_r;
        CData/*6:0*/ __PVT__D_Cache__DOT__dirty_raddr;
        CData/*6:0*/ __PVT__D_Cache__DOT__dirty_waddr;
        CData/*0:0*/ __PVT__D_Cache__DOT__dirty_datai;
        CData/*6:0*/ __Vdlyvdim0__D_Cache__DOT__FIFO_cnt__v0;
        CData/*1:0*/ __Vdlyvval__D_Cache__DOT__FIFO_cnt__v0;
        CData/*0:0*/ __Vdlyvset__D_Cache__DOT__FIFO_cnt__v0;
        CData/*0:0*/ __Vdlyvset__D_Cache__DOT__FIFO_cnt__v1;
        CData/*6:0*/ __Vdly__D_Cache__DOT__N_LINES_cnt;
        CData/*1:0*/ __Vdly__D_Cache__DOT__N_WAYS_cnt;
        VL_IN(__PVT__base_addr_i,31,0);
        VL_OUT(__PVT__M_IMEM_addr_o,31,0);
        VL_INW(__PVT__M_IMEM_data_i,255,0,8);
        VL_OUT(__PVT__M_DMEM_addr_o,31,0);
        VL_OUTW(__PVT__M_DMEM_data_o,255,0,8);
        VL_INW(__PVT__M_DMEM_data_i,255,0,8);
        VL_OUT(__PVT__M_DEVICE_addr_o,31,0);
        VL_OUT(__PVT__M_DEVICE_data_o,31,0);
        VL_IN(__PVT__M_DEVICE_data_i,31,0);
        IData/*31:0*/ __PVT__p_i_code;
        IData/*31:0*/ __PVT__code_from_tcm;
        IData/*31:0*/ __PVT__p_d_mem2core;
        IData/*31:0*/ __PVT__data_from_tcm;
        IData/*31:0*/ __PVT__m_i_addr;
        IData/*31:0*/ __PVT__m_d_addr;
        VlWide<8>/*255:0*/ __PVT__m_d_cache2dram;
        IData/*31:0*/ __PVT__clint_dout;
        IData/*31:0*/ __PVT__TCM__DOT__idx1;
        IData/*31:0*/ __PVT__TCM__DOT__idx2;
        IData/*31:0*/ CLINT__DOT____Vlvbound_he7837cd2__0;
        VlWide<8>/*255:0*/ __PVT__ATOM_U__DOT__m_data;
        IData/*31:0*/ __PVT__ATOM_U__DOT__amo_addr;
        IData/*31:0*/ __PVT__ATOM_U__DOT__result;
        IData/*31:0*/ __PVT__ATOM_U__DOT__i;
        IData/*29:0*/ ATOM_U__DOT____Vlvbound_h7f1d83f5__0;
        VlWide<8>/*255:0*/ __PVT__I_Cache__DOT__c_data_hit;
        IData/*31:0*/ __PVT__I_Cache__DOT__p_data_reg;
        VlWide<8>/*255:0*/ __PVT__I_Cache__DOT__c_data_fwd;
        IData/*31:0*/ __PVT__I_Cache__DOT__idx;
        VlWide<8>/*255:0*/ I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o;
        VlWide<8>/*255:0*/ I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o;
        VlWide<8>/*255:0*/ I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o;
        VlWide<8>/*255:0*/ I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o;
        IData/*31:0*/ __PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__i;
        IData/*31:0*/ __PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__i;
        IData/*31:0*/ __PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__i;
        IData/*31:0*/ __PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__i;
        IData/*31:0*/ __PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__i;
        IData/*31:0*/ __PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__i;
        IData/*31:0*/ __PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__i;
        IData/*31:0*/ __PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__i;
        VlWide<8>/*255:0*/ __PVT__D_Cache__DOT__c_data_i;
        VlWide<8>/*255:0*/ __PVT__D_Cache__DOT__c_data_update;
        VlWide<8>/*255:0*/ __PVT__D_Cache__DOT__m_data_update;
        VlWide<8>/*255:0*/ __PVT__D_Cache__DOT__c_data_hit;
        IData/*31:0*/ __PVT__D_Cache__DOT__idx;
        IData/*31:0*/ __PVT__D_Cache__DOT__p_addr_r;
        IData/*31:0*/ __PVT__D_Cache__DOT__datain_from_p;
        VlWide<8>/*255:0*/ __PVT__D_Cache__DOT__m_data;
    };
    struct {
        IData/*31:0*/ __PVT__D_Cache__DOT__fromCache;
        IData/*31:0*/ __PVT__D_Cache__DOT__fromMem;
        IData/*31:0*/ __PVT__D_Cache__DOT__update_data;
        VlWide<8>/*255:0*/ D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o;
        VlWide<8>/*255:0*/ D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o;
        VlWide<8>/*255:0*/ D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o;
        VlWide<8>/*255:0*/ D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o;
        IData/*19:0*/ D_Cache__DOT____Vcellout__genblk2__BRA__0__KET____DOT__TAG_BRAM__data_o;
        IData/*19:0*/ D_Cache__DOT____Vcellout__genblk2__BRA__1__KET____DOT__TAG_BRAM__data_o;
        IData/*19:0*/ D_Cache__DOT____Vcellout__genblk2__BRA__2__KET____DOT__TAG_BRAM__data_o;
        IData/*19:0*/ D_Cache__DOT____Vcellout__genblk2__BRA__3__KET____DOT__TAG_BRAM__data_o;
        IData/*31:0*/ __PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__i;
        IData/*31:0*/ __PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__i;
        IData/*31:0*/ __PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__i;
        IData/*31:0*/ __PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__i;
        IData/*31:0*/ __PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__i;
        IData/*31:0*/ __PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__i;
        IData/*31:0*/ __PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__i;
        IData/*31:0*/ __PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__i;
        QData/*63:0*/ __PVT__CLINT__DOT__mtimecmp;
        VlUnpacked<IData/*31:0*/, 16384> __PVT__TCM__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 5> __PVT__CLINT__DOT__clint_mem;
        VlUnpacked<IData/*29:0*/, 1> __PVT__ATOM_U__DOT__reservation_addr;
        VlUnpacked<CData/*0:0*/, 4> __PVT__I_Cache__DOT__way_hit;
        VlUnpacked<VlWide<8>/*255:0*/, 4> __PVT__I_Cache__DOT__c_block;
        VlUnpacked<CData/*0:0*/, 4> __PVT__I_Cache__DOT__cache_write;
        VlUnpacked<CData/*0:0*/, 4> __PVT__I_Cache__DOT__valid_write;
        VlUnpacked<IData/*19:0*/, 4> __PVT__I_Cache__DOT__c_tag_o;
        VlUnpacked<CData/*0:0*/, 4> __PVT__I_Cache__DOT__c_valid_o;
        VlUnpacked<CData/*1:0*/, 128> __PVT__I_Cache__DOT__FIFO_cnt;
        VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM;
        VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM;
        VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM;
        VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM;
        VlUnpacked<IData/*19:0*/, 128> __PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM;
        VlUnpacked<IData/*19:0*/, 128> __PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM;
        VlUnpacked<IData/*19:0*/, 128> __PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM;
        VlUnpacked<IData/*19:0*/, 128> __PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 4> __PVT__D_Cache__DOT__way_hit;
        VlUnpacked<VlWide<8>/*255:0*/, 4> __PVT__D_Cache__DOT__c_block;
        VlUnpacked<CData/*0:0*/, 4> __PVT__D_Cache__DOT__cache_write;
        VlUnpacked<CData/*0:0*/, 4> __PVT__D_Cache__DOT__valid_write;
        VlUnpacked<CData/*0:0*/, 4> __PVT__D_Cache__DOT__dirty_write;
        VlUnpacked<IData/*19:0*/, 4> __PVT__D_Cache__DOT__c_tag_o;
        VlUnpacked<CData/*0:0*/, 4> __PVT__D_Cache__DOT__c_valid_o;
        VlUnpacked<CData/*0:0*/, 4> __PVT__D_Cache__DOT__c_dirty_o;
        VlUnpacked<CData/*1:0*/, 128> __PVT__D_Cache__DOT__FIFO_cnt;
        VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM;
        VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM;
        VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM;
        VlUnpacked<VlWide<8>/*255:0*/, 128> __PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM;
        VlUnpacked<IData/*19:0*/, 128> __PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM;
        VlUnpacked<IData/*19:0*/, 128> __PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM;
        VlUnpacked<IData/*19:0*/, 128> __PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM;
        VlUnpacked<IData/*19:0*/, 128> __PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 128> __PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM;
        VlUnpacked<CData/*0:0*/, 128> __PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM;
    };

    // INTERNAL VARIABLES
    Vaquila_testharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_testharness_aquila_top(Vaquila_testharness__Syms* symsp, const char* name);
    ~Vaquila_testharness_aquila_top();
    VL_UNCOPYABLE(Vaquila_testharness_aquila_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
