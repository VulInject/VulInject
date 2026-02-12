static void pim_show_rpf(struct vty *vty)
{
struct listnode     *up_node;
struct pim_upstream *up;
time_t               now = pim_time_monotonic_sec();

show_rpf_refresh_stats(vty, now);

vty_out(vty, "%s", VTY_NEWLINE);

vty_out(vty,
"Source          Group           RpfIface RpfAddress      RibNextHop      Metric Pref%s",
VTY_NEWLINE);

for (ALL_LIST_ELEMENTS_RO(qpim_upstream_list, up_node, up)) {
char src_str[100];
char grp_str[100];
char rpf_addr_str[100];
char rib_nexthop_str[100];
const char *rpf_ifname;
struct pim_rpf  *rpf = &up->rpf;

pim_inet4_dump("<src?>", up->source_addr, src_str, sizeof(src_str));
pim_inet4_dump("<grp?>", up->group_addr, grp_str, sizeof(grp_str));
pim_inet4_dump("<rpf?>", rpf->rpf_addr, rpf_addr_str, sizeof(rpf_addr_str));
pim_inet4_dump("<nexthop?>", rpf->source_nexthop.mrib_nexthop_addr, rib_nexthop_str, sizeof(rib_nexthop_str));

rpf_ifname = rpf->source_nexthop.interface ? rpf->source_nexthop.interface->name : "<ifname?>";

vty_out(vty, "%-15s %-15s %-8s %-15s %-15s %6d %4d%s",
src_str,
grp_str,
rpf_ifname,
rpf_addr_str,
rib_nexthop_str,
rpf->source_nexthop.mrib_route_metric,
rpf->source_nexthop.mrib_metric_preference,
VTY_NEWLINE);
}
}