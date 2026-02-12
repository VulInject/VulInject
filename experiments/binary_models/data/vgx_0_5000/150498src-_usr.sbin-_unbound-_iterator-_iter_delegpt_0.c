int delegpt_add_target_mlc(struct delegpt* dp, uint8_t* name, size_t namelen,
struct sockaddr_storage* addr, socklen_t addrlen, uint8_t bogus,
uint8_t lame)
{
struct delegpt_ns* ns = delegpt_find_ns(dp, name, namelen);
log_assert(dp->dp_type_mlc);
if(!ns) {

return 1;
}
if(!lame) {
if(addr_is_ip6(addr, addrlen))
ns->got6 = 1;
else	ns->got4 = 1;
if(ns->got4 && ns->got6)
ns->resolved = 1;
} else {
if(addr_is_ip6(addr, addrlen))
ns->done_pside6 = 1;
else	ns->done_pside4 = 1;
}
log_assert(ns->port>0);
return delegpt_add_addr_mlc(dp, addr, addrlen, bogus, lame,
ns->tls_auth_name, ns->port);
}