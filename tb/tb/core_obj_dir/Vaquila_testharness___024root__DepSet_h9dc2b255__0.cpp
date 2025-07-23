// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness___024root.h"

VL_INLINE_OPT void Vaquila_testharness___024root___sequent__TOP__0(Vaquila_testharness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->spi_mosi = vlSymsp->TOP__aquila_testharness.spi_mosi;
    vlSelf->spi_ss = vlSymsp->TOP__aquila_testharness.spi_ss;
    vlSelf->spi_sck = vlSymsp->TOP__aquila_testharness.spi_sck;
}

VL_INLINE_OPT void Vaquila_testharness___024root___sequent__TOP__1(Vaquila_testharness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->cur_instr_addr = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r;
}

void Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0(Vaquila_testharness_core_top* vlSelf);
void Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__0(Vaquila_testharness_aquila_testharness* vlSelf);
void Vaquila_testharness_aquila_top___sequent__TOP__aquila_testharness__aquila_core__0(Vaquila_testharness_aquila_top* vlSelf);
void Vaquila_testharness_csr_file___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0(Vaquila_testharness_csr_file* vlSelf);
void Vaquila_testharness_mock_uart___sequent__TOP__aquila_testharness__mock_uart_0__0(Vaquila_testharness_mock_uart* vlSelf);
void Vaquila_testharness_intc___sequent__TOP__aquila_testharness__intc_0__0(Vaquila_testharness_intc* vlSelf);
void Vaquila_testharness_dp_ram___sequent__TOP__aquila_testharness__mock_ram__0(Vaquila_testharness_dp_ram* vlSelf);
void Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1(Vaquila_testharness_core_top* vlSelf);
void Vaquila_testharness_mock_uart___sequent__TOP__aquila_testharness__mock_uart_0__1(Vaquila_testharness_mock_uart* vlSelf);
void Vaquila_testharness_aquila_top___sequent__TOP__aquila_testharness__aquila_core__1(Vaquila_testharness_aquila_top* vlSelf);
void Vaquila_testharness_csr_file___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__1(Vaquila_testharness_csr_file* vlSelf);
void Vaquila_testharness_intc___sequent__TOP__aquila_testharness__intc_0__1(Vaquila_testharness_intc* vlSelf);
void Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__2(Vaquila_testharness_core_top* vlSelf);
void Vaquila_testharness_dp_ram___sequent__TOP__aquila_testharness__mock_ram__1(Vaquila_testharness_dp_ram* vlSelf);
void Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__1(Vaquila_testharness_aquila_testharness* vlSelf);
void Vaquila_testharness_aquila_top___sequent__TOP__aquila_testharness__aquila_core__2(Vaquila_testharness_aquila_top* vlSelf);
void Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__2(Vaquila_testharness_aquila_testharness* vlSelf);
void Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__3(Vaquila_testharness_core_top* vlSelf);
void Vaquila_testharness_aquila_testharness___combo__TOP__aquila_testharness__0(Vaquila_testharness_aquila_testharness* vlSelf);
void Vaquila_testharness_csr_file___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0(Vaquila_testharness_csr_file* vlSelf);
void Vaquila_testharness_core_top___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0(Vaquila_testharness_core_top* vlSelf);
void Vaquila_testharness_intc___combo__TOP__aquila_testharness__intc_0__0(Vaquila_testharness_intc* vlSelf);
void Vaquila_testharness_aquila_top___combo__TOP__aquila_testharness__aquila_core__0(Vaquila_testharness_aquila_top* vlSelf);
void Vaquila_testharness_mock_uart___combo__TOP__aquila_testharness__mock_uart_0__0(Vaquila_testharness_mock_uart* vlSelf);
void Vaquila_testharness_csr_file___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__1(Vaquila_testharness_csr_file* vlSelf);
void Vaquila_testharness_core_top___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1(Vaquila_testharness_core_top* vlSelf);

void Vaquila_testharness___024root___eval(Vaquila_testharness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__0((&vlSymsp->TOP__aquila_testharness));
        Vaquila_testharness_aquila_top___sequent__TOP__aquila_testharness__aquila_core__0((&vlSymsp->TOP__aquila_testharness__aquila_core));
        Vaquila_testharness_csr_file___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR));
        Vaquila_testharness_mock_uart___sequent__TOP__aquila_testharness__mock_uart_0__0((&vlSymsp->TOP__aquila_testharness__mock_uart_0));
        Vaquila_testharness_intc___sequent__TOP__aquila_testharness__intc_0__0((&vlSymsp->TOP__aquila_testharness__intc_0));
        Vaquila_testharness_dp_ram___sequent__TOP__aquila_testharness__mock_ram__0((&vlSymsp->TOP__aquila_testharness__mock_ram));
        Vaquila_testharness___024root___sequent__TOP__0(vlSelf);
        Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0));
        Vaquila_testharness_mock_uart___sequent__TOP__aquila_testharness__mock_uart_0__1((&vlSymsp->TOP__aquila_testharness__mock_uart_0));
        Vaquila_testharness_aquila_top___sequent__TOP__aquila_testharness__aquila_core__1((&vlSymsp->TOP__aquila_testharness__aquila_core));
        Vaquila_testharness_csr_file___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__1((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR));
        Vaquila_testharness_intc___sequent__TOP__aquila_testharness__intc_0__1((&vlSymsp->TOP__aquila_testharness__intc_0));
        Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__2((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0));
        Vaquila_testharness_dp_ram___sequent__TOP__aquila_testharness__mock_ram__1((&vlSymsp->TOP__aquila_testharness__mock_ram));
        Vaquila_testharness___024root___sequent__TOP__1(vlSelf);
        Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__1((&vlSymsp->TOP__aquila_testharness));
        Vaquila_testharness_aquila_top___sequent__TOP__aquila_testharness__aquila_core__2((&vlSymsp->TOP__aquila_testharness__aquila_core));
        Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__2((&vlSymsp->TOP__aquila_testharness));
        Vaquila_testharness_core_top___sequent__TOP__aquila_testharness__aquila_core__RISCV_CORE0__3((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0));
    }
    Vaquila_testharness_aquila_testharness___combo__TOP__aquila_testharness__0((&vlSymsp->TOP__aquila_testharness));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vaquila_testharness_csr_file___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__0((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR));
    Vaquila_testharness_core_top___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__0((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0));
    Vaquila_testharness_intc___combo__TOP__aquila_testharness__intc_0__0((&vlSymsp->TOP__aquila_testharness__intc_0));
    Vaquila_testharness_aquila_top___combo__TOP__aquila_testharness__aquila_core__0((&vlSymsp->TOP__aquila_testharness__aquila_core));
    Vaquila_testharness_mock_uart___combo__TOP__aquila_testharness__mock_uart_0__0((&vlSymsp->TOP__aquila_testharness__mock_uart_0));
    Vaquila_testharness_csr_file___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR__1((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR));
    Vaquila_testharness_core_top___combo__TOP__aquila_testharness__aquila_core__RISCV_CORE0__1((&vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0));
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}
