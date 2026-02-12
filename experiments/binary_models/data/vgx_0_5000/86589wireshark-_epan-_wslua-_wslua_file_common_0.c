int get_wth_priv_table_ref(lua_State* L, wtap *wth) {
file_priv_t *priv = (file_priv_t*) wth->priv;

if (!priv) {

luaL_error(L, "Cannot get wtap private data: it is null");
return LUA_NOREF;
}


lua_rawgeti(L, LUA_REGISTRYINDEX, priv->table_ref);

return 1;
}