static int zclient_lookup_nexthop_once(struct zclient *zlookup,
struct pim_zlookup_nexthop nexthop_tab[],
const int tab_size,
struct in_addr addr)
{
struct stream *s;
int ret;

if (PIM_DEBUG_ZEBRA) {
char addr_str[100];
pim_inet4_dump("<addr?>", addr, addr_str, sizeof(addr_str));
zlog_debug("%s: addr=%s", 
__PRETTY_FUNCTION__,
addr_str);
}


if (zlookup->sock < 0) {
zlog_err("%s %s: zclient lookup socket is not connected",
__FILE__, __PRETTY_FUNCTION__);
zclient_lookup_failed(zlookup);
return -1;
}

s = zlookup->obuf;
stream_reset(s);
zclient_create_header(s, ZEBRA_IPV4_NEXTHOP_LOOKUP_MRIB, VRF_DEFAULT);
stream_put_in_addr(s, &addr);
stream_putw_at(s, 0, stream_get_endp(s));

ret = writen(zlookup->sock, s->data, stream_get_endp(s));
if (ret < 0) {
zlog_err("%s %s: writen() failure writing to zclient lookup socket",
__FILE__, __PRETTY_FUNCTION__);
zclient_lookup_failed(zlookup);
return -2;
}
if (ret == 0) {
zlog_err("%s %s: connection closed on zclient lookup socket",
__FILE__, __PRETTY_FUNCTION__);
zclient_lookup_failed(zlookup);
return -3;
}

return zclient_read_nexthop(zlookup, nexthop_tab,
tab_size, addr);
}