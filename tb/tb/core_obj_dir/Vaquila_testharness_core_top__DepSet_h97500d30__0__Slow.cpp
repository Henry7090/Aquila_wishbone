// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_core_top.h"

VL_ATTR_COLD void Vaquila_testharness_core_top___initial__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___initial__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[__Vilp] = 0ULL;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__i = 0x40U;
}

VL_ATTR_COLD void Vaquila_testharness_core_top___ctor_var_reset(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__init_pc_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__code_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__code_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_rw_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_byte_enable_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_is_amo_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_amo_type_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__data_addr_ext_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cache_flush_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ext_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tmr_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sft_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fet2dec_instr = VL_RAND_RESET_I(32);
    vlSelf->fet2dec_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fet_branch_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fet_branch_decision = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fet2dec_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fet2dec_xcpt_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fet2dec_xcpt_cause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fet2dec_xcpt_tval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec_is_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_is_jal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_branch_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_branch_decision = VL_RAND_RESET_I(1);
    vlSelf->dec2plc_load_hazard = VL_RAND_RESET_I(1);
    vlSelf->dec_unsupported_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2fwd_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dec2fwd_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dec2fwd_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec2fwd_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec2fwd_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__dec2fwd_csr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec2exe_rd_input_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dec2exe_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dec2exe_rd_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_signex_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec2exe_csr_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_csr_imm = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dec2exe_inA_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dec2exe_inB_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dec2exe_dsize_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dec2exe_operation_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dec2exe_alu_muldiv_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_shift_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_is_fencei = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_is_amo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_amo_type = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dec2exe_fetch_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_sys_jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_sys_jump_csr_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dec2exe_xcpt_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec2exe_xcpt_cause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dec2exe_xcpt_tval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_branch_misprediction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_is_fencei = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe2mem_is_amo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe2mem_amo_type = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe2mem_p_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe2mem_csr_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe2mem_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__exe2mem_csr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe2mem_rd_input_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe2mem_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe2mem_rd_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe2mem_signex_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe2mem_dsize_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__exe2mem_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe2mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe2mem_fetch_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe2mem_sys_jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe2mem_sys_jump_csr_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__exe2mem_xcpt_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe2mem_xcpt_cause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__exe2mem_xcpt_tval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe2mem_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem2wbk_rd_input_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__mem2wbk_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem2wbk_rd_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem2wbk_signex_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_dataout = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_byte_sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_align_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem2wbk_aligned_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem2wbk_p_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem2wbk_fetch_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem2wbk_xcpt_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem2wbk_xcpt_cause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem2wbk_xcpt_tval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem2wbk_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem2wbk_csr_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem2wbk_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__mem2wbk_csr_data = VL_RAND_RESET_I(32);
    vlSelf->plc2dec_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_irq_taken_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bpu_branch_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bpu_branch_decision = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irq_enable = VL_RAND_RESET_I(1);
    vlSelf->irq_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nxt_unwb_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iS = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iS_nxt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dS = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dS_nxt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__stall_data_fetch = VL_RAND_RESET_I(1);
    vlSelf->stall_pipeline = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_read_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_read_mem = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__Fetch__flush_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__Fetch__stall_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__Decode__flush_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__Execute__flush_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__Execute__stall_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__Memory__flush_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__CSR__sft_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__CSR__tmr_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__CSR__ext_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Pipeline_Control__DOT__branch_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Forwarding_Unit__DOT__correct_csr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Branch_Prediction_Unit__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Branch_Prediction_Unit__DOT__BHT_hit_ff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Branch_Prediction_Unit__DOT__BHT_hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__Branch_Prediction_Unit__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Register_File__DOT__we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__Register_File__DOT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__Program_Counter__DOT__pc_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Program_Counter__DOT__pc_increment = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Fetch__DOT__stall_delay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Fetch__DOT__flush_delay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Fetch__DOT__instruction_delay = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Decode__DOT__rv32_op = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_op_imm = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_jal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_store = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_lui = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_auipc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_miscmem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_system = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_amo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_fence = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_csrrs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_csrrc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_csr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_sys_op = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_ecall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_ebreak = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_mret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_sret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__rv32_illegal_instr_xcpt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__xcpt_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__is_r_type = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__is_s_type = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Decode__DOT__is_b_type = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Execute__DOT__inputA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__inputB = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__muldiv_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__stall_from_muldiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Execute__DOT__muldiv_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Execute__DOT__alu_operation = VL_RAND_RESET_I(3);
    vlSelf->__PVT__Execute__DOT__muldiv_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Execute__DOT__csr_inputB = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__ALU__DOT__ones = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_b_neg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__signed_adjust = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_a_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_b_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter = VL_RAND_RESET_I(2);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S = VL_RAND_RESET_I(3);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S_nxt = VL_RAND_RESET_I(3);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul_add = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__div_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp);
    vlSelf->__PVT__Writeback__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Writeback__DOT__sys_jump_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Writeback__DOT__sys_jump_csr_addr_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__Writeback__DOT__xcpt_valid_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Writeback__DOT__xcpt_cause_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Writeback__DOT__xcpt_tval_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__Program_Counter__DOT__pc_r = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__exe2mem_amo_type = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__exe2mem_is_amo = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__exe_is_fencei = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__exe2mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__exe_we = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mem2wbk_csr_data = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mem2wbk_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__mem2wbk_csr_we = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Writeback__DOT__xcpt_cause_r = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__Writeback__DOT__sys_jump_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Writeback__DOT__sys_jump_csr_addr_r = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__Writeback__DOT__xcpt_valid_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Writeback__DOT__xcpt_tval_r = VL_RAND_RESET_I(32);
}
