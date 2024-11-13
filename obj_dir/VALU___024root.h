// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VALU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VALU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__rst;
    CData/*0:0*/ tb__DOT__clk;
    CData/*7:0*/ tb__DOT__in1;
    CData/*7:0*/ tb__DOT__in2;
    CData/*3:0*/ tb__DOT__op;
    CData/*7:0*/ tb__DOT__out;
    CData/*0:0*/ tb__DOT__carryout;
    CData/*0:0*/ tb__DOT__overflow;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU___024root(VALU__Syms* symsp, const char* v__name);
    ~VALU___024root();
    VL_UNCOPYABLE(VALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
