// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vfunc_top__DOT__seg__0__Vfuncout;
    __Vfunc_top__DOT__seg__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_top__DOT__seg__0__hehe;
    __Vfunc_top__DOT__seg__0__hehe = 0;
    CData/*7:0*/ __Vfunc_top__DOT__seg__1__Vfuncout;
    __Vfunc_top__DOT__seg__1__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_top__DOT__seg__1__hehe;
    __Vfunc_top__DOT__seg__1__hehe = 0;
    CData/*7:0*/ __Vfunc_top__DOT__seg__2__Vfuncout;
    __Vfunc_top__DOT__seg__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_top__DOT__seg__2__hehe;
    __Vfunc_top__DOT__seg__2__hehe = 0;
    CData/*7:0*/ __Vfunc_top__DOT__seg__3__Vfuncout;
    __Vfunc_top__DOT__seg__3__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_top__DOT__seg__3__hehe;
    __Vfunc_top__DOT__seg__3__hehe = 0;
    CData/*7:0*/ __Vfunc_top__DOT__seg__4__Vfuncout;
    __Vfunc_top__DOT__seg__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_top__DOT__seg__4__hehe;
    __Vfunc_top__DOT__seg__4__hehe = 0;
    CData/*7:0*/ __Vfunc_top__DOT__seg__5__Vfuncout;
    __Vfunc_top__DOT__seg__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_top__DOT__seg__5__hehe;
    __Vfunc_top__DOT__seg__5__hehe = 0;
    CData/*0:0*/ __Vdly__top__DOT__nextdata;
    __Vdly__top__DOT__nextdata = 0;
    CData/*2:0*/ __Vdly__top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync = 0;
    CData/*2:0*/ __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__top__DOT__ready;
    __Vdly__top__DOT__ready = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__u_ps2_keyboard__DOT__fifo__v0;
    __Vdlyvdim0__top__DOT__u_ps2_keyboard__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__u_ps2_keyboard__DOT__fifo__v0;
    __Vdlyvval__top__DOT__u_ps2_keyboard__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_ps2_keyboard__DOT__fifo__v0;
    __Vdlyvset__top__DOT__u_ps2_keyboard__DOT__fifo__v0 = 0;
    CData/*2:0*/ __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__top__DOT__u_ps2_keyboard__DOT__count;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__count = 0;
    // Body
    __Vdly__top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__nextdata = vlSelf->top__DOT__nextdata;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__count = vlSelf->top__DOT__u_ps2_keyboard__DOT__count;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr = vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__ready = vlSelf->top__DOT__ready;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr = vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr;
    __Vdlyvset__top__DOT__u_ps2_keyboard__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->top__DOT__ready) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__nextdata)))) {
            __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr)));
            if (((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr) 
                 == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr))))) {
                __Vdly__top__DOT__ready = 0U;
            }
        }
        __Vfunc_top__DOT__seg__1__hehe = (0xfU & ((IData)(vlSelf->top__DOT__segdata) 
                                                  >> 4U));
        __Vfunc_top__DOT__seg__1__Vfuncout = ((8U & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                               ? ((4U 
                                                   & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                     ? 0x71U
                                                     : 0x61U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                     ? 0x85U
                                                     : 0x63U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                     ? 0xc1U
                                                     : 0x11U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                     ? 9U
                                                     : 1U)))
                                               : ((4U 
                                                   & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                     ? 0x1fU
                                                     : 0x41U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                     ? 0x49U
                                                     : 0x99U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                     ? 0xdU
                                                     : 0x25U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__1__hehe))
                                                     ? 0x9fU
                                                     : 3U))));
        vlSelf->seg1 = __Vfunc_top__DOT__seg__1__Vfuncout;
        __Vfunc_top__DOT__seg__0__hehe = (0xfU & (IData)(vlSelf->top__DOT__segdata));
        __Vfunc_top__DOT__seg__0__Vfuncout = ((8U & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                               ? ((4U 
                                                   & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                     ? 0x71U
                                                     : 0x61U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                     ? 0x85U
                                                     : 0x63U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                     ? 0xc1U
                                                     : 0x11U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                     ? 9U
                                                     : 1U)))
                                               : ((4U 
                                                   & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                     ? 0x1fU
                                                     : 0x41U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                     ? 0x49U
                                                     : 0x99U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                     ? 0xdU
                                                     : 0x25U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__0__hehe))
                                                     ? 0x9fU
                                                     : 3U))));
        vlSelf->seg0 = __Vfunc_top__DOT__seg__0__Vfuncout;
        __Vfunc_top__DOT__seg__2__hehe = (0xfU & vlSelf->top__DOT__ascii_table
                                          [vlSelf->top__DOT__segdata]);
        __Vfunc_top__DOT__seg__2__Vfuncout = ((8U & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                               ? ((4U 
                                                   & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                     ? 0x71U
                                                     : 0x61U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                     ? 0x85U
                                                     : 0x63U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                     ? 0xc1U
                                                     : 0x11U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                     ? 9U
                                                     : 1U)))
                                               : ((4U 
                                                   & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                     ? 0x1fU
                                                     : 0x41U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                     ? 0x49U
                                                     : 0x99U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                     ? 0xdU
                                                     : 0x25U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__2__hehe))
                                                     ? 0x9fU
                                                     : 3U))));
        vlSelf->seg2 = __Vfunc_top__DOT__seg__2__Vfuncout;
        __Vfunc_top__DOT__seg__3__hehe = (0xfU & (vlSelf->top__DOT__ascii_table
                                                  [vlSelf->top__DOT__segdata] 
                                                  >> 4U));
        __Vfunc_top__DOT__seg__3__Vfuncout = ((8U & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                               ? ((4U 
                                                   & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                     ? 0x71U
                                                     : 0x61U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                     ? 0x85U
                                                     : 0x63U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                     ? 0xc1U
                                                     : 0x11U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                     ? 9U
                                                     : 1U)))
                                               : ((4U 
                                                   & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                     ? 0x1fU
                                                     : 0x41U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                     ? 0x49U
                                                     : 0x99U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                     ? 0xdU
                                                     : 0x25U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_top__DOT__seg__3__hehe))
                                                     ? 0x9fU
                                                     : 3U))));
        vlSelf->seg3 = __Vfunc_top__DOT__seg__3__Vfuncout;
    }
    if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync))))) {
        if ((0xaU == (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count))) {
            if ((((~ (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer)) 
                  & (IData)(vlSelf->ps2_data)) & VL_REDXOR_32(
                                                              (0x1ffU 
                                                               & ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer) 
                                                                  >> 1U))))) {
                __Vdlyvval__top__DOT__u_ps2_keyboard__DOT__fifo__v0 
                    = (0xffU & ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer) 
                                >> 1U));
                __Vdlyvset__top__DOT__u_ps2_keyboard__DOT__fifo__v0 = 1U;
                __Vdlyvdim0__top__DOT__u_ps2_keyboard__DOT__fifo__v0 
                    = vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr;
                __Vdly__top__DOT__ready = 1U;
                __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr)));
                vlSelf->top__DOT__u_ps2_keyboard__DOT__overflow 
                    = ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__overflow) 
                       | ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr) 
                          == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr)))));
            }
            __Vdly__top__DOT__u_ps2_keyboard__DOT__count = 0U;
        } else {
            vlSelf->top__DOT__u_ps2_keyboard__DOT____Vlvbound_h1a91ade8__0 
                = vlSelf->ps2_data;
            if ((9U >= (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count))) {
                vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count))) 
                        & (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__buffer)) 
                       | (0x3ffU & ((IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT____Vlvbound_h1a91ade8__0) 
                                    << (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count))));
            }
            __Vdly__top__DOT__u_ps2_keyboard__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ps2_keyboard__DOT__count)));
        }
    }
    __Vfunc_top__DOT__seg__5__hehe = (0xfU & ((IData)(vlSelf->top__DOT__count) 
                                              >> 4U));
    __Vfunc_top__DOT__seg__5__Vfuncout = ((8U & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                           ? ((4U & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                               ? ((2U 
                                                   & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                    ? 0x71U
                                                    : 0x61U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                    ? 0x85U
                                                    : 0x63U))
                                               : ((2U 
                                                   & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                    ? 0xc1U
                                                    : 0x11U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                    ? 9U
                                                    : 1U)))
                                           : ((4U & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                               ? ((2U 
                                                   & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                    ? 0x1fU
                                                    : 0x41U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                    ? 0x49U
                                                    : 0x99U))
                                               : ((2U 
                                                   & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                    ? 0xdU
                                                    : 0x25U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__5__hehe))
                                                    ? 0x9fU
                                                    : 3U))));
    vlSelf->seg5 = __Vfunc_top__DOT__seg__5__Vfuncout;
    __Vfunc_top__DOT__seg__4__hehe = (0xfU & (IData)(vlSelf->top__DOT__count));
    __Vfunc_top__DOT__seg__4__Vfuncout = ((8U & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                           ? ((4U & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                               ? ((2U 
                                                   & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                    ? 0x71U
                                                    : 0x61U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                    ? 0x85U
                                                    : 0x63U))
                                               : ((2U 
                                                   & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                    ? 0xc1U
                                                    : 0x11U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                    ? 9U
                                                    : 1U)))
                                           : ((4U & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                               ? ((2U 
                                                   & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                    ? 0x1fU
                                                    : 0x41U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                    ? 0x49U
                                                    : 0x99U))
                                               : ((2U 
                                                   & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                    ? 0xdU
                                                    : 0x25U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__seg__4__hehe))
                                                    ? 0x9fU
                                                    : 3U))));
    vlSelf->seg4 = __Vfunc_top__DOT__seg__4__Vfuncout;
    vlSelf->top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__u_ps2_keyboard__DOT__ps2_clk_sync;
    vlSelf->top__DOT__u_ps2_keyboard__DOT__w_ptr = __Vdly__top__DOT__u_ps2_keyboard__DOT__w_ptr;
    vlSelf->top__DOT__u_ps2_keyboard__DOT__count = __Vdly__top__DOT__u_ps2_keyboard__DOT__count;
    vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr = __Vdly__top__DOT__u_ps2_keyboard__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__u_ps2_keyboard__DOT__fifo__v0) {
        vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo[__Vdlyvdim0__top__DOT__u_ps2_keyboard__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__u_ps2_keyboard__DOT__fifo__v0;
    }
    if (((IData)(vlSelf->top__DOT__ready) & (IData)(vlSelf->top__DOT__nextdata))) {
        __Vdly__top__DOT__nextdata = 0U;
        if ((0xf0U != (IData)(vlSelf->top__DOT__kdata))) {
            vlSelf->top__DOT__segdata = vlSelf->top__DOT__kdata;
        } else {
            vlSelf->top__DOT__count = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__count)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__nextdata)))) {
        __Vdly__top__DOT__nextdata = 1U;
    }
    vlSelf->top__DOT__nextdata = __Vdly__top__DOT__nextdata;
    vlSelf->top__DOT__kdata = vlSelf->top__DOT__u_ps2_keyboard__DOT__fifo
        [vlSelf->top__DOT__u_ps2_keyboard__DOT__r_ptr];
    vlSelf->top__DOT__ready = __Vdly__top__DOT__ready;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ds24/ysyx-workbench/npc_ps2_7/vsrc/top.v", 58, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ds24/ysyx-workbench/npc_ps2_7/vsrc/top.v", 58, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
