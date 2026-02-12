int HelloBlock_RedisCommand(RedisModuleCtx *ctx, RedisModuleString **argv, int argc) {
if (argc != 3) return RedisModule_WrongArity(ctx);
long long delay;
long long timeout;

if (RedisModule_StringToLongLong(argv[1],&delay) != REDISMODULE_OK) {
return RedisModule_ReplyWithError(ctx,"ERR invalid count");
}

if (RedisModule_StringToLongLong(argv[2],&timeout) != REDISMODULE_OK) {
return RedisModule_ReplyWithError(ctx,"ERR invalid count");
}

pthread_t tid;
RedisModuleBlockedClient *bc = RedisModule_BlockClient(ctx,HelloBlock_Reply,HelloBlock_Timeout,HelloBlock_FreeData,timeout);


RedisModule_SetDisconnectCallback(bc,HelloBlock_Disconnected);


void **targ = RedisModule_Alloc(sizeof(void*)*2);
targ[0] = bc;
targ[1] = (void*)(unsigned long) delay;

if (pthread_create(&tid,NULL,HelloBlock_ThreadMain,targ) != 0) {
RedisModule_AbortBlock(bc);
return RedisModule_ReplyWithError(ctx,"-ERR Can't start thread");
}
return REDISMODULE_OK;
}