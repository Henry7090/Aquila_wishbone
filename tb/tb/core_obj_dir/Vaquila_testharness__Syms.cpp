// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness.h"
#include "Vaquila_testharness___024root.h"
#include "Vaquila_testharness_aquila_testharness.h"
#include "Vaquila_testharness_aquila_top.h"
#include "Vaquila_testharness_dp_ram.h"
#include "Vaquila_testharness_intc.h"
#include "Vaquila_testharness_mock_uart.h"
#include "Vaquila_testharness_core_top.h"
#include "Vaquila_testharness_csr_file.h"

// FUNCTIONS
Vaquila_testharness__Syms::~Vaquila_testharness__Syms()
{
}

Vaquila_testharness__Syms::Vaquila_testharness__Syms(VerilatedContext* contextp, const char* namep, Vaquila_testharness* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__aquila_testharness{this, Verilated::catName(namep, "aquila_testharness")}
    , TOP__aquila_testharness__aquila_core{this, Verilated::catName(namep, "aquila_testharness.aquila_core")}
    , TOP__aquila_testharness__aquila_core__RISCV_CORE0{this, Verilated::catName(namep, "aquila_testharness.aquila_core.RISCV_CORE0")}
    , TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR{this, Verilated::catName(namep, "aquila_testharness.aquila_core.RISCV_CORE0.CSR")}
    , TOP__aquila_testharness__intc_0{this, Verilated::catName(namep, "aquila_testharness.intc_0")}
    , TOP__aquila_testharness__mock_ram{this, Verilated::catName(namep, "aquila_testharness.mock_ram")}
    , TOP__aquila_testharness__mock_uart_0{this, Verilated::catName(namep, "aquila_testharness.mock_uart_0")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.aquila_testharness = &TOP__aquila_testharness;
    TOP__aquila_testharness.aquila_core = &TOP__aquila_testharness__aquila_core;
    TOP__aquila_testharness__aquila_core.RISCV_CORE0 = &TOP__aquila_testharness__aquila_core__RISCV_CORE0;
    TOP__aquila_testharness__aquila_core__RISCV_CORE0.CSR = &TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR;
    TOP__aquila_testharness.intc_0 = &TOP__aquila_testharness__intc_0;
    TOP__aquila_testharness.mock_ram = &TOP__aquila_testharness__mock_ram;
    TOP__aquila_testharness.mock_uart_0 = &TOP__aquila_testharness__mock_uart_0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__aquila_testharness.__Vconfigure(true);
    TOP__aquila_testharness__aquila_core.__Vconfigure(true);
    TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vconfigure(true);
    TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__Vconfigure(true);
    TOP__aquila_testharness__intc_0.__Vconfigure(true);
    TOP__aquila_testharness__mock_ram.__Vconfigure(true);
    TOP__aquila_testharness__mock_uart_0.__Vconfigure(true);
    // Setup scopes
    __Vscope_aquila_testharness.configure(this, name(), "aquila_testharness", "aquila_testharness", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_aquila_testharness__aquila_core__RISCV_CORE0.configure(this, name(), "aquila_testharness.aquila_core.RISCV_CORE0", "RISCV_CORE0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_aquila_testharness__aquila_core__RISCV_CORE0__CSR.configure(this, name(), "aquila_testharness.aquila_core.RISCV_CORE0.CSR", "CSR", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_aquila_testharness__intc_0.configure(this, name(), "aquila_testharness.intc_0", "intc_0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_aquila_testharness__mock_ram.configure(this, name(), "aquila_testharness.mock_ram", "mock_ram", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_aquila_testharness__mock_uart_0.configure(this, name(), "aquila_testharness.mock_uart_0", "mock_uart_0", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_aquila_testharness.varInsert(__Vfinal,"M_DEVICE_strobe", &(TOP__aquila_testharness.M_DEVICE_strobe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness.varInsert(__Vfinal,"debug_pc", &(TOP__aquila_testharness.debug_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_aquila_testharness.varInsert(__Vfinal,"dev_sel", &(TOP__aquila_testharness.dev_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness.varInsert(__Vfinal,"is_dev_req", &(TOP__aquila_testharness.is_dev_req), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__aquila_core__RISCV_CORE0.varInsert(__Vfinal,"dec2plc_load_hazard", &(TOP__aquila_testharness__aquila_core__RISCV_CORE0.dec2plc_load_hazard), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__aquila_core__RISCV_CORE0.varInsert(__Vfinal,"dec_unsupported_instr", &(TOP__aquila_testharness__aquila_core__RISCV_CORE0.dec_unsupported_instr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__aquila_core__RISCV_CORE0.varInsert(__Vfinal,"fet2dec_pc", &(TOP__aquila_testharness__aquila_core__RISCV_CORE0.fet2dec_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_aquila_testharness__aquila_core__RISCV_CORE0.varInsert(__Vfinal,"irq_taken", &(TOP__aquila_testharness__aquila_core__RISCV_CORE0.irq_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__aquila_core__RISCV_CORE0.varInsert(__Vfinal,"plc2dec_flush", &(TOP__aquila_testharness__aquila_core__RISCV_CORE0.plc2dec_flush), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__aquila_core__RISCV_CORE0.varInsert(__Vfinal,"stall_pipeline", &(TOP__aquila_testharness__aquila_core__RISCV_CORE0.stall_pipeline), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__aquila_core__RISCV_CORE0__CSR.varInsert(__Vfinal,"mie_r", &(TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.mie_r), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_aquila_testharness__intc_0.varInsert(__Vfinal,"M_DEVICE_addr", &(TOP__aquila_testharness__intc_0.M_DEVICE_addr), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_aquila_testharness__intc_0.varInsert(__Vfinal,"M_DEVICE_core2dev_data", &(TOP__aquila_testharness__intc_0.M_DEVICE_core2dev_data), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_aquila_testharness__intc_0.varInsert(__Vfinal,"M_DEVICE_data_ready", &(TOP__aquila_testharness__intc_0.M_DEVICE_data_ready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__intc_0.varInsert(__Vfinal,"M_DEVICE_dev2core_data", &(TOP__aquila_testharness__intc_0.M_DEVICE_dev2core_data), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_aquila_testharness__intc_0.varInsert(__Vfinal,"M_DEVICE_rw", &(TOP__aquila_testharness__intc_0.M_DEVICE_rw), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__intc_0.varInsert(__Vfinal,"M_DEVICE_strobe", &(TOP__aquila_testharness__intc_0.M_DEVICE_strobe), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__mock_ram.varInsert(__Vfinal,"MEM_OFFSET", const_cast<void*>(static_cast<const void*>(&(TOP__aquila_testharness__mock_ram.MEM_OFFSET))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_aquila_testharness__mock_ram.varInsert(__Vfinal,"MEM_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP__aquila_testharness__mock_ram.MEM_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_aquila_testharness__mock_ram.varInsert(__Vfinal,"mem", &(TOP__aquila_testharness__mock_ram.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,268435455,0);
        __Vscope_aquila_testharness__mock_uart_0.varInsert(__Vfinal,"TOHOST_VAL_ADDR", const_cast<void*>(static_cast<const void*>(&(TOP__aquila_testharness__mock_uart_0.TOHOST_VAL_ADDR))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_aquila_testharness__mock_uart_0.varInsert(__Vfinal,"dev_rdata", &(TOP__aquila_testharness__mock_uart_0.dev_rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_aquila_testharness__mock_uart_0.varInsert(__Vfinal,"dev_rvalid", &(TOP__aquila_testharness__mock_uart_0.dev_rvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_aquila_testharness__mock_uart_0.varInsert(__Vfinal,"tohost_val", &(TOP__aquila_testharness__mock_uart_0.tohost_val), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}
