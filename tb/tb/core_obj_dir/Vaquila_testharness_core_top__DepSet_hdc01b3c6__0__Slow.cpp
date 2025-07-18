// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_core_top.h"

VL_ATTR_COLD void Vaquila_testharness_core_top___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__Vfuncout;
    IData/*31:0*/ __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num;
    IData/*31:0*/ __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__Vfuncout;
    IData/*31:0*/ __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num;
    // Body
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__quotient 
        = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U];
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__remainder 
        = ((vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[2U] 
            << 0x1fU) | (vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U] 
                         >> 1U));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__mul_add 
        = (1U & vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U]);
    vlSelf->__PVT__Register_File__DOT__we = ((IData)(vlSelf->__PVT__mem2wbk_rd_we) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__mem2wbk_rd_addr)));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__div_sub 
        = (vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U] 
           >= vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[0U] 
        = vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[0U];
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & (((4U & (IData)(vlSelf->__PVT__dec2exe_operation_sel))
                                       ? (- (QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32)))
                                       : (QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32))) 
                                     + (QData)((IData)(
                                                       vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])))));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & (((4U & (IData)(vlSelf->__PVT__dec2exe_operation_sel))
                                        ? (- (QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32)))
                                        : (QData)((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__reg32))) 
                                      + (QData)((IData)(
                                                        vlSelf->__PVT__Execute__DOT__MulDiv__DOT__result[1U])))) 
                   >> 0x20U));
    vlSelf->__PVT__Execute__DOT__alu_operation = ((
                                                   ((IData)(vlSelf->__PVT__dec_is_branch) 
                                                    | (IData)(vlSelf->__PVT__dec_is_jal)) 
                                                   | (IData)(vlSelf->__PVT__dec_is_jalr))
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__dec2exe_operation_sel));
    vlSelf->__PVT__Writeback__DOT__rd_data = ((0U == (IData)(vlSelf->__PVT__mem2wbk_rd_input_sel))
                                               ? ((IData)(vlSelf->__PVT__mem2wbk_signex_sel)
                                                   ? 
                                                  (0xffU 
                                                   & vlSelf->__PVT__mem2wbk_aligned_data)
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->__PVT__mem2wbk_aligned_data 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->__PVT__mem2wbk_aligned_data)))
                                               : ((1U 
                                                   == (IData)(vlSelf->__PVT__mem2wbk_rd_input_sel))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mem2wbk_signex_sel)
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__mem2wbk_aligned_data)
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->__PVT__mem2wbk_aligned_data 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->__PVT__mem2wbk_aligned_data)))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__mem2wbk_rd_input_sel))
                                                    ? vlSelf->__PVT__mem2wbk_aligned_data
                                                    : vlSelf->__PVT__mem2wbk_p_data)));
    vlSelf->__PVT__data_req_o = ((0U == (IData)(vlSelf->__PVT__dS)) 
                                 & ((IData)(vlSelf->__PVT__exe_re) 
                                    | (IData)(vlSelf->__PVT__exe_we)));
    vlSelf->__PVT__Program_Counter__DOT__pc_increment 
        = ((IData)(4U) + vlSelf->__PVT__Program_Counter__DOT__pc_r);
    vlSelf->__PVT__bpu_branch_decision = (1U & (vlSelf->__PVT__Branch_Prediction_Unit__DOT__branch_likelihood
                                                [(0x3fU 
                                                  & (vlSelf->__PVT__Program_Counter__DOT__pc_r 
                                                     >> 2U))] 
                                                >> 1U));
    vlSelf->__PVT__Forwarding_Unit__DOT__correct_csr_data 
        = (((IData)(vlSelf->__PVT__exe2mem_csr_we) 
            & ((IData)(vlSelf->__PVT__dec2fwd_csr_addr) 
               == (IData)(vlSelf->__PVT__exe2mem_csr_addr)))
            ? vlSelf->__PVT__exe2mem_csr_data : (((IData)(vlSelf->__PVT__mem2wbk_csr_we) 
                                                  & ((IData)(vlSelf->__PVT__dec2fwd_csr_addr) 
                                                     == (IData)(vlSelf->__PVT__mem2wbk_csr_addr)))
                                                  ? vlSelf->__PVT__mem2wbk_csr_data
                                                  : vlSelf->__PVT__dec2fwd_csr_data));
    vlSelf->__PVT__nxt_unwb_PC = ((IData)(vlSelf->__PVT__Writeback__DOT__xcpt_valid_r)
                                   ? vlSelf->__PVT__mem2wbk_pc
                                   : ((IData)(vlSelf->__PVT__exe2mem_fetch_valid)
                                       ? vlSelf->__PVT__exe2mem_pc
                                       : ((IData)(vlSelf->__PVT__dec2exe_fetch_valid)
                                           ? vlSelf->__PVT__dec_pc
                                           : ((IData)(vlSelf->__PVT__fet2dec_valid)
                                               ? vlSelf->fet2dec_pc
                                               : vlSelf->__PVT__Program_Counter__DOT__pc_r))));
    vlSelf->__PVT__code_req_o = (1U & ((~ (IData)(vlSelf->__PVT__iS)) 
                                       | (vlSelf->__PVT__Program_Counter__DOT__pc_r 
                                          == vlSymsp->TOP.main_memory_addr)));
    if ((2U & vlSelf->__PVT__exe2mem_addr)) {
        if ((1U & vlSelf->__PVT__exe2mem_addr)) {
            if ((0U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
                vlSelf->__PVT__mem_dataout = (vlSelf->__PVT__exe2mem_rs2_data 
                                              << 0x18U);
                vlSelf->__PVT__mem_byte_sel = 8U;
            } else {
                vlSelf->__PVT__mem_dataout = 0U;
                vlSelf->__PVT__mem_byte_sel = 0U;
            }
            vlSelf->__PVT__mem_align_exception = (0U 
                                                  != (IData)(vlSelf->__PVT__exe2mem_dsize_sel));
        } else {
            if ((0U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
                vlSelf->__PVT__mem_dataout = (0xff0000U 
                                              & (vlSelf->__PVT__exe2mem_rs2_data 
                                                 << 0x10U));
                vlSelf->__PVT__mem_byte_sel = 4U;
            } else if ((1U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
                vlSelf->__PVT__mem_dataout = (vlSelf->__PVT__exe2mem_rs2_data 
                                              << 0x10U);
                vlSelf->__PVT__mem_byte_sel = 0xcU;
            } else {
                vlSelf->__PVT__mem_dataout = 0U;
                vlSelf->__PVT__mem_byte_sel = 0U;
            }
            vlSelf->__PVT__mem_align_exception = ((0U 
                                                   != (IData)(vlSelf->__PVT__exe2mem_dsize_sel)) 
                                                  & (1U 
                                                     != (IData)(vlSelf->__PVT__exe2mem_dsize_sel)));
        }
    } else if ((1U & vlSelf->__PVT__exe2mem_addr)) {
        if ((0U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
            vlSelf->__PVT__mem_dataout = (0xff00U & 
                                          (vlSelf->__PVT__exe2mem_rs2_data 
                                           << 8U));
            vlSelf->__PVT__mem_byte_sel = 2U;
        } else {
            vlSelf->__PVT__mem_dataout = 0U;
            vlSelf->__PVT__mem_byte_sel = 0U;
        }
        vlSelf->__PVT__mem_align_exception = (0U != (IData)(vlSelf->__PVT__exe2mem_dsize_sel));
    } else {
        if ((0U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
            vlSelf->__PVT__mem_dataout = (0xffU & vlSelf->__PVT__exe2mem_rs2_data);
            vlSelf->__PVT__mem_byte_sel = 1U;
        } else if ((1U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
            vlSelf->__PVT__mem_dataout = (0xffffU & vlSelf->__PVT__exe2mem_rs2_data);
            vlSelf->__PVT__mem_byte_sel = 3U;
        } else if ((2U == (IData)(vlSelf->__PVT__exe2mem_dsize_sel))) {
            vlSelf->__PVT__mem_dataout = vlSelf->__PVT__exe2mem_rs2_data;
            vlSelf->__PVT__mem_byte_sel = 0xfU;
        } else {
            vlSelf->__PVT__mem_dataout = 0U;
            vlSelf->__PVT__mem_byte_sel = 0U;
        }
        vlSelf->__PVT__mem_align_exception = ((0U != (IData)(vlSelf->__PVT__exe2mem_dsize_sel)) 
                                              & ((1U 
                                                  != (IData)(vlSelf->__PVT__exe2mem_dsize_sel)) 
                                                 & (2U 
                                                    != (IData)(vlSelf->__PVT__exe2mem_dsize_sel))));
    }
    vlSelf->__PVT__Execute__DOT__muldiv_req = ((IData)(vlSelf->__PVT__dec2exe_alu_muldiv_sel) 
                                               & (~ (IData)(vlSelf->__PVT__Execute__DOT__muldiv_ready)));
    vlSelf->Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o 
        = vlSelf->__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM
        [(0x3fU & (vlSelf->__PVT__Program_Counter__DOT__pc_r 
                   >> 2U))];
    vlSelf->__PVT__irq_enable = (1U & (~ (((0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel)) 
                                           & ((IData)(vlSelf->__PVT__exe_we) 
                                              | (IData)(vlSelf->__PVT__exe_re))) 
                                          | (IData)(vlSelf->__PVT__exe2mem_is_amo))));
    vlSelf->__PVT__fet2dec_instr = ((IData)(vlSymsp->TOP.rst_n)
                                     ? ((IData)(vlSelf->__PVT__fet2dec_valid)
                                         ? ((IData)(vlSelf->__PVT__Fetch__DOT__stall_delay)
                                             ? vlSelf->__PVT__Fetch__DOT__instruction_delay
                                             : ((IData)(vlSelf->__PVT__Fetch__DOT__flush_delay)
                                                 ? 0x13U
                                                 : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_code))
                                         : 0x13U) : 0x13U);
    vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data 
        = ((((IData)(vlSelf->__PVT__exe2mem_rd_we) 
             & ((IData)(vlSelf->__PVT__dec2fwd_rs2_addr) 
                == (IData)(vlSelf->__PVT__exe2mem_rd_addr))) 
            & (0U != (IData)(vlSelf->__PVT__exe2mem_rd_addr)))
            ? vlSelf->__PVT__exe2mem_p_data : ((((IData)(vlSelf->__PVT__mem2wbk_rd_we) 
                                                 & ((IData)(vlSelf->__PVT__dec2fwd_rs2_addr) 
                                                    == (IData)(vlSelf->__PVT__mem2wbk_rd_addr))) 
                                                & (0U 
                                                   != (IData)(vlSelf->__PVT__mem2wbk_rd_addr)))
                                                ? vlSelf->__PVT__Writeback__DOT__rd_data
                                                : vlSelf->__PVT__dec2fwd_rs2_data));
    vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
        = ((((IData)(vlSelf->__PVT__exe2mem_rd_we) 
             & ((IData)(vlSelf->__PVT__dec2fwd_rs1_addr) 
                == (IData)(vlSelf->__PVT__exe2mem_rd_addr))) 
            & (0U != (IData)(vlSelf->__PVT__exe2mem_rd_addr)))
            ? vlSelf->__PVT__exe2mem_p_data : ((((IData)(vlSelf->__PVT__mem2wbk_rd_we) 
                                                 & ((IData)(vlSelf->__PVT__dec2fwd_rs1_addr) 
                                                    == (IData)(vlSelf->__PVT__mem2wbk_rd_addr))) 
                                                & (0U 
                                                   != (IData)(vlSelf->__PVT__mem2wbk_rd_addr)))
                                                ? vlSelf->__PVT__Writeback__DOT__rd_data
                                                : vlSelf->__PVT__dec2fwd_rs1_data));
    vlSelf->__PVT__mem2wbk_xcpt_valid = (((IData)(vlSelf->__PVT__mem_align_exception) 
                                          & ((IData)(vlSelf->__PVT__exe_we) 
                                             | (IData)(vlSelf->__PVT__exe_re))) 
                                         | (IData)(vlSelf->__PVT__exe2mem_xcpt_valid));
    if (((IData)(vlSelf->__PVT__mem_align_exception) 
         & ((IData)(vlSelf->__PVT__exe_we) | (IData)(vlSelf->__PVT__exe_re)))) {
        vlSelf->__PVT__mem2wbk_xcpt_cause = (0xfU & 
                                             ((IData)(vlSelf->__PVT__exe_we)
                                               ? 6U
                                               : 4U));
        vlSelf->__PVT__mem2wbk_xcpt_tval = vlSelf->__PVT__exe2mem_addr;
    } else {
        vlSelf->__PVT__mem2wbk_xcpt_cause = (0xfU & (IData)(vlSelf->__PVT__exe2mem_xcpt_cause));
        vlSelf->__PVT__mem2wbk_xcpt_tval = vlSelf->__PVT__exe2mem_xcpt_tval;
    }
    vlSelf->__PVT__bpu_branch_hit = ((IData)(vlSelf->Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o) 
                                     == vlSelf->__PVT__Program_Counter__DOT__pc_r);
    vlSelf->__Vcellinp__CSR__sft_irq_i = ((0U != vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                           [4U]) & (IData)(vlSelf->__PVT__irq_enable));
    vlSelf->__Vcellinp__CSR__ext_irq_i = ((IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__irq) 
                                          & (IData)(vlSelf->__PVT__irq_enable));
    vlSelf->__Vcellinp__CSR__tmr_irq_i = ((((((QData)((IData)(
                                                              vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                                              [1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                                               [0U]))) 
                                            >= vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__mtimecmp) 
                                           & (0U != vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__mtimecmp)) 
                                          & (IData)(vlSelf->__PVT__irq_enable));
    vlSelf->__PVT__Decode__DOT__rv32_jal = (IData)(
                                                   (0x6cU 
                                                    == 
                                                    (0x7cU 
                                                     & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_lui = (IData)(
                                                   (0x34U 
                                                    == 
                                                    (0x7cU 
                                                     & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_auipc = (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x7cU 
                                                       & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_op_imm = (IData)(
                                                      (0x10U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_jalr = (IData)(
                                                    (0x64U 
                                                     == 
                                                     (0x7cU 
                                                      & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_load = (IData)(
                                                    (0U 
                                                     == 
                                                     (0x7cU 
                                                      & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_amo = (IData)(
                                                   (0x2cU 
                                                    == 
                                                    (0x7cU 
                                                     & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_store = (IData)(
                                                     (0x20U 
                                                      == 
                                                      (0x7cU 
                                                       & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_branch = (IData)(
                                                      (0x60U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_op = (IData)((0x30U 
                                                   == 
                                                   (0x7cU 
                                                    & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_miscmem = (IData)(
                                                       (0xcU 
                                                        == 
                                                        (0x7cU 
                                                         & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_system = (IData)(
                                                      (0x70U 
                                                       == 
                                                       (0x7cU 
                                                        & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Execute__DOT__inputB = ((0U == (IData)(vlSelf->__PVT__dec2exe_inB_sel))
                                            ? vlSelf->__PVT__dec2exe_imm
                                            : ((1U 
                                                == (IData)(vlSelf->__PVT__dec2exe_inB_sel))
                                                ? vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__dec2exe_inB_sel))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data))
                                                    : 0U)));
    vlSelf->__PVT__Execute__DOT__csr_inputB = ((4U 
                                                & (IData)(vlSelf->__PVT__dec2exe_operation_sel))
                                                ? (IData)(vlSelf->__PVT__dec2exe_csr_imm)
                                                : vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data);
    vlSelf->__PVT__Execute__DOT__inputA = ((0U == (IData)(vlSelf->__PVT__dec2exe_inA_sel))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->__PVT__dec2exe_inA_sel))
                                             ? vlSelf->__PVT__dec_pc
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__dec2exe_inA_sel))
                                                 ? vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data
                                                 : 0U)));
    vlSelf->__PVT__exe_branch_taken = ((((IData)(vlSelf->__PVT__dec_is_branch) 
                                         & (((((((0U 
                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                 & ((vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                                     == vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                     ? 1U
                                                     : 0U)) 
                                                | ((1U 
                                                    == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                   & ((vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                                       != vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                       ? 1U
                                                       : 0U))) 
                                               | ((4U 
                                                   == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                  & (VL_LTS_III(32, vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data, vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                      ? 1U
                                                      : 0U))) 
                                              | ((5U 
                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                 & (VL_GTES_III(32, vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data, vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                     ? 1U
                                                     : 0U))) 
                                             | ((6U 
                                                 == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                & ((vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                                    < vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                    ? 1U
                                                    : 0U))) 
                                            | ((7U 
                                                == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                               & ((vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                                   >= vlSelf->__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                                   ? 1U
                                                   : 0U)))) 
                                        | (IData)(vlSelf->__PVT__dec_is_jal)) 
                                       | (IData)(vlSelf->__PVT__dec_is_jalr));
    vlSelf->__PVT__Decode__DOT__is_s_type = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_store) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__is_b_type = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_branch) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_fence = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_miscmem) 
                                              & (0U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_csr = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                            & (0U != 
                                               (7U 
                                                & (vlSelf->__PVT__fet2dec_instr 
                                                   >> 0xcU))));
    vlSelf->__PVT__Decode__DOT__rv32_csrrs = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                              & (0x2000U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_csrrc = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                              & (0x3000U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__is_r_type = (((IData)(vlSelf->__PVT__Decode__DOT__rv32_op) 
                                              | (IData)(vlSelf->__PVT__Decode__DOT__rv32_system)) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Decode__DOT__rv32_sys_op = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                               & (0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->__PVT__fet2dec_instr)));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_b_neg 
        = ((vlSelf->__PVT__Execute__DOT__inputB >> 0x1fU) 
           & (((1U == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
               | (4U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
              | (6U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))));
    vlSelf->__PVT__Execute__DOT__alu_result = (((((
                                                   ((((- (IData)(
                                                                 (0U 
                                                                  == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                      & (vlSelf->__PVT__Execute__DOT__inputA 
                                                         + vlSelf->__PVT__Execute__DOT__inputB)) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                        & (vlSelf->__PVT__Execute__DOT__inputA 
                                                           << 
                                                           (0x1fU 
                                                            & vlSelf->__PVT__Execute__DOT__inputB)))) 
                                                    | ((- (IData)(
                                                                  (2U 
                                                                   == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                       & (VL_LTS_III(32, vlSelf->__PVT__Execute__DOT__inputA, vlSelf->__PVT__Execute__DOT__inputB)
                                                           ? 1U
                                                           : 0U))) 
                                                   | ((- (IData)(
                                                                 (3U 
                                                                  == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                      & ((vlSelf->__PVT__Execute__DOT__inputA 
                                                          < vlSelf->__PVT__Execute__DOT__inputB)
                                                          ? 1U
                                                          : 0U))) 
                                                  | ((- (IData)(
                                                                (4U 
                                                                 == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                     & (vlSelf->__PVT__Execute__DOT__inputA 
                                                        ^ vlSelf->__PVT__Execute__DOT__inputB))) 
                                                 | ((- (IData)(
                                                               (5U 
                                                                == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                    & ((IData)(vlSelf->__PVT__dec2exe_shift_sel)
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__Execute__DOT__inputA, 
                                                                      (0x1fU 
                                                                       & vlSelf->__PVT__Execute__DOT__inputB))
                                                        : 
                                                       (vlSelf->__PVT__Execute__DOT__inputA 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->__PVT__Execute__DOT__inputB))))) 
                                                | ((- (IData)(
                                                              (6U 
                                                               == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                   & (vlSelf->__PVT__Execute__DOT__inputA 
                                                      | vlSelf->__PVT__Execute__DOT__inputB))) 
                                               | ((- (IData)(
                                                             (7U 
                                                              == (IData)(vlSelf->__PVT__Execute__DOT__alu_operation)))) 
                                                  & (vlSelf->__PVT__Execute__DOT__inputA 
                                                     & vlSelf->__PVT__Execute__DOT__inputB)));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg 
        = ((vlSelf->__PVT__Execute__DOT__inputA >> 0x1fU) 
           & ((((1U == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                | (2U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
               | (4U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
              | (6U == (IData)(vlSelf->__PVT__dec2exe_operation_sel))));
    vlSelf->__PVT__exe_branch_misprediction = ((IData)(vlSelf->__PVT__dec_branch_hit) 
                                               & ((IData)(vlSelf->__PVT__dec_branch_decision) 
                                                  ^ (IData)(vlSelf->__PVT__exe_branch_taken)));
    vlSelf->dec2plc_load_hazard = (((((0x1fU & (vlSelf->__PVT__fet2dec_instr 
                                                >> 0xfU)) 
                                      == (IData)(vlSelf->__PVT__dec2exe_rd_addr)) 
                                     & (((((((IData)(vlSelf->__PVT__Decode__DOT__is_r_type) 
                                             | (IData)(vlSelf->__PVT__Decode__DOT__is_s_type)) 
                                            | (IData)(vlSelf->__PVT__Decode__DOT__is_b_type)) 
                                           | ((((IData)(vlSelf->__PVT__Decode__DOT__rv32_load) 
                                                | (IData)(vlSelf->__PVT__Decode__DOT__rv32_op_imm)) 
                                               | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jalr)) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->__PVT__fet2dec_instr)))) 
                                          | ((IData)(vlSelf->__PVT__Decode__DOT__rv32_fence) 
                                             & (3U 
                                                == 
                                                (3U 
                                                 & vlSelf->__PVT__fet2dec_instr)))) 
                                         | (((((IData)(vlSelf->__PVT__Decode__DOT__rv32_system) 
                                               & (0x1000U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->__PVT__fet2dec_instr))) 
                                              | (IData)(vlSelf->__PVT__Decode__DOT__rv32_csrrs)) 
                                             | (IData)(vlSelf->__PVT__Decode__DOT__rv32_csrrc)) 
                                            & (3U == 
                                               (3U 
                                                & vlSelf->__PVT__fet2dec_instr)))) 
                                        | ((IData)(vlSelf->__PVT__Decode__DOT__rv32_amo) 
                                           & (3U == 
                                              (3U & vlSelf->__PVT__fet2dec_instr))))) 
                                    | (((0x1fU & (vlSelf->__PVT__fet2dec_instr 
                                                  >> 0x14U)) 
                                        == (IData)(vlSelf->__PVT__dec2exe_rd_addr)) 
                                       & (((IData)(vlSelf->__PVT__Decode__DOT__is_r_type) 
                                           | (IData)(vlSelf->__PVT__Decode__DOT__is_s_type)) 
                                          | (IData)(vlSelf->__PVT__Decode__DOT__is_b_type)))) 
                                   & (IData)(vlSelf->__PVT__dec2exe_re));
    vlSelf->__PVT__Decode__DOT__rv32_ecall = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sys_op) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->__PVT__fet2dec_instr 
                                                  >> 0x14U)));
    vlSelf->__PVT__Decode__DOT__rv32_mret = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sys_op) 
                                             & (0x302U 
                                                == 
                                                (vlSelf->__PVT__fet2dec_instr 
                                                 >> 0x14U)));
    vlSelf->__PVT__Decode__DOT__rv32_sret = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sys_op) 
                                             & (0x102U 
                                                == 
                                                (vlSelf->__PVT__fet2dec_instr 
                                                 >> 0x14U)));
    vlSelf->__PVT__Decode__DOT__rv32_ebreak = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sys_op) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->__PVT__fet2dec_instr 
                                                   >> 0x14U)));
    __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num 
        = vlSelf->__PVT__Execute__DOT__inputB;
    __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__Vfuncout 
        = ((__Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num 
            >> 0x1fU) ? (- __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num)
            : __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__num);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_b 
        = ((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_b_neg)
            ? __Vfunc_Execute__DOT__MulDiv__DOT__abs__1__Vfuncout
            : vlSelf->__PVT__Execute__DOT__inputB);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__signed_adjust 
        = ((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg) 
           ^ (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_b_neg));
    __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num 
        = vlSelf->__PVT__Execute__DOT__inputA;
    __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__Vfuncout 
        = ((__Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num 
            >> 0x1fU) ? (- __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num)
            : __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__num);
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__op_a 
        = ((IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__is_a_neg)
            ? __Vfunc_Execute__DOT__MulDiv__DOT__abs__0__Vfuncout
            : vlSelf->__PVT__Execute__DOT__inputA);
    vlSelf->__PVT__Pipeline_Control__DOT__branch_flush 
        = (((IData)(vlSelf->__PVT__exe_branch_taken) 
            & (~ (IData)(vlSelf->__PVT__dec_branch_hit))) 
           | (IData)(vlSelf->__PVT__exe_branch_misprediction));
    vlSelf->__PVT__Decode__DOT__rv32_illegal_instr_xcpt 
        = (1U & ((((~ (((((((((((((IData)(vlSelf->__PVT__Decode__DOT__rv32_op) 
                                  | (IData)(vlSelf->__PVT__Decode__DOT__rv32_op_imm)) 
                                 | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jal)) 
                                | (IData)(vlSelf->__PVT__Decode__DOT__rv32_jalr)) 
                               | (IData)(vlSelf->__PVT__Decode__DOT__rv32_load)) 
                              | (IData)(vlSelf->__PVT__Decode__DOT__rv32_store)) 
                             | (IData)(vlSelf->__PVT__Decode__DOT__rv32_branch)) 
                            | (IData)(vlSelf->__PVT__Decode__DOT__rv32_lui)) 
                           | (IData)(vlSelf->__PVT__Decode__DOT__rv32_auipc)) 
                          | (IData)(vlSelf->__PVT__Decode__DOT__rv32_miscmem)) 
                         | (IData)(vlSelf->__PVT__Decode__DOT__rv32_system)) 
                        | (IData)(vlSelf->__PVT__Decode__DOT__rv32_amo)) 
                       & (3U == (3U & vlSelf->__PVT__fet2dec_instr)))) 
                   | (((IData)(vlSelf->__PVT__Decode__DOT__rv32_op_imm) 
                       & ((1U == (7U & (vlSelf->__PVT__fet2dec_instr 
                                        >> 0xcU))) 
                          | (5U == (7U & (vlSelf->__PVT__fet2dec_instr 
                                          >> 0xcU))))) 
                      & (vlSelf->__PVT__fet2dec_instr 
                         >> 0x19U))) | (((IData)(vlSelf->__PVT__Decode__DOT__rv32_mret) 
                                         & (3U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))) 
                                        | ((IData)(vlSelf->__PVT__Decode__DOT__rv32_sret) 
                                           & (0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))))) 
                 | ((IData)(vlSelf->__PVT__Decode__DOT__rv32_csr) 
                    & (((((((0xc01U == (vlSelf->__PVT__fet2dec_instr 
                                        >> 0x14U)) 
                            | (0xc81U == (vlSelf->__PVT__fet2dec_instr 
                                          >> 0x14U))) 
                           | (0x14dU == (vlSelf->__PVT__fet2dec_instr 
                                         >> 0x14U))) 
                          | (0x15dU == (vlSelf->__PVT__fet2dec_instr 
                                        >> 0x14U))) 
                         | (0xda0U == (vlSelf->__PVT__fet2dec_instr 
                                       >> 0x14U))) 
                        | (0xfb0U == (vlSelf->__PVT__fet2dec_instr 
                                      >> 0x14U))) | 
                       (0x30cU == (vlSelf->__PVT__fet2dec_instr 
                                   >> 0x14U))))));
    vlSelf->dec_unsupported_instr = ((IData)(vlSelf->__PVT__Decode__DOT__rv32_fence) 
                                     | (IData)(vlSelf->__PVT__Decode__DOT__rv32_ebreak));
    vlSelf->__PVT__Decode__DOT__xcpt_valid = (((IData)(vlSelf->__PVT__Decode__DOT__rv32_ecall) 
                                               | (IData)(vlSelf->__PVT__Decode__DOT__rv32_ebreak)) 
                                              | (IData)(vlSelf->__PVT__Decode__DOT__rv32_illegal_instr_xcpt));
    vlSelf->plc2dec_flush = (((((IData)(vlSelf->__PVT__Pipeline_Control__DOT__branch_flush) 
                                | (IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r)) 
                               | (IData)(vlSelf->__PVT__exe_is_fencei)) 
                              | (IData)(vlSelf->dec2plc_load_hazard)) 
                             | (IData)(vlSelf->dec_unsupported_instr));
}

extern const VlUnpacked<CData/*1:0*/, 256> Vaquila_testharness__ConstPool__TABLE_h2f7e189b_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vaquila_testharness__ConstPool__TABLE_h7b99fb3e_0;

VL_ATTR_COLD void Vaquila_testharness_core_top___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1(Vaquila_testharness_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaquila_testharness_core_top___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    // Body
    vlSelf->irq_taken = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__irq_taken) 
                         | (IData)(vlSelf->__PVT__csr_irq_taken_r));
    if (vlSelf->__PVT__iS) {
        if (vlSelf->__PVT__iS) {
            vlSelf->__PVT__iS_nxt = (1U & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)));
        }
    } else {
        vlSelf->__PVT__iS_nxt = (1U & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)));
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__Execute__DOT__muldiv_req) 
                     << 7U) | ((0x40U & ((~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)) 
                                         << 6U)) | 
                               (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_d_ready) 
                                 << 5U) | (((IData)(vlSelf->__PVT__mem_align_exception) 
                                            << 4U) 
                                           | (((IData)(vlSelf->__PVT__exe_we) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__exe_re) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->__PVT__dS)))))));
    vlSelf->__PVT__dS_nxt = Vaquila_testharness__ConstPool__TABLE_h2f7e189b_0
        [__Vtableidx1];
    vlSelf->__PVT__data_read_mem = ((2U == (IData)(vlSelf->__PVT__dS))
                                     ? vlSelf->__PVT__data_read_reg
                                     : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_d_mem2core);
    vlSelf->__Vcellinp__Memory__flush_i = ((IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r) 
                                           | (IData)(vlSelf->irq_taken));
    vlSelf->__Vcellinp__Execute__flush_i = (((IData)(vlSelf->__PVT__exe_is_fencei) 
                                             | (IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r)) 
                                            | (IData)(vlSelf->irq_taken));
    vlSelf->__Vcellinp__Fetch__flush_i = ((((IData)(vlSelf->__PVT__Pipeline_Control__DOT__branch_flush) 
                                            | (IData)(vlSelf->__PVT__Writeback__DOT__sys_jump_r)) 
                                           | (IData)(vlSelf->__PVT__exe_is_fencei)) 
                                          | (IData)(vlSelf->irq_taken));
    vlSelf->__Vcellinp__Decode__flush_i = ((IData)(vlSelf->plc2dec_flush) 
                                           | (IData)(vlSelf->irq_taken));
    vlSelf->__PVT__stall_data_fetch = ((1U == (IData)(vlSelf->__PVT__dS_nxt)) 
                                       & (~ (IData)(vlSelf->__PVT__exe_is_fencei)));
    vlSelf->stall_pipeline = (1U & (((~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)) 
                                     | (IData)(vlSelf->__PVT__stall_data_fetch)) 
                                    | (IData)(vlSelf->__PVT__Execute__DOT__muldiv_req)));
    vlSelf->__Vcellinp__Execute__stall_i = (1U & ((~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)) 
                                                  | (IData)(vlSelf->__PVT__stall_data_fetch)));
    vlSelf->__Vcellinp__Fetch__stall_i = ((IData)(vlSelf->stall_pipeline) 
                                          | ((IData)(vlSelf->dec2plc_load_hazard) 
                                             & (~ (IData)(vlSelf->irq_taken))));
    vlSelf->__PVT__Branch_Prediction_Unit__DOT__we 
        = (((~ (IData)(vlSelf->stall_pipeline)) & ((IData)(vlSelf->__PVT__dec_is_branch) 
                                                   | (IData)(vlSelf->__PVT__dec_is_jal))) 
           & (~ (IData)(vlSelf->__PVT__Branch_Prediction_Unit__DOT__BHT_hit)));
    __Vtableidx2 = (((0U == vlSelf->__PVT__Execute__DOT__inputB) 
                     << 7U) | (((0U == vlSelf->__PVT__Execute__DOT__inputA) 
                                << 6U) | (((IData)(vlSelf->__PVT__Execute__DOT__muldiv_req) 
                                           << 5U) | 
                                          ((0x10U & 
                                            ((((((0U 
                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel)) 
                                                 | (1U 
                                                    == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
                                                | (2U 
                                                   == (IData)(vlSelf->__PVT__dec2exe_operation_sel))) 
                                               | (3U 
                                                  == (IData)(vlSelf->__PVT__dec2exe_operation_sel)))
                                               ? (3U 
                                                  == (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter))
                                               : (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__cnt))))) 
                                             << 4U)) 
                                           | (((IData)(vlSelf->__Vcellinp__Execute__stall_i) 
                                               << 3U) 
                                              | (IData)(vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S))))));
    vlSelf->__PVT__Execute__DOT__MulDiv__DOT__S_nxt 
        = Vaquila_testharness__ConstPool__TABLE_h7b99fb3e_0
        [__Vtableidx2];
}
