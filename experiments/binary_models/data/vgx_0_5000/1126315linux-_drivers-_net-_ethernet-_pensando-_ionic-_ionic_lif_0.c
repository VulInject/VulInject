static int ionic_set_vf_mac(struct net_device *netdev, int vf, u8 *mac)
{
struct ionic_vf_setattr_cmd vfc = { .attr = IONIC_VF_ATTR_MAC };
struct ionic_lif *lif = netdev_priv(netdev);
struct ionic *ionic = lif->ionic;
int ret;

if (!(is_zero_ether_addr(mac) || is_valid_ether_addr(mac)))
return -EINVAL;

if (!netif_device_present(netdev))
return -EBUSY;

down_write(&ionic->vf_op_lock);

if (vf >= pci_num_vf(ionic->pdev) || !ionic->vfs) {
ret = -EINVAL;
} else {
ether_addr_copy(vfc.macaddr, mac);
dev_dbg(ionic->dev, "%s: vf %d macaddr %pM\n",
__func__, vf, vfc.macaddr);

ret = ionic_set_vf_config(ionic, vf, &vfc);
if (!ret)
ether_addr_copy(ionic->vfs[vf].macaddr, mac);
}

up_write(&ionic->vf_op_lock);
return ret;
}