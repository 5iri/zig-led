// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT____Vcellinp__timer_inst__read_enable;
    top__DOT____Vcellinp__timer_inst__read_enable = 0;
    CData/*0:0*/ top__DOT____Vcellinp__uart_inst__read_enable;
    top__DOT____Vcellinp__uart_inst__read_enable = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6;
    top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_haa41561a__0;
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_haa41561a__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_hd25a2548__0;
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_hd25a2548__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_h86d536b8__0;
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_h86d536b8__0 = 0;
    SData/*15:0*/ top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3;
    top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3 = 0;
    // Body
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mstatus 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mie 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mip 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mtvec 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mepc 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc;
    vlSelfRef.uart_tx = vlSelfRef.top__DOT__uart_inst__DOT__tx_out;
    vlSelfRef.top__DOT__uart_tx = vlSelfRef.top__DOT__uart_inst__DOT__tx_out;
    vlSelfRef.top__DOT__uart_inst__DOT__tx = vlSelfRef.top__DOT__uart_inst__DOT__tx_out;
    vlSelfRef.pc_debug = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__pc_debug = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__cpu_mem_write_addr = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_mem_read_addr = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_read_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_write_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_read_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_wr_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__read_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__wr_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__0__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__1__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [1U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__2__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [2U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__3__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [3U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__4__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [4U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__5__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [5U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__6__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [6U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__7__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [7U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__8__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [8U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__9__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [9U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__10__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xaU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__11__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xbU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__12__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xcU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__13__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xdU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__14__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xeU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__15__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xfU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__16__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x10U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__17__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x11U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__18__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x12U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__19__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x13U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__20__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x14U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__21__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x15U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__22__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x16U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__23__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x17U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__24__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x18U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__25__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x19U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__26__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1aU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__27__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1bU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__28__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1cU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__29__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1dU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__30__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1eU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__31__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1fU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__32__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x20U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__33__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x21U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__34__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x22U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__35__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x23U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__36__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x24U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__37__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x25U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__38__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x26U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__39__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x27U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__40__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x28U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__41__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x29U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__42__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2aU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__43__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2bU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__44__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2cU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__45__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2dU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__46__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2eU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__47__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2fU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__48__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x30U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__49__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x31U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__50__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x32U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__51__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x33U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__52__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x34U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__53__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x35U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__54__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x36U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__55__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x37U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__56__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x38U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__57__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x39U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__58__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3aU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__59__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3bU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__60__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3cU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__61__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3dU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__62__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3eU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__63__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3fU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__64__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x40U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__65__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x41U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__66__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x42U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__67__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x43U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__68__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x44U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__69__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x45U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__70__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x46U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__71__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x47U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__72__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x48U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__73__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x49U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__74__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4aU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__75__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4bU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__76__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4cU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__77__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4dU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__78__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4eU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__79__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4fU];
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__wr_en_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rs1_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rs2_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_jump_signal_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_signal_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_jump_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_addr_out;
    vlSelfRef.top__DOT__cpu_pc_out = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_exec_output_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_data_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_signal_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_signal_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_instr_id_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out;
    vlSelfRef.top__DOT__software_interrupt = vlSelfRef.software_interrupt;
    vlSelfRef.top__DOT__external_interrupt = vlSelfRef.external_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out;
    if ((0x19U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))) {
        vlSelfRef.top__DOT__cpu_write_byte_enable = 1U;
        vlSelfRef.top__DOT__cpu_mem_write_data = (0xffU 
                                                  & vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out);
    } else if ((0x1aU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))) {
        vlSelfRef.top__DOT__cpu_write_byte_enable = 
            ((1U & vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out)
              ? 0U : 3U);
        vlSelfRef.top__DOT__cpu_mem_write_data = (0xffffU 
                                                  & vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out);
    } else if ((0x1bU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))) {
        vlSelfRef.top__DOT__cpu_write_byte_enable = 
            ((0U == (3U & vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out))
              ? 0xfU : 0U);
        vlSelfRef.top__DOT__cpu_mem_write_data = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out;
    } else {
        vlSelfRef.top__DOT__cpu_write_byte_enable = 0U;
        vlSelfRef.top__DOT__cpu_mem_write_data = 0U;
    }
    vlSelfRef.top__DOT__timer_interrupt = (vlSelfRef.top__DOT__timer_inst__DOT__mtime 
                                           >= vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp);
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3 
        = (7U & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                 >> 0xcU));
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__uimm 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out;
    vlSelfRef.top__DOT__instr_to_cpu = ((0x20000U > 
                                         (vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc 
                                          >> 2U)) ? 
                                        vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_ram
                                        [(0x1ffffU 
                                          & (vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc 
                                             >> 2U))]
                                         : 0x13U);
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__is_store 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
           | ((0x1aU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
              | (0x1bU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out))));
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__addr_match 
        = (vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out 
           == vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_out);
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__is_load_in_ex 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
           | ((0x15U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
              | ((0x16U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                 | ((0x17U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                    | (0x18U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out))))));
    vlSelfRef.top__DOT__rst = vlSelfRef.rst;
    vlSelfRef.top__DOT__cpu_mem_write_en = ((0x19U 
                                             == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
                                            | ((0x1aU 
                                                == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
                                               | (0x1bU 
                                                  == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))));
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_wr_en 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_enable 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
           | ((0x28U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
              | ((0x29U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                 | ((0x2aU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                    | ((0x2bU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                       | (0x2cU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_out;
    vlSelfRef.top__DOT__cpu_load_type = ((0x14U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                          ? 0U : ((0x15U 
                                                   == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                                   ? 1U
                                                   : 
                                                  ((0x16U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                                    ? 2U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                                     ? 4U
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                                      ? 5U
                                                      : 7U)))));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr = (0xfffU 
                                                   & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_out);
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__opcode_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mie_global 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                 >> 3U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msie 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie 
                 >> 3U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtie 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie 
                 >> 7U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meie 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie 
                 >> 0xbU));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msip 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
                 >> 3U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtip 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
                 >> 7U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meip 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
                 >> 0xbU));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_wr_en_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__is_load_instr 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
           | ((0x15U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
              | ((0x16U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
                 | ((0x17U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
                    | (0x18U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
           | ((0x15U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
              | ((0x16U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
                 | ((0x17U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
                    | (0x18U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))))));
    vlSelfRef.top__DOT__data_mem_addr = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out 
        = (0x7fU & vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out);
    vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_addr 
        = vlSelfRef.top__DOT__cpu_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__prev_store_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__mem_data_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_data_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_signal_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_signal_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__prev_store_instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__instr_id_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__software_interrupt 
        = vlSelfRef.top__DOT__software_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__external_interrupt 
        = vlSelfRef.top__DOT__external_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__rs2_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__rs2_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__mem_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__load_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__instr_id_mem 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__load_instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out;
    vlSelfRef.top__DOT__data_mem_inst__DOT__write_byte_enable 
        = vlSelfRef.top__DOT__cpu_write_byte_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_write_byte_enable 
        = vlSelfRef.top__DOT__cpu_write_byte_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_write_byte_enable_out 
        = vlSelfRef.top__DOT__cpu_write_byte_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__write_byte_enable 
        = vlSelfRef.top__DOT__cpu_write_byte_enable;
    vlSelfRef.top__DOT__timer_inst__DOT__timer_interrupt 
        = vlSelfRef.top__DOT__timer_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__timer_interrupt 
        = vlSelfRef.top__DOT__timer_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pc 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__instr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out;
    vlSelfRef.top__DOT__data_mem_inst__DOT__wr_data 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__timer_inst__DOT__write_data 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__uart_inst__DOT__write_data 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_wr_data_out 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_wr_data_out 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__wr_data 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_instr_in 
        = vlSelfRef.top__DOT__instr_to_cpu;
    vlSelfRef.instr_debug = vlSelfRef.top__DOT__instr_to_cpu;
    vlSelfRef.top__DOT__instr_debug = vlSelfRef.top__DOT__instr_to_cpu;
    vlSelfRef.top__DOT__instr_mem_inst__DOT__instr 
        = vlSelfRef.top__DOT__instr_to_cpu;
    vlSelfRef.top__DOT__timer_inst__DOT__rst = vlSelfRef.top__DOT__rst;
    vlSelfRef.top__DOT__uart_inst__DOT__rst = vlSelfRef.top__DOT__rst;
    vlSelfRef.top__DOT__cpu_inst__DOT__rst = vlSelfRef.top__DOT__rst;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_mem_wr_en 
        = vlSelfRef.top__DOT__cpu_mem_write_en;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_wr_enable_out 
        = vlSelfRef.top__DOT__cpu_mem_write_en;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__wr_enable 
        = vlSelfRef.top__DOT__cpu_mem_write_en;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rd 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__wr_en 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_wr_en;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rd_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rd_valid_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_valid_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out;
    vlSelfRef.top__DOT__data_mem_inst__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__timer_inst__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__uart_inst__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__pc_input 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__read_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_read_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__imm 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out;
    vlSelfRef.top__DOT__instr_mem_inst__DOT__load_type 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__data_mem_inst__DOT__load_type 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_load_type 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_load_type_out 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__load_type 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_valid = 
        ((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
         | ((0x301U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
            | ((0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
               | ((0x305U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                  | ((0x340U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                     | ((0x341U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                        | ((0x342U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                           | ((0x343U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                              | ((0x344U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                                 | ((0xc00U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                                    | (0xc80U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))))))))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs2_valid_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__opcode 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs2_addr_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs1_valid_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_valid_out;
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_h86d536b8__0 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msip) 
           & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msie));
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_hd25a2548__0 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtip) 
           & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtie));
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_haa41561a__0 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meip) 
           & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meie));
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs1_addr_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__instr_id_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_enable = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_enable 
        = ((1U & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                  >> 5U)) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                        >> 4U))) && 
                              ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                    ? ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                                 >> 1U))) 
                                       && ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) 
                                           && (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out))))
                                    : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                        ? ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) 
                                           || (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out)))
                                        : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                            ? (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out))
                                            : (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out)))))
                                : ((1U & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                          >> 2U)) && 
                                   ((1U & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                           >> 1U)) 
                                    && (1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out)))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ex_mem_result 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__wr_en_wb 
        = vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_wr_en_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_addr_wb 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_valid_wb 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_valid_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_addr_mem 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_valid_mem 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__is_load_instr)
            ? vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_out
            : vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_out);
    vlSelfRef.top__DOT__cpu_mem_read_en = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_mem_rd_en 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_read_enable_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__read_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__is_load 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_hazard 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load) 
           & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__is_store) 
              & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__addr_match)));
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_b = 0U;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_valid_out) {
        if (((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out) 
               & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out))) 
              & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out))) 
             & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load)))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_b = 1U;
        } else if (((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out) 
                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_wr_en_out)) 
                     & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out))) 
                    & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out) 
                       == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out)))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_b = 2U;
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_a = 0U;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_valid_out) {
        if (((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out) 
               & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out))) 
              & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out))) 
             & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load)))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_a = 1U;
        } else if (((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out) 
                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_wr_en_out)) 
                     & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out))) 
                    & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out) 
                       == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out)))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_a = 2U;
        }
    }
    vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_addr_p2 
        = vlSelfRef.top__DOT__data_mem_addr;
    vlSelfRef.top__DOT__data_mem_inst__DOT__addr = 
        (vlSelfRef.top__DOT__data_mem_addr - (IData)(0x10000000U));
    vlSelfRef.top__DOT__timer_inst__DOT__addr = vlSelfRef.top__DOT__data_mem_addr;
    vlSelfRef.top__DOT__uart_inst__DOT__addr = vlSelfRef.top__DOT__data_mem_addr;
    vlSelfRef.top__DOT__instr_mem_access = (0x80000U 
                                            >= vlSelfRef.top__DOT__data_mem_addr);
    vlSelfRef.top__DOT__data_mem_inst__DOT__byte_data 
        = ((0x100000U > (vlSelfRef.top__DOT__data_mem_addr 
                         - (IData)(0x10000000U))) ? 
           vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
           [(0xfffffU & vlSelfRef.top__DOT__data_mem_addr)]
            : 0U);
    vlSelfRef.top__DOT__timer_inst__DOT__timer_valid 
        = ((0x2004000U == vlSelfRef.top__DOT__data_mem_addr) 
           | ((0x2004004U == vlSelfRef.top__DOT__data_mem_addr) 
              | ((0x200bff8U == vlSelfRef.top__DOT__data_mem_addr) 
                 | (0x200bffcU == vlSelfRef.top__DOT__data_mem_addr))));
    vlSelfRef.top__DOT__uart_inst__DOT__uart_valid 
        = ((0x20000000U == vlSelfRef.top__DOT__data_mem_addr) 
           | ((0x20000004U == vlSelfRef.top__DOT__data_mem_addr) 
              | ((0x20000008U == vlSelfRef.top__DOT__data_mem_addr) 
                 | (0x2000000cU == vlSelfRef.top__DOT__data_mem_addr))));
    vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr 
        = (vlSelfRef.top__DOT__data_mem_addr >> 2U);
    vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset 
        = (3U & vlSelfRef.top__DOT__data_mem_addr);
    vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
        = ((0x20000U > vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr)
            ? vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_ram
           [(0x1ffffU & vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr)]
            : 0U);
    if ((2U & (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data 
            = (0xffU & ((1U & (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))
                         ? (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                            >> 0x18U) : (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                                         >> 0x10U)));
        if ((2U & (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
            vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data 
                = (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                   >> 0x10U);
        }
    } else {
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data 
            = (0xffU & ((1U & (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))
                         ? (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                            >> 8U) : vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data));
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data 
            = (0xffffU & vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data);
    }
    if (((3U == (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset)) 
         & ((1U == (IData)(vlSelfRef.top__DOT__cpu_load_type)) 
            | (5U == (IData)(vlSelfRef.top__DOT__cpu_load_type))))) {
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__next_word_data 
            = ((0x20000U > ((IData)(1U) + vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr))
                ? vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_ram
               [(0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr))]
                : 0U);
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data 
            = ((0xff00U & (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__next_word_data 
                           << 8U)) | (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                                      >> 0x18U));
    }
    if (((0U != (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset)) 
         & (2U == (IData)(vlSelfRef.top__DOT__cpu_load_type)))) {
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk3__DOT__next_word_data 
            = ((0x20000U > ((IData)(1U) + vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr))
                ? vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_ram
               [(0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr))]
                : 0U);
        if ((1U == (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
            vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                = ((vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk3__DOT__next_word_data 
                    << 0x18U) | (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                                 >> 8U));
        } else if ((2U == (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
            vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                = ((vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk3__DOT__next_word_data 
                    << 0x10U) | (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                                 >> 0x10U));
        } else if ((3U == (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
            vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                = ((vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk3__DOT__next_word_data 
                    << 8U) | (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                              >> 0x18U));
        }
    }
    vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_p2 
        = ((4U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
            ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                         ? (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data)
                         : (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data)))
            : ((2U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                    ? 0U : vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data)
                : ((1U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                    ? (((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data))
                    : (((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data) 
                                          >> 7U)))) 
                        << 8U) | (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data)))));
    vlSelfRef.top__DOT__timer_access = ((0x2004000U 
                                         <= vlSelfRef.top__DOT__data_mem_addr) 
                                        & (0x200bfffU 
                                           >= vlSelfRef.top__DOT__data_mem_addr));
    vlSelfRef.top__DOT__data_mem_access = ((0x10000000U 
                                            <= vlSelfRef.top__DOT__data_mem_addr) 
                                           & (0x100fffffU 
                                              >= vlSelfRef.top__DOT__data_mem_addr));
    vlSelfRef.top__DOT__uart_access = ((0x20000000U 
                                        <= vlSelfRef.top__DOT__data_mem_addr) 
                                       & (0x20000fffU 
                                          >= vlSelfRef.top__DOT__data_mem_addr));
    top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3 
        = ((vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
            [(0xfffffU & ((IData)(1U) + vlSelfRef.top__DOT__data_mem_addr))] 
            << 8U) | vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
           [(0xfffffU & vlSelfRef.top__DOT__data_mem_addr)]);
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__opcode_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_u_instr 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
           | (0x37U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_j_instr 
        = (0x6fU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_i_instr 
        = ((3U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
           | ((0x13U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
              | (0x67U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out))));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_csr_instr 
        = (0x73U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_s_instr 
        = (0x23U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_b_instr 
        = (0x63U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
           | ((0x27U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
              | (0x53U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out))));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__software_interrupt 
        = vlSelfRef.top__DOT__cpu_inst__DOT__software_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__software_interrupt 
        = vlSelfRef.top__DOT__cpu_inst__DOT__software_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__external_interrupt 
        = vlSelfRef.top__DOT__cpu_inst__DOT__external_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__external_interrupt 
        = vlSelfRef.top__DOT__cpu_inst__DOT__external_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__timer_interrupt 
        = vlSelfRef.top__DOT__cpu_inst__DOT__timer_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__timer_interrupt 
        = vlSelfRef.top__DOT__cpu_inst__DOT__timer_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pc 
        = vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__rst 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rst;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__rst 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rst;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rst 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rst;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__rst 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rst;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__rst 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rst;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rst 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rst;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rst 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rst;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__clk 
        = vlSelfRef.top__DOT__cpu_inst__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__clk 
        = vlSelfRef.top__DOT__cpu_inst__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__clk 
        = vlSelfRef.top__DOT__cpu_inst__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__clk 
        = vlSelfRef.top__DOT__cpu_inst__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__clk 
        = vlSelfRef.top__DOT__cpu_inst__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__clk 
        = vlSelfRef.top__DOT__cpu_inst__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__clk 
        = vlSelfRef.top__DOT__cpu_inst__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__clk 
        = vlSelfRef.top__DOT__cpu_inst__DOT__clk;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__imm 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__imm;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_valid;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_valid;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending = 0U;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mie_global) {
        if (top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_haa41561a__0) {
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause = 0x8000000bU;
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending = 1U;
        } else if (top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_hd25a2548__0) {
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause = 0x80000007U;
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending = 1U;
        } else if (top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_h86d536b8__0) {
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause = 0x80000003U;
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending = 1U;
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rs1_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__instr_id;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__instr_id;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_write_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rd_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__store_load_hazard) {
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__store_load_hazard = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__store_load_hazard = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__forwarded_store_data 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out;
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__store_load_hazard = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__store_load_hazard = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__forwarded_store_data = 0U;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__forward_b = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_b;
    vlSelfRef.top__DOT__cpu_inst__DOT__forward_a = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_a;
    vlSelfRef.top__DOT__timer_valid = vlSelfRef.top__DOT__timer_inst__DOT__timer_valid;
    vlSelfRef.top__DOT__uart_valid = vlSelfRef.top__DOT__uart_inst__DOT__uart_valid;
    vlSelfRef.top__DOT__instr_read_data = vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_p2;
    vlSelfRef.top__DOT____Vcellinp__timer_inst__write_enable 
        = ((IData)(vlSelfRef.top__DOT__cpu_mem_write_en) 
           & (IData)(vlSelfRef.top__DOT__timer_access));
    top__DOT____Vcellinp__timer_inst__read_enable = 
        ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load) 
         & (IData)(vlSelfRef.top__DOT__timer_access));
    vlSelfRef.top__DOT____Vcellinp__data_mem_inst__wr_en 
        = ((IData)(vlSelfRef.top__DOT__cpu_mem_write_en) 
           & (IData)(vlSelfRef.top__DOT__data_mem_access));
    vlSelfRef.top__DOT____Vcellinp__data_mem_inst__rd_en 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load) 
           & (IData)(vlSelfRef.top__DOT__data_mem_access));
    vlSelfRef.top__DOT____Vcellinp__uart_inst__write_enable 
        = ((IData)(vlSelfRef.top__DOT__cpu_mem_write_en) 
           & (IData)(vlSelfRef.top__DOT__uart_access));
    top__DOT____Vcellinp__uart_inst__read_enable = 
        ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load) 
         & (IData)(vlSelfRef.top__DOT__uart_access));
    vlSelfRef.top__DOT__data_mem_inst__DOT__halfword_data 
        = ((0xfffffU > (vlSelfRef.top__DOT__data_mem_addr 
                        - (IData)(0x10000000U))) ? (IData)(top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3)
            : 0U);
    vlSelfRef.top__DOT__data_mem_inst__DOT__word_data 
        = ((0xffffdU > (vlSelfRef.top__DOT__data_mem_addr 
                        - (IData)(0x10000000U))) ? 
           ((vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
             [(0xfffffU & ((IData)(3U) + vlSelfRef.top__DOT__data_mem_addr))] 
             << 0x18U) | ((vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
                           [(0xfffffU & ((IData)(2U) 
                                         + vlSelfRef.top__DOT__data_mem_addr))] 
                           << 0x10U) | (IData)(top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3)))
            : 0U);
    top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_i_instr) 
           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_csr_instr));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_i_instr)
            ? (((- (IData)((vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                            >> 0x1fU))) << 0xbU) | 
               (0x7ffU & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                          >> 0x14U))) : ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_s_instr)
                                          ? (((- (IData)(
                                                         (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                          >> 0x1fU))) 
                                              << 0xbU) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                      >> 7U))))
                                          : ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_b_instr)
                                              ? (((- (IData)(
                                                             (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                             >> 7U)))))
                                              : ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_u_instr)
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_j_instr)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | (((0xff000U 
                                                        & vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out) 
                                                       | (0x800U 
                                                          & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                             >> 9U))) 
                                                      | (0x7feU 
                                                         & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                            >> 0x14U))))
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_csr_instr)
                                                    ? 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out, 0x14U)
                                                    : 0U))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr)
            ? (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
               >> 0x19U) : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr) 
           | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_i_instr) 
              | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_s_instr) 
                 | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_b_instr) 
                    | ((~ (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                           >> 0xeU)) & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_csr_instr))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr) 
           | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_s_instr) 
              | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_b_instr)));
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__read_data 
        = (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_enable) 
            & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_valid))
            ? (((((((((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                      | (0x301U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                     | (0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                    | (0x305U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                   | (0x340U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                  | (0x341U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                 | (0x342U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                | (0x343U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)))
                ? ((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                    ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus
                    : ((0x301U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                        ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__misa
                        : ((0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                            ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie
                            : ((0x305U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                                ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec
                                : ((0x340U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                                    ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mscratch
                                    : ((0x341U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                                        ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc
                                        : ((0x342U 
                                            == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                                            ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mcause
                                            : vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtval)))))))
                : ((0x344U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                    ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip
                    : ((0xc00U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                        ? (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__cycle_counter)
                        : ((0xc80U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                            ? (IData)((vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__cycle_counter 
                                       >> 0x20U)) : 0U))))
            : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_cause 
        = vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause;
    vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending 
        = vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_wb_result 
        = vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__store_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarded_store_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__forwarded_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarded_store_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__forward_b 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forward_b;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_b))
            ? vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_value_out
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_b))
                ? vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_b))
                    ? vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_value_out
                    : vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_value_out)));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__forward_a 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forward_a;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_a))
            ? vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_value_out
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_a))
                ? vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_a))
                    ? vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_value_out
                    : vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_value_out)));
    vlSelfRef.top__DOT__timer_inst__DOT__write_enable 
        = vlSelfRef.top__DOT____Vcellinp__timer_inst__write_enable;
    vlSelfRef.top__DOT__timer_inst__DOT__read_enable 
        = top__DOT____Vcellinp__timer_inst__read_enable;
    vlSelfRef.top__DOT__timer_inst__DOT__read_data = 0U;
    if (((IData)(top__DOT____Vcellinp__timer_inst__read_enable) 
         & (IData)(vlSelfRef.top__DOT__timer_inst__DOT__timer_valid))) {
        vlSelfRef.top__DOT__timer_inst__DOT__read_data 
            = ((0x2004000U == vlSelfRef.top__DOT__data_mem_addr)
                ? (IData)(vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp)
                : ((0x2004004U == vlSelfRef.top__DOT__data_mem_addr)
                    ? (IData)((vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp 
                               >> 0x20U)) : ((0x200bff8U 
                                              == vlSelfRef.top__DOT__data_mem_addr)
                                              ? (IData)(vlSelfRef.top__DOT__timer_inst__DOT__mtime)
                                              : ((0x200bffcU 
                                                  == vlSelfRef.top__DOT__data_mem_addr)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__timer_inst__DOT__mtime 
                                                             >> 0x20U))
                                                  : 0U))));
    }
    vlSelfRef.top__DOT__data_mem_inst__DOT__wr_en = vlSelfRef.top__DOT____Vcellinp__data_mem_inst__wr_en;
    vlSelfRef.top__DOT__data_mem_inst__DOT__rd_en = vlSelfRef.top__DOT____Vcellinp__data_mem_inst__rd_en;
    vlSelfRef.top__DOT__uart_inst__DOT__write_enable 
        = vlSelfRef.top__DOT____Vcellinp__uart_inst__write_enable;
    vlSelfRef.top__DOT__uart_inst__DOT__read_enable 
        = top__DOT____Vcellinp__uart_inst__read_enable;
    vlSelfRef.top__DOT__uart_inst__DOT__read_data = 
        (((IData)(top__DOT____Vcellinp__uart_inst__read_enable) 
          & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__uart_valid))
          ? ((0x20000000U == vlSelfRef.top__DOT__data_mem_addr)
              ? (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_data)
              : ((0x20000004U == vlSelfRef.top__DOT__data_mem_addr)
                  ? (((IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_busy) 
                      << 2U) | (((IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_empty) 
                                 << 1U) | (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_full)))
                  : ((0x20000008U == vlSelfRef.top__DOT__data_mem_addr)
                      ? (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_enable)
                      : ((0x2000000cU == vlSelfRef.top__DOT__data_mem_addr)
                          ? (IData)(vlSelfRef.top__DOT__uart_inst__DOT__baud_div)
                          : 0U)))) : 0U);
    vlSelfRef.top__DOT__data_mem_read_data = ((IData)(vlSelfRef.top__DOT____Vcellinp__data_mem_inst__rd_en)
                                               ? ((0U 
                                                   == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                   ? 
                                                  (((- (IData)(
                                                               ((0x100000U 
                                                                 > 
                                                                 (vlSelfRef.top__DOT__data_mem_addr 
                                                                  - (IData)(0x10000000U))) 
                                                                & (vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
                                                                   [
                                                                   (0xfffffU 
                                                                    & vlSelfRef.top__DOT__data_mem_addr)] 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.top__DOT__data_mem_inst__DOT__byte_data))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                    ? (IData)(vlSelfRef.top__DOT__data_mem_inst__DOT__byte_data)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                     ? 
                                                    (((- (IData)(
                                                                 ((0xfffffU 
                                                                   > 
                                                                   (vlSelfRef.top__DOT__data_mem_addr 
                                                                    - (IData)(0x10000000U))) 
                                                                  & (vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
                                                                     [
                                                                     (0xfffffU 
                                                                      & ((IData)(1U) 
                                                                         + vlSelfRef.top__DOT__data_mem_addr))] 
                                                                     >> 7U)))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.top__DOT__data_mem_inst__DOT__halfword_data))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                      ? (IData)(vlSelfRef.top__DOT__data_mem_inst__DOT__halfword_data)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                       ? vlSelfRef.top__DOT__data_mem_inst__DOT__word_data
                                                       : 0U)))))
                                               : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_valid_out 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr) 
           | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_u_instr) 
              | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_j_instr) 
                 | (IData)(top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6))));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__imm 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__instr_id 
        = ((0x40U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                    ? ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                        ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                 ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                              ? ((0x30200073U 
                                                  == vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out)
                                                  ? 0x2dU
                                                  : 
                                                 ((0x73U 
                                                   == vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out)
                                                   ? 0x2eU
                                                   : 
                                                  ((0x100073U 
                                                    == vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out)
                                                    ? 0x2fU
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x2cU
                                                       : 0x2bU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x2aU
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x29U
                                                       : 0x28U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x27U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U))) : 
                   ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                     ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                         ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                             ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                 ? 0x22U : 0U) : 0U)
                         : 0U) : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                   ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                       ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                           ? 0x23U : 0U)
                                       : 0U) : ((2U 
                                                 & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 0x21U
                                                     : 0x20U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 0x1fU
                                                     : 0x1eU))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 0x1dU
                                                     : 0x1cU)))
                                                  : 0U)
                                                 : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 0x24U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 
                                                  (((((((((0U 
                                                           == 
                                                           (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                             << 3U) 
                                                            | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))) 
                                                          | (0x100U 
                                                             == 
                                                             (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                               << 3U) 
                                                              | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                         | (4U 
                                                            == 
                                                            (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                              << 3U) 
                                                             | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                        | (6U 
                                                           == 
                                                           (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                             << 3U) 
                                                            | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                       | (7U 
                                                          == 
                                                          (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                            << 3U) 
                                                           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                      | (1U 
                                                         == 
                                                         (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                           << 3U) 
                                                          | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                     | (5U 
                                                        == 
                                                        (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                          << 3U) 
                                                         | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                    | (0x105U 
                                                       == 
                                                       (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                         << 3U) 
                                                        | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                        << 3U) 
                                                       | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                      ? 2U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                         << 3U) 
                                                        | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                       ? 3U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                          << 3U) 
                                                         | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                        ? 4U
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                           << 3U) 
                                                          | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                         ? 5U
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                            << 3U) 
                                                           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                          ? 6U
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                             << 3U) 
                                                            | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                           ? 7U
                                                           : 8U)))))))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                     ? 9U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                        << 3U) 
                                                       | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                      ? 0xaU
                                                      : 0U)))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0x19U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x1aU
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                        ? 0x1bU
                                                        : 0U)))
                                                     : 0U)
                                                    : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 0x25U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0xeU
                                                      : 0xdU)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out 
                                                           >> 5U)))
                                                       ? 0x10U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out 
                                                            >> 5U)))
                                                        ? 0x11U
                                                        : 0U))
                                                      : 0xcU))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0x13U
                                                      : 0x12U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out 
                                                           >> 5U)))
                                                       ? 0xfU
                                                       : 0U)
                                                      : 0xbU)))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                  ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                      ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                              ? ((1U 
                                                  == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                  ? 0x26U
                                                  : 0U)
                                              : 0U)
                                          : 0U) : 0U)
                                  : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                      ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0x18U
                                                      : 0x17U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0U
                                                      : 0x16U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0x15U
                                                      : 0x14U)))
                                                   : 0U)
                                               : 0U))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs1_valid_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_valid_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs1_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out) {
        vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs2_valid_id = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_valid = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_valid_in = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs2_valid = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out 
            = (0x1fU & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                        >> 0x14U));
        vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_value 
            = ((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in)) 
                & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_wr_en))
                ? vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in
                : vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file
               [vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out]);
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs2_valid_id = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_valid = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_valid_in = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs2_valid = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_value = 0U;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out 
        = (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out) 
            | (IData)(top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6))
            ? (0x1fU & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                        >> 0xfU)) : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_cause_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_cause;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_cause 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_cause;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending) {
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_pending = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_pending = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mret_instruction = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ecall_exception = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ebreak_exception = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_taken = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__rs2 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs2_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rs1_value 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__rs1 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs1_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_taken = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
            = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_pending = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_pending = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mret_instruction = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ecall_exception = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ebreak_exception = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_taken = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__rs2 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs2_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rs1_value 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__rs1 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs1_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 0U;
        if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                    if ((0x2dU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                            = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc;
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                    } else if ((0x2eU 
                                                == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                            = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec;
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                    } else if ((0x2fU 
                                                == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                            = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec;
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                    = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                       + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                = (0xfffffffeU & (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                                  + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out));
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                                if (
                                                    (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                                     >= vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                                        = 
                                                        (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                                         + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                                }
                                            } else if (
                                                       (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                                        < vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                                    = 
                                                    (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                                     + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                            if ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                            if (VL_GTES_III(32, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                                    = 
                                                    (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                                     + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                            }
                                        } else if (
                                                   VL_LTS_III(32, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                                = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                                   + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        if ((vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                             != vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                                = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                                   + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                        }
                                    } else if ((vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                                == vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                            = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                               + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                             >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                if ((0x26U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__timer_read_data = vlSelfRef.top__DOT__timer_inst__DOT__read_data;
    vlSelfRef.top__DOT__uart_read_data = vlSelfRef.top__DOT__uart_inst__DOT__read_data;
    vlSelfRef.top__DOT__data_mem_inst__DOT__rd_data_out 
        = vlSelfRef.top__DOT__data_mem_read_data;
    vlSelfRef.top__DOT__mem_read_data = ((IData)(vlSelfRef.top__DOT__timer_access)
                                          ? vlSelfRef.top__DOT__timer_inst__DOT__read_data
                                          : ((IData)(vlSelfRef.top__DOT__data_mem_access)
                                              ? vlSelfRef.top__DOT__data_mem_read_data
                                              : ((IData)(vlSelfRef.top__DOT__uart_access)
                                                  ? vlSelfRef.top__DOT__uart_inst__DOT__read_data
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__instr_mem_access)
                                                   ? vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_p2
                                                   : 0U))));
    if (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_valid_out) {
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_valid_in = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rd_valid = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_out 
            = (0x1fU & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                        >> 7U));
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_valid_in = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rd_valid = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_out = 0U;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_instr_id_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__instr_id;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs2_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs2 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs1_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs1 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1_value 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out)
            ? ((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in)) 
                & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_wr_en))
                ? vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in
                : vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file
               [vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out])
            : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__stall_pipeline = 0U;
    if ((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__is_load_in_ex) 
          & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out)) 
         & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out)))) {
        if ((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out) 
              & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out))) 
             | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out) 
                & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out) 
                   == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out))))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__stall_pipeline = 1U;
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_read_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data = 0U;
    if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__ALUoutput = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data 
            = ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                ? 0U : ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                         ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                             ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                 ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                          ? 0U : (vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
                                                  & (~ vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__uimm))))
                             : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                 ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                     ? (vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
                                        | vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__uimm)
                                     : vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__uimm)
                                 : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                     ? (vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
                                        & (~ vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value))
                                     : (vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
                                        | vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value))))
                         : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                             ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                 ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                     ? vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value
                                     : 0U) : 0U) : 0U)));
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__ALUoutput 
            = ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                ? ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                    ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                             ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                      ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                          ? (- (IData)(
                                                       (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                                        < vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out)))
                                          : (- (IData)(
                                                       VL_LTS_III(32, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))))
                                      : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, 
                                                           (0x1fU 
                                                            & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))
                                          : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                             >> (0x1fU 
                                                 & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))))))
                : ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   << (0x1fU & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))
                            : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   | vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out)
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   ^ vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out)
                                : (- (IData)((vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                              < vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value))))
                            : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (- (IData)(VL_LTS_III(32, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)))
                                : VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, 
                                                 (0x1fU 
                                                  & vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   >> (0x1fU & vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value))
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   << (0x1fU & vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)))
                            : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   & vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   | vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   ^ vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   - vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value))
                            : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   + vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)
                                : 0U)))));
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data = 0U;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rd_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending)))) {
        if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                    if ((0x2dU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mret_instruction = 1U;
                                    }
                                    if ((0x2dU != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        if ((0x2eU 
                                             == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ecall_exception = 1U;
                                        }
                                        if ((0x2eU 
                                             != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                            if ((0x2fU 
                                                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ebreak_exception = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.top__DOT__cpu_inst__DOT__mret_instruction 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mret_instruction;
        vlSelfRef.top__DOT__cpu_inst__DOT__ecall_exception 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ecall_exception;
        vlSelfRef.top__DOT__cpu_inst__DOT__ebreak_exception 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ebreak_exception;
        vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_taken 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_taken;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_in 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs2_value_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_value_in 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs1_value_out;
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr 
                                        = (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                           + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                 >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr 
                                    = (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                       + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__mret_instruction 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mret_instruction;
        vlSelfRef.top__DOT__cpu_inst__DOT__ecall_exception 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ecall_exception;
        vlSelfRef.top__DOT__cpu_inst__DOT__ebreak_exception 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ebreak_exception;
        vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_taken 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_taken;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_in 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs2_value_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_value_in 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs1_value_out;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_mem_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__execution_flush 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__pc_input 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_jump 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal) {
        vlSelfRef.top__DOT__cpu_inst__DOT__branch_flush = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_signal_out = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_j_signal = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__if_id_inst0__instruction_in = 0x13U;
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__branch_flush = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_signal_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_j_signal = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__if_id_inst0__instruction_in 
            = vlSelfRef.top__DOT__instr_to_cpu;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__pipeline_flush 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline) 
           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal));
    vlSelfRef.top__DOT__cpu_inst__DOT__module_read_data_in 
        = vlSelfRef.top__DOT__mem_read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rd 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__stall_pipeline 
        = vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__stall_pipeline;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_read_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_write_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_rd_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rd_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mret_instruction 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mret_instruction;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__ecall_exception 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ecall_exception;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__ebreak_exception 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ebreak_exception;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_taken 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_taken;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_taken 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_taken;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__jump 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_jump;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_signal_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_signal_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__j_signal 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_j_signal;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__if_id_inst0__instruction_in;
    vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst0__stall 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__pipeline_flush) 
           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__stall_pipeline));
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__module_read_data_in;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__stall 
        = vlSelfRef.top__DOT__cpu_inst__DOT__stall_pipeline;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__stall 
        = vlSelfRef.top__DOT__cpu_inst__DOT__stall_pipeline;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__write_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending)))) {
        if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                    if ((0x2dU != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        if ((0x2eU 
                                             != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                            if ((0x2fU 
                                                 != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                                    = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_rd_value;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                    = ((IData)(4U) 
                                       + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out);
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                = ((IData)(4U) + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out);
                        }
                    }
                }
            }
        } else if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                    = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__ALUoutput;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                   + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__ALUoutput;
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__stall 
        = vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst0__stall;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_exec_output_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__exec_output_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_exec_output_out;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6;
    top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_haa41561a__0;
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_haa41561a__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_hd25a2548__0;
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_hd25a2548__0 = 0;
    CData/*0:0*/ top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_h86d536b8__0;
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_h86d536b8__0 = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus;
    __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip;
    __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip = 0;
    QData/*63:0*/ __Vdly__top__DOT__timer_inst__DOT__mtime;
    __Vdly__top__DOT__timer_inst__DOT__mtime = 0;
    CData/*0:0*/ __Vdly__top__DOT__uart_inst__DOT__tx_start_pending;
    __Vdly__top__DOT__uart_inst__DOT__tx_start_pending = 0;
    CData/*0:0*/ __Vdly__top__DOT__uart_inst__DOT__tx_busy;
    __Vdly__top__DOT__uart_inst__DOT__tx_busy = 0;
    CData/*3:0*/ __Vdly__top__DOT__uart_inst__DOT__tx_state;
    __Vdly__top__DOT__uart_inst__DOT__tx_state = 0;
    CData/*3:0*/ __Vdly__top__DOT__uart_inst__DOT__tx_bit_count;
    __Vdly__top__DOT__uart_inst__DOT__tx_bit_count = 0;
    SData/*15:0*/ __Vdly__top__DOT__uart_inst__DOT__baud_counter;
    __Vdly__top__DOT__uart_inst__DOT__baud_counter = 0;
    // Body
    __Vdly__top__DOT__timer_inst__DOT__mtime = vlSelfRef.top__DOT__timer_inst__DOT__mtime;
    __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus;
    __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip;
    __Vdly__top__DOT__uart_inst__DOT__tx_state = vlSelfRef.top__DOT__uart_inst__DOT__tx_state;
    __Vdly__top__DOT__uart_inst__DOT__tx_bit_count 
        = vlSelfRef.top__DOT__uart_inst__DOT__tx_bit_count;
    __Vdly__top__DOT__uart_inst__DOT__baud_counter 
        = vlSelfRef.top__DOT__uart_inst__DOT__baud_counter;
    __Vdly__top__DOT__uart_inst__DOT__tx_start_pending 
        = vlSelfRef.top__DOT__uart_inst__DOT__tx_start_pending;
    __Vdly__top__DOT__uart_inst__DOT__tx_busy = vlSelfRef.top__DOT__uart_inst__DOT__tx_busy;
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__cycle_counter = 0ULL;
        __Vdly__top__DOT__timer_inst__DOT__mtime = 0ULL;
        __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus = 0x1800U;
        __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_value_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__pc_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_value_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_value_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__pc_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__pc_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__misa = 0x40000100U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_value_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_value_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mscratch = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtval = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mcause = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__exec_output_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out = 0U;
        vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp = 0xffffffffffffffffULL;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__opcode_out = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie = 0U;
        __Vdly__top__DOT__uart_inst__DOT__tx_state = 0U;
        vlSelfRef.top__DOT__uart_inst__DOT__tx_out = 1U;
        __Vdly__top__DOT__uart_inst__DOT__tx_bit_count = 0U;
        __Vdly__top__DOT__uart_inst__DOT__baud_counter = 1U;
        vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_empty = 1U;
        vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_full = 0U;
        vlSelfRef.top__DOT__uart_inst__DOT__baud_reload = 1U;
        vlSelfRef.top__DOT__uart_inst__DOT__baud_div = 0x1b2U;
        vlSelfRef.top__DOT__uart_inst__DOT__tx_data = 0U;
        __Vdly__top__DOT__uart_inst__DOT__tx_start_pending = 0U;
        __Vdly__top__DOT__uart_inst__DOT__tx_busy = 0U;
        vlSelfRef.top__DOT__uart_inst__DOT__tx_enable = 1U;
    } else {
        if (vlSelfRef.top__DOT__cpu_inst__DOT__stall_pipeline) {
            vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_out;
            vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out;
        } else {
            vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_out;
            vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__if_id_inst0__instruction_in;
        }
        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__cycle_counter 
            = (1ULL + vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__cycle_counter);
        __Vdly__top__DOT__timer_inst__DOT__mtime = 
            (1ULL + vlSelfRef.top__DOT__timer_inst__DOT__mtime);
        if (((IData)(vlSelfRef.top__DOT____Vcellinp__timer_inst__write_enable) 
             & (IData)(vlSelfRef.top__DOT__timer_inst__DOT__timer_valid))) {
            if ((0x2004000U != vlSelfRef.top__DOT__data_mem_addr)) {
                if ((0x2004004U != vlSelfRef.top__DOT__data_mem_addr)) {
                    if ((0x200bff8U == vlSelfRef.top__DOT__data_mem_addr)) {
                        __Vdly__top__DOT__timer_inst__DOT__mtime 
                            = ((0xffffffff00000000ULL 
                                & __Vdly__top__DOT__timer_inst__DOT__mtime) 
                               | (IData)((IData)(vlSelfRef.top__DOT__cpu_mem_write_data)));
                    } else if ((0x200bffcU == vlSelfRef.top__DOT__data_mem_addr)) {
                        __Vdly__top__DOT__timer_inst__DOT__mtime 
                            = ((0xffffffffULL & __Vdly__top__DOT__timer_inst__DOT__mtime) 
                               | ((QData)((IData)(vlSelfRef.top__DOT__cpu_mem_write_data)) 
                                  << 0x20U));
                    }
                }
            }
            if ((0x2004000U == vlSelfRef.top__DOT__data_mem_addr)) {
                vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp 
                    = ((0xffffffff00000000ULL & vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp) 
                       | (IData)((IData)(vlSelfRef.top__DOT__cpu_mem_write_data)));
            } else if ((0x2004004U == vlSelfRef.top__DOT__data_mem_addr)) {
                vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp 
                    = ((0xffffffffULL & vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp) 
                       | ((QData)((IData)(vlSelfRef.top__DOT__cpu_mem_write_data)) 
                          << 0x20U));
            }
        }
        if (vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_taken) {
            __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                = ((0xffffff7fU & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus) 
                   | (0x80U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                               << 4U)));
            __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                = (0xfffffff7U & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus);
            vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mcause 
                = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_cause;
            vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc 
                = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pc;
        } else {
            if (vlSelfRef.top__DOT__cpu_inst__DOT__mret_instruction) {
                __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                    = ((0xfffffff7U & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus) 
                       | (8U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                                >> 4U)));
                __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                    = (0x80U | __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus);
            } else if (vlSelfRef.top__DOT__cpu_inst__DOT__ecall_exception) {
                __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                    = ((0xffffff7fU & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus) 
                       | (0x80U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                                   << 4U)));
                __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                    = (0xfffffff7U & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus);
            } else if (vlSelfRef.top__DOT__cpu_inst__DOT__ebreak_exception) {
                __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                    = ((0xffffff7fU & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus) 
                       | (0x80U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                                   << 4U)));
                __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                    = (0xfffffff7U & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus);
            } else if (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_enable) 
                        & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_valid))) {
                if (((((((((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                           | (0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                          | (0x305U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                         | (0x340U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                        | (0x341U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                       | (0x342U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                      | (0x343U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                     | (0x344U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)))) {
                    if ((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                        __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                            = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data;
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mret_instruction)))) {
                if (vlSelfRef.top__DOT__cpu_inst__DOT__ecall_exception) {
                    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mcause = 0xbU;
                    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc 
                        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pc;
                } else if (vlSelfRef.top__DOT__cpu_inst__DOT__ebreak_exception) {
                    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mcause = 3U;
                    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc 
                        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pc;
                } else if (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_enable) 
                            & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_valid))) {
                    if (((((((((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                               | (0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                              | (0x305U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                             | (0x340U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                            | (0x341U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                           | (0x342U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                          | (0x343U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                         | (0x344U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)))) {
                        if ((0x300U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                            if ((0x304U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                if ((0x305U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                    if ((0x340U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                        if ((0x341U 
                                             != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                            if ((0x342U 
                                                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                                vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mcause 
                                                    = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data;
                                            }
                                        }
                                        if ((0x341U 
                                             == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                            vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc 
                                                = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
            = ((0xfffffff7U & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip) 
               | ((IData)(vlSelfRef.software_interrupt) 
                  << 3U));
        __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
            = ((0xffffff7fU & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip) 
               | ((IData)(vlSelfRef.top__DOT__timer_interrupt) 
                  << 7U));
        __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
            = ((0xfffff7ffU & __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip) 
               | ((IData)(vlSelfRef.external_interrupt) 
                  << 0xbU));
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_taken)))) {
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mret_instruction)))) {
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ecall_exception)))) {
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ebreak_exception)))) {
                        if (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_enable) 
                             & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_valid))) {
                            if (((((((((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                                       | (0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                                      | (0x305U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                                     | (0x340U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                                    | (0x341U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                                   | (0x342U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                                  | (0x343U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                                 | (0x344U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)))) {
                                if ((0x300U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                    if ((0x304U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                        if ((0x305U 
                                             != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                            if ((0x340U 
                                                 != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                                if (
                                                    (0x341U 
                                                     != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                                    if (
                                                        (0x342U 
                                                         != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                                        if (
                                                            (0x343U 
                                                             != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                                            __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
                                                                = 
                                                                ((0x888U 
                                                                  & vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip) 
                                                                 | (0x777U 
                                                                    & vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data));
                                                        }
                                                        if (
                                                            (0x343U 
                                                             == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                                            vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtval 
                                                                = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data;
                                                        }
                                                    }
                                                }
                                            }
                                            if ((0x340U 
                                                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                                vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mscratch 
                                                    = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data;
                                            }
                                        }
                                        if ((0x305U 
                                             == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                            vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec 
                                                = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data;
                                        }
                                    }
                                    if ((0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) {
                                        vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie 
                                            = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_value_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__pc_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_pc_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs1_value_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__pc_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs2_value_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__pc_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_pc_out;
        if (vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst0__stall) {
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_addr_out = 0U;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_value_out = 0U;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_value_out = 0U;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_addr_out = 0U;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_out = 0U;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_out = 0U;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out = 0U;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__opcode_out = 0U;
        } else {
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_addr_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_out;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_value_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs2_value_out;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_value_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs1_value_out;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_addr_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_instr_id_out;
            vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__opcode_out 
                = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out;
        }
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__exec_output_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_exec_output_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_out 
            = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__store_load_hazard)
                ? vlSelfRef.top__DOT__cpu_inst__DOT__forwarded_store_data
                : vlSelfRef.top__DOT__mem_read_data);
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_mem_addr_out;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out;
        if (vlSelfRef.top__DOT__uart_inst__DOT__baud_reload) {
            __Vdly__top__DOT__uart_inst__DOT__baud_counter 
                = vlSelfRef.top__DOT__uart_inst__DOT__baud_div;
        } else if ((0U < (IData)(vlSelfRef.top__DOT__uart_inst__DOT__baud_counter))) {
            __Vdly__top__DOT__uart_inst__DOT__baud_counter 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__uart_inst__DOT__baud_counter) 
                              - (IData)(1U)));
        } else {
            __Vdly__top__DOT__uart_inst__DOT__baud_counter 
                = vlSelfRef.top__DOT__uart_inst__DOT__baud_div;
            if ((8U & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_state))) {
                __Vdly__top__DOT__uart_inst__DOT__tx_state = 0U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_state))) {
                __Vdly__top__DOT__uart_inst__DOT__tx_state = 0U;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_state))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_state))) {
                    __Vdly__top__DOT__uart_inst__DOT__tx_state = 0U;
                    __Vdly__top__DOT__uart_inst__DOT__tx_busy = 0U;
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_empty = 1U;
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_full = 0U;
                } else if ((8U > (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_bit_count))) {
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_out 
                        = (1U & ((IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_data) 
                                 >> (7U & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_bit_count))));
                    __Vdly__top__DOT__uart_inst__DOT__tx_bit_count 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_bit_count)));
                } else {
                    __Vdly__top__DOT__uart_inst__DOT__tx_state = 3U;
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_out = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_state))) {
                __Vdly__top__DOT__uart_inst__DOT__tx_state = 2U;
                vlSelfRef.top__DOT__uart_inst__DOT__tx_out 
                    = (1U & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_data));
                __Vdly__top__DOT__uart_inst__DOT__tx_bit_count = 1U;
            } else if (((IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_enable) 
                        & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_start_pending))) {
                __Vdly__top__DOT__uart_inst__DOT__tx_state = 1U;
                vlSelfRef.top__DOT__uart_inst__DOT__tx_out = 0U;
                __Vdly__top__DOT__uart_inst__DOT__tx_bit_count = 0U;
                __Vdly__top__DOT__uart_inst__DOT__tx_start_pending = 0U;
            } else {
                vlSelfRef.top__DOT__uart_inst__DOT__tx_out = 1U;
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_start_pending)))) {
                    __Vdly__top__DOT__uart_inst__DOT__tx_busy = 0U;
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_empty = 1U;
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_full = 0U;
                }
            }
        }
        vlSelfRef.top__DOT__uart_inst__DOT__baud_reload = 0U;
        if (((IData)(vlSelfRef.top__DOT____Vcellinp__uart_inst__write_enable) 
             & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__uart_valid))) {
            if ((0x20000000U == vlSelfRef.top__DOT__data_mem_addr)) {
                if (((~ (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_busy)) 
                     & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_enable))) {
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_data 
                        = (0xffU & vlSelfRef.top__DOT__cpu_mem_write_data);
                    __Vdly__top__DOT__uart_inst__DOT__tx_start_pending = 1U;
                    __Vdly__top__DOT__uart_inst__DOT__tx_busy = 1U;
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_empty = 0U;
                } else {
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_full = 1U;
                }
            }
            if ((0x20000000U != vlSelfRef.top__DOT__data_mem_addr)) {
                if ((0x20000008U != vlSelfRef.top__DOT__data_mem_addr)) {
                    if ((0x2000000cU == vlSelfRef.top__DOT__data_mem_addr)) {
                        vlSelfRef.top__DOT__uart_inst__DOT__baud_reload = 1U;
                        vlSelfRef.top__DOT__uart_inst__DOT__baud_div 
                            = (0xffffU & vlSelfRef.top__DOT__cpu_mem_write_data);
                    }
                }
                if ((0x20000008U == vlSelfRef.top__DOT__data_mem_addr)) {
                    vlSelfRef.top__DOT__uart_inst__DOT__tx_enable 
                        = (1U & vlSelfRef.top__DOT__cpu_mem_write_data);
                }
            }
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_signal_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_signal_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_signal_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_signal_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((1U 
                                                  & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst0__stall))) 
                                                 && (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_valid_out)));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((1U 
                                                  & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst0__stall))) 
                                                 && (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out)));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((1U 
                                                  & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst0__stall))) 
                                                 && (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out)));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out));
    vlSelfRef.top__DOT__timer_inst__DOT__mtime = __Vdly__top__DOT__timer_inst__DOT__mtime;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
        = __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
        = __Vdly__top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_state = __Vdly__top__DOT__uart_inst__DOT__tx_state;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_bit_count 
        = __Vdly__top__DOT__uart_inst__DOT__tx_bit_count;
    vlSelfRef.top__DOT__uart_inst__DOT__baud_counter 
        = __Vdly__top__DOT__uart_inst__DOT__baud_counter;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mstatus 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mie_global 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus 
                 >> 3U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mip 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msip 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
                 >> 3U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtip 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
                 >> 7U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meip 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip 
                 >> 0xbU));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3 
        = (7U & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                 >> 0xcU));
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out 
        = (0x7fU & vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out);
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rs2_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rs1_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_jump_signal_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_signal_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_jump_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_signal_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_signal_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr = (0xfffU 
                                                   & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_out);
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__uimm 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mtvec 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mepc 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__is_load_in_ex 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
           | ((0x15U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
              | ((0x16U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                 | ((0x17U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                    | (0x18U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_enable 
        = ((0x27U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
           | ((0x28U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
              | ((0x29U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                 | ((0x2aU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                    | ((0x2bU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)) 
                       | (0x2cU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out)))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_data_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_instr_id_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__is_store 
        = ((0x19U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
           | ((0x1aU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
              | (0x1bU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out))));
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__is_load_instr 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
           | ((0x15U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
              | ((0x16U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
                 | ((0x17U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out)) 
                    | (0x18U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out))))));
    vlSelfRef.top__DOT__timer_interrupt = (vlSelfRef.top__DOT__timer_inst__DOT__mtime 
                                           >= vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp);
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_exec_output_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_mem_write_addr = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_mem_read_addr = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_read_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_write_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_read_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_wr_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__read_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__wr_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__addr_match 
        = (vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out 
           == vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_out);
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out;
    vlSelfRef.top__DOT__cpu_mem_write_en = ((0x19U 
                                             == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
                                            | ((0x1aU 
                                                == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
                                               | (0x1bU 
                                                  == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))));
    vlSelfRef.top__DOT__cpu_load_type = ((0x14U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                          ? 0U : ((0x15U 
                                                   == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                                   ? 1U
                                                   : 
                                                  ((0x16U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                                    ? 2U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                                     ? 4U
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))
                                                      ? 5U
                                                      : 7U)))));
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load 
        = ((0x14U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
           | ((0x15U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
              | ((0x16U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
                 | ((0x17U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out)) 
                    | (0x18U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__opcode_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mie 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msie 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie 
                 >> 3U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtie 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie 
                 >> 7U));
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meie 
        = (1U & (vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie 
                 >> 0xbU));
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__wr_en_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_wr_en_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out;
    vlSelfRef.uart_tx = vlSelfRef.top__DOT__uart_inst__DOT__tx_out;
    vlSelfRef.top__DOT__uart_tx = vlSelfRef.top__DOT__uart_inst__DOT__tx_out;
    vlSelfRef.top__DOT__uart_inst__DOT__tx = vlSelfRef.top__DOT__uart_inst__DOT__tx_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__instr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__opcode_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_u_instr 
        = ((0x17U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
           | (0x37U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_j_instr 
        = (0x6fU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_i_instr 
        = ((3U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
           | ((0x13U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
              | (0x67U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out))));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_csr_instr 
        = (0x73U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_s_instr 
        = (0x23U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_b_instr 
        = (0x63U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr 
        = ((0x33U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
           | ((0x27U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out)) 
              | (0x53U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out))));
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_signal_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_signal_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__prev_store_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__rs2_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__rs2_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__pc_input 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rd_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rd_valid_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_valid_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs2_addr_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs1_valid_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs2_valid_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__imm 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_valid = 
        ((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
         | ((0x301U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
            | ((0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
               | ((0x305U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                  | ((0x340U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                     | ((0x341U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                        | ((0x342U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                           | ((0x343U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                              | ((0x344U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                                 | ((0xc00U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                                    | (0xc80U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))))))))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs1_addr_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ex_mem_result 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__read_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_read_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__instr_id_ex 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_enable = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_enable 
        = ((1U & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                  >> 5U)) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                        >> 4U))) && 
                              ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                    ? ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                                 >> 1U))) 
                                       && ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) 
                                           && (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out))))
                                    : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                        ? ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) 
                                           || (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out)))
                                        : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                            ? (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out))
                                            : (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out)))))
                                : ((1U & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                          >> 2U)) && 
                                   ((1U & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                           >> 1U)) 
                                    && (1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out)))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_addr_mem 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_valid_mem 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__mem_data_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_data_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__prev_store_instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__instr_id_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_instr_id_out;
    vlSelfRef.top__DOT__timer_inst__DOT__timer_interrupt 
        = vlSelfRef.top__DOT__timer_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__timer_interrupt 
        = vlSelfRef.top__DOT__timer_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_addr_wb 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__mem_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__load_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__instr_id_mem 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__load_instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_mem_wr_en 
        = vlSelfRef.top__DOT__cpu_mem_write_en;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_wr_enable_out 
        = vlSelfRef.top__DOT__cpu_mem_write_en;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__wr_enable 
        = vlSelfRef.top__DOT__cpu_mem_write_en;
    vlSelfRef.top__DOT__instr_mem_inst__DOT__load_type 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__data_mem_inst__DOT__load_type 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_load_type 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_load_type_out 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__load_type 
        = vlSelfRef.top__DOT__cpu_load_type;
    vlSelfRef.top__DOT__cpu_mem_read_en = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_mem_rd_en 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_read_enable_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__read_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__is_load 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_hazard 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load) 
           & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__is_store) 
              & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__addr_match)));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__opcode 
        = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out;
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_h86d536b8__0 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msip) 
           & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msie));
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_hd25a2548__0 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtip) 
           & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtie));
    top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_haa41561a__0 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meip) 
           & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meie));
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__wr_en_wb 
        = vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_wr_en_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_valid_wb 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_valid_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_b = 0U;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_valid_out) {
        if (((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out) 
               & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out))) 
              & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out))) 
             & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load)))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_b = 1U;
        } else if (((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out) 
                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_wr_en_out)) 
                     & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out))) 
                    & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out) 
                       == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out)))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_b = 2U;
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_a = 0U;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_valid_out) {
        if (((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out) 
               & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out))) 
              & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out))) 
             & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load)))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_a = 1U;
        } else if (((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out) 
                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_wr_en_out)) 
                     & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out))) 
                    & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out) 
                       == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out)))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_a = 2U;
        }
    }
    vlSelfRef.top__DOT__uart_inst__DOT__tx_start_pending 
        = __Vdly__top__DOT__uart_inst__DOT__tx_start_pending;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_busy = __Vdly__top__DOT__uart_inst__DOT__tx_busy;
    top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_i_instr) 
           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_csr_instr));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_i_instr)
            ? (((- (IData)((vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                            >> 0x1fU))) << 0xbU) | 
               (0x7ffU & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                          >> 0x14U))) : ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_s_instr)
                                          ? (((- (IData)(
                                                         (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                          >> 0x1fU))) 
                                              << 0xbU) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                      >> 7U))))
                                          : ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_b_instr)
                                              ? (((- (IData)(
                                                             (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                             >> 7U)))))
                                              : ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_u_instr)
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_j_instr)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | (((0xff000U 
                                                        & vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out) 
                                                       | (0x800U 
                                                          & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                             >> 9U))) 
                                                      | (0x7feU 
                                                         & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                                                            >> 0x14U))))
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_csr_instr)
                                                    ? 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out, 0x14U)
                                                    : 0U))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr)
            ? (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
               >> 0x19U) : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr) 
           | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_i_instr) 
              | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_s_instr) 
                 | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_b_instr) 
                    | ((~ (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                           >> 0xeU)) & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_csr_instr))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr) 
           | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_s_instr) 
              | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_b_instr)));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__imm 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__imm;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_valid;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_valid;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rs1_addr 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__instr_id;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__instr_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__instr_id;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_write_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__timer_interrupt 
        = vlSelfRef.top__DOT__cpu_inst__DOT__timer_interrupt;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__timer_interrupt 
        = vlSelfRef.top__DOT__cpu_inst__DOT__timer_interrupt;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__store_load_hazard) {
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__store_load_hazard = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__store_load_hazard = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__forwarded_store_data 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out;
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__store_load_hazard = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__store_load_hazard = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__forwarded_store_data = 0U;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending = 0U;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mie_global) {
        if (top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_haa41561a__0) {
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause = 0x8000000bU;
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending = 1U;
        } else if (top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_hd25a2548__0) {
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause = 0x80000007U;
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending = 1U;
        } else if (top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT____VdfgExtracted_h86d536b8__0) {
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause = 0x80000003U;
            vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending = 1U;
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__forward_b = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_b;
    vlSelfRef.top__DOT__cpu_inst__DOT__forward_a = vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_a;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_valid_out 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr) 
           | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_u_instr) 
              | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_j_instr) 
                 | (IData)(top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6))));
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__imm 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__instr_id 
        = ((0x40U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                    ? ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                        ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                 ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                              ? ((0x30200073U 
                                                  == vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out)
                                                  ? 0x2dU
                                                  : 
                                                 ((0x73U 
                                                   == vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out)
                                                   ? 0x2eU
                                                   : 
                                                  ((0x100073U 
                                                    == vlSelfRef.top__DOT__cpu_inst__DOT__if_id_instr_out)
                                                    ? 0x2fU
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x2cU
                                                       : 0x2bU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x2aU
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x29U
                                                       : 0x28U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x27U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U))) : 
                   ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                     ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                         ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                             ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                 ? 0x22U : 0U) : 0U)
                         : 0U) : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                   ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                       ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                           ? 0x23U : 0U)
                                       : 0U) : ((2U 
                                                 & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 0x21U
                                                     : 0x20U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 0x1fU
                                                     : 0x1eU))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 0x1dU
                                                     : 0x1cU)))
                                                  : 0U)
                                                 : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 0x24U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 
                                                  (((((((((0U 
                                                           == 
                                                           (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                             << 3U) 
                                                            | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))) 
                                                          | (0x100U 
                                                             == 
                                                             (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                               << 3U) 
                                                              | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                         | (4U 
                                                            == 
                                                            (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                              << 3U) 
                                                             | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                        | (6U 
                                                           == 
                                                           (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                             << 3U) 
                                                            | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                       | (7U 
                                                          == 
                                                          (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                            << 3U) 
                                                           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                      | (1U 
                                                         == 
                                                         (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                           << 3U) 
                                                          | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                     | (5U 
                                                        == 
                                                        (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                          << 3U) 
                                                         | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))) 
                                                    | (0x105U 
                                                       == 
                                                       (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                         << 3U) 
                                                        | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                        << 3U) 
                                                       | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                      ? 2U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                         << 3U) 
                                                        | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                       ? 3U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                          << 3U) 
                                                         | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                        ? 4U
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                           << 3U) 
                                                          | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                         ? 5U
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                            << 3U) 
                                                           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                          ? 6U
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                             << 3U) 
                                                            | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                           ? 7U
                                                           : 8U)))))))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                       << 3U) 
                                                      | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                     ? 9U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7) 
                                                        << 3U) 
                                                       | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3)))
                                                      ? 0xaU
                                                      : 0U)))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0x19U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                       ? 0x1aU
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                        ? 0x1bU
                                                        : 0U)))
                                                     : 0U)
                                                    : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 0x25U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0xeU
                                                      : 0xdU)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out 
                                                           >> 5U)))
                                                       ? 0x10U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out 
                                                            >> 5U)))
                                                        ? 0x11U
                                                        : 0U))
                                                      : 0xcU))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0x13U
                                                      : 0x12U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_imm_out 
                                                           >> 5U)))
                                                       ? 0xfU
                                                       : 0U)
                                                      : 0xbU)))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                  ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                      ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                              ? ((1U 
                                                  == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                  ? 0x26U
                                                  : 0U)
                                              : 0U)
                                          : 0U) : 0U)
                                  : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                      ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0x18U
                                                      : 0x17U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0U
                                                      : 0x16U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3))
                                                      ? 0x15U
                                                      : 0x14U)))
                                                   : 0U)
                                               : 0U))))));
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs1_valid_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_valid_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs1_valid 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out) {
        vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs2_valid_id = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_valid = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_valid_in = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs2_valid = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out 
            = (0x1fU & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                        >> 0x14U));
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs2_valid_id = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_valid = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_valid_in = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs2_valid = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out = 0U;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out 
        = (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out) 
            | (IData)(top__DOT__cpu_inst__DOT__decoder_inst0__DOT____VdfgRegularize_hbd2969fa_0_6))
            ? (0x1fU & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                        >> 0xfU)) : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__read_data 
        = (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_enable) 
            & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_valid))
            ? (((((((((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)) 
                      | (0x301U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                     | (0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                    | (0x305U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                   | (0x340U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                  | (0x341U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                 | (0x342U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))) 
                | (0x343U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr)))
                ? ((0x300U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                    ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus
                    : ((0x301U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                        ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__misa
                        : ((0x304U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                            ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie
                            : ((0x305U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                                ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec
                                : ((0x340U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                                    ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mscratch
                                    : ((0x341U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                                        ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc
                                        : ((0x342U 
                                            == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                                            ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mcause
                                            : vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtval)))))))
                : ((0x344U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                    ? vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip
                    : ((0xc00U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                        ? (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__cycle_counter)
                        : ((0xc80U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__csr_addr))
                            ? (IData)((vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__cycle_counter 
                                       >> 0x20U)) : 0U))))
            : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__write_enable 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__store_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarded_store_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__forwarded_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forwarded_store_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_cause 
        = vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause;
    vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending 
        = vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__forward_b 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forward_b;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__forward_a 
        = vlSelfRef.top__DOT__cpu_inst__DOT__forward_a;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_valid_out) {
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_valid_in = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rd_valid = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_out 
            = (0x1fU & (vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out 
                        >> 7U));
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_valid_in = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rd_valid = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_out = 0U;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_instr_id_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__instr_id;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs2_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs2 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs1_id 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs1 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__stall_pipeline = 0U;
    if ((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__is_load_in_ex) 
          & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out)) 
         & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out)))) {
        if ((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out) 
              & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out))) 
             | ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out) 
                & ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out) 
                   == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out))))) {
            vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__stall_pipeline = 1U;
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_cause_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_cause;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_cause 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_cause;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_pending 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_pending 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mret_instruction = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ecall_exception = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ebreak_exception = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending)))) {
        if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                    if ((0x2dU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mret_instruction = 1U;
                                    }
                                    if ((0x2dU != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        if ((0x2eU 
                                             == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ecall_exception = 1U;
                                        }
                                        if ((0x2eU 
                                             != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                            if ((0x2fU 
                                                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ebreak_exception = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_taken = 0U;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending) {
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_taken = 1U;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rd 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rd_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_instr_id_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_read_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rd_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__mret_instruction 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mret_instruction;
    vlSelfRef.top__DOT__cpu_inst__DOT__ecall_exception 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ecall_exception;
    vlSelfRef.top__DOT__cpu_inst__DOT__ebreak_exception 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ebreak_exception;
    vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_taken 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_taken;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_read_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_rd_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rd_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mret_instruction 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mret_instruction;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__ecall_exception 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ecall_exception;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__ebreak_exception 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ebreak_exception;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_taken 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_taken;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_taken 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_taken;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1;
    __VdlyVal__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1;
    __VdlyDim0__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1;
    __VdlySet__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v0;
    __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v0 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v0;
    __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v0;
    __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v1;
    __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v1 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v1;
    __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v1;
    __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v2;
    __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v2 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v2;
    __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v2;
    __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v3;
    __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v3 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v3;
    __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v3;
    __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v3 = 0;
    // Body
    __VdlySet__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1 = 0U;
    __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v0 = 0U;
    __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v1 = 0U;
    __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v2 = 0U;
    __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v3 = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc 
        = ((IData)(vlSelfRef.rst) ? 0U : ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_j_signal)
                                           ? vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_jump
                                           : ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__stall_pipeline)
                                               ? vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc
                                               : ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc))));
    if (((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_wr_en) 
         & (0U != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in)))) {
        __VdlyVal__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1 
            = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in;
        __VdlyDim0__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1 
            = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in;
        __VdlySet__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT____Vcellinp__data_mem_inst__wr_en) 
         & (0x100000U > (vlSelfRef.top__DOT__data_mem_addr 
                         - (IData)(0x10000000U))))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_write_byte_enable))) {
            __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v0 
                = (0xffU & vlSelfRef.top__DOT__cpu_mem_write_data);
            __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v0 
                = (0xfffffU & vlSelfRef.top__DOT__data_mem_addr);
            __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_write_byte_enable))) {
            __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v1 
                = (0xffU & (vlSelfRef.top__DOT__cpu_mem_write_data 
                            >> 8U));
            __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v1 
                = (0xfffffU & ((IData)(1U) + vlSelfRef.top__DOT__data_mem_addr));
            __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__cpu_write_byte_enable))) {
            __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v2 
                = (0xffU & (vlSelfRef.top__DOT__cpu_mem_write_data 
                            >> 0x10U));
            __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v2 
                = (0xfffffU & ((IData)(2U) + vlSelfRef.top__DOT__data_mem_addr));
            __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.top__DOT__cpu_write_byte_enable))) {
            __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v3 
                = (vlSelfRef.top__DOT__cpu_mem_write_data 
                   >> 0x18U);
            __VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v3 
                = (0xfffffU & ((IData)(3U) + vlSelfRef.top__DOT__data_mem_addr));
            __VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v3 = 1U;
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0U] = 0U;
    if (__VdlySet__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1) {
        vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[__VdlyDim0__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1] 
            = __VdlyVal__top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file__v1;
    }
    if (__VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v0) {
        vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram[__VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v0] 
            = __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v0;
    }
    if (__VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v1) {
        vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram[__VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v1] 
            = __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v1;
    }
    if (__VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v2) {
        vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram[__VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v2] 
            = __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v2;
    }
    if (__VdlySet__top__DOT__data_mem_inst__DOT__data_ram__v3) {
        vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram[__VdlyDim0__top__DOT__data_mem_inst__DOT__data_ram__v3] 
            = __VdlyVal__top__DOT__data_mem_inst__DOT__data_ram__v3;
    }
    vlSelfRef.pc_debug = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__pc_debug = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_pc_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__cpu_pc_out = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc;
    vlSelfRef.top__DOT__instr_to_cpu = ((0x20000U > 
                                         (vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc 
                                          >> 2U)) ? 
                                        vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_ram
                                        [(0x1ffffU 
                                          & (vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc 
                                             >> 2U))]
                                         : 0x13U);
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__0__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__1__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [1U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__2__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [2U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__3__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [3U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__4__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [4U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__5__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [5U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__6__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [6U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__7__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [7U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__8__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [8U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__9__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [9U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__10__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xaU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__11__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xbU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__12__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xcU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__13__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xdU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__14__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xeU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__15__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0xfU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__16__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x10U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__17__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x11U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__18__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x12U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__19__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x13U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__20__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x14U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__21__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x15U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__22__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x16U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__23__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x17U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__24__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x18U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__25__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x19U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__26__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1aU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__27__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1bU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__28__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1cU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__29__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1dU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__30__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1eU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__31__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x1fU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__32__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x20U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__33__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x21U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__34__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x22U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__35__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x23U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__36__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x24U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__37__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x25U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__38__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x26U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__39__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x27U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__40__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x28U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__41__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x29U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__42__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2aU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__43__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2bU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__44__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2cU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__45__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2dU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__46__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2eU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__47__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x2fU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__48__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x30U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__49__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x31U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__50__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x32U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__51__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x33U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__52__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x34U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__53__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x35U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__54__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x36U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__55__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x37U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__56__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x38U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__57__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x39U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__58__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3aU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__59__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3bU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__60__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3cU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__61__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3dU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__62__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3eU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__63__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x3fU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__64__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x40U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__65__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x41U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__66__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x42U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__67__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x43U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__68__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x44U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__69__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x45U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__70__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x46U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__71__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x47U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__72__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x48U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__73__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x49U];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__74__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4aU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__75__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4bU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__76__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4cU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__77__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4dU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__78__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4eU];
    vlSelfRef.top__DOT__data_mem_inst__DOT__dump_regs__BRA__79__KET____DOT__reg_data 
        = vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
        [0x4fU];
    vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_addr 
        = vlSelfRef.top__DOT__cpu_pc_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__current_pc 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pc 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_instr_in 
        = vlSelfRef.top__DOT__instr_to_cpu;
    vlSelfRef.instr_debug = vlSelfRef.top__DOT__instr_to_cpu;
    vlSelfRef.top__DOT__instr_debug = vlSelfRef.top__DOT__instr_to_cpu;
    vlSelfRef.top__DOT__instr_mem_inst__DOT__instr 
        = vlSelfRef.top__DOT__instr_to_cpu;
    vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pc 
        = vlSelfRef.top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pc;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_pc_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pc;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT____Vcellinp__timer_inst__read_enable;
    top__DOT____Vcellinp__timer_inst__read_enable = 0;
    CData/*0:0*/ top__DOT____Vcellinp__uart_inst__read_enable;
    top__DOT____Vcellinp__uart_inst__read_enable = 0;
    // Body
    vlSelfRef.top__DOT__cpu_inst__DOT__stall_pipeline 
        = vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__stall_pipeline;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_wr_en 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__is_load_instr)
            ? vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_out
            : vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_out);
    if ((0x19U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))) {
        vlSelfRef.top__DOT__cpu_write_byte_enable = 1U;
        vlSelfRef.top__DOT__cpu_mem_write_data = (0xffU 
                                                  & vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out);
    } else if ((0x1aU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))) {
        vlSelfRef.top__DOT__cpu_write_byte_enable = 
            ((1U & vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out)
              ? 0U : 3U);
        vlSelfRef.top__DOT__cpu_mem_write_data = (0xffffU 
                                                  & vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out);
    } else if ((0x1bU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out))) {
        vlSelfRef.top__DOT__cpu_write_byte_enable = 
            ((0U == (3U & vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out))
              ? 0xfU : 0U);
        vlSelfRef.top__DOT__cpu_mem_write_data = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out;
    } else {
        vlSelfRef.top__DOT__cpu_write_byte_enable = 0U;
        vlSelfRef.top__DOT__cpu_mem_write_data = 0U;
    }
    vlSelfRef.top__DOT__data_mem_addr = vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__stall 
        = vlSelfRef.top__DOT__cpu_inst__DOT__stall_pipeline;
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__stall 
        = vlSelfRef.top__DOT__cpu_inst__DOT__stall_pipeline;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__wr_en 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_wr_en;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rd 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rd_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in;
    vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in;
    vlSelfRef.top__DOT__data_mem_inst__DOT__write_byte_enable 
        = vlSelfRef.top__DOT__cpu_write_byte_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_write_byte_enable 
        = vlSelfRef.top__DOT__cpu_write_byte_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_write_byte_enable_out 
        = vlSelfRef.top__DOT__cpu_write_byte_enable;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__write_byte_enable 
        = vlSelfRef.top__DOT__cpu_write_byte_enable;
    vlSelfRef.top__DOT__data_mem_inst__DOT__wr_data 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__timer_inst__DOT__write_data 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__uart_inst__DOT__write_data 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__module_wr_data_out 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0_wr_data_out 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__wr_data 
        = vlSelfRef.top__DOT__cpu_mem_write_data;
    vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_addr_p2 
        = vlSelfRef.top__DOT__data_mem_addr;
    vlSelfRef.top__DOT__data_mem_inst__DOT__addr = 
        (vlSelfRef.top__DOT__data_mem_addr - (IData)(0x10000000U));
    vlSelfRef.top__DOT__timer_inst__DOT__addr = vlSelfRef.top__DOT__data_mem_addr;
    vlSelfRef.top__DOT__uart_inst__DOT__addr = vlSelfRef.top__DOT__data_mem_addr;
    vlSelfRef.top__DOT__instr_mem_access = (0x80000U 
                                            >= vlSelfRef.top__DOT__data_mem_addr);
    vlSelfRef.top__DOT__timer_inst__DOT__timer_valid 
        = ((0x2004000U == vlSelfRef.top__DOT__data_mem_addr) 
           | ((0x2004004U == vlSelfRef.top__DOT__data_mem_addr) 
              | ((0x200bff8U == vlSelfRef.top__DOT__data_mem_addr) 
                 | (0x200bffcU == vlSelfRef.top__DOT__data_mem_addr))));
    vlSelfRef.top__DOT__uart_inst__DOT__uart_valid 
        = ((0x20000000U == vlSelfRef.top__DOT__data_mem_addr) 
           | ((0x20000004U == vlSelfRef.top__DOT__data_mem_addr) 
              | ((0x20000008U == vlSelfRef.top__DOT__data_mem_addr) 
                 | (0x2000000cU == vlSelfRef.top__DOT__data_mem_addr))));
    vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr 
        = (vlSelfRef.top__DOT__data_mem_addr >> 2U);
    vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset 
        = (3U & vlSelfRef.top__DOT__data_mem_addr);
    vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
        = ((0x20000U > vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr)
            ? vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_ram
           [(0x1ffffU & vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr)]
            : 0U);
    if ((2U & (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data 
            = (0xffU & ((1U & (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))
                         ? (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                            >> 0x18U) : (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                                         >> 0x10U)));
        if ((2U & (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
            vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data 
                = (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                   >> 0x10U);
        }
    } else {
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data 
            = (0xffU & ((1U & (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))
                         ? (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                            >> 8U) : vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data));
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data 
            = (0xffffU & vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data);
    }
    if (((3U == (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset)) 
         & ((1U == (IData)(vlSelfRef.top__DOT__cpu_load_type)) 
            | (5U == (IData)(vlSelfRef.top__DOT__cpu_load_type))))) {
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__next_word_data 
            = ((0x20000U > ((IData)(1U) + vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr))
                ? vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_ram
               [(0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr))]
                : 0U);
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data 
            = ((0xff00U & (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__next_word_data 
                           << 8U)) | (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                                      >> 0x18U));
    }
    if (((0U != (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset)) 
         & (2U == (IData)(vlSelfRef.top__DOT__cpu_load_type)))) {
        vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk3__DOT__next_word_data 
            = ((0x20000U > ((IData)(1U) + vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr))
                ? vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_ram
               [(0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr))]
                : 0U);
        if ((1U == (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
            vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                = ((vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk3__DOT__next_word_data 
                    << 0x18U) | (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                                 >> 8U));
        } else if ((2U == (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
            vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                = ((vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk3__DOT__next_word_data 
                    << 0x10U) | (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                                 >> 0x10U));
        } else if ((3U == (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset))) {
            vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                = ((vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk3__DOT__next_word_data 
                    << 8U) | (vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data 
                              >> 0x18U));
        }
    }
    vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_p2 
        = ((4U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
            ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                         ? (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data)
                         : (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data)))
            : ((2U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                    ? 0U : vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data)
                : ((1U & (IData)(vlSelfRef.top__DOT__cpu_load_type))
                    ? (((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data))
                    : (((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data) 
                                          >> 7U)))) 
                        << 8U) | (IData)(vlSelfRef.top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data)))));
    vlSelfRef.top__DOT__timer_access = ((0x2004000U 
                                         <= vlSelfRef.top__DOT__data_mem_addr) 
                                        & (0x200bfffU 
                                           >= vlSelfRef.top__DOT__data_mem_addr));
    vlSelfRef.top__DOT__data_mem_access = ((0x10000000U 
                                            <= vlSelfRef.top__DOT__data_mem_addr) 
                                           & (0x100fffffU 
                                              >= vlSelfRef.top__DOT__data_mem_addr));
    vlSelfRef.top__DOT__uart_access = ((0x20000000U 
                                        <= vlSelfRef.top__DOT__data_mem_addr) 
                                       & (0x20000fffU 
                                          >= vlSelfRef.top__DOT__data_mem_addr));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_wb_result 
        = vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_b))
            ? vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_value_out
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_b))
                ? vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_b))
                    ? vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_value_out
                    : vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_value_out)));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
        = ((0U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_a))
            ? vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_value_out
            : ((1U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_a))
                ? vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out
                : ((2U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forward_a))
                    ? vlSelfRef.top__DOT__cpu_inst__DOT__wb_inst0_rd_value_out
                    : vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_value_out)));
    vlSelfRef.top__DOT__timer_valid = vlSelfRef.top__DOT__timer_inst__DOT__timer_valid;
    vlSelfRef.top__DOT__uart_valid = vlSelfRef.top__DOT__uart_inst__DOT__uart_valid;
    vlSelfRef.top__DOT__instr_read_data = vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_p2;
    vlSelfRef.top__DOT____Vcellinp__timer_inst__write_enable 
        = ((IData)(vlSelfRef.top__DOT__cpu_mem_write_en) 
           & (IData)(vlSelfRef.top__DOT__timer_access));
    top__DOT____Vcellinp__timer_inst__read_enable = 
        ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load) 
         & (IData)(vlSelfRef.top__DOT__timer_access));
    vlSelfRef.top__DOT____Vcellinp__data_mem_inst__wr_en 
        = ((IData)(vlSelfRef.top__DOT__cpu_mem_write_en) 
           & (IData)(vlSelfRef.top__DOT__data_mem_access));
    vlSelfRef.top__DOT____Vcellinp__data_mem_inst__rd_en 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load) 
           & (IData)(vlSelfRef.top__DOT__data_mem_access));
    vlSelfRef.top__DOT____Vcellinp__uart_inst__write_enable 
        = ((IData)(vlSelfRef.top__DOT__cpu_mem_write_en) 
           & (IData)(vlSelfRef.top__DOT__uart_access));
    top__DOT____Vcellinp__uart_inst__read_enable = 
        ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load) 
         & (IData)(vlSelfRef.top__DOT__uart_access));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__rs2 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rs1_value 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__rs1 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 0U;
    if (vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending) {
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
            = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
    } else if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                if ((0x2dU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc;
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                } else if ((0x2eU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec;
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                } else if ((0x2fU == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec;
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                   + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                            = (0xfffffffeU & (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                              + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out));
                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                            if ((vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                                 >= vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                                    = 
                                                    (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                                     + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                            }
                                        } else if (
                                                   (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                                    < vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                                = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                                   + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                        if ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                            if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        if (VL_GTES_III(32, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                                = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                                   + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                        }
                                    } else if (VL_LTS_III(32, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                            = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                               + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                    }
                                } else if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                    if ((vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                         != vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                            = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                               + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                    }
                                } else if ((vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                            == vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)) {
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr 
                                        = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                           + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                         >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((0x26U == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data = 0U;
    if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__ALUoutput = 0U;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data 
            = ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                ? 0U : ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                         ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                             ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                 ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                          ? 0U : (vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
                                                  & (~ vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__uimm))))
                             : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                 ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                     ? (vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
                                        | vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__uimm)
                                     : vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__uimm)
                                 : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                     ? (vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
                                        & (~ vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value))
                                     : (vlSelfRef.top__DOT__cpu_inst__DOT__csr_read_data 
                                        | vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value))))
                         : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                             ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                 ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                     ? vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value
                                     : 0U) : 0U) : 0U)));
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__ALUoutput 
            = ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                ? ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                    ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                             ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                      ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                          ? (- (IData)(
                                                       (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                                        < vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out)))
                                          : (- (IData)(
                                                       VL_LTS_III(32, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))))
                                      : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, 
                                                           (0x1fU 
                                                            & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))
                                          : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                             >> (0x1fU 
                                                 & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))))))
                : ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                    ? ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   << (0x1fU & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   & vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out))
                            : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   | vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out)
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   ^ vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out)
                                : (- (IData)((vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                              < vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value))))
                            : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (- (IData)(VL_LTS_III(32, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)))
                                : VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value, 
                                                 (0x1fU 
                                                  & vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)))))
                    : ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                        ? ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   >> (0x1fU & vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value))
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   << (0x1fU & vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)))
                            : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   & vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   | vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)))
                        : ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                            ? ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   ^ vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)
                                : (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   - vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value))
                            : ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))
                                ? (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                   + vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value)
                                : 0U)))));
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data = 0U;
    }
    vlSelfRef.top__DOT__timer_inst__DOT__write_enable 
        = vlSelfRef.top__DOT____Vcellinp__timer_inst__write_enable;
    vlSelfRef.top__DOT__timer_inst__DOT__read_enable 
        = top__DOT____Vcellinp__timer_inst__read_enable;
    vlSelfRef.top__DOT__timer_inst__DOT__read_data = 0U;
    if (((IData)(top__DOT____Vcellinp__timer_inst__read_enable) 
         & (IData)(vlSelfRef.top__DOT__timer_inst__DOT__timer_valid))) {
        vlSelfRef.top__DOT__timer_inst__DOT__read_data 
            = ((0x2004000U == vlSelfRef.top__DOT__data_mem_addr)
                ? (IData)(vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp)
                : ((0x2004004U == vlSelfRef.top__DOT__data_mem_addr)
                    ? (IData)((vlSelfRef.top__DOT__timer_inst__DOT__mtimecmp 
                               >> 0x20U)) : ((0x200bff8U 
                                              == vlSelfRef.top__DOT__data_mem_addr)
                                              ? (IData)(vlSelfRef.top__DOT__timer_inst__DOT__mtime)
                                              : ((0x200bffcU 
                                                  == vlSelfRef.top__DOT__data_mem_addr)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__timer_inst__DOT__mtime 
                                                             >> 0x20U))
                                                  : 0U))));
    }
    vlSelfRef.top__DOT__data_mem_inst__DOT__wr_en = vlSelfRef.top__DOT____Vcellinp__data_mem_inst__wr_en;
    vlSelfRef.top__DOT__data_mem_inst__DOT__rd_en = vlSelfRef.top__DOT____Vcellinp__data_mem_inst__rd_en;
    vlSelfRef.top__DOT__uart_inst__DOT__write_enable 
        = vlSelfRef.top__DOT____Vcellinp__uart_inst__write_enable;
    vlSelfRef.top__DOT__uart_inst__DOT__read_enable 
        = top__DOT____Vcellinp__uart_inst__read_enable;
    vlSelfRef.top__DOT__uart_inst__DOT__read_data = 
        (((IData)(top__DOT____Vcellinp__uart_inst__read_enable) 
          & (IData)(vlSelfRef.top__DOT__uart_inst__DOT__uart_valid))
          ? ((0x20000000U == vlSelfRef.top__DOT__data_mem_addr)
              ? (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_data)
              : ((0x20000004U == vlSelfRef.top__DOT__data_mem_addr)
                  ? (((IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_busy) 
                      << 2U) | (((IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_empty) 
                                 << 1U) | (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_full)))
                  : ((0x20000008U == vlSelfRef.top__DOT__data_mem_addr)
                      ? (IData)(vlSelfRef.top__DOT__uart_inst__DOT__tx_enable)
                      : ((0x2000000cU == vlSelfRef.top__DOT__data_mem_addr)
                          ? (IData)(vlSelfRef.top__DOT__uart_inst__DOT__baud_div)
                          : 0U)))) : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs2_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_rs1_value_out;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__interrupt_pending)))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr 
                                        = (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                           + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                 >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr 
                                    = (vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value 
                                       + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_mem_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr;
        vlSelfRef.top__DOT__cpu_inst__DOT__execution_flush 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output = 0U;
        if ((0x40U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                    if ((0x2dU != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                        if ((0x2eU 
                                             != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                            if ((0x2fU 
                                                 != (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out))) {
                                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                                    = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_rd_value;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                    = ((IData)(4U) 
                                       + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out);
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                = ((IData)(4U) + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out);
                        }
                    }
                }
            }
        } else if ((0x20U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                                vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                    = vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__ALUoutput;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                            vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                                = (vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out 
                                   + vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out);
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out))) {
                        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output 
                            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__ALUoutput;
                    }
                }
            }
        }
    } else {
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_mem_addr_out 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr;
        vlSelfRef.top__DOT__cpu_inst__DOT__execution_flush 
            = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline;
        vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output = 0U;
    }
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__pc_input 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_addr_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_jump 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr;
    vlSelfRef.top__DOT__cpu_inst__DOT__branch_flush 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_signal_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_j_signal 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal;
    vlSelfRef.top__DOT__cpu_inst__DOT__pipeline_flush 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline) 
           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal));
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_write_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data;
    vlSelfRef.top__DOT__timer_read_data = vlSelfRef.top__DOT__timer_inst__DOT__read_data;
    vlSelfRef.top__DOT__uart_read_data = vlSelfRef.top__DOT__uart_inst__DOT__read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_mem_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_exec_output_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_addr_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_addr_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__jump 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_jump;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_signal_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_jump_signal_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__j_signal 
        = vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0_j_signal;
    vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst0__stall 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__pipeline_flush) 
           | (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__stall_pipeline));
    vlSelfRef.top__DOT__cpu_inst__DOT__csr_file_inst__DOT__write_data 
        = vlSelfRef.top__DOT__cpu_inst__DOT__csr_write_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__exec_output_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__ex_inst0_exec_output_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__stall 
        = vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst0__stall;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3;
    top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3 = 0;
    // Body
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1_value 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out)
            ? ((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in)) 
                & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_wr_en))
                ? vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in
                : vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file
               [vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out])
            : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_value 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out)
            ? ((((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out) 
                 == (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_in)) 
                & (IData)(vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_wr_en))
                ? vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in
                : vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file
               [vlSelfRef.top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out])
            : 0U);
    vlSelfRef.top__DOT__data_mem_inst__DOT__byte_data 
        = ((0x100000U > (vlSelfRef.top__DOT__data_mem_addr 
                         - (IData)(0x10000000U))) ? 
           vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
           [(0xfffffU & vlSelfRef.top__DOT__data_mem_addr)]
            : 0U);
    top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3 
        = ((vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
            [(0xfffffU & ((IData)(1U) + vlSelfRef.top__DOT__data_mem_addr))] 
            << 8U) | vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
           [(0xfffffU & vlSelfRef.top__DOT__data_mem_addr)]);
    vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__if_id_inst0__instruction_in 
        = ((IData)(vlSelfRef.top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal)
            ? 0x13U : vlSelfRef.top__DOT__instr_to_cpu);
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs1_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1_value;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs2_value_out 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_value;
    vlSelfRef.top__DOT__data_mem_inst__DOT__halfword_data 
        = ((0xfffffU > (vlSelfRef.top__DOT__data_mem_addr 
                        - (IData)(0x10000000U))) ? (IData)(top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3)
            : 0U);
    vlSelfRef.top__DOT__data_mem_inst__DOT__word_data 
        = ((0xffffdU > (vlSelfRef.top__DOT__data_mem_addr 
                        - (IData)(0x10000000U))) ? 
           ((vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
             [(0xfffffU & ((IData)(3U) + vlSelfRef.top__DOT__data_mem_addr))] 
             << 0x18U) | ((vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
                           [(0xfffffU & ((IData)(2U) 
                                         + vlSelfRef.top__DOT__data_mem_addr))] 
                           << 0x10U) | (IData)(top__DOT__data_mem_inst__DOT____VdfgRegularize_habe4b9b5_0_3)))
            : 0U);
    vlSelfRef.top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT____Vcellinp__if_id_inst0__instruction_in;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs1_value_out;
    vlSelfRef.top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_value_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0_rs2_value_out;
    vlSelfRef.top__DOT__data_mem_read_data = ((IData)(vlSelfRef.top__DOT____Vcellinp__data_mem_inst__rd_en)
                                               ? ((0U 
                                                   == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                   ? 
                                                  (((- (IData)(
                                                               ((0x100000U 
                                                                 > 
                                                                 (vlSelfRef.top__DOT__data_mem_addr 
                                                                  - (IData)(0x10000000U))) 
                                                                & (vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
                                                                   [
                                                                   (0xfffffU 
                                                                    & vlSelfRef.top__DOT__data_mem_addr)] 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.top__DOT__data_mem_inst__DOT__byte_data))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                    ? (IData)(vlSelfRef.top__DOT__data_mem_inst__DOT__byte_data)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                     ? 
                                                    (((- (IData)(
                                                                 ((0xfffffU 
                                                                   > 
                                                                   (vlSelfRef.top__DOT__data_mem_addr 
                                                                    - (IData)(0x10000000U))) 
                                                                  & (vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram
                                                                     [
                                                                     (0xfffffU 
                                                                      & ((IData)(1U) 
                                                                         + vlSelfRef.top__DOT__data_mem_addr))] 
                                                                     >> 7U)))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.top__DOT__data_mem_inst__DOT__halfword_data))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                      ? (IData)(vlSelfRef.top__DOT__data_mem_inst__DOT__halfword_data)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.top__DOT__cpu_load_type))
                                                       ? vlSelfRef.top__DOT__data_mem_inst__DOT__word_data
                                                       : 0U)))))
                                               : 0U);
    vlSelfRef.top__DOT__data_mem_inst__DOT__rd_data_out 
        = vlSelfRef.top__DOT__data_mem_read_data;
    vlSelfRef.top__DOT__mem_read_data = ((IData)(vlSelfRef.top__DOT__timer_access)
                                          ? vlSelfRef.top__DOT__timer_inst__DOT__read_data
                                          : ((IData)(vlSelfRef.top__DOT__data_mem_access)
                                              ? vlSelfRef.top__DOT__data_mem_read_data
                                              : ((IData)(vlSelfRef.top__DOT__uart_access)
                                                  ? vlSelfRef.top__DOT__uart_inst__DOT__read_data
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__instr_mem_access)
                                                   ? vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_p2
                                                   : 0U))));
    vlSelfRef.top__DOT__cpu_inst__DOT__module_read_data_in 
        = vlSelfRef.top__DOT__mem_read_data;
    vlSelfRef.top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_in 
        = vlSelfRef.top__DOT__cpu_inst__DOT__module_read_data_in;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/lazybanana/github/zig-led/synapse32/rtl/top.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/lazybanana/github/zig-led/synapse32/rtl/top.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/lazybanana/github/zig-led/synapse32/rtl/top.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.software_interrupt 
                      & 0xfeU)))) {
        Verilated::overWidthError("software_interrupt");}
    if (VL_UNLIKELY(((vlSelfRef.external_interrupt 
                      & 0xfeU)))) {
        Verilated::overWidthError("external_interrupt");}
}
#endif  // VL_DEBUG
