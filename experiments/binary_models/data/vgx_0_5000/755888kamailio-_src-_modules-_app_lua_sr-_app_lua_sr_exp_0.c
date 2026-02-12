static int lua_sr_sqlops_query(lua_State *L)
{
str scon;
str squery;
str sres;
int ret;

if(!(_sr_lua_exp_reg_mods&SR_LUA_EXP_MOD_SQLOPS))
{
LM_WARN("weird: sqlops function executed but module not registered\n");
return app_lua_return_error(L);
}

scon.s = (char*)lua_tostring(L, -3);
squery.s = (char*)lua_tostring(L, -2);
sres.s = (char*)lua_tostring(L, -1);
if(scon.s == NULL || squery.s == NULL || sres.s == NULL)
{
LM_WARN("invalid parameters from Lua\n");
return app_lua_return_error(L);
}
scon.len = strlen(scon.s);
squery.len = strlen(squery.s);
sres.len = strlen(sres.s);

ret = _lua_sqlopsb.query(&scon, &squery, &sres);
return app_lua_return_int(L, ret);
}