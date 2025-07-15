// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop___024unit                 TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope___024unit;
    VerilatedScope __Vscope_top;
    VerilatedScope __Vscope_top__cpu_inst;
    VerilatedScope __Vscope_top__cpu_inst__csr_file_inst;
    VerilatedScope __Vscope_top__cpu_inst__decoder_inst0;
    VerilatedScope __Vscope_top__cpu_inst__ex_mem_inst0;
    VerilatedScope __Vscope_top__cpu_inst__ex_unit_inst0;
    VerilatedScope __Vscope_top__cpu_inst__ex_unit_inst0__alu_inst;
    VerilatedScope __Vscope_top__cpu_inst__ex_unit_inst0__csr_exec_inst;
    VerilatedScope __Vscope_top__cpu_inst__forwarding_unit_inst0;
    VerilatedScope __Vscope_top__cpu_inst__id_ex_inst0;
    VerilatedScope __Vscope_top__cpu_inst__if_id_inst0;
    VerilatedScope __Vscope_top__cpu_inst__int_ctrl_inst;
    VerilatedScope __Vscope_top__cpu_inst__load_use_detector_inst0;
    VerilatedScope __Vscope_top__cpu_inst__mem_unit_inst0;
    VerilatedScope __Vscope_top__cpu_inst__mem_wb_inst0;
    VerilatedScope __Vscope_top__cpu_inst__pc_inst0;
    VerilatedScope __Vscope_top__cpu_inst__rf_inst0;
    VerilatedScope __Vscope_top__cpu_inst__store_load_detector_inst0;
    VerilatedScope __Vscope_top__cpu_inst__wb_inst0;
    VerilatedScope __Vscope_top__data_mem_inst;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__0__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__10__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__11__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__12__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__13__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__14__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__15__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__16__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__17__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__18__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__19__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__1__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__20__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__21__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__22__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__23__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__24__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__25__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__26__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__27__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__28__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__29__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__2__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__30__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__31__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__32__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__33__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__34__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__35__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__36__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__37__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__38__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__39__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__3__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__40__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__41__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__42__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__43__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__44__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__45__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__46__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__47__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__48__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__49__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__4__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__50__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__51__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__52__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__53__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__54__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__55__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__56__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__57__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__58__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__59__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__5__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__60__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__61__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__62__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__63__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__64__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__65__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__66__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__67__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__68__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__69__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__6__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__70__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__71__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__72__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__73__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__74__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__75__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__76__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__77__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__78__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__79__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__7__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__8__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__dump_regs__BRA__9__KET__;
    VerilatedScope __Vscope_top__data_mem_inst__unnamedblk1;
    VerilatedScope __Vscope_top__instr_mem_inst;
    VerilatedScope __Vscope_top__instr_mem_inst__unnamedblk1;
    VerilatedScope __Vscope_top__instr_mem_inst__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_top__instr_mem_inst__unnamedblk1__unnamedblk3;
    VerilatedScope __Vscope_top__timer_inst;
    VerilatedScope __Vscope_top__uart_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
