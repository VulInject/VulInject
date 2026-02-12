static struct bgpevpn *evpn_create_update_vni(struct bgp *bgp, vni_t vni)
{
struct bgpevpn *vpn;
struct in_addr mcast_grp = {INADDR_ANY};

vpn = bgp_evpn_lookup_vni(bgp, vni);
if (!vpn) {

if (bgp_evpn_lookup_l3vni_l2vni_table(vni)) {
flog_err(
EC_BGP_VNI,
"%u: Failed to create L2VNI %u, it is configured as L3VNI",
bgp->vrf_id, vni);
return NULL;
}


vpn = bgp_evpn_new(bgp, vni, bgp->router_id, 0, mcast_grp, 0);
}


SET_FLAG(vpn->flags, VNI_FLAG_CFGD);
return vpn;
}