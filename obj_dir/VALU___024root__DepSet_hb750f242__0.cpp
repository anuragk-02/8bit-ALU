// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU___024root.h"

VlCoroutine VALU___024root___eval_initial__TOP__Vtiming__0(VALU___024root* vlSelf);
VlCoroutine VALU___024root___eval_initial__TOP__Vtiming__1(VALU___024root* vlSelf);

void VALU___024root___eval_initial(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial\n"); );
    // Body
    VALU___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VALU___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelf->tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine VALU___024root___eval_initial__TOP__Vtiming__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_alu.v", 
                                           50);
        vlSelf->tb__DOT__clk = (1U & (~ (IData)(vlSelf->tb__DOT__clk)));
    }
}

void VALU___024root___eval_act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VALU___024root___nba_sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb__DOT__rst) {
        vlSelf->tb__DOT__carryout = 0U;
        vlSelf->tb__DOT__out = 0U;
        vlSelf->tb__DOT__overflow = 0U;
    } else {
        vlSelf->tb__DOT__carryout = 0U;
        if ((1U & (~ ((IData)(vlSelf->tb__DOT__op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->tb__DOT__op) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->tb__DOT__op) 
                              >> 1U)))) {
                    vlSelf->tb__DOT__carryout = (1U 
                                                 & ((1U 
                                                     & (IData)(vlSelf->tb__DOT__op))
                                                     ? 
                                                    (1U 
                                                     & (((IData)(vlSelf->tb__DOT__in1) 
                                                         - (IData)(vlSelf->tb__DOT__in2)) 
                                                        >> 8U))
                                                     : 
                                                    (1U 
                                                     & (((IData)(vlSelf->tb__DOT__in1) 
                                                         + (IData)(vlSelf->tb__DOT__in2)) 
                                                        >> 8U))));
                }
            }
        }
        vlSelf->tb__DOT__overflow = 0U;
        if ((8U & (IData)(vlSelf->tb__DOT__op))) {
            if ((4U & (IData)(vlSelf->tb__DOT__op))) {
                if ((1U & (~ ((IData)(vlSelf->tb__DOT__op) 
                              >> 1U)))) {
                    vlSelf->tb__DOT__out = (0xffU & 
                                            ((1U & (IData)(vlSelf->tb__DOT__op))
                                              ? (((IData)(vlSelf->tb__DOT__in1) 
                                                  == (IData)(vlSelf->tb__DOT__in2))
                                                  ? 1U
                                                  : 0U)
                                              : (((IData)(vlSelf->tb__DOT__in1) 
                                                  > (IData)(vlSelf->tb__DOT__in2))
                                                  ? 1U
                                                  : 0U)));
                }
            } else {
                vlSelf->tb__DOT__out = (0xffU & ((2U 
                                                  & (IData)(vlSelf->tb__DOT__op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->tb__DOT__op))
                                                   ? 
                                                  ((0x80U 
                                                    & ((IData)(vlSelf->tb__DOT__in1) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & ((IData)(vlSelf->tb__DOT__in1) 
                                                         >> 1U)))
                                                   : 
                                                  ((0xfeU 
                                                    & ((IData)(vlSelf->tb__DOT__in1) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->tb__DOT__in1) 
                                                         >> 7U))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->tb__DOT__op))
                                                   ? 
                                                  VL_SHIFTR_III(8,8,32, (IData)(vlSelf->tb__DOT__out), 1U)
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelf->tb__DOT__out), 1U))));
            }
        } else if ((4U & (IData)(vlSelf->tb__DOT__op))) {
            vlSelf->tb__DOT__out = (0xffU & ((2U & (IData)(vlSelf->tb__DOT__op))
                                              ? ((1U 
                                                  & (IData)(vlSelf->tb__DOT__op))
                                                  ? 
                                                 (~ (IData)(vlSelf->tb__DOT__in1))
                                                  : 
                                                 ((IData)(vlSelf->tb__DOT__in1) 
                                                  ^ (IData)(vlSelf->tb__DOT__in2)))
                                              : ((1U 
                                                  & (IData)(vlSelf->tb__DOT__op))
                                                  ? 
                                                 ((IData)(vlSelf->tb__DOT__in1) 
                                                  | (IData)(vlSelf->tb__DOT__in2))
                                                  : 
                                                 ((IData)(vlSelf->tb__DOT__in1) 
                                                  & (IData)(vlSelf->tb__DOT__in2)))));
        } else if ((2U & (IData)(vlSelf->tb__DOT__op))) {
            if ((1U & (IData)(vlSelf->tb__DOT__op))) {
                if ((0U == (IData)(vlSelf->tb__DOT__in2))) {
                    vlSelf->tb__DOT__out = 0xffU;
                    vlSelf->tb__DOT__overflow = 1U;
                } else {
                    vlSelf->tb__DOT__out = (0xffU & 
                                            VL_DIV_III(8, (IData)(vlSelf->tb__DOT__in1), (IData)(vlSelf->tb__DOT__in2)));
                }
            } else {
                vlSelf->tb__DOT__out = (0xffU & ((IData)(vlSelf->tb__DOT__in1) 
                                                 * (IData)(vlSelf->tb__DOT__in2)));
                vlSelf->tb__DOT__overflow = (0xffU 
                                             < ((IData)(vlSelf->tb__DOT__in1) 
                                                * (IData)(vlSelf->tb__DOT__in2)));
            }
        } else {
            vlSelf->tb__DOT__out = (0xffU & ((1U & (IData)(vlSelf->tb__DOT__op))
                                              ? ((IData)(vlSelf->tb__DOT__in1) 
                                                 - (IData)(vlSelf->tb__DOT__in2))
                                              : ((IData)(vlSelf->tb__DOT__in1) 
                                                 + (IData)(vlSelf->tb__DOT__in2))));
        }
        if (((0U == (IData)(vlSelf->tb__DOT__op)) | 
             (1U == (IData)(vlSelf->tb__DOT__op)))) {
            vlSelf->tb__DOT__overflow = (((1U & ((IData)(vlSelf->tb__DOT__in1) 
                                                 >> 7U)) 
                                          == (1U & 
                                              ((IData)(vlSelf->tb__DOT__in2) 
                                               >> 7U))) 
                                         & ((1U & ((IData)(vlSelf->tb__DOT__out) 
                                                   >> 7U)) 
                                            != (1U 
                                                & ((IData)(vlSelf->tb__DOT__in1) 
                                                   >> 7U))));
        }
    }
}

void VALU___024root___eval_nba(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VALU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VALU___024root___timing_resume(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VALU___024root___eval_triggers__act(VALU___024root* vlSelf);

bool VALU___024root___eval_phase__act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VALU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VALU___024root___timing_resume(vlSelf);
        VALU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VALU___024root___eval_phase__nba(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VALU___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__nba(VALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VALU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_alu.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_alu.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VALU___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VALU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
