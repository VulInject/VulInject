static void vrf_import_rt_free(struct vrf_irt_node *irt)
{
struct bgp *bgp_evpn = NULL;

bgp_evpn = bgp_get_evpn();
if (!bgp_evpn) {
flog_err(EC_BGP_NO_DFLT,
"vrf import rt free - evpn instance not created yet");
return;
}

hash_release(bgp_evpn->vrf_import_rt_hash, irt);
list_delete(&irt->vrfs);
XFREE(MTYPE_BGP_EVPN_VRF_IMPORT_RT, irt);
}