// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness___024root.h"

VL_ATTR_COLD void Vaquila_testharness___024root___settle__TOP__0(Vaquila_testharness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->cur_instr_addr = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r;
    vlSelf->spi_mosi = vlSymsp->TOP__aquila_testharness.spi_mosi;
    vlSelf->spi_ss = vlSymsp->TOP__aquila_testharness.spi_ss;
    vlSelf->spi_sck = vlSymsp->TOP__aquila_testharness.spi_sck;
}

VL_ATTR_COLD void Vaquila_testharness_aquila_testharness___initial__TOP__aquila_testharness__0(Vaquila_testharness_aquila_testharness* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_core_top___initial__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0(Vaquila_testharness_core_top* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_aquila_top___initial__TOP__aquila_testharness__aquila_core__0(Vaquila_testharness_aquila_top* vlSelf);

VL_ATTR_COLD void Vaquila_testharness___024root___eval_initial(Vaquila_testharness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root___eval_initial\n"); );
    // Body
    Vaquila_testharness_aquila_testharness___initial__TOP__aquila_testharness__0((&vlSymsp->TOP__aquila_testharness));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vaquila_testharness_core_top___initial__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0));
    Vaquila_testharness_aquila_top___initial__TOP__aquila_testharness__aquila_core__0((&vlSymsp->TOP__aquila_testharness__aquila_core));
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vaquila_testharness_aquila_top___settle__TOP__aquila_testharness__aquila_core__0(Vaquila_testharness_aquila_top* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_core_top___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0(Vaquila_testharness_core_top* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_aquila_testharness___settle__TOP__aquila_testharness__0(Vaquila_testharness_aquila_testharness* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_intc___settle__TOP__aquila_testharness__intc_0__0(Vaquila_testharness_intc* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_dp_ram___settle__TOP__aquila_testharness__mock_ram__0(Vaquila_testharness_dp_ram* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_csr_file___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0(Vaquila_testharness_csr_file* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_aquila_top___settle__TOP__aquila_testharness__aquila_core__1(Vaquila_testharness_aquila_top* vlSelf);
void Vaquila_testharness_mock_uart___combo__TOP__aquila_testharness__mock_uart_0__0(Vaquila_testharness_mock_uart* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_core_top___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1(Vaquila_testharness_core_top* vlSelf);
VL_ATTR_COLD void Vaquila_testharness_aquila_testharness___settle__TOP__aquila_testharness__1(Vaquila_testharness_aquila_testharness* vlSelf);

VL_ATTR_COLD void Vaquila_testharness___024root___eval_settle(Vaquila_testharness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root___eval_settle\n"); );
    // Body
    Vaquila_testharness_aquila_top___settle__TOP__aquila_testharness__aquila_core__0((&vlSymsp->TOP__aquila_testharness__aquila_core));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vaquila_testharness_core_top___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0));
    Vaquila_testharness___024root___settle__TOP__0(vlSelf);
    Vaquila_testharness_aquila_testharness___settle__TOP__aquila_testharness__0((&vlSymsp->TOP__aquila_testharness));
    Vaquila_testharness_intc___settle__TOP__aquila_testharness__intc_0__0((&vlSymsp->TOP__aquila_testharness__intc_0));
    Vaquila_testharness_dp_ram___settle__TOP__aquila_testharness__mock_ram__0((&vlSymsp->TOP__aquila_testharness__mock_ram));
    Vaquila_testharness_csr_file___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR));
    Vaquila_testharness_aquila_top___settle__TOP__aquila_testharness__aquila_core__1((&vlSymsp->TOP__aquila_testharness__aquila_core));
    Vaquila_testharness_mock_uart___combo__TOP__aquila_testharness__mock_uart_0__0((&vlSymsp->TOP__aquila_testharness__mock_uart_0));
    Vaquila_testharness_core_top___settle__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0));
    Vaquila_testharness_aquila_testharness___settle__TOP__aquila_testharness__1((&vlSymsp->TOP__aquila_testharness));
}
