// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__trace_chg_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VALU___024root__trace_chg_0_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb__DOT__out),8);
        bufp->chgBit(oldp+1,(vlSelf->tb__DOT__carryout));
        bufp->chgBit(oldp+2,(vlSelf->tb__DOT__overflow));
    }
    bufp->chgCData(oldp+3,(vlSelf->tb__DOT__in1),8);
    bufp->chgCData(oldp+4,(vlSelf->tb__DOT__in2),8);
    bufp->chgCData(oldp+5,(vlSelf->tb__DOT__op),4);
    bufp->chgBit(oldp+6,(vlSelf->tb__DOT__rst));
    bufp->chgBit(oldp+7,(vlSelf->tb__DOT__clk));
}

void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_cleanup\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
