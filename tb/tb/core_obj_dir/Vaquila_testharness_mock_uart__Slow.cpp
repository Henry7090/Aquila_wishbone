// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_mock_uart.h"

// Parameter definitions for Vaquila_testharness_mock_uart
constexpr IData/*31:0*/ Vaquila_testharness_mock_uart::TOHOST_VAL_ADDR;


void Vaquila_testharness_mock_uart___ctor_var_reset(Vaquila_testharness_mock_uart* vlSelf);

Vaquila_testharness_mock_uart::Vaquila_testharness_mock_uart(Vaquila_testharness__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaquila_testharness_mock_uart___ctor_var_reset(this);
}

void Vaquila_testharness_mock_uart::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaquila_testharness_mock_uart::~Vaquila_testharness_mock_uart() {
}
