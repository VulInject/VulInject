isis_zebra_route_del_ipv4 (struct prefix *prefix,
struct isis_route_info *route_info)
{
struct zapi_ipv4 api;
struct prefix_ipv4 prefix4;

if (vrf_bitmap_check (zclient->redist[ZEBRA_ROUTE_ISIS], VRF_DEFAULT))
{
api.vrf_id = VRF_DEFAULT;
api.type = ZEBRA_ROUTE_ISIS;
api.flags = 0;
api.message = 0;
api.safi = SAFI_UNICAST;
prefix4.family = AF_INET;
prefix4.prefixlen = prefix->prefixlen;
prefix4.prefix = prefix->u.prefix4;
zapi_ipv4_route (ZEBRA_IPV4_ROUTE_DELETE, zclient, &prefix4, &api);
}
UNSET_FLAG (route_info->flag, ISIS_ROUTE_FLAG_ZEBRA_SYNCED);

return;
}