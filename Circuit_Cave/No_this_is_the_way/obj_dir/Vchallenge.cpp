// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchallenge.h for the primary calling header

#include "Vchallenge.h"
#include "Vchallenge__Syms.h"

//==========

void Vchallenge::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vchallenge::eval\n"); );
    Vchallenge__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("challenge.v", 3, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vchallenge::_eval_initial_loop(Vchallenge__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("challenge.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vchallenge::_sequent__TOP__1(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_sequent__TOP__1\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__challenge__DOT__r_counter_bitsel;
    // Body
    __Vdly__challenge__DOT__r_counter_bitsel = vlTOPp->challenge__DOT__r_counter_bitsel;
    __Vdly__challenge__DOT__r_counter_bitsel = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlTOPp->challenge__DOT__r_counter_bitsel)));
    if ((6U == (IData)(vlTOPp->challenge__DOT__r_counter_bitsel))) {
        vlTOPp->challenge__DOT__r_counter_addr = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->challenge__DOT__r_counter_addr)));
    }
    vlTOPp->challenge__DOT__r_counter_bitsel = __Vdly__challenge__DOT__r_counter_bitsel;
}

VL_INLINE_OPT void Vchallenge::_sequent__TOP__2(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_sequent__TOP__2\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->challenge__DOT__r_shiftreg = ((0x80U & 
                                           ((((0x47U 
                                               >= (0x7fU 
                                                   & (IData)(vlTOPp->challenge__DOT__r_counter_addr)))
                                               ? vlTOPp->challenge__DOT__memory
                                              [(0x7fU 
                                                & (IData)(vlTOPp->challenge__DOT__r_counter_addr))]
                                               : 0U) 
                                             >> (IData)(vlTOPp->challenge__DOT__r_counter_bitsel)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                >> 1U)));
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
}

VL_INLINE_OPT void Vchallenge::_combo__TOP__5(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_combo__TOP__5\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_out = ((7U == (IData)(vlTOPp->challenge__DOT__r_counter_bitsel)) 
                     & (~ (IData)(vlTOPp->i_clk)));
}

void Vchallenge::_eval(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_eval\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlTOPp->i_clk)) & (IData)(vlTOPp->__Vclklast__TOP__i_clk))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
}

VL_INLINE_OPT QData Vchallenge::_change_request(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_change_request\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vchallenge::_change_request_1(Vchallenge__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_change_request_1\n"); );
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vchallenge::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
}
#endif  // VL_DEBUG
