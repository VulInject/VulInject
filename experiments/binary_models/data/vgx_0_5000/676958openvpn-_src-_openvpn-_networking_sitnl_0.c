static int
sitnl_route_add(const char *iface, sa_family_t af_family, const void *dst,
int prefixlen, const void *gw, uint32_t table, int metric)
{
enum rt_scope_t scope = RT_SCOPE_UNIVERSE;
int ifindex = 0;

if (iface)
{
ifindex = if_nametoindex(iface);
if (ifindex == 0)
{
msg(M_WARN | M_ERRNO, "%s: rtnl: can't get ifindex for %s",
__func__, iface);
return -ENOENT;
}
}

if (table == 0)
{
table = RT_TABLE_MAIN;
}

if (!gw && iface)
{
scope = RT_SCOPE_LINK;
}

return sitnl_route_set(RTM_NEWROUTE, NLM_F_CREATE, ifindex,
af_family, dst, prefixlen, gw, table, metric, scope,
RTPROT_BOOT, RTN_UNICAST);
}