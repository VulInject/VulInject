static int tipc_parse_udp_addr(struct nlattr *nla, struct udp_media_addr *addr,
u32 *scope_id)
{
struct sockaddr_storage sa;

nla_memcpy(&sa, nla, sizeof(sa));
if (sa.ss_family == AF_INET) {
struct sockaddr_in *ip4 = (struct sockaddr_in *)&sa;

addr->proto = htons(ETH_P_IP);
addr->port = ip4->sin_port;
addr->ipv4.s_addr = ip4->sin_addr.s_addr;
return 0;

} else if (sa.ss_family == AF_INET6) {
struct sockaddr_in6 *ip6 = (struct sockaddr_in6 *)&sa;

addr->proto = htons(ETH_P_IPV6);
addr->port = ip6->sin6_port;
memcpy(&addr->ipv6, &ip6->sin6_addr, sizeof(struct in6_addr));


if (scope_id) {
int atype;

atype = ipv6_addr_type(&ip6->sin6_addr);
if (__ipv6_addr_needs_scope_id(atype) &&
!ip6->sin6_scope_id) {
return -EINVAL;
}

*scope_id = ip6->sin6_scope_id ? : 0;
}

return 0;
}
return -EADDRNOTAVAIL;
}