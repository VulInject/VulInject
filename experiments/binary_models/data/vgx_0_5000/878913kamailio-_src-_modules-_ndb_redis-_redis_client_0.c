int redisc_check_auth(redisc_server_t *rsrv, char *pass)
{
redisReply *reply;
int retval = 0;

reply = redisCommand(rsrv->ctxRedis, "AUTH %s", pass);
if(!reply) {
LM_ERR("Redis authentication error\n");
return -1;
}
if (reply->type == REDIS_REPLY_ERROR) {
LM_ERR("Redis authentication error\n");
retval = -1;
}
freeReplyObject(reply);
return retval;
}