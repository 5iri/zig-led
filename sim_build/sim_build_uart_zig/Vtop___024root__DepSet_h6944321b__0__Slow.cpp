// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

extern const VlWide<32>/*1023:0*/ Vtop__ConstPool__CONST_hed3361ac_0;

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__dumpfile_path[0U] = Vtop__ConstPool__CONST_hed3361ac_0[0U];
    vlSelfRef.top__DOT__dumpfile_path[1U] = Vtop__ConstPool__CONST_hed3361ac_0[1U];
    vlSelfRef.top__DOT__dumpfile_path[2U] = Vtop__ConstPool__CONST_hed3361ac_0[2U];
    vlSelfRef.top__DOT__dumpfile_path[3U] = Vtop__ConstPool__CONST_hed3361ac_0[3U];
    vlSelfRef.top__DOT__dumpfile_path[4U] = Vtop__ConstPool__CONST_hed3361ac_0[4U];
    vlSelfRef.top__DOT__dumpfile_path[5U] = Vtop__ConstPool__CONST_hed3361ac_0[5U];
    vlSelfRef.top__DOT__dumpfile_path[6U] = Vtop__ConstPool__CONST_hed3361ac_0[6U];
    vlSelfRef.top__DOT__dumpfile_path[7U] = Vtop__ConstPool__CONST_hed3361ac_0[7U];
    vlSelfRef.top__DOT__dumpfile_path[8U] = Vtop__ConstPool__CONST_hed3361ac_0[8U];
    vlSelfRef.top__DOT__dumpfile_path[9U] = Vtop__ConstPool__CONST_hed3361ac_0[9U];
    vlSelfRef.top__DOT__dumpfile_path[0xaU] = Vtop__ConstPool__CONST_hed3361ac_0[0xaU];
    vlSelfRef.top__DOT__dumpfile_path[0xbU] = Vtop__ConstPool__CONST_hed3361ac_0[0xbU];
    vlSelfRef.top__DOT__dumpfile_path[0xcU] = Vtop__ConstPool__CONST_hed3361ac_0[0xcU];
    vlSelfRef.top__DOT__dumpfile_path[0xdU] = Vtop__ConstPool__CONST_hed3361ac_0[0xdU];
    vlSelfRef.top__DOT__dumpfile_path[0xeU] = Vtop__ConstPool__CONST_hed3361ac_0[0xeU];
    vlSelfRef.top__DOT__dumpfile_path[0xfU] = Vtop__ConstPool__CONST_hed3361ac_0[0xfU];
    vlSelfRef.top__DOT__dumpfile_path[0x10U] = Vtop__ConstPool__CONST_hed3361ac_0[0x10U];
    vlSelfRef.top__DOT__dumpfile_path[0x11U] = Vtop__ConstPool__CONST_hed3361ac_0[0x11U];
    vlSelfRef.top__DOT__dumpfile_path[0x12U] = Vtop__ConstPool__CONST_hed3361ac_0[0x12U];
    vlSelfRef.top__DOT__dumpfile_path[0x13U] = Vtop__ConstPool__CONST_hed3361ac_0[0x13U];
    vlSelfRef.top__DOT__dumpfile_path[0x14U] = Vtop__ConstPool__CONST_hed3361ac_0[0x14U];
    vlSelfRef.top__DOT__dumpfile_path[0x15U] = Vtop__ConstPool__CONST_hed3361ac_0[0x15U];
    vlSelfRef.top__DOT__dumpfile_path[0x16U] = Vtop__ConstPool__CONST_hed3361ac_0[0x16U];
    vlSelfRef.top__DOT__dumpfile_path[0x17U] = Vtop__ConstPool__CONST_hed3361ac_0[0x17U];
    vlSelfRef.top__DOT__dumpfile_path[0x18U] = Vtop__ConstPool__CONST_hed3361ac_0[0x18U];
    vlSelfRef.top__DOT__dumpfile_path[0x19U] = Vtop__ConstPool__CONST_hed3361ac_0[0x19U];
    vlSelfRef.top__DOT__dumpfile_path[0x1aU] = Vtop__ConstPool__CONST_hed3361ac_0[0x1aU];
    vlSelfRef.top__DOT__dumpfile_path[0x1bU] = Vtop__ConstPool__CONST_hed3361ac_0[0x1bU];
    vlSelfRef.top__DOT__dumpfile_path[0x1cU] = Vtop__ConstPool__CONST_hed3361ac_0[0x1cU];
    vlSelfRef.top__DOT__dumpfile_path[0x1dU] = Vtop__ConstPool__CONST_hed3361ac_0[0x1dU];
    vlSelfRef.top__DOT__dumpfile_path[0x1eU] = Vtop__ConstPool__CONST_hed3361ac_0[0x1eU];
    vlSelfRef.top__DOT__dumpfile_path[0x1fU] = Vtop__ConstPool__CONST_hed3361ac_0[0x1fU];
    vlSelfRef.top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/lazybanana/github/zig-led/synapse32/rtl/top.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->software_interrupt = VL_RAND_RESET_I(1);
    vlSelf->external_interrupt = VL_RAND_RESET_I(1);
    vlSelf->uart_tx = VL_RAND_RESET_I(1);
    vlSelf->pc_debug = VL_RAND_RESET_I(32);
    vlSelf->instr_debug = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__software_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__external_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_tx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc_debug = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr_debug = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr_to_cpu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_mem_read_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_mem_write_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_mem_write_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_mem_read_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_write_byte_enable = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__instr_read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__timer_read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__timer_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__uart_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_access = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_access = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_access = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instr_mem_access = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellinp__data_mem_inst__rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellinp__data_mem_inst__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellinp__timer_inst__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellinp__uart_inst__write_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->top__DOT__dumpfile_path);
    vlSelf->top__DOT__cpu_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__module_instr_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__module_read_data_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__module_pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__module_wr_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__module_mem_wr_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__module_mem_rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__module_read_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__module_write_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__module_write_byte_enable = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_inst__DOT__module_load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu_inst__DOT__timer_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__software_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__external_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0_j_signal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0_jump = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__stall_pipeline = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__if_id_pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__if_id_instr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__branch_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__if_id_inst0__instruction_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0_rs1_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0_rs2_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0_rd_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0_imm_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0_rs1_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0_rs2_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0_rd_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0_opcode_out = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0_instr_id_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0_rs1_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0_rs2_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0_rd_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0_wr_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0_rd_value_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_rd_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_imm_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_rd_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_opcode_out = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_instr_id_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_rs1_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0_rs2_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__execution_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pipeline_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT____Vcellinp__id_ex_inst0__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_inst0_exec_output_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_inst0_jump_signal_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_inst0_jump_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_inst0_mem_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_inst0_rs1_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_inst0_rs2_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_inst__DOT__forward_b = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_inst__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu_inst__DOT__csr_read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_read_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__interrupt_pending = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__interrupt_cause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__interrupt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mret_instruction = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ecall_exception = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ebreak_exception = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_rs1_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_rs2_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_mem_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_exec_output_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_signal_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_jump_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_instr_id_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0_rd_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0_wr_enable_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0_read_enable_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0_wr_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0_read_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0_wr_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0_write_byte_enable_out = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0_load_type_out = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_rs1_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_rs2_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_rs1_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_rs2_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_exec_output_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_jump_signal_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_jump_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_instr_id_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_rd_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0_mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__forwarded_store_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0_wr_en_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0_rd_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0_rd_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0__DOT__j_signal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0__DOT__jump = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__pc_inst0__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__if_id_inst0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__if_id_inst0__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__if_id_inst0__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__if_id_inst0__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__if_id_inst0__DOT__instruction_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs1_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rs2_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__rd_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__instr_id = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_r_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_u_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_s_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_b_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_j_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_i_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__is_csr_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu_inst__DOT__decoder_inst0__DOT__func7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs1_id = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs2_id = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs1_valid_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rs2_valid_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__instr_id_ex = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rd_ex = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__rd_valid_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__stall_pipeline = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__load_use_detector_inst0__DOT__is_load_in_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__rd_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs1_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__rs2_value = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_valid_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_valid_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_valid_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__opcode_in = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_in = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_value_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_value_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rd_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__opcode_out = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__instr_id_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs1_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__id_ex_inst0__DOT__rs2_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs1_addr_ex = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs2_addr_ex = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs1_valid_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rs2_valid_ex = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_addr_mem = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_valid_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__instr_id_mem = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_addr_wb = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__rd_valid_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__wr_en_wb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__forward_b = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_inst__DOT__forwarding_unit_inst0__DOT__is_mem_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__timer_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__software_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__external_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mip = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pending = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_cause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__interrupt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mie_global = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__msip = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__mtip = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__int_ctrl_inst__DOT__meip = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__read_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__csr_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_pending = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_cause_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_pc_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mret_instruction = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__ecall_exception = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__ebreak_exception = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__timer_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__software_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__external_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__misa = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mtval = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__mip = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__csr_file_inst__DOT__cycle_counter = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__instr_id = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__pc_input = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__forward_b = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ex_mem_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_wb_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_read_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__exec_output = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_signal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__jump_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__flush_pipeline = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_pending = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_cause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__mret_instruction = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ecall_exception = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__ebreak_exception = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs1_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__rs2_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_rd_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__instr_id = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rs1_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__csr_write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__rd_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__csr_exec_inst__DOT__uimm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__instr_id = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__pc_input = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_unit_inst0__DOT__alu_inst__DOT__ALUoutput = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_value_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__exec_output_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_signal_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_addr_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_in = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_valid_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs1_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rs2_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__mem_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__exec_output_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_signal_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__jump_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__instr_id_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__ex_mem_inst0__DOT__rd_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__instr_id = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__rs2_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__wr_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__read_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__wr_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__wr_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__write_byte_enable = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu_inst__DOT__mem_unit_inst0__DOT__load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__load_instr_id = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__load_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__prev_store_instr_id = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__prev_store_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__rs2_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__store_load_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__forwarded_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__store_load_detector_inst0__DOT__addr_match = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_value_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_value_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_signal_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_addr_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_in = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__store_load_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__store_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs1_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rs2_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__exec_output_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_signal_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__jump_addr_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__instr_id_out = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__rd_valid_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__mem_wb_inst0__DOT__mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_valid_in = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_addr_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_value_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0__DOT__mem_data_in = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0__DOT__instr_id_in = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_addr_out = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0__DOT__rd_value_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0__DOT__wr_en_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_inst__DOT__wb_inst0__DOT__is_load_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__instr_mem_inst__DOT__instr_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr_mem_inst__DOT__instr_addr_p2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr_mem_inst__DOT__load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__instr_mem_inst__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr_mem_inst__DOT__instr_p2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->top__DOT__instr_mem_inst__DOT__instr_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_addr = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_offset = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__word_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__byte_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__halfword_data = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__next_word_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr_mem_inst__DOT__unnamedblk1__DOT__unnamedblk3__DOT__next_word_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_inst__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_inst__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_mem_inst__DOT__write_byte_enable = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__data_mem_inst__DOT__load_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__data_mem_inst__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_inst__DOT__wr_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_inst__DOT__rd_data_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->top__DOT__data_mem_inst__DOT__data_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__data_mem_inst__DOT__byte_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__halfword_data = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__data_mem_inst__DOT__word_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_inst__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__0__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__1__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__2__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__3__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__4__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__5__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__6__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__7__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__8__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__9__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__10__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__11__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__12__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__13__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__14__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__15__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__16__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__17__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__18__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__19__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__20__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__21__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__22__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__23__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__24__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__25__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__26__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__27__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__28__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__29__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__30__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__31__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__32__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__33__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__34__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__35__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__36__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__37__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__38__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__39__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__40__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__41__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__42__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__43__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__44__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__45__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__46__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__47__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__48__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__49__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__50__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__51__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__52__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__53__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__54__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__55__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__56__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__57__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__58__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__59__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__60__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__61__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__62__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__63__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__64__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__65__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__66__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__67__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__68__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__69__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__70__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__71__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__72__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__73__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__74__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__75__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__76__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__77__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__78__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem_inst__DOT__dump_regs__BRA__79__KET____DOT__reg_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__timer_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_inst__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__timer_inst__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__timer_inst__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_inst__DOT__read_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_inst__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__timer_inst__DOT__timer_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_inst__DOT__timer_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timer_inst__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__timer_inst__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__uart_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__uart_inst__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__uart_inst__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__read_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__uart_inst__DOT__uart_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__tx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__uart_inst__DOT__baud_div = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__uart_inst__DOT__baud_counter = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__uart_inst__DOT__tx_busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__tx_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__tx_start_pending = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__baud_reload = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__tx_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__uart_inst__DOT__tx_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__uart_inst__DOT__tx_bit_count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__uart_inst__DOT__tx_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
