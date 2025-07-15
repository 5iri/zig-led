// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*1:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__NO_FORWARDING;
constexpr CData/*1:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__FORWARD_FROM_MEM;
constexpr CData/*1:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__FORWARD_FROM_WB;
constexpr CData/*1:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__NO_FORWARDING;
constexpr CData/*1:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__FORWARD_FROM_MEM;
constexpr CData/*1:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__FORWARD_FROM_WB;
constexpr CData/*3:0*/ Vtop___024root::top__DOT__uart_inst__DOT__TX_IDLE;
constexpr CData/*3:0*/ Vtop___024root::top__DOT__uart_inst__DOT__TX_START;
constexpr CData/*3:0*/ Vtop___024root::top__DOT__uart_inst__DOT__TX_DATA;
constexpr CData/*3:0*/ Vtop___024root::top__DOT__uart_inst__DOT__TX_STOP;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_MSTATUS;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_MISA;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_MIE;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_MTVEC;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_MSCRATCH;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_MEPC;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_MCAUSE;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_MTVAL;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_MIP;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_CYCLE;
constexpr SData/*11:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__csr_file_inst__DOT__CSR_CYCLEH;
constexpr SData/*15:0*/ Vtop___024root::top__DOT__uart_inst__DOT__DEFAULT_BAUD_DIVISOR;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__MACHINE_SOFTWARE_INTERRUPT;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__MACHINE_TIMER_INTERRUPT;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__MACHINE_EXTERNAL_INTERRUPT;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instr_mem_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instr_mem_inst__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instr_mem_inst__DOT__MEM_SIZE;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__data_mem_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__data_mem_inst__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__data_mem_inst__DOT__MEM_SIZE;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
