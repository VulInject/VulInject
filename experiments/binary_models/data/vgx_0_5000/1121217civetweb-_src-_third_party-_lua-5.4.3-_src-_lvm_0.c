static void pushclosure (lua_State *L, Proto *p, UpVal **encup, StkId base,
StkId ra) {
int nup = p->sizeupvalues;
Upvaldesc *uv = p->upvalues;
int i;
LClosure *ncl = luaF_newLclosure(L, nup);
ncl->p = p;
setclLvalue2s(L, ra, ncl);  
for (i = 0; i < nup; i++) {  
if (uv[i].instack)  
ncl->upvals[i] = luaF_findupval(L, base + uv[i].idx);
else  
ncl->upvals[i] = encup[uv[i].idx];
luaC_objbarrier(L, ncl, ncl->upvals[i]);
}
}