LUA_API int lua_resume (lua_State *L, lua_State *from, int nargs) {
int status;
int oldnny = L->nny;  
lua_lock(L);
luai_userstateresume(L, nargs);
L->nCcalls = (from) ? from->nCcalls + 1 : 1;
L->nny = 0;  
api_checknelems(L, (L->status == LUA_OK) ? nargs + 1 : nargs);
status = luaD_rawrunprotected(L, resume, L->top - nargs);
if (status == -1)  
status = LUA_ERRRUN;
else {  
while (status != LUA_OK && status != LUA_YIELD) {  
if (recover(L, status))  
status = luaD_rawrunprotected(L, unroll, NULL);  
else {  
L->status = cast_byte(status);  
seterrorobj(L, status, L->top);
L->ci->top = L->top;
break;
}
}
lua_assert(status == L->status);
}
L->nny = oldnny;  
L->nCcalls--;
lua_assert(L->nCcalls == ((from) ? from->nCcalls : 0));
lua_unlock(L);
return status;
}