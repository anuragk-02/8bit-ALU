// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU__Syms.h"
#include "VALU___024root.h"

VL_INLINE_OPT VlCoroutine VALU___024root___eval_initial__TOP__Vtiming__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->tb__DOT__rst = 1U;
    vlSelf->tb__DOT__in1 = 0U;
    vlSelf->tb__DOT__in2 = 0U;
    vlSelf->tb__DOT__op = 0U;
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_alu.v", 
                                       26);
    vlSelf->tb__DOT__rst = 0U;
    vlSelf->tb__DOT__in1 = 0x19U;
    vlSelf->tb__DOT__in2 = 0x12U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       28);
    vlSelf->tb__DOT__op = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       29);
    vlSelf->tb__DOT__op = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       30);
    vlSelf->tb__DOT__op = 2U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       31);
    vlSelf->tb__DOT__op = 3U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       32);
    vlSelf->tb__DOT__op = 4U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       33);
    vlSelf->tb__DOT__op = 5U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       34);
    vlSelf->tb__DOT__op = 6U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       35);
    vlSelf->tb__DOT__op = 7U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       36);
    vlSelf->tb__DOT__op = 8U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       37);
    vlSelf->tb__DOT__op = 9U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       38);
    vlSelf->tb__DOT__op = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       39);
    vlSelf->tb__DOT__op = 0xbU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       40);
    vlSelf->tb__DOT__op = 0xcU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       41);
    vlSelf->tb__DOT__op = 0xdU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_alu.v", 
                                       44);
    VL_FINISH_MT("tb_alu.v", 44, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval_triggers__act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelf->tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
