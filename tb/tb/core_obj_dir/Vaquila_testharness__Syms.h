// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAQUILA_TESTHARNESS__SYMS_H_
#define VERILATED_VAQUILA_TESTHARNESS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaquila_testharness.h"

// INCLUDE MODULE CLASSES
#include "Vaquila_testharness___024root.h"
#include "Vaquila_testharness_aquila_testharness.h"
#include "Vaquila_testharness_aquila_top.h"
#include "Vaquila_testharness_dp_ram.h"
#include "Vaquila_testharness_intc.h"
#include "Vaquila_testharness_mock_uart.h"
#include "Vaquila_testharness_core_top.h"
#include "Vaquila_testharness_csr_file.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vaquila_testharness__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaquila_testharness* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaquila_testharness___024root  TOP;
    Vaquila_testharness_aquila_testharness TOP__aquila_testharness;
    Vaquila_testharness_aquila_top TOP__aquila_testharness__aquila_core;
    Vaquila_testharness_core_top   TOP__aquila_testharness__aquila_core__RISCV_CORE0;
    Vaquila_testharness_csr_file   TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR;
    Vaquila_testharness_intc       TOP__aquila_testharness__intc_0;
    Vaquila_testharness_dp_ram     TOP__aquila_testharness__mock_ram;
    Vaquila_testharness_mock_uart  TOP__aquila_testharness__mock_uart_0;

    // SCOPE NAMES
    VerilatedScope __Vscope_aquila_testharness;
    VerilatedScope __Vscope_aquila_testharness__aquila_core__RISCV_CORE0;
    VerilatedScope __Vscope_aquila_testharness__aquila_core__RISCV_CORE0__CSR;
    VerilatedScope __Vscope_aquila_testharness__intc_0;
    VerilatedScope __Vscope_aquila_testharness__mock_ram;
    VerilatedScope __Vscope_aquila_testharness__mock_uart_0;

    // CONSTRUCTORS
    Vaquila_testharness__Syms(VerilatedContext* contextp, const char* namep, Vaquila_testharness* modelp);
    ~Vaquila_testharness__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
