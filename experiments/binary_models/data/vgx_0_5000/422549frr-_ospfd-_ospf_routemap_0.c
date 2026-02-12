static enum route_map_cmd_result_t
route_match_ip_next_hop_prefix_list(void *rule, const struct prefix *prefix,
void *object)
{
struct prefix_list *plist;
struct external_info *ei = object;
struct prefix_ipv4 p;

p.family = AF_INET;
p.prefix = ei->nexthop;
p.prefixlen = IPV4_MAX_BITLEN;

plist = prefix_list_lookup(AFI_IP, (char *)rule);
if (plist == NULL) {
if (CHECK_FLAG(rmap_debug, DEBUG_ROUTEMAP_DETAIL))
zlog_debug(
"%s: Prefix List %s specified does not exist defaulting to NO_MATCH",
__func__, (char *)rule);
return RMAP_NOMATCH;
}

return (prefix_list_apply(plist, &p) == PREFIX_DENY ? RMAP_NOMATCH
: RMAP_MATCH);
}