// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vchallenge__Syms.h"


void Vchallenge::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vchallenge__Syms* __restrict vlSymsp = static_cast<Vchallenge__Syms*>(userp);
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vchallenge::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vchallenge__Syms* __restrict vlSymsp = static_cast<Vchallenge__Syms*>(userp);
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(((0x47U >= (0x7fU 
                                                 & (IData)(vlTOPp->challenge__DOT__r_counter_addr)))
                                       ? vlTOPp->challenge__DOT__memory
                                      [(0x7fU & (IData)(vlTOPp->challenge__DOT__r_counter_addr))]
                                       : 0U)),8);
            tracep->chgBit(oldp+1,((1U & (((0x47U >= 
                                            (0x7fU 
                                             & (IData)(vlTOPp->challenge__DOT__r_counter_addr)))
                                            ? vlTOPp->challenge__DOT__memory
                                           [(0x7fU 
                                             & (IData)(vlTOPp->challenge__DOT__r_counter_addr))]
                                            : 0U) >> (IData)(vlTOPp->challenge__DOT__r_counter_bitsel)))));
            tracep->chgCData(oldp+2,(vlTOPp->challenge__DOT__r_counter_bitsel),3);
            tracep->chgCData(oldp+3,(vlTOPp->challenge__DOT__r_counter_addr),8);
        }
        tracep->chgBit(oldp+4,(vlTOPp->i_clk));
        tracep->chgBit(oldp+5,(vlTOPp->o_out));
        tracep->chgCData(oldp+6,(vlTOPp->o_data),8);
        tracep->chgCData(oldp+7,(((0x80U & (IData)(vlTOPp->challenge__DOT__r_shiftreg)) 
                                  | ((0x40U & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                               << 2U)) 
                                     | ((0x20U & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                  << 4U)) 
                                        | ((0x10U & 
                                            ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                             << 2U)) 
                                           | ((8U & 
                                               ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                >> 3U)) 
                                              | ((4U 
                                                  & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                     >> 1U)) 
                                                 | ((2U 
                                                     & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                        >> 4U)) 
                                                    | (1U 
                                                       & (IData)(vlTOPp->challenge__DOT__r_shiftreg)))))))))),8);
        tracep->chgCData(oldp+8,(vlTOPp->challenge__DOT__r_shiftreg),8);
    }
}

void Vchallenge::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vchallenge__Syms* __restrict vlSymsp = static_cast<Vchallenge__Syms*>(userp);
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
