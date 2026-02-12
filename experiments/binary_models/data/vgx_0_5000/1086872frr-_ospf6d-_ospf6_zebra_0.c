static int ospf6_zebra_import_check_update(ZAPI_CALLBACK_ARGS)
{
struct ospf6 *ospf6;
struct zapi_route nhr;
struct prefix matched;

ospf6 = ospf6_lookup_by_vrf_id(vrf_id);
if (ospf6 == NULL || !IS_OSPF6_ASBR(ospf6))
return 0;

if (!zapi_nexthop_update_decode(zclient->ibuf, &matched, &nhr)) {
zlog_err("%s[%u]: Failure to decode route", __func__,
ospf6->vrf_id);
return -1;
}

if (matched.family != AF_INET6 || matched.prefixlen != 0 ||
nhr.type == ZEBRA_ROUTE_OSPF6)
return 0;

ospf6->nssa_default_import_check.status = !!nhr.nexthop_num;
ospf6_abr_nssa_type_7_defaults(ospf6);

return 0;
}