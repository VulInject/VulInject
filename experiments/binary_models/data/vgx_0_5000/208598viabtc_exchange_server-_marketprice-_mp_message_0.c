static int load_market_kline(redisContext *context, sds key, dict_t *dict, time_t start)
{
redisReply *reply = redisCmd(context, "HGETALL %s", key);
if (reply == NULL) {
return -__LINE__;
}
for (size_t i = 0; i < reply->elements; i += 2) {
time_t timestamp = strtol(reply->element[i]->str, NULL, 0);
if (start && timestamp < start)
continue;
struct kline_info *info = kline_from_str(reply->element[i + 1]->str);
if (info) {
dict_add(dict, &timestamp, info);
}
}
freeReplyObject(reply);

return 0;
}