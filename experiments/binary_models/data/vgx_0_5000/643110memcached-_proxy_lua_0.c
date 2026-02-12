static mcp_backend_wrap_t *_mcplib_backend_checkcache(lua_State *L, mcp_backend_label_t *bel) {



lua_pushlstring(L, bel->label, bel->llen);
int ret = lua_gettable(L, lua_upvalueindex(MCP_BACKEND_UPVALUE));
if (ret != LUA_TNIL) {
mcp_backend_wrap_t *be_orig = luaL_checkudata(L, -1, "mcp.backendwrap");
if (strncmp(be_orig->be->name, bel->name, MAX_NAMELEN) == 0
&& strncmp(be_orig->be->port, bel->port, MAX_PORTLEN) == 0) {

return be_orig;
} else {

lua_pop(L, 1);
}
} else {
lua_pop(L, 1); 
}

return NULL;
}