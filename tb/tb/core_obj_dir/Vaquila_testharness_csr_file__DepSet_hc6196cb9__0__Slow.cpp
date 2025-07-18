// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_csr_file.h"

VL_ATTR_COLD void Vaquila_testharness_csr_file___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0(Vaquila_testharness_csr_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaquila_testharness_csr_file___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0\n"); );
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
    vlSelf->__PVT__trap_to_M = 1U;
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
