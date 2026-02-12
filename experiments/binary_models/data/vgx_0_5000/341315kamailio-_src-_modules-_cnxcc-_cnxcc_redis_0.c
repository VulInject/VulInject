static struct redis *__redis_connect_async(struct redis *redis)
{
redis->eb = event_base_new();

LM_INFO("Connecting (ASYNC) to Redis at %s:%d\n", redis->ip, redis->port);

redis->async_ctxt = redisAsyncConnect(redis->ip, redis->port);

if(redis->async_ctxt->err) {
LM_ERR("%s\n", redis->async_ctxt->errstr);
return NULL;
}

redisLibeventAttach(redis->async_ctxt, redis->eb);

redisAsyncSetConnectCallback(redis->async_ctxt, __async_connect_cb);
redisAsyncSetDisconnectCallback(redis->async_ctxt, __async_disconnect_cb);

redisAsyncCommand(redis->async_ctxt, NULL, NULL, "SELECT %d", redis->db);
__redis_subscribe_to_kill_list(redis);

event_base_dispatch(redis->eb);
return redis;
}