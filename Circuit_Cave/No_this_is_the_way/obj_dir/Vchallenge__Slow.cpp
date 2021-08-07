// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchallenge.h for the primary calling header

#include "Vchallenge.h"
#include "Vchallenge__Syms.h"

//==========

VL_CTOR_IMP(Vchallenge) {
    Vchallenge__Syms* __restrict vlSymsp = __VlSymsp = new Vchallenge__Syms(this, name());
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vchallenge::__Vconfigure(Vchallenge__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vchallenge::~Vchallenge() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vchallenge::_initial__TOP__3(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_initial__TOP__3\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->challenge__DOT__memory[0U] = 0x50U;
    vlTOPp->challenge__DOT__memory[1U] = 0x50U;
    vlTOPp->challenge__DOT__memory[2U] = 0x3cU;
    vlTOPp->challenge__DOT__memory[3U] = 0x77U;
    vlTOPp->challenge__DOT__memory[4U] = 0x3eU;
    vlTOPp->challenge__DOT__memory[5U] = 0x27U;
    vlTOPp->challenge__DOT__memory[6U] = 0x36U;
    vlTOPp->challenge__DOT__memory[7U] = 7U;
    vlTOPp->challenge__DOT__memory[8U] = 0x5aU;
    vlTOPp->challenge__DOT__memory[9U] = 6U;
    vlTOPp->challenge__DOT__memory[0xaU] = 0x2eU;
    vlTOPp->challenge__DOT__memory[0xbU] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0xcU] = 7U;
    vlTOPp->challenge__DOT__memory[0xdU] = 0xfU;
    vlTOPp->challenge__DOT__memory[0xeU] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0xfU] = 0x5bU;
    vlTOPp->challenge__DOT__memory[0x10U] = 0x1fU;
    vlTOPp->challenge__DOT__memory[0x11U] = 0x33U;
    vlTOPp->challenge__DOT__memory[0x12U] = 0x52U;
    vlTOPp->challenge__DOT__memory[0x13U] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0x14U] = 0x5bU;
    vlTOPp->challenge__DOT__memory[0x15U] = 6U;
    vlTOPp->challenge__DOT__memory[0x16U] = 0x36U;
    vlTOPp->challenge__DOT__memory[0x17U] = 0x27U;
    vlTOPp->challenge__DOT__memory[0x18U] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0x19U] = 0x16U;
    vlTOPp->challenge__DOT__memory[0x1aU] = 6U;
    vlTOPp->challenge__DOT__memory[0x1bU] = 0x3fU;
    vlTOPp->challenge__DOT__memory[0x1cU] = 0x27U;
    vlTOPp->challenge__DOT__memory[0x1dU] = 0x36U;
    vlTOPp->challenge__DOT__memory[0x1eU] = 0x3aU;
    vlTOPp->challenge__DOT__memory[0x1fU] = 0x1fU;
    vlTOPp->challenge__DOT__memory[0x20U] = 0x5aU;
    vlTOPp->challenge__DOT__memory[0x21U] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0x22U] = 0x2fU;
    vlTOPp->challenge__DOT__memory[0x23U] = 0x52U;
    vlTOPp->challenge__DOT__memory[0x24U] = 0xeU;
    vlTOPp->challenge__DOT__memory[0x25U] = 0x7aU;
    vlTOPp->challenge__DOT__memory[0x26U] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0x27U] = 0x32U;
    vlTOPp->challenge__DOT__memory[0x28U] = 0x5aU;
    vlTOPp->challenge__DOT__memory[0x29U] = 6U;
    vlTOPp->challenge__DOT__memory[0x2aU] = 0x33U;
    vlTOPp->challenge__DOT__memory[0x2bU] = 0x73U;
    vlTOPp->challenge__DOT__memory[0x2cU] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0x2dU] = 0x1aU;
    vlTOPp->challenge__DOT__memory[0x2eU] = 7U;
    vlTOPp->challenge__DOT__memory[0x2fU] = 0xeU;
    vlTOPp->challenge__DOT__memory[0x30U] = 0x2eU;
    vlTOPp->challenge__DOT__memory[0x31U] = 0x36U;
    vlTOPp->challenge__DOT__memory[0x32U] = 0xeU;
    vlTOPp->challenge__DOT__memory[0x33U] = 0x5bU;
    vlTOPp->challenge__DOT__memory[0x34U] = 0xfU;
    vlTOPp->challenge__DOT__memory[0x35U] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0x36U] = 0x2fU;
    vlTOPp->challenge__DOT__memory[0x37U] = 6U;
    vlTOPp->challenge__DOT__memory[0x38U] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0x39U] = 0x32U;
    vlTOPp->challenge__DOT__memory[0x3aU] = 0x1fU;
    vlTOPp->challenge__DOT__memory[0x3bU] = 7U;
    vlTOPp->challenge__DOT__memory[0x3cU] = 0x5aU;
    vlTOPp->challenge__DOT__memory[0x3dU] = 0x1aU;
    vlTOPp->challenge__DOT__memory[0x3eU] = 0x7dU;
    vlTOPp->challenge__DOT__memory[0x3fU] = 0x52U;
    vlTOPp->challenge__DOT__memory[0x40U] = 0xeU;
    vlTOPp->challenge__DOT__memory[0x41U] = 0x36U;
    vlTOPp->challenge__DOT__memory[0x42U] = 0x1aU;
    vlTOPp->challenge__DOT__memory[0x43U] = 0x3fU;
    vlTOPp->challenge__DOT__memory[0x44U] = 0xeU;
    vlTOPp->challenge__DOT__memory[0x45U] = 0x36U;
    vlTOPp->challenge__DOT__memory[0x46U] = 0x27U;
    vlTOPp->challenge__DOT__memory[0x47U] = 0x5fU;
}

void Vchallenge::_settle__TOP__4(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_settle__TOP__4\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_data = ((0x80U & (IData)(vlTOPp->challenge__DOT__r_shiftreg)) 
                      | ((0x40U & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                   << 2U)) | ((0x20U 
                                               & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                  << 4U)) 
                                              | ((0x10U 
                                                  & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                     << 2U)) 
                                                 | ((8U 
                                                     & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                        >> 3U)) 
                                                    | ((4U 
                                                        & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                           >> 1U)) 
                                                       | ((2U 
                                                           & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                              >> 4U)) 
                                                          | (1U 
                                                             & (IData)(vlTOPp->challenge__DOT__r_shiftreg)))))))));
    vlTOPp->o_out = ((7U == (IData)(vlTOPp->challenge__DOT__r_counter_bitsel)) 
                     & (~ (IData)(vlTOPp->i_clk)));
}

void Vchallenge::_eval_initial(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_eval_initial\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->_initial__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vchallenge::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::final\n"); );
    // Variables
    Vchallenge__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vchallenge::_eval_settle(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_eval_settle\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vchallenge::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    o_out = VL_RAND_RESET_I(1);
    o_data = VL_RAND_RESET_I(8);
    challenge__DOT__r_counter_bitsel = VL_RAND_RESET_I(3);
    challenge__DOT__r_counter_addr = VL_RAND_RESET_I(8);
    challenge__DOT__r_shiftreg = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<72; ++__Vi0) {
            challenge__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
