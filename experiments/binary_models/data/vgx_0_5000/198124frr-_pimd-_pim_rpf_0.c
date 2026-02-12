static pim_addr pim_rpf_find_rpf_addr(struct pim_upstream *up)
{
struct pim_ifchannel *rpf_ch;
struct pim_neighbor *neigh;
pim_addr rpf_addr;

if (!up->rpf.source_nexthop.interface) {
zlog_warn("%s: missing RPF interface for upstream (S,G)=%s",
__func__, up->sg_str);

return PIMADDR_ANY;
}

rpf_ch = pim_ifchannel_find(up->rpf.source_nexthop.interface, &up->sg);
if (rpf_ch) {
if (rpf_ch->ifassert_state == PIM_IFASSERT_I_AM_LOSER) {
return rpf_ch->ifassert_winner;
}
}



neigh = pim_if_find_neighbor(up->rpf.source_nexthop.interface,
up->rpf.source_nexthop.mrib_nexthop_addr);
if (neigh)
rpf_addr = neigh->source_addr;
else
rpf_addr = PIMADDR_ANY;

return rpf_addr;
}