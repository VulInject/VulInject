void LJ_FASTCALL lj_ccallback_leave(CTState *cts, TValue *o)
{
lua_State *L = cts->L;
GCfunc *fn;
TValue *obase = L->base;
L->base = L->top;  
if (o >= L->base) {

fn = curr_func(L);
if (isluafunc(fn)) {
GCproto *pt = funcproto(fn);
setcframe_pc(L->cframe, proto_bc(pt)+pt->sizebc+1);
}
}
callback_conv_result(cts, L, o);

L->top -= 2+2*LJ_FR2;
L->base = obase;
L->cframe = cframe_prev(L->cframe);
cts->cb.slot = 0;  
}