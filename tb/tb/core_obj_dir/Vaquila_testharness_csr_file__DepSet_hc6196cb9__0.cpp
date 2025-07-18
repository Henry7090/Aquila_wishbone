// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_csr_file.h"

VL_INLINE_OPT void Vaquila_testharness_csr_file___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0(Vaquila_testharness_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_testharness_csr_file___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__mstatus_r;
    IData/*31:0*/ __Vdly__mie_r;
    IData/*31:0*/ __Vdly__mip_r;
    QData/*63:0*/ __Vdly__mcycle_r;
    QData/*63:0*/ __Vdly__cycle_r;
    // Body
    __Vdly__cycle_r = vlSelf->__PVT__cycle_r;
    __Vdly__mcycle_r = vlSelf->__PVT__mcycle_r;
    __Vdly__mie_r = vlSelf->mie_r;
    __Vdly__mstatus_r = vlSelf->__PVT__mstatus_r;
    __Vdly__mip_r = vlSelf->__PVT__mip_r;
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) {
            if ((0xc00U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr))) {
                __Vdly__cycle_r = ((0xffffffff00000000ULL 
                                    & __Vdly__cycle_r) 
                                   | (IData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data)));
            } else if ((0xc80U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr))) {
                __Vdly__cycle_r = ((0xffffffffULL & __Vdly__cycle_r) 
                                   | ((QData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data)) 
                                      << 0x20U));
            } else {
                __Vdly__cycle_r = vlSelf->__PVT__cycle_r;
            }
            if ((0xb00U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr))) {
                __Vdly__mcycle_r = ((0xffffffff00000000ULL 
                                     & __Vdly__mcycle_r) 
                                    | (IData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data)));
            } else if ((0xb80U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr))) {
                __Vdly__mcycle_r = ((0xffffffffULL 
                                     & __Vdly__mcycle_r) 
                                    | ((QData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data)) 
                                       << 0x20U));
            } else {
                __Vdly__mcycle_r = vlSelf->__PVT__mcycle_r;
            }
        } else {
            __Vdly__cycle_r = (1ULL + vlSelf->__PVT__cycle_r);
            __Vdly__mcycle_r = (1ULL + vlSelf->__PVT__mcycle_r);
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x103U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__sideleg_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x102U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__sedeleg_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x140U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__sscratch_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x105U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__stvec_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x340U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__mscratch_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x305U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__mtvec_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x301U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__misa_r = (0xc3ffffffU & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data);
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x180U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__satp_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x302U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__medeleg_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (vlSelf->__PVT__irq_taken) {
            vlSelf->__PVT__scause_r = vlSelf->__PVT__scause_d;
            vlSelf->__PVT__mcause_r = vlSelf->__PVT__mcause_d;
            __Vdly__mstatus_r = ((IData)(vlSelf->__PVT__trap_to_M)
                                  ? ((0xffffe000U & vlSelf->__PVT__mstatus_r) 
                                     | (((IData)(vlSelf->__PVT__privilege_level_r) 
                                         << 0xbU) | 
                                        ((0x700U & vlSelf->__PVT__mstatus_r) 
                                         | ((0x80U 
                                             & (vlSelf->__PVT__mstatus_r 
                                                << 4U)) 
                                            | (0x77U 
                                               & vlSelf->__PVT__mstatus_r)))))
                                  : ((0xfffffe00U & vlSelf->__PVT__mstatus_r) 
                                     | ((0x100U & ((IData)(vlSelf->__PVT__privilege_level_r) 
                                                   << 8U)) 
                                        | ((0xc0U & vlSelf->__PVT__mstatus_r) 
                                           | ((0x20U 
                                               & (vlSelf->__PVT__mstatus_r 
                                                  << 4U)) 
                                              | (0x1dU 
                                                 & vlSelf->__PVT__mstatus_r))))));
        } else {
            if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                 & (0x142U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
                vlSelf->__PVT__scause_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
            }
            if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                 & (0x342U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
                vlSelf->__PVT__mcause_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
            }
            if (vlSelf->__PVT__sys_jump_r) {
                if (vlSelf->__PVT__mret_r) {
                    __Vdly__mstatus_r = ((3U == (3U 
                                                 & (vlSelf->__PVT__mstatus_r 
                                                    >> 0xbU)))
                                          ? (0x80U 
                                             | ((0xffffe000U 
                                                 & vlSelf->__PVT__mstatus_r) 
                                                | ((0x700U 
                                                    & vlSelf->__PVT__mstatus_r) 
                                                   | ((0x70U 
                                                       & vlSelf->__PVT__mstatus_r) 
                                                      | ((8U 
                                                          & (vlSelf->__PVT__mstatus_r 
                                                             >> 4U)) 
                                                         | (7U 
                                                            & vlSelf->__PVT__mstatus_r))))))
                                          : (0x80U 
                                             | ((0xfffc0000U 
                                                 & vlSelf->__PVT__mstatus_r) 
                                                | ((0x1e000U 
                                                    & vlSelf->__PVT__mstatus_r) 
                                                   | ((0x700U 
                                                       & vlSelf->__PVT__mstatus_r) 
                                                      | ((0x70U 
                                                          & vlSelf->__PVT__mstatus_r) 
                                                         | ((8U 
                                                             & (vlSelf->__PVT__mstatus_r 
                                                                >> 4U)) 
                                                            | (7U 
                                                               & vlSelf->__PVT__mstatus_r))))))));
                } else if (vlSelf->__PVT__sret_r) {
                    __Vdly__mstatus_r = (0x20U | ((0xfffc0000U 
                                                   & vlSelf->__PVT__mstatus_r) 
                                                  | ((0x1ffc0U 
                                                      & vlSelf->__PVT__mstatus_r) 
                                                     | ((0x1cU 
                                                         & vlSelf->__PVT__mstatus_r) 
                                                        | ((2U 
                                                            & (vlSelf->__PVT__mstatus_r 
                                                               >> 4U)) 
                                                           | (1U 
                                                              & vlSelf->__PVT__mstatus_r))))));
                }
            } else if (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) {
                if ((0x300U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr))) {
                    __Vdly__mstatus_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
                } else if ((0x100U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr))) {
                    __Vdly__mstatus_r = ((0x80000000U 
                                          & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data) 
                                         | ((0x7ff00000U 
                                             & vlSelf->__PVT__mstatus_r) 
                                            | ((0xc0000U 
                                                & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data) 
                                               | ((0x20000U 
                                                   & vlSelf->__PVT__mstatus_r) 
                                                  | ((0x1e000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data) 
                                                     | ((0x1e00U 
                                                         & vlSelf->__PVT__mstatus_r) 
                                                        | ((0x100U 
                                                            & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data) 
                                                           | ((0xc0U 
                                                               & vlSelf->__PVT__mstatus_r) 
                                                              | ((0x30U 
                                                                  & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data) 
                                                                 | ((0xcU 
                                                                     & vlSelf->__PVT__mstatus_r) 
                                                                    | (3U 
                                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data)))))))))));
                }
            }
        }
        if (((IData)(vlSelf->__PVT__irq_taken) & (~ (IData)(vlSelf->__PVT__trap_to_M)))) {
            vlSelf->__PVT__sepc_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__nxt_unwb_PC;
        } else if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                    & (0x141U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__sepc_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSelf->__PVT__irq_taken) & (IData)(vlSelf->__PVT__trap_to_M))) {
            vlSelf->__PVT__mepc_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__nxt_unwb_PC;
        } else if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                    & (0x341U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__mepc_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_valid_r) 
             & (~ (IData)(vlSelf->__PVT__trap_to_M)))) {
            if (((((1U >= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)) 
                   | ((4U <= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)) 
                      & (7U >= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)))) 
                  | ((0xcU <= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)) 
                     & (0xdU >= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)))) 
                 | (0xfU == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)))) {
                vlSelf->__PVT__stval_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_tval_r;
            }
        } else if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                    & (0x143U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__stval_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_valid_r) 
             & (IData)(vlSelf->__PVT__trap_to_M))) {
            if (((((1U >= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)) 
                   | ((4U <= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)) 
                      & (7U >= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)))) 
                  | ((0xcU <= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)) 
                     & (0xdU >= (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)))) 
                 | (0xfU == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)))) {
                vlSelf->__PVT__mtval_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_tval_r;
            }
        } else if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                    & (0x343U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__mtval_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x303U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            vlSelf->__PVT__mideleg_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data;
        }
        if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
             & (0x304U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            __Vdly__mie_r = (0xaaaU & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data);
        } else if (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                    & (0x104U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))) {
            __Vdly__mie_r = ((0x800U & vlSelf->mie_r) 
                             | ((0x200U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data) 
                                | ((0x80U & vlSelf->mie_r) 
                                   | ((0x20U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data) 
                                      | ((8U & vlSelf->mie_r) 
                                         | (2U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data))))));
        }
        if ((3U == (IData)(vlSelf->__PVT__privilege_level_r))) {
            __Vdly__mip_r = (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                              & (0x344U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))
                              ? (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__ext_irq_i) 
                                  << 0xbU) | ((0x200U 
                                               & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data) 
                                              | (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__tmr_irq_i) 
                                                  << 7U) 
                                                 | ((0x20U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data) 
                                                    | (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__sft_irq_i) 
                                                        << 3U) 
                                                       | (2U 
                                                          & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data))))))
                              : (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__ext_irq_i) 
                                  << 0xbU) | ((0x200U 
                                               & vlSelf->__PVT__mip_r) 
                                              | (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__tmr_irq_i) 
                                                  << 7U) 
                                                 | ((0x20U 
                                                     & vlSelf->__PVT__mip_r) 
                                                    | (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__sft_irq_i) 
                                                        << 3U) 
                                                       | (2U 
                                                          & vlSelf->__PVT__mip_r)))))));
        } else if ((1U == (IData)(vlSelf->__PVT__privilege_level_r))) {
            __Vdly__mip_r = ((0x800U & vlSelf->__PVT__mip_r) 
                             | (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__ext_irq_i) 
                                 << 9U) | ((0x80U & vlSelf->__PVT__mip_r) 
                                           | (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__tmr_irq_i) 
                                               << 5U) 
                                              | ((8U 
                                                  & vlSelf->__PVT__mip_r) 
                                                 | ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__sft_irq_i) 
                                                    << 1U))))));
        }
        if ((3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_csr_addr_r))) {
            vlSelf->__PVT__privilege_level_r = (3U 
                                                & (vlSelf->__PVT__mstatus_r 
                                                   >> 0xbU));
            vlSelf->__PVT__cycle_r = __Vdly__cycle_r;
            vlSelf->__PVT__mcycle_r = __Vdly__mcycle_r;
            vlSelf->mie_r = __Vdly__mie_r;
            vlSelf->__PVT__mip_r = __Vdly__mip_r;
            vlSelf->__PVT__mret_r = 1U;
        } else {
            if ((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_csr_addr_r))) {
                vlSelf->__PVT__privilege_level_r = 
                    (1U & (vlSelf->__PVT__mstatus_r 
                           >> 8U));
            } else if (vlSelf->__PVT__irq_taken) {
                vlSelf->__PVT__privilege_level_r = 
                    ((IData)(vlSelf->__PVT__trap_to_M)
                      ? 3U : 1U);
            }
            vlSelf->__PVT__cycle_r = __Vdly__cycle_r;
            vlSelf->__PVT__mcycle_r = __Vdly__mcycle_r;
            vlSelf->mie_r = __Vdly__mie_r;
            vlSelf->__PVT__mip_r = __Vdly__mip_r;
            vlSelf->__PVT__mret_r = 0U;
        }
        vlSelf->__PVT__sret_r = (1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_csr_addr_r));
        vlSelf->__PVT__sys_jump_r = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_r;
    } else {
        __Vdly__cycle_r = 0ULL;
        vlSelf->__PVT__sideleg_r = 0U;
        vlSelf->__PVT__sedeleg_r = 0U;
        vlSelf->__PVT__sscratch_r = 0U;
        vlSelf->__PVT__stvec_r = 0U;
        vlSelf->__PVT__mscratch_r = 0U;
        vlSelf->__PVT__mtvec_r = 0U;
        vlSelf->__PVT__misa_r = 0x40141101U;
        vlSelf->__PVT__satp_r = 0U;
        __Vdly__mcycle_r = 0ULL;
        vlSelf->__PVT__medeleg_r = 0U;
        vlSelf->__PVT__scause_r = 0U;
        vlSelf->__PVT__mcause_r = 0U;
        vlSelf->__PVT__sepc_r = 0U;
        vlSelf->__PVT__mepc_r = 0U;
        vlSelf->__PVT__stval_r = 0U;
        vlSelf->__PVT__mtval_r = 0U;
        vlSelf->__PVT__mideleg_r = 0U;
        __Vdly__mie_r = 0U;
        __Vdly__mstatus_r = 0x1808U;
        __Vdly__mip_r = 0U;
        vlSelf->__PVT__privilege_level_r = 3U;
        vlSelf->__PVT__cycle_r = __Vdly__cycle_r;
        vlSelf->__PVT__mcycle_r = __Vdly__mcycle_r;
        vlSelf->mie_r = __Vdly__mie_r;
        vlSelf->__PVT__mip_r = __Vdly__mip_r;
        vlSelf->__PVT__mret_r = 0U;
        vlSelf->__PVT__sret_r = 0U;
        vlSelf->__PVT__sys_jump_r = 0U;
    }
    vlSelf->__PVT__mstatus_r = __Vdly__mstatus_r;
}

VL_INLINE_OPT void Vaquila_testharness_csr_file___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__1(Vaquila_testharness_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_testharness_csr_file___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__1\n"); );
    // Body
    vlSelf->__PVT__csr_flush_o = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                                  & (((0x300U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)) 
                                      & ((((((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data 
                                              ^ vlSelf->__PVT__mstatus_r) 
                                             >> 0x16U) 
                                            | ((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data 
                                                ^ vlSelf->__PVT__mstatus_r) 
                                               >> 0x14U)) 
                                           | ((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data 
                                               ^ vlSelf->__PVT__mstatus_r) 
                                              >> 0x13U)) 
                                          | ((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data 
                                              ^ vlSelf->__PVT__mstatus_r) 
                                             >> 0x12U)) 
                                         | (((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data 
                                              ^ vlSelf->__PVT__mstatus_r) 
                                             >> 0x11U) 
                                            & ((~ (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSelf->__PVT__mstatus_r)))) 
                                               & (vlSelf->__PVT__satp_r 
                                                  >> 0x1fU))))) 
                                     | ((((0x180U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)) 
                                          & ((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data 
                                              ^ vlSelf->__PVT__satp_r) 
                                             >> 0x1fU)) 
                                         & (vlSelf->__PVT__mstatus_r 
                                            >> 0x11U)) 
                                        & (~ (IData)(
                                                     (0x1800U 
                                                      == 
                                                      (0x1800U 
                                                       & vlSelf->__PVT__mstatus_r)))))));
}

VL_INLINE_OPT void Vaquila_testharness_csr_file___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0(Vaquila_testharness_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_testharness_csr_file___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0\n"); );
    // Body
    vlSelf->__PVT__trap_to_M = 1U;
    vlSelf->__PVT__interrupt_cause = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_valid_r)))) {
        if ((3U == (IData)(vlSelf->__PVT__privilege_level_r))) {
            if ((8U & vlSelf->__PVT__mstatus_r)) {
                if ((1U & (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__ext_irq_i) 
                            | (vlSelf->__PVT__mip_r 
                               >> 0xbU)) & (vlSelf->mie_r 
                                            >> 0xbU)))) {
                    vlSelf->__PVT__interrupt_cause = 0xbU;
                } else if ((1U & (((~ (vlSelf->__PVT__mideleg_r 
                                       >> 9U)) & (vlSelf->__PVT__mip_r 
                                                  >> 9U)) 
                                  & (vlSelf->mie_r 
                                     >> 9U)))) {
                    vlSelf->__PVT__interrupt_cause = 9U;
                } else if ((1U & (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__tmr_irq_i) 
                                   | (vlSelf->__PVT__mip_r 
                                      >> 7U)) & (vlSelf->mie_r 
                                                 >> 7U)))) {
                    vlSelf->__PVT__interrupt_cause = 7U;
                } else if ((1U & (((~ (vlSelf->__PVT__mideleg_r 
                                       >> 5U)) & (vlSelf->__PVT__mip_r 
                                                  >> 5U)) 
                                  & (vlSelf->mie_r 
                                     >> 5U)))) {
                    vlSelf->__PVT__interrupt_cause = 5U;
                } else if ((1U & (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__sft_irq_i) 
                                   | (vlSelf->__PVT__mip_r 
                                      >> 3U)) & (vlSelf->mie_r 
                                                 >> 3U)))) {
                    vlSelf->__PVT__interrupt_cause = 3U;
                } else if ((1U & (((~ (vlSelf->__PVT__mideleg_r 
                                       >> 1U)) & (vlSelf->__PVT__mip_r 
                                                  >> 1U)) 
                                  & (vlSelf->mie_r 
                                     >> 1U)))) {
                    vlSelf->__PVT__interrupt_cause = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelf->__PVT__privilege_level_r))) {
            if ((2U & vlSelf->__PVT__mstatus_r)) {
                if ((0x200U & (vlSelf->__PVT__mip_r 
                               & vlSelf->mie_r))) {
                    vlSelf->__PVT__interrupt_cause = 9U;
                } else if ((0x20U & (vlSelf->__PVT__mip_r 
                                     & vlSelf->mie_r))) {
                    vlSelf->__PVT__interrupt_cause = 5U;
                } else if ((2U & (vlSelf->__PVT__mip_r 
                                  & vlSelf->mie_r))) {
                    vlSelf->__PVT__interrupt_cause = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__irq_taken = 0U;
    if (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_valid_r) {
        vlSelf->__PVT__trap_to_M = ((3U == (IData)(vlSelf->__PVT__privilege_level_r))
                                     ? 1U : (1U & (~ 
                                                   (1U 
                                                    & (vlSelf->__PVT__medeleg_r 
                                                       >> (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r))))));
        vlSelf->__PVT__irq_taken = 1U;
    } else if ((3U == (IData)(vlSelf->__PVT__privilege_level_r))) {
        if ((8U & vlSelf->__PVT__mstatus_r)) {
            vlSelf->__PVT__trap_to_M = 1U;
            vlSelf->__PVT__irq_taken = (1U & ((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__ext_irq_i) 
                                                | (vlSelf->__PVT__mip_r 
                                                   >> 0xbU)) 
                                               & (vlSelf->mie_r 
                                                  >> 0xbU)) 
                                              | ((((~ 
                                                    (vlSelf->__PVT__mideleg_r 
                                                     >> 9U)) 
                                                   & (vlSelf->__PVT__mip_r 
                                                      >> 9U)) 
                                                  & (vlSelf->mie_r 
                                                     >> 9U)) 
                                                 | ((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__tmr_irq_i) 
                                                      | (vlSelf->__PVT__mip_r 
                                                         >> 7U)) 
                                                     & (vlSelf->mie_r 
                                                        >> 7U)) 
                                                    | ((((~ 
                                                          (vlSelf->__PVT__mideleg_r 
                                                           >> 5U)) 
                                                         & (vlSelf->__PVT__mip_r 
                                                            >> 5U)) 
                                                        & (vlSelf->mie_r 
                                                           >> 5U)) 
                                                       | ((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__sft_irq_i) 
                                                            | (vlSelf->__PVT__mip_r 
                                                               >> 3U)) 
                                                           & (vlSelf->mie_r 
                                                              >> 3U)) 
                                                          | (((~ 
                                                               (vlSelf->__PVT__mideleg_r 
                                                                >> 1U)) 
                                                              & (vlSelf->__PVT__mip_r 
                                                                 >> 1U)) 
                                                             & (vlSelf->mie_r 
                                                                >> 1U))))))));
        }
    } else if ((1U == (IData)(vlSelf->__PVT__privilege_level_r))) {
        if ((2U & vlSelf->__PVT__mstatus_r)) {
            vlSelf->__PVT__trap_to_M = (1U & ((0x200U 
                                               & (vlSelf->__PVT__mip_r 
                                                  & vlSelf->mie_r))
                                               ? (~ 
                                                  (vlSelf->__PVT__mideleg_r 
                                                   >> 9U))
                                               : ((0x20U 
                                                   & (vlSelf->__PVT__mip_r 
                                                      & vlSelf->mie_r))
                                                   ? 
                                                  (~ 
                                                   (vlSelf->__PVT__mideleg_r 
                                                    >> 5U))
                                                   : 
                                                  ((~ 
                                                    ((vlSelf->__PVT__mip_r 
                                                      & vlSelf->mie_r) 
                                                     >> 1U)) 
                                                   | (~ 
                                                      (vlSelf->__PVT__mideleg_r 
                                                       >> 1U))))));
            vlSelf->__PVT__irq_taken = (1U & (((vlSelf->__PVT__mip_r 
                                                & vlSelf->mie_r) 
                                               >> 9U) 
                                              | (((vlSelf->__PVT__mip_r 
                                                   & vlSelf->mie_r) 
                                                  >> 5U) 
                                                 | ((vlSelf->__PVT__mip_r 
                                                     & vlSelf->mie_r) 
                                                    >> 1U))));
        }
    } else {
        vlSelf->__PVT__irq_taken = 0U;
    }
    vlSelf->__PVT__mcause_d = vlSelf->__PVT__mcause_r;
    if (((IData)(vlSelf->__PVT__irq_taken) & (IData)(vlSelf->__PVT__trap_to_M))) {
        vlSelf->__PVT__mcause_d = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_valid_r)
                                    ? (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)
                                    : (0x80000000U 
                                       | (IData)(vlSelf->__PVT__interrupt_cause)));
    }
    vlSelf->__PVT__scause_d = vlSelf->__PVT__scause_r;
    if (((IData)(vlSelf->__PVT__irq_taken) & (~ (IData)(vlSelf->__PVT__trap_to_M)))) {
        vlSelf->__PVT__scause_d = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_valid_r)
                                    ? (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r)
                                    : (0x80000000U 
                                       | (IData)(vlSelf->__PVT__interrupt_cause)));
    }
}

VL_INLINE_OPT void Vaquila_testharness_csr_file___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__1(Vaquila_testharness_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_testharness_csr_file___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__1\n"); );
    // Body
    vlSelf->__PVT__csr_data = ((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                >> 0x1fU) ? ((0x40000000U 
                                              & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                              ? ((0x20000000U 
                                                  & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                  ? 
                                                 ((0x10000000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                   ? 
                                                  ((0x8000000U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                    ? 0U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x2000000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x1000000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 
                                                      ((0x800000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x400000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? 
                                                        ((0x200000U 
                                                          & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                          ? 0U
                                                          : 
                                                         ((0x100000U 
                                                           & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                           ? 0U
                                                           : 0U))
                                                         : 
                                                        ((0x200000U 
                                                          & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                          ? 0U
                                                          : 
                                                         ((0x100000U 
                                                           & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                           ? 0U
                                                           : 0U))))
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((0x10000000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                   ? 0U
                                                   : 
                                                  ((0x8000000U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x2000000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x1000000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 0U
                                                       : 
                                                      ((0x800000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x400000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? 0U
                                                         : 
                                                        ((0x200000U 
                                                          & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                          ? 0U
                                                          : 
                                                         ((0x100000U 
                                                           & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                           ? 0U
                                                           : (IData)(
                                                                     (vlSelf->__PVT__mcycle_r 
                                                                      >> 0x20U)))))))))
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x2000000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x1000000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 0U
                                                       : 
                                                      ((0x800000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x400000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? 0U
                                                         : 
                                                        ((0x200000U 
                                                          & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                          ? 0U
                                                          : 
                                                         ((0x100000U 
                                                           & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                           ? 0U
                                                           : (IData)(vlSelf->__PVT__mcycle_r)))))))))))
                                              : ((0x20000000U 
                                                  & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                  ? 
                                                 ((0x10000000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                   ? 
                                                  ((0x8000000U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x2000000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x1000000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 0U
                                                       : 
                                                      ((0x800000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x400000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? 0U
                                                         : 
                                                        ((0x200000U 
                                                          & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                          ? 
                                                         ((0x100000U 
                                                           & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                           ? 0U
                                                           : 0U)
                                                          : 
                                                         ((0x100000U 
                                                           & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                           ? 0U
                                                           : (IData)(
                                                                     (vlSelf->__PVT__mcycle_r 
                                                                      >> 0x20U)))))))))
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x2000000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x1000000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 0U
                                                       : 
                                                      ((0x800000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x400000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? 0U
                                                         : 
                                                        ((0x200000U 
                                                          & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                          ? 
                                                         ((0x100000U 
                                                           & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                           ? 0U
                                                           : 0U)
                                                          : 
                                                         ((0x100000U 
                                                           & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                           ? 0U
                                                           : (IData)(vlSelf->__PVT__mcycle_r)))))))))
                                                   : 0U)
                                                  : 0U))
                                : ((0x40000000U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                    ? 0U : ((0x20000000U 
                                             & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                             ? ((0x10000000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                 ? 
                                                ((0x8000000U 
                                                  & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                  ? 0U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                   ? 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? 0U
                                                         : vlSelf->__PVT__mip_r))
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? vlSelf->__PVT__mtval_r
                                                         : vlSelf->__PVT__mcause_r)
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? vlSelf->__PVT__mepc_r
                                                         : vlSelf->__PVT__mscratch_r))))))
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? vlSelf->__PVT__mtvec_r
                                                         : vlSelf->mie_r))
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? vlSelf->__PVT__mideleg_r
                                                         : vlSelf->__PVT__medeleg_r)
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? vlSelf->__PVT__misa_r
                                                         : vlSelf->__PVT__mstatus_r))))))))
                                                 : 0U)
                                             : ((0x10000000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                 ? 
                                                ((0x8000000U 
                                                  & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                  ? 
                                                 ((0x4000000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                   ? 0U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 0U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? 0U
                                                         : vlSelf->__PVT__satp_r)))))))
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                   ? 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? 0U
                                                         : 
                                                        (0x333U 
                                                         & vlSelf->__PVT__mip_r)))
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? vlSelf->__PVT__stval_r
                                                         : vlSelf->__PVT__scause_r)
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? vlSelf->__PVT__sepc_r
                                                         : vlSelf->__PVT__sscratch_r))))))
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                       ? 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? vlSelf->__PVT__stvec_r
                                                         : 
                                                        (0x333U 
                                                         & vlSelf->mie_r)))
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                        ? 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? vlSelf->__PVT__sideleg_r
                                                         : vlSelf->__PVT__sedeleg_r)
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)
                                                         ? 0U
                                                         : 
                                                        (0x800de763U 
                                                         & vlSelf->__PVT__mstatus_r)))))))))
                                                 : 0U))));
}
