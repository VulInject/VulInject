void luaD_shrinkstack (lua_State *L) {
int inuse = stackinuse(L);
int goodsize = inuse + (inuse / 8) + 2*EXTRA_STACK;
if (goodsize > LUAI_MAXSTACK)
goodsize = LUAI_MAXSTACK;  
if (L->stacksize > LUAI_MAXSTACK)  
luaE_freeCI(L);  
else
luaE_shrinkCI(L);  

if (inuse <= (LUAI_MAXSTACK - EXTRA_STACK) &&
goodsize < L->stacksize)
luaD_reallocstack(L, goodsize);
else  
condmovestack(L,{},{});  
}