int rm_call_aclcheck_cmd(RedisModuleCtx *ctx, RedisModuleUser *user, RedisModuleString **argv, int argc) {
if (argc < 2) {
return RedisModule_WrongArity(ctx);
}


int ret = RedisModule_ACLCheckCommandPermissions(user, argv + 1, argc - 1);
if (ret != 0) {
RedisModule_ReplyWithError(ctx, "DENIED CMD");

RedisModule_ACLAddLogEntry(ctx, user, argv[1], REDISMODULE_ACL_LOG_CMD);
return REDISMODULE_OK;
}

const char* cmd = RedisModule_StringPtrLen(argv[1], NULL);

RedisModuleCallReply* rep = RedisModule_Call(ctx, cmd, "v", argv + 2, argc - 2);
if(!rep){
RedisModule_ReplyWithError(ctx, "NULL reply returned");
}else{
RedisModule_ReplyWithCallReply(ctx, rep);
RedisModule_FreeCallReply(rep);
}

return REDISMODULE_OK;
}