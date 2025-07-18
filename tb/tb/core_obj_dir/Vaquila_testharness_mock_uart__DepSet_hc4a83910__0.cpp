// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness_mock_uart.h"

uint32_t Vaquila_testharness_mock_uart::read_tohost() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_mock_uart::read_tohost\n"); );
    VL_OUT(read_tohost__Vfuncrtn,31,0);
    // Body
    read_tohost__Vfuncrtn = this->tohost_val;
    // Final
    return (read_tohost__Vfuncrtn);
}
