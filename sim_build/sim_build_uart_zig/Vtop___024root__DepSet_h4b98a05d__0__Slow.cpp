// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern const VlWide<32>/*1023:0*/ Vtop__ConstPool__CONST_hed3361ac_0;
extern const VlWide<13>/*415:0*/ Vtop__ConstPool__CONST_h6ab80ee6_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x653d2573U;
    __Vtemp_1[1U] = 0x7066696cU;
    __Vtemp_1[2U] = 0x64756dU;
    if ((! VL_VALUEPLUSARGS_INW(1024, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                vlSelfRef.top__DOT__dumpfile_path))) {
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
        vlSelfRef.top__DOT__dumpfile_path[0x10U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x10U];
        vlSelfRef.top__DOT__dumpfile_path[0x11U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x11U];
        vlSelfRef.top__DOT__dumpfile_path[0x12U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x12U];
        vlSelfRef.top__DOT__dumpfile_path[0x13U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x13U];
        vlSelfRef.top__DOT__dumpfile_path[0x14U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x14U];
        vlSelfRef.top__DOT__dumpfile_path[0x15U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x15U];
        vlSelfRef.top__DOT__dumpfile_path[0x16U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x16U];
        vlSelfRef.top__DOT__dumpfile_path[0x17U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x17U];
        vlSelfRef.top__DOT__dumpfile_path[0x18U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x18U];
        vlSelfRef.top__DOT__dumpfile_path[0x19U] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x19U];
        vlSelfRef.top__DOT__dumpfile_path[0x1aU] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x1aU];
        vlSelfRef.top__DOT__dumpfile_path[0x1bU] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x1bU];
        vlSelfRef.top__DOT__dumpfile_path[0x1cU] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x1cU];
        vlSelfRef.top__DOT__dumpfile_path[0x1dU] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x1dU];
        vlSelfRef.top__DOT__dumpfile_path[0x1eU] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x1eU];
        vlSelfRef.top__DOT__dumpfile_path[0x1fU] = 
            Vtop__ConstPool__CONST_hed3361ac_0[0x1fU];
    }
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(32, vlSelfRef.top__DOT__dumpfile_path));
    VL_PRINTF_MT("-Info: /Users/lazybanana/github/zig-led/synapse32/rtl/top.v:158: $dumpvar ignored, as Verilated without --trace\n");
    VL_WRITEF_NX("FST dump file: %s\n",0,1024,vlSelfRef.top__DOT__dumpfile_path.data());
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[1U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[2U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[3U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[4U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[5U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[6U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[7U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[8U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[9U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0xaU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0xbU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0xcU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0xdU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0xeU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0xfU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x10U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x11U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x12U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x13U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x14U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x15U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x16U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x17U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x18U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x19U] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x1aU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x1bU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x1cU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x1dU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x1eU] = 0U;
    vlSelfRef.top__DOT__cpu_inst__DOT__rf_inst0__DOT__register_file[0x1fU] = 0U;
    VL_WRITEF_NX("Loading instruction memory from file: /Users/lazybanana/github/zig-led/build/instr_mem.hex\n",0);
    VL_READMEM_N(true, 32, 131072, 0, VL_CVT_PACK_STR_NW(13, Vtop__ConstPool__CONST_h6ab80ee6_0)
                 ,  &(vlSelfRef.top__DOT__instr_mem_inst__DOT__instr_ram)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__data_mem_inst__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100000U, vlSelfRef.top__DOT__data_mem_inst__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.top__DOT__data_mem_inst__DOT__data_ram[(0xfffffU 
                                                          & vlSelfRef.top__DOT__data_mem_inst__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.top__DOT__data_mem_inst__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.top__DOT__data_mem_inst__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.top__DOT__uart_inst__DOT__tx_data = 0U;
    vlSelfRef.top__DOT__uart_inst__DOT__baud_div = 0x1b2U;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_busy = 0U;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_enable = 1U;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_out = 1U;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_state = 0U;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_bit_count = 0U;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_full = 0U;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_fifo_empty = 1U;
    vlSelfRef.top__DOT__uart_inst__DOT__baud_counter = 1U;
    vlSelfRef.top__DOT__uart_inst__DOT__tx_start_pending = 0U;
    vlSelfRef.top__DOT__uart_inst__DOT__baud_reload = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
