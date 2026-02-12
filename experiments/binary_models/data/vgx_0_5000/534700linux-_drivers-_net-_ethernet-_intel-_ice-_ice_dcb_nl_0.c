static void
ice_dcbnl_get_pg_tc_cfg_tx(struct net_device *netdev, int prio,
u8 __always_unused *prio_type, u8 *pgid,
u8 __always_unused *bw_pct,
u8 __always_unused *up_map)
{
struct ice_pf *pf = ice_netdev_to_pf(netdev);
struct ice_port_info *pi = pf->hw.port_info;

if ((pf->dcbx_cap & DCB_CAP_DCBX_LLD_MANAGED) ||
!(pf->dcbx_cap & DCB_CAP_DCBX_VER_CEE))
return;

if (prio >= ICE_MAX_USER_PRIORITY)
return;

*pgid = pi->qos_cfg.local_dcbx_cfg.etscfg.prio_table[prio];
dev_dbg(ice_pf_to_dev(pf), "Get PG config prio=%d tc=%d\n", prio,
*pgid);
}