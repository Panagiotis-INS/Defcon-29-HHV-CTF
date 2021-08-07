// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vchallenge__Syms.h"


//======================

void Vchallenge::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vchallenge::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vchallenge__Syms* __restrict vlSymsp = static_cast<Vchallenge__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vchallenge::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vchallenge::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vchallenge__Syms* __restrict vlSymsp = static_cast<Vchallenge__Syms*>(userp);
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vchallenge::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vchallenge__Syms* __restrict vlSymsp = static_cast<Vchallenge__Syms*>(userp);
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"i_clk", false,-1);
        tracep->declBit(c+6,"o_out", false,-1);
        tracep->declBus(c+7,"o_data", false,-1, 7,0);
        tracep->declBit(c+5,"challenge i_clk", false,-1);
        tracep->declBit(c+6,"challenge o_out", false,-1);
        tracep->declBus(c+7,"challenge o_data", false,-1, 7,0);
        tracep->declBus(c+1,"challenge mem_out", false,-1, 7,0);
        tracep->declBit(c+2,"challenge mem_bitsel", false,-1);
        tracep->declBus(c+8,"challenge decoder_out", false,-1, 7,0);
        tracep->declBus(c+3,"challenge r_counter_bitsel", false,-1, 2,0);
        tracep->declBus(c+4,"challenge r_counter_addr", false,-1, 7,0);
        tracep->declBus(c+9,"challenge r_shiftreg", false,-1, 7,0);
        tracep->declBus(c+9,"challenge decoder_I i_inp", false,-1, 7,0);
        tracep->declBus(c+8,"challenge decoder_I o_out", false,-1, 7,0);
    }
}

void Vchallenge::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vchallenge::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vchallenge__Syms* __restrict vlSymsp = static_cast<Vchallenge__Syms*>(userp);
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vchallenge::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vchallenge__Syms* __restrict vlSymsp = static_cast<Vchallenge__Syms*>(userp);
    Vchallenge* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(((0x47U >= (0x7fU 
                                              & (IData)(vlTOPp->challenge__DOT__r_counter_addr)))
                                    ? vlTOPp->challenge__DOT__memory
                                   [(0x7fU & (IData)(vlTOPp->challenge__DOT__r_counter_addr))]
                                    : 0U)),8);
        tracep->fullBit(oldp+2,((1U & (((0x47U >= (0x7fU 
                                                   & (IData)(vlTOPp->challenge__DOT__r_counter_addr)))
                                         ? vlTOPp->challenge__DOT__memory
                                        [(0x7fU & (IData)(vlTOPp->challenge__DOT__r_counter_addr))]
                                         : 0U) >> (IData)(vlTOPp->challenge__DOT__r_counter_bitsel)))));
        tracep->fullCData(oldp+3,(vlTOPp->challenge__DOT__r_counter_bitsel),3);
        tracep->fullCData(oldp+4,(vlTOPp->challenge__DOT__r_counter_addr),8);
        tracep->fullBit(oldp+5,(vlTOPp->i_clk));
        tracep->fullBit(oldp+6,(vlTOPp->o_out));
        tracep->fullCData(oldp+7,(vlTOPp->o_data),8);
        tracep->fullCData(oldp+8,(((0x80U & (IData)(vlTOPp->challenge__DOT__r_shiftreg)) 
                                   | ((0x40U & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
                                                << 2U)) 
                                      | ((0x20U & ((IData)(vlTOPp->challenge__DOT__r_shiftreg) 
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
                                                        & (IData)(vlTOPp->challenge__DOT__r_shiftreg)))))))))),8);
        tracep->fullCData(oldp+9,(vlTOPp->challenge__DOT__r_shiftreg),8);
    }
}
