// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_testharness.h for the primary calling header

#ifndef VERILATED_VAQUILA_TESTHARNESS_CORE_TOP_H_
#define VERILATED_VAQUILA_TESTHARNESS_CORE_TOP_H_  // guard

#include "verilated.h"

class Vaquila_testharness__Syms;
class Vaquila_testharness_csr_file;


class Vaquila_testharness_core_top final : public VerilatedModule {
  public:
    // CELLS
    Vaquila_testharness_csr_file* CSR;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__stall_i,0,0);
        VL_IN8(__PVT__code_ready_i,0,0);
        VL_OUT8(__PVT__code_req_o,0,0);
        VL_IN8(__PVT__data_ready_i,0,0);
        VL_OUT8(__PVT__data_rw_o,0,0);
        VL_OUT8(__PVT__data_byte_enable_o,3,0);
        VL_OUT8(__PVT__data_req_o,0,0);
        VL_OUT8(__PVT__data_is_amo_o,0,0);
        VL_OUT8(__PVT__data_amo_type_o,4,0);
        VL_IN8(__PVT__data_addr_ext_i,0,0);
        VL_OUT8(__PVT__cache_flush_o,0,0);
        VL_IN8(__PVT__ext_irq_i,0,0);
        VL_IN8(__PVT__tmr_irq_i,0,0);
        VL_IN8(__PVT__sft_irq_i,0,0);
        CData/*0:0*/ __PVT__fet_branch_hit;
        CData/*0:0*/ __PVT__fet_branch_decision;
        CData/*0:0*/ __PVT__fet2dec_valid;
        CData/*0:0*/ __PVT__fet2dec_xcpt_valid;
        CData/*3:0*/ __PVT__fet2dec_xcpt_cause;
        CData/*0:0*/ __PVT__dec_is_branch;
        CData/*0:0*/ __PVT__dec_is_jal;
        CData/*0:0*/ __PVT__dec_is_jalr;
        CData/*0:0*/ __PVT__dec_branch_hit;
        CData/*0:0*/ __PVT__dec_branch_decision;
        CData/*0:0*/ dec2plc_load_hazard;
        CData/*0:0*/ dec_unsupported_instr;
        CData/*4:0*/ __PVT__dec2fwd_rs1_addr;
        CData/*4:0*/ __PVT__dec2fwd_rs2_addr;
        CData/*2:0*/ __PVT__dec2exe_rd_input_sel;
        CData/*4:0*/ __PVT__dec2exe_rd_addr;
        CData/*0:0*/ __PVT__dec2exe_rd_we;
        CData/*0:0*/ __PVT__dec2exe_signex_sel;
        CData/*0:0*/ __PVT__dec2exe_we;
        CData/*0:0*/ __PVT__dec2exe_re;
        CData/*0:0*/ __PVT__dec2exe_csr_we;
        CData/*4:0*/ __PVT__dec2exe_csr_imm;
        CData/*1:0*/ __PVT__dec2exe_inA_sel;
        CData/*1:0*/ __PVT__dec2exe_inB_sel;
        CData/*1:0*/ __PVT__dec2exe_dsize_sel;
        CData/*2:0*/ __PVT__dec2exe_operation_sel;
        CData/*0:0*/ __PVT__dec2exe_alu_muldiv_sel;
        CData/*0:0*/ __PVT__dec2exe_shift_sel;
        CData/*0:0*/ __PVT__dec2exe_is_fencei;
        CData/*0:0*/ __PVT__dec2exe_is_amo;
        CData/*4:0*/ __PVT__dec2exe_amo_type;
        CData/*0:0*/ __PVT__dec2exe_fetch_valid;
        CData/*0:0*/ __PVT__dec2exe_sys_jump;
        CData/*1:0*/ __PVT__dec2exe_sys_jump_csr_addr;
        CData/*0:0*/ __PVT__dec2exe_xcpt_valid;
        CData/*3:0*/ __PVT__dec2exe_xcpt_cause;
        CData/*0:0*/ __PVT__exe_branch_taken;
        CData/*0:0*/ __PVT__exe_re;
        CData/*0:0*/ __PVT__exe_we;
        CData/*0:0*/ __PVT__exe_branch_misprediction;
        CData/*0:0*/ __PVT__exe_is_fencei;
        CData/*0:0*/ __PVT__exe2mem_is_amo;
        CData/*4:0*/ __PVT__exe2mem_amo_type;
        CData/*0:0*/ __PVT__exe2mem_csr_we;
        CData/*2:0*/ __PVT__exe2mem_rd_input_sel;
        CData/*4:0*/ __PVT__exe2mem_rd_addr;
        CData/*0:0*/ __PVT__exe2mem_rd_we;
        CData/*0:0*/ __PVT__exe2mem_signex_sel;
    };
    struct {
        CData/*1:0*/ __PVT__exe2mem_dsize_sel;
        CData/*0:0*/ __PVT__exe2mem_fetch_valid;
        CData/*0:0*/ __PVT__exe2mem_sys_jump;
        CData/*1:0*/ __PVT__exe2mem_sys_jump_csr_addr;
        CData/*0:0*/ __PVT__exe2mem_xcpt_valid;
        CData/*3:0*/ __PVT__exe2mem_xcpt_cause;
        CData/*2:0*/ __PVT__mem2wbk_rd_input_sel;
        CData/*4:0*/ __PVT__mem2wbk_rd_addr;
        CData/*0:0*/ __PVT__mem2wbk_rd_we;
        CData/*0:0*/ __PVT__mem2wbk_signex_sel;
        CData/*3:0*/ __PVT__mem_byte_sel;
        CData/*0:0*/ __PVT__mem_align_exception;
        CData/*0:0*/ __PVT__mem2wbk_fetch_valid;
        CData/*0:0*/ __PVT__mem2wbk_xcpt_valid;
        CData/*3:0*/ __PVT__mem2wbk_xcpt_cause;
        CData/*0:0*/ __PVT__mem2wbk_csr_we;
        CData/*0:0*/ plc2dec_flush;
        CData/*0:0*/ __PVT__csr_irq_taken_r;
        CData/*0:0*/ __PVT__bpu_branch_hit;
        CData/*0:0*/ __PVT__bpu_branch_decision;
        CData/*0:0*/ __PVT__irq_enable;
        CData/*0:0*/ irq_taken;
        CData/*0:0*/ __PVT__iS;
        CData/*0:0*/ __PVT__iS_nxt;
        CData/*1:0*/ __PVT__dS;
        CData/*1:0*/ __PVT__dS_nxt;
        CData/*0:0*/ __PVT__stall_data_fetch;
        CData/*0:0*/ stall_pipeline;
        CData/*0:0*/ __Vcellinp__Fetch__flush_i;
        CData/*0:0*/ __Vcellinp__Fetch__stall_i;
        CData/*0:0*/ __Vcellinp__Decode__flush_i;
        CData/*0:0*/ __Vcellinp__Execute__flush_i;
        CData/*0:0*/ __Vcellinp__Execute__stall_i;
        CData/*0:0*/ __Vcellinp__Memory__flush_i;
        CData/*0:0*/ __Vcellinp__CSR__sft_irq_i;
        CData/*0:0*/ __Vcellinp__CSR__tmr_irq_i;
        CData/*0:0*/ __Vcellinp__CSR__ext_irq_i;
        CData/*0:0*/ __PVT__Pipeline_Control__DOT__branch_flush;
        CData/*0:0*/ __PVT__Branch_Prediction_Unit__DOT__we;
        CData/*0:0*/ __PVT__Branch_Prediction_Unit__DOT__BHT_hit_ff;
        CData/*0:0*/ __PVT__Branch_Prediction_Unit__DOT__BHT_hit;
        CData/*0:0*/ __PVT__Register_File__DOT__we;
        CData/*0:0*/ __PVT__Fetch__DOT__stall_delay;
        CData/*0:0*/ __PVT__Fetch__DOT__flush_delay;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_op;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_op_imm;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_jal;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_jalr;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_load;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_store;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_branch;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_lui;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_auipc;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_miscmem;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_system;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_amo;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_fence;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_csrrs;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_csrrc;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_csr;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_sys_op;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_ecall;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_ebreak;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_mret;
    };
    struct {
        CData/*0:0*/ __PVT__Decode__DOT__rv32_sret;
        CData/*0:0*/ __PVT__Decode__DOT__rv32_illegal_instr_xcpt;
        CData/*0:0*/ __PVT__Decode__DOT__xcpt_valid;
        CData/*0:0*/ __PVT__Decode__DOT__is_r_type;
        CData/*0:0*/ __PVT__Decode__DOT__is_s_type;
        CData/*0:0*/ __PVT__Decode__DOT__is_b_type;
        CData/*0:0*/ __PVT__Execute__DOT__stall_from_muldiv;
        CData/*0:0*/ __PVT__Execute__DOT__muldiv_ready;
        CData/*2:0*/ __PVT__Execute__DOT__alu_operation;
        CData/*0:0*/ __PVT__Execute__DOT__muldiv_req;
        CData/*0:0*/ __PVT__Execute__DOT__MulDiv__DOT__is_a_neg;
        CData/*0:0*/ __PVT__Execute__DOT__MulDiv__DOT__is_b_neg;
        CData/*0:0*/ __PVT__Execute__DOT__MulDiv__DOT__signed_adjust;
        CData/*5:0*/ __PVT__Execute__DOT__MulDiv__DOT__cnt;
        CData/*1:0*/ __PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter;
        CData/*2:0*/ __PVT__Execute__DOT__MulDiv__DOT__S;
        CData/*2:0*/ __PVT__Execute__DOT__MulDiv__DOT__S_nxt;
        CData/*0:0*/ __PVT__Execute__DOT__MulDiv__DOT__mul_add;
        CData/*0:0*/ __PVT__Execute__DOT__MulDiv__DOT__div_sub;
        CData/*0:0*/ __PVT__Writeback__DOT__sys_jump_r;
        CData/*1:0*/ __PVT__Writeback__DOT__sys_jump_csr_addr_r;
        CData/*0:0*/ __PVT__Writeback__DOT__xcpt_valid_r;
        CData/*3:0*/ __PVT__Writeback__DOT__xcpt_cause_r;
        CData/*4:0*/ __Vdly__exe2mem_amo_type;
        CData/*0:0*/ __Vdly__exe2mem_is_amo;
        CData/*0:0*/ __Vdly__exe_is_fencei;
        CData/*0:0*/ __Vdly__exe_we;
        CData/*0:0*/ __Vdly__mem2wbk_csr_we;
        CData/*3:0*/ __Vdly__Writeback__DOT__xcpt_cause_r;
        CData/*0:0*/ __Vdly__Writeback__DOT__sys_jump_r;
        CData/*1:0*/ __Vdly__Writeback__DOT__sys_jump_csr_addr_r;
        CData/*0:0*/ __Vdly__Writeback__DOT__xcpt_valid_r;
        SData/*11:0*/ __PVT__dec2fwd_csr_addr;
        SData/*11:0*/ __PVT__exe2mem_csr_addr;
        SData/*11:0*/ __PVT__mem2wbk_csr_addr;
        SData/*11:0*/ __Vdly__mem2wbk_csr_addr;
        VL_IN(__PVT__init_pc_addr_i,31,0);
        VL_IN(__PVT__code_i,31,0);
        VL_OUT(__PVT__code_addr_o,31,0);
        VL_IN(__PVT__data_i,31,0);
        VL_OUT(__PVT__data_o,31,0);
        VL_OUT(__PVT__data_addr_o,31,0);
        IData/*31:0*/ __PVT__fet2dec_instr;
        IData/*31:0*/ fet2dec_pc;
        IData/*31:0*/ __PVT__fet2dec_xcpt_tval;
        IData/*31:0*/ __PVT__dec_pc;
        IData/*31:0*/ __PVT__dec2fwd_rs1_data;
        IData/*31:0*/ __PVT__dec2fwd_rs2_data;
        IData/*31:0*/ __PVT__dec2fwd_csr_data;
        IData/*31:0*/ __PVT__dec2exe_imm;
        IData/*31:0*/ __PVT__dec2exe_xcpt_tval;
        IData/*31:0*/ __PVT__exe2mem_p_data;
        IData/*31:0*/ __PVT__exe2mem_csr_data;
        IData/*31:0*/ __PVT__exe2mem_rs2_data;
        IData/*31:0*/ __PVT__exe2mem_addr;
        IData/*31:0*/ __PVT__exe2mem_xcpt_tval;
        IData/*31:0*/ __PVT__exe2mem_pc;
        IData/*31:0*/ __PVT__mem_dataout;
        IData/*31:0*/ __PVT__mem2wbk_aligned_data;
        IData/*31:0*/ __PVT__mem2wbk_p_data;
        IData/*31:0*/ __PVT__mem2wbk_xcpt_tval;
        IData/*31:0*/ __PVT__mem2wbk_pc;
        IData/*31:0*/ __PVT__mem2wbk_csr_data;
        IData/*31:0*/ __PVT__nxt_unwb_PC;
    };
    struct {
        IData/*31:0*/ __PVT__data_read_reg;
        IData/*31:0*/ __PVT__data_read_mem;
        IData/*31:0*/ __PVT__Forwarding_Unit__DOT__correct_rs1_data;
        IData/*31:0*/ __PVT__Forwarding_Unit__DOT__correct_rs2_data;
        IData/*31:0*/ __PVT__Forwarding_Unit__DOT__correct_csr_data;
        IData/*31:0*/ __PVT__Branch_Prediction_Unit__DOT__idx;
        IData/*31:0*/ __PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__i;
        IData/*31:0*/ __PVT__Program_Counter__DOT__pc_r;
        IData/*31:0*/ __PVT__Program_Counter__DOT__pc_increment;
        IData/*31:0*/ __PVT__Fetch__DOT__instruction_delay;
        IData/*31:0*/ __PVT__Execute__DOT__inputA;
        IData/*31:0*/ __PVT__Execute__DOT__inputB;
        IData/*31:0*/ __PVT__Execute__DOT__alu_result;
        IData/*31:0*/ __PVT__Execute__DOT__muldiv_result;
        IData/*31:0*/ __PVT__Execute__DOT__csr_inputB;
        IData/*31:0*/ __PVT__Execute__DOT__ALU__DOT__ones;
        IData/*31:0*/ __PVT__Execute__DOT__MulDiv__DOT__op_a;
        IData/*31:0*/ __PVT__Execute__DOT__MulDiv__DOT__op_b;
        IData/*31:0*/ __PVT__Execute__DOT__MulDiv__DOT__reg32;
        VlWide<3>/*64:0*/ __PVT__Execute__DOT__MulDiv__DOT__result;
        IData/*31:0*/ __PVT__Execute__DOT__MulDiv__DOT__op_a_r;
        IData/*31:0*/ __PVT__Execute__DOT__MulDiv__DOT__op_b_r;
        IData/*31:0*/ __PVT__Execute__DOT__MulDiv__DOT__quotient;
        IData/*31:0*/ __PVT__Execute__DOT__MulDiv__DOT__remainder;
        VlWide<3>/*64:0*/ __PVT__Execute__DOT__MulDiv__DOT__result_tmp;
        IData/*31:0*/ __PVT__Writeback__DOT__rd_data;
        IData/*31:0*/ __PVT__Writeback__DOT__xcpt_tval_r;
        IData/*31:0*/ __Vdly__Program_Counter__DOT__pc_r;
        IData/*31:0*/ __Vdly__exe2mem_addr;
        IData/*31:0*/ __Vdly__mem2wbk_csr_data;
        IData/*31:0*/ __Vdly__Writeback__DOT__xcpt_tval_r;
        QData/*63:0*/ Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o;
        QData/*63:0*/ __PVT__Execute__DOT__MulDiv__DOT__fast_result;
        QData/*63:0*/ __PVT__Execute__DOT__MulDiv__DOT__mul0;
        QData/*63:0*/ __PVT__Execute__DOT__MulDiv__DOT__mul1;
        VlUnpacked<CData/*1:0*/, 64> __PVT__Branch_Prediction_Unit__DOT__branch_likelihood;
        VlUnpacked<QData/*63:0*/, 64> __PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 32> __PVT__Register_File__DOT__x;
    };

    // INTERNAL VARIABLES
    Vaquila_testharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_testharness_core_top(Vaquila_testharness__Syms* symsp, const char* name);
    ~Vaquila_testharness_core_top();
    VL_UNCOPYABLE(Vaquila_testharness_core_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
