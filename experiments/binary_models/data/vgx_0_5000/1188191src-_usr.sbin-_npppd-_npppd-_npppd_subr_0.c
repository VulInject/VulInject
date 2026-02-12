void
in_addr_range_add_route(struct in_addr_range *range)
{
struct in_addr_range *range0;
struct in_addr dest, mask, loop;

for (range0 = range; range0 != NULL; range0 = range0->next){
dest.s_addr = htonl(range0->addr);
mask.s_addr = htonl(range0->mask);
loop.s_addr = htonl(INADDR_LOOPBACK);
in_route_add(&dest, &mask, &loop, LOOPBACK_IFNAME,
RTF_BLACKHOLE, 0);
}
log_printf(LOG_INFO, "Added routes for pooled addresses");
}