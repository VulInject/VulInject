static int luaRedisSetReplCommand(lua_State *lua) {
int flags, argc = lua_gettop(lua);

scriptRunCtx* rctx = luaGetFromRegistry(lua, REGISTRY_RUN_CTX_NAME);
serverAssert(rctx); 

if (argc != 1) {
luaPushError(lua, "redis.set_repl() requires one argument.");
return luaError(lua);
}

flags = lua_tonumber(lua,-1);
if ((flags & ~(PROPAGATE_AOF|PROPAGATE_REPL)) != 0) {
luaPushError(lua, "Invalid replication flags. Use REPL_AOF, REPL_REPLICA, REPL_ALL or REPL_NONE.");
return luaError(lua);
}

scriptSetRepl(rctx, flags);
return 0;
}