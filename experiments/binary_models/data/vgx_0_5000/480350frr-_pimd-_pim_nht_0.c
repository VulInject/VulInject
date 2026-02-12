static struct pim_nexthop_cache *pim_nht_get(struct pim_instance *pim,
pim_addr addr)
{
struct pim_nexthop_cache *pnc = NULL;
struct pim_rpf rpf;
struct zclient *zclient = NULL;

zclient = pim_zebra_zclient_get();
memset(&rpf, 0, sizeof(rpf));
rpf.rpf_addr = addr;

pnc = pim_nexthop_cache_find(pim, &rpf);
if (!pnc) {
pnc = pim_nexthop_cache_add(pim, &rpf);
pim_sendmsg_zebra_rnh(pim, zclient, pnc,
ZEBRA_NEXTHOP_REGISTER);
if (PIM_DEBUG_PIM_NHT_DETAIL)
zlog_debug(
"%s: NHT cache and zebra notification added for %pPA(%s)",
__func__, &addr, pim->vrf->name);
}

return pnc;
}