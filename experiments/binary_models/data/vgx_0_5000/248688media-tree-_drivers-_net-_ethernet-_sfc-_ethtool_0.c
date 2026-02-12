static int
efx_ethtool_set_link_ksettings(struct net_device *net_dev,
const struct ethtool_link_ksettings *cmd)
{
struct efx_nic *efx = netdev_priv(net_dev);
int rc;


if ((cmd->base.speed == SPEED_1000) &&
(cmd->base.duplex != DUPLEX_FULL)) {
netif_dbg(efx, drv, efx->net_dev,
"rejecting unsupported 1000Mbps HD setting\n");
return -EINVAL;
}

mutex_lock(&efx->mac_lock);
rc = efx->phy_op->set_link_ksettings(efx, cmd);
mutex_unlock(&efx->mac_lock);
return rc;
}