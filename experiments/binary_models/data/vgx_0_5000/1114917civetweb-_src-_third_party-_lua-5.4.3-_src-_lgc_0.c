static GCObject *udata2finalize (global_State *g) {
GCObject *o = g->tobefnz;  
lua_assert(tofinalize(o));
g->tobefnz = o->next;  
o->next = g->allgc;  
g->allgc = o;
resetbit(o->marked, FINALIZEDBIT);  
if (issweepphase(g))
makewhite(g, o);  
else if (getage(o) == G_OLD1)
g->firstold1 = o;  
return o;
}