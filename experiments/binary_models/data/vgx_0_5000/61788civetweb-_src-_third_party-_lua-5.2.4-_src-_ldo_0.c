static int recover (lua_State *L, int status) {
StkId oldtop;
CallInfo *ci = findpcall(L);
if (ci == NULL) return 0;  

oldtop = restorestack(L, ci->extra);
luaF_close(L, oldtop);
seterrorobj(L, status, oldtop);
L->ci = ci;
L->allowhook = ci->u.c.old_allowhook;
L->nny = 0;  
luaD_shrinkstack(L);
L->errfunc = ci->u.c.old_errfunc;
ci->callstatus |= CIST_STAT;  
ci->u.c.status = status;  
return 1;  
}