// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

// Parameter definitions for Vtop___024unit
constexpr CData/*5:0*/ Vtop___024unit::INSTR_ADD;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SUB;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_XOR;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_OR;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_AND;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SLL;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SRL;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SRA;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SLT;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SLTU;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_ADDI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_XORI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_ORI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_ANDI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SLLI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SRLI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SRAI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SLTI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SLTIU;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_LB;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_LH;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_LW;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_LBU;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_LHU;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SB;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SH;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_SW;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_BEQ;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_BNE;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_BLT;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_BGE;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_BLTU;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_BGEU;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_JAL;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_JALR;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_LUI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_AUIPC;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_FENCE_I;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_CSRRW;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_CSRRS;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_CSRRC;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_CSRRWI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_CSRRSI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_CSRRCI;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_MRET;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_ECALL;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_EBREAK;
constexpr CData/*5:0*/ Vtop___024unit::INSTR_INVALID;


void Vtop___024unit___ctor_var_reset(Vtop___024unit* vlSelf);

Vtop___024unit::Vtop___024unit(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024unit___ctor_var_reset(this);
}

void Vtop___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024unit::~Vtop___024unit() {
}
