static void incstep (lua_State *L) {
global_State *g = G(L);
l_mem debt = g->GCdebt;
int stepmul = g->gcstepmul;
if (stepmul < 40) stepmul = 40;  

debt = (debt / STEPMULADJ) + 1;
debt = (debt < MAX_LMEM / stepmul) ? debt * stepmul : MAX_LMEM;
do {  
lu_mem work = singlestep(L);  
debt -= work;
} while (debt > -GCSTEPSIZE && g->gcstate != GCSpause);
if (g->gcstate == GCSpause)
setpause(g, g->GCestimate);  
else {
debt = (debt / stepmul) * STEPMULADJ;  
luaE_setdebt(g, debt);
}
}