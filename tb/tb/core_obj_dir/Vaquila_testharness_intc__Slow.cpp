// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_intc.h"

void Vaquila_testharness_intc___ctor_var_reset(Vaquila_testharness_intc* vlSelf);

Vaquila_testharness_intc::Vaquila_testharness_intc(Vaquila_testharness__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaquila_testharness_intc___ctor_var_reset(this);
}

void Vaquila_testharness_intc::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaquila_testharness_intc::~Vaquila_testharness_intc() {
}
