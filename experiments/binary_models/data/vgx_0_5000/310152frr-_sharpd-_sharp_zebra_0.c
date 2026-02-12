static int sharp_nexthop_update(ZAPI_CALLBACK_ARGS)
{
struct sharp_nh_tracker *nht;
struct zapi_route nhr;
struct prefix matched;

if (!zapi_nexthop_update_decode(zclient->ibuf, &matched, &nhr)) {
zlog_err("%s: Decode of update failed", __func__);
return 0;
}

zlog_debug("Received update for %pFX actual match: %pFX metric: %u",
&matched, &nhr.prefix, nhr.metric);

nht = sharp_nh_tracker_get(&matched);
nht->nhop_num = nhr.nexthop_num;
nht->updates++;

sharp_debug_nexthops(&nhr);

return 0;
}