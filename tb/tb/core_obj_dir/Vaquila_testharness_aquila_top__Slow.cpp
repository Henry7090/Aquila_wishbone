// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_aquila_top.h"

void Vaquila_testharness_aquila_top___ctor_var_reset(Vaquila_testharness_aquila_top* vlSelf);

Vaquila_testharness_aquila_top::Vaquila_testharness_aquila_top(Vaquila_testharness__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaquila_testharness_aquila_top___ctor_var_reset(this);
}

void Vaquila_testharness_aquila_top::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaquila_testharness_aquila_top::~Vaquila_testharness_aquila_top() {
}
