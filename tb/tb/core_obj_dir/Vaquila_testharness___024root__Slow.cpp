// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness___024root.h"

void Vaquila_testharness___024root___ctor_var_reset(Vaquila_testharness___024root* vlSelf);

Vaquila_testharness___024root::Vaquila_testharness___024root(Vaquila_testharness__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaquila_testharness___024root___ctor_var_reset(this);
}

void Vaquila_testharness___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaquila_testharness___024root::~Vaquila_testharness___024root() {
}
