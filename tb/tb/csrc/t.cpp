
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>
#include <cstdint>

#include "verilated_vcd_c.h"
#include "verilated_fst_c.h"
#include "Vaquila_testharness.h"
#include "Vaquila_testharness__Syms.h"
#include "verilated.h"

#include "sim_mem.h"

#define TRACE //enable to generate vcd waveform file
/* #undef TRACE */
#define TRACE_FROM_SPECIFIED_PC 0
#define TRACE_FROM_SPECIFIED_CYCLE 1
#define FENCE_ENABLE
#undef FENCE_ENABLE
#define MAX_SIM_CYCLE 1000000000 //change here to simulate more cycle

#define clk_sec 1
#define UART_SEND_DELAY 10000 /* delay cycle of seding program to uart */
#define UART_LOAD 0 /* load program from uart */
#define ELF_LOAD 1
#define BIN_LOAD 0
#define UART_INBYTE_PC 0x00000280 /* the pc of inbyte() in uartboot */
/* #define START_LOG_PC  0xbff9f2f0 /1* U-Boot command *1/ */
/* #define START_LOG_PC  0xc003b558 /1* clocksource select *1/ */
/* #define START_LOG_PC  0xc01ab850 /1* clocksource select *1/ */

/* #define START_LOG_PC  0xc081c92c /1* pci_apply_final_quirks *1/ */

/* #define START_LOG_PC  0xc0808024 /1* console setup *1/ */

/* #define START_LOG_PC  0xc0207a94 /1* load_bin_elf *1/ */
/* #define START_LOG_PC  0xc020651c /1* load_bin_elf *1/ */
/* #define START_LOG_PC  0xc03e8170 /1* dentry alloc *1/ */
/* #define START_LOG_PC  0xc040f3b0 /1* cpuidle switch *1/ */
/* #define START_LOG_PC  0xc08138ec /1* mnt_init *1/ */
/* #define START_LOG_PC  0xc034e65c /1* bug happend *1/ */
/* #define START_LOG_PC  0xc02efc78 /1* elv register *1/ */
/* #define START_LOG_PC  0xc0817780 /1* kyber_init *1/ */
#define START_LOG_PC  0xc00438a0 /* do_idle */
/* #define START_LOG_PC  0xc045eee0 /1* schedule_preempt_disabled *1/ */
/* #define START_LOG_CYCLE 0x9373000 */
#define START_LOG_CYCLE 0x907629f
/* #define START_LOG_PC  0xc0810cb8 /1* hugetlb init *1/ */
/* #define START_LOG_PC  0xc045f720 /1* rest_init back to cpu idle *1/ */
/* #define START_LOG_PC  0xc04383e8 /1* riscv clock next event *1/ */
/* #define START_LOG_PC  0xc03b6b28 /1* ulite_start_up *1/ */
/* #define START_LOG_PC  0x0001043c /1* busybox start *1/ */
/* #define START_LOG_PC  0x0008be20 /1* ash main *1/ */
/* #define START_LOG_PC  0x00161688 /1* libc_poll *1/ */
/* #define START_LOG_PC  0xc0818210 /1* xilinx intc init *1/ */
/* #define START_LOG_PC  0xc081c378 /1* devtmpfs init *1/ */
/* #define START_LOG_PC  0xc005e290 /1* init_irq_proc *1/ */

/* #define START_LOG_PC  0xbff9dc94 /1* U-Boot command *1/ */

/* #define START_LOG_PC  0xc02f1884 /1* io sched *1/ */

using namespace std;
static vluint64_t cpuTime = 0;
uint32_t tohost_addr = 0;
Vaquila_testharness* top;
// VerilatedVcdC* Vcdfp;
VerilatedFstC* Vcdfp;
fstream log_file;
bool flush_flag;
uint32_t cur_cycle = 0;
bool start_log;
bool start_dump;
uint32_t mie_r = 0;

int send = 0;

double sc_time_stamp() { return cpuTime; }
void load_simple_asm();


void uart_send(uint8_t);
void delay_cycles(uint32_t);
void log_cycle();



static void usage(const char * program_name)
{
    cout << "Usage: " << program_name << " [RISCV_TEST_ELF] [RVTEST(0/1),default 0]" << endl;
}

void log_cycle()
{
    bool dec_stall = top->aquila_testharness->aquila_core->RISCV_CORE0->stall_pipeline;
    bool dec_flush = top->aquila_testharness->aquila_core->RISCV_CORE0->plc2dec_flush || top->aquila_testharness->aquila_core->RISCV_CORE0->irq_taken || top->aquila_testharness->aquila_core->RISCV_CORE0->irq_flush_r;
    bool dec_load_hazard = top->aquila_testharness->aquila_core->RISCV_CORE0->dec2plc_load_hazard;
    bool unsupported_instr = top->aquila_testharness->aquila_core->RISCV_CORE0->dec_unsupported_instr; 
    if ((!dec_stall && !dec_flush && !dec_load_hazard) || unsupported_instr) {
        if (flush_flag) {
            flush_flag = false;
        } else {
            if (TRACE_FROM_SPECIFIED_PC && top->aquila_testharness->aquila_core->RISCV_CORE0->fet2dec_pc == START_LOG_PC) {
                start_dump = true;
                start_log = true;
            } else if (TRACE_FROM_SPECIFIED_CYCLE && cur_cycle >= START_LOG_CYCLE) {
                start_dump = true;
                start_log = true;
            } else {
                if (!start_log) return;
            }
            
            /* if (top->aquila_testharness->aquila_core->RISCV_CORE0->Decode->pc_i == 0xc0436688) { */
            /*     std::cout << "RISCV Timer IRQ!!" << std::endl; */
            /* } */
            /* if (top->aquila_testharness->aquila_core->RISCV_CORE0->Decode->pc_i == 0xc0363748) { */
            /*     std::cout << "IRQ MASK!!" << std::endl; */
            /* } */
            uint32_t dec_pc = top->aquila_testharness->aquila_core->RISCV_CORE0->fet2dec_pc;
            if (dec_pc == 0xc00438a0) {
                std::cout << "DO IDLE" << std::endl;
            }

            if (dec_pc == 0x00161694 && send != 1) {
                send++;
                std::string cmd = "ls\n";
                for (char c : cmd) {
                    uart_send(c);
                    delay_cycles(100000);
                }
            }




            uint32_t mie = top->aquila_testharness->aquila_core->RISCV_CORE0->CSR->mie_r;
            /* if (mie != mie_r) { */
            /*     std::cout << "MIE_R Change from " << std::hex << mie_r << " to " <<  mie << std::dec << std::endl; */
            /*     std::cout << "PC : " << std::hex << top->aquila_testharness->aquila_core->RISCV_CORE0->Decode->pc_i << std::dec << std::endl; */
            /*     mie_r = mie; */ 
            /* } */

            log_file << "#" << setfill('0') << setw(10) << right << cur_cycle << ":" 
                << setfill('0') << setw(8) << right << hex 
                << top->aquila_testharness->aquila_core->RISCV_CORE0->fet2dec_pc << endl;
        }
    } else {
        if (dec_flush && !dec_load_hazard) {
            flush_flag = true;
        }
    }
}
void delay_cycles(uint32_t cycles)
{
    for (int i = 0; i < cycles; i++) {
        top->clk = 0;
        top->eval();
        cpuTime += clk_sec;
        log_cycle();
        top->clk = 1;
        top->eval();
        cpuTime += clk_sec;
        cur_cycle++;
    }
}

void uart_send(uint8_t data)
{
    top->aquila_testharness->mock_uart_0->dev_rvalid = 0;
    /* delay UART_SEND_DELAY cycles to let processor read */
    delay_cycles(UART_SEND_DELAY);
    top->aquila_testharness->mock_uart_0->dev_rvalid = 1;
    top->aquila_testharness->mock_uart_0->dev_rdata = data;
    delay_cycles(1);
    top->aquila_testharness->mock_uart_0->dev_rvalid = 0;
    delay_cycles(1);
}


int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    map<string, uint64_t> elf_symbols;
    bool rv_test_enable = false;

    if (TRACE_FROM_SPECIFIED_PC) {
        start_log = false;
        start_dump = false;
    } else if (TRACE_FROM_SPECIFIED_CYCLE) {
        start_log = false;
        start_dump = false;
    } else {
        start_log = true;
        start_dump = true;
    }

    if (argc < 2) {
        usage(argv[0]);
        cerr << "Please provide riscv test elf file" << endl;
        return -1;
    }

    log_file.open("cpu.log", fstream::out);

    if (!log_file.is_open()) {
        cerr << "Failed to open cpu.log file!!!" << endl;
        return -1;
    }

    if (argc >= 3) {
        if (argv[2][0] == '1')
            rv_test_enable = true;
        cout << "set rv_test_enable to " << (rv_test_enable ? "\"true\"" : "\"false\"") << endl;
    }

    top = new Vaquila_testharness("top");
#ifdef TRACE
    Verilated::traceEverOn(true);
    // Vcdfp = new VerilatedVcdC;
    Vcdfp = new VerilatedFstC;
    top->trace(Vcdfp, 99);
    // Vcdfp->open("aquila_core.vcd");
    Vcdfp->open("aquila_core.fst");
#endif
    uint32_t entry_addr = 0x00000000;
    std::string file_name = string(argv[1]);
    char *buf;
    size_t size;

    if (UART_LOAD) {
        /* send elf to mock uart, using uartboot at rom to load program */
        std::ifstream bpfs(file_name, std::ios::binary|std::ios::ate);
        if (!bpfs.is_open()) {
            std::cout << "Error! failed to open " << file_name << std::endl;
            exit(-1);
        }
        std::ifstream::pos_type pos = bpfs.tellg();
        int f_length = pos;
        buf = new char[f_length];
        bpfs.seekg(0, std::ios::beg);
        bpfs.read(buf, f_length);
        bpfs.close();
        size = f_length;
    } else if (ELF_LOAD) {
        /* load elf to dram and execute it. */
        elf_symbols = sim_mem_load_program(top->aquila_testharness->mock_ram, file_name, &entry_addr);

        if (rv_test_enable) {
            if (elf_symbols.count("tohost")){
                tohost_addr = static_cast<uint32_t>(elf_symbols["tohost"]);
            } else {
                cerr << "no tohost symbols existed.!!!" << endl;
                return -1;
            }
        }
    } else if (BIN_LOAD) {
        /* directly load binary executable */
        sim_mem_load_bin_program(top->aquila_testharness->mock_ram, file_name, &entry_addr);
        std::cout << "Load from bin" << std::endl;
    }
    top->rst_n = 0;
    cout << "entry_addr = " << "0x" << setfill('0') << setw(8) << right << hex << entry_addr << endl;
    top->main_memory_addr = entry_addr;
    //load_simple_asm();
    /* sim_mem_dump_memory(top->aquila_testharness->mock_ram, "dump.mem"); */
    for (int i = 0 ; i < 5 ; i ++){
        top->clk = 0;
        top->eval ();
        cpuTime += clk_sec;
#ifdef TRACE
        Vcdfp->dump(cpuTime);
#endif
        top->clk = 1;
        top->eval ();
        cpuTime += clk_sec;
#ifdef TRACE
        Vcdfp->dump(cpuTime);
#endif
    }
    top->rst_n = 1;

    uint32_t tohost_val;
    int uart_delay_cnt = UART_SEND_DELAY;
    bool wait_inbyte = 0;
    size_t cur_pos = 0;
    flush_flag = false;
    bool setenv_done = false;
    std::string bootcmd;

    while (cur_cycle < MAX_SIM_CYCLE) {
        top->clk = 0;
        top->eval();
        cpuTime += clk_sec;
#ifdef TRACE
        if (start_dump) {
            Vcdfp->dump(cpuTime);
        }
#endif
        auto &intc = top->aquila_testharness->intc_0;
        /* if (intc->M_DEVICE_strobe) { */
        /*     std::cout << "intc strobe! with" << intc->M_DEVICE_rw */ 
        /*         << " to address " << intc->M_DEVICE_addr << std::endl; */
        /* } */
        log_cycle();

        top->clk = 1;
        top->eval();
        cpuTime += clk_sec;
        
        cur_cycle++;
        if (top->cur_instr_addr == 0xbff9dc94) {
            /* start_dump = 1; */
            sim_mem_load_bin_program(top->aquila_testharness->mock_ram, "/usr/testbench2/Image", &entry_addr);
            /* bootcmd = "setenv bootargs earlycon=sbi console=ttyS0\n"; */
            /* for (char c : bootcmd) { */
            /*     uart_send(c); */
            /* } */
            /* delay_cycles(100000); */
            bootcmd = "printenv\n";
            for (char c : bootcmd) {
                uart_send(c);
            }
            delay_cycles(200000);
            bootcmd = "booti 0x80400000 - $fdtcontroladdr\n";
            for (char c : bootcmd) {
                uart_send(c);
            }
        }
        if (UART_LOAD) {
            if (top->cur_instr_addr == UART_INBYTE_PC) {
                while (cur_pos < size) {
                    uart_send(buf[cur_pos]);
                    cur_pos++;
                }
            }
        }
#ifdef TRACE
        if (start_dump) {
            Vcdfp->dump(cpuTime);
        }
#endif
        /* if (top->aquila_testharness->aquila_core->RISCV_CORE0->Decode->pc_i == START_DUMP_PC) { */
        /*     start_dump = 1; */
        /* } */

        if (rv_test_enable) {
#ifdef FENCE_ENABLE
            tohost_val = sim_mem_tohost_monitor(top->aquila_testharness->mock_ram, tohost_addr);
#else
            tohost_val = top->aquila_testharness->mock_uart_0->read_tohost();
#endif
            if (tohost_val != 0){
                if (tohost_val == 1)
                    cout << "pass testcase: " << argv[1] << endl;
                else
                    cout << "testcase #" << tohost_val << " failed !!!!!\ntestcase:" << argv[1] << endl;
                break;
            }
        }
    }
#ifdef TRACE
    Vcdfp->close();
    delete Vcdfp;
#endif
    delete top;

    if (rv_test_enable && tohost_val != 1)
        exit(-1);
    else
        exit(0);
}

void load_simple_asm()
{
    //_start
    top->aquila_testharness->mock_ram->writeWord(0x00000000,0x04c0006f);
    // trap_vector
    top->aquila_testharness->mock_ram->writeWord(0x00000004,0x34202f73);
    top->aquila_testharness->mock_ram->writeWord(0x00000008,0x00800f93);
    top->aquila_testharness->mock_ram->writeWord(0x0000000c,0x03ff0a63);
    top->aquila_testharness->mock_ram->writeWord(0x00000010,0x00900f93);
    top->aquila_testharness->mock_ram->writeWord(0x00000014,0x03ff0663);
    top->aquila_testharness->mock_ram->writeWord(0x00000018,0x00b00f93);
    top->aquila_testharness->mock_ram->writeWord(0x0000001c,0x03ff0263);
    top->aquila_testharness->mock_ram->writeWord(0x00000020,0x00000f17);
    top->aquila_testharness->mock_ram->writeWord(0x00000024,0xfe0f0f13);
    top->aquila_testharness->mock_ram->writeWord(0x00000028,0x000f0463);
    top->aquila_testharness->mock_ram->writeWord(0x0000002c,0x000f0067);
    top->aquila_testharness->mock_ram->writeWord(0x00000030,0x34202f73);
    top->aquila_testharness->mock_ram->writeWord(0x00000034,0x000f5463);
    top->aquila_testharness->mock_ram->writeWord(0x00000038,0x0040006f);
    // handle exception
    top->aquila_testharness->mock_ram->writeWord(0x0000003c,0x5391e193);
    top->aquila_testharness->mock_ram->writeWord(0x00000040,0x00001f17);
    top->aquila_testharness->mock_ram->writeWord(0x00000044,0xfc3f2023);
    top->aquila_testharness->mock_ram->writeWord(0x00000048,0xff9ff06f);
    //reset vector
    top->aquila_testharness->mock_ram->writeWord(0x0000004c,0xf1402573);
    top->aquila_testharness->mock_ram->writeWord(0x00000050,0x00051063);
    top->aquila_testharness->mock_ram->writeWord(0x00000054,0x00000297);
    top->aquila_testharness->mock_ram->writeWord(0x00000058,0x01028293);
    top->aquila_testharness->mock_ram->writeWord(0x0000005c,0x30529073);
    top->aquila_testharness->mock_ram->writeWord(0x00000060,0x18005073);
    top->aquila_testharness->mock_ram->writeWord(0x00000064,0x00000297);
    top->aquila_testharness->mock_ram->writeWord(0x00000068,0x02028293);
    top->aquila_testharness->mock_ram->writeWord(0x0000006c,0x30529073);
    top->aquila_testharness->mock_ram->writeWord(0x00000070,0x800002b7);
}


