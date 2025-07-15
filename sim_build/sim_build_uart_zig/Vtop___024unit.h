// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT_H_
#define VERILATED_VTOP___024UNIT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*5:0*/ INSTR_ADD = 1U;
    static constexpr CData/*5:0*/ INSTR_SUB = 2U;
    static constexpr CData/*5:0*/ INSTR_XOR = 3U;
    static constexpr CData/*5:0*/ INSTR_OR = 4U;
    static constexpr CData/*5:0*/ INSTR_AND = 5U;
    static constexpr CData/*5:0*/ INSTR_SLL = 6U;
    static constexpr CData/*5:0*/ INSTR_SRL = 7U;
    static constexpr CData/*5:0*/ INSTR_SRA = 8U;
    static constexpr CData/*5:0*/ INSTR_SLT = 9U;
    static constexpr CData/*5:0*/ INSTR_SLTU = 0x0aU;
    static constexpr CData/*5:0*/ INSTR_ADDI = 0x0bU;
    static constexpr CData/*5:0*/ INSTR_XORI = 0x0cU;
    static constexpr CData/*5:0*/ INSTR_ORI = 0x0dU;
    static constexpr CData/*5:0*/ INSTR_ANDI = 0x0eU;
    static constexpr CData/*5:0*/ INSTR_SLLI = 0x0fU;
    static constexpr CData/*5:0*/ INSTR_SRLI = 0x10U;
    static constexpr CData/*5:0*/ INSTR_SRAI = 0x11U;
    static constexpr CData/*5:0*/ INSTR_SLTI = 0x12U;
    static constexpr CData/*5:0*/ INSTR_SLTIU = 0x13U;
    static constexpr CData/*5:0*/ INSTR_LB = 0x14U;
    static constexpr CData/*5:0*/ INSTR_LH = 0x15U;
    static constexpr CData/*5:0*/ INSTR_LW = 0x16U;
    static constexpr CData/*5:0*/ INSTR_LBU = 0x17U;
    static constexpr CData/*5:0*/ INSTR_LHU = 0x18U;
    static constexpr CData/*5:0*/ INSTR_SB = 0x19U;
    static constexpr CData/*5:0*/ INSTR_SH = 0x1aU;
    static constexpr CData/*5:0*/ INSTR_SW = 0x1bU;
    static constexpr CData/*5:0*/ INSTR_BEQ = 0x1cU;
    static constexpr CData/*5:0*/ INSTR_BNE = 0x1dU;
    static constexpr CData/*5:0*/ INSTR_BLT = 0x1eU;
    static constexpr CData/*5:0*/ INSTR_BGE = 0x1fU;
    static constexpr CData/*5:0*/ INSTR_BLTU = 0x20U;
    static constexpr CData/*5:0*/ INSTR_BGEU = 0x21U;
    static constexpr CData/*5:0*/ INSTR_JAL = 0x22U;
    static constexpr CData/*5:0*/ INSTR_JALR = 0x23U;
    static constexpr CData/*5:0*/ INSTR_LUI = 0x24U;
    static constexpr CData/*5:0*/ INSTR_AUIPC = 0x25U;
    static constexpr CData/*5:0*/ INSTR_FENCE_I = 0x26U;
    static constexpr CData/*5:0*/ INSTR_CSRRW = 0x27U;
    static constexpr CData/*5:0*/ INSTR_CSRRS = 0x28U;
    static constexpr CData/*5:0*/ INSTR_CSRRC = 0x29U;
    static constexpr CData/*5:0*/ INSTR_CSRRWI = 0x2aU;
    static constexpr CData/*5:0*/ INSTR_CSRRSI = 0x2bU;
    static constexpr CData/*5:0*/ INSTR_CSRRCI = 0x2cU;
    static constexpr CData/*5:0*/ INSTR_MRET = 0x2dU;
    static constexpr CData/*5:0*/ INSTR_ECALL = 0x2eU;
    static constexpr CData/*5:0*/ INSTR_EBREAK = 0x2fU;
    static constexpr CData/*5:0*/ INSTR_INVALID = 0U;

    // CONSTRUCTORS
    Vtop___024unit(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit();
    VL_UNCOPYABLE(Vtop___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
