static struct net_device *vsw_alloc_netdev(u8 hwaddr[],
struct vio_dev *vdev,
u64 handle,
u64 port_id)
{
struct net_device *dev;
struct vnet_port *port;
int i;

dev = alloc_etherdev_mqs(sizeof(*port), VNET_MAX_TXQS, 1);
if (!dev)
return ERR_PTR(-ENOMEM);
dev->needed_headroom = VNET_PACKET_SKIP + 8;
dev->needed_tailroom = 8;

for (i = 0; i < ETH_ALEN; i++) {
dev->dev_addr[i] = hwaddr[i];
dev->perm_addr[i] = dev->dev_addr[i];
}

sprintf(dev->name, "vif%d.%d", (int)handle, (int)port_id);

dev->netdev_ops = &vsw_ops;
dev->ethtool_ops = &vsw_ethtool_ops;
dev->watchdog_timeo = VSW_TX_TIMEOUT;

dev->hw_features = NETIF_F_HW_CSUM | NETIF_F_SG;
dev->features = dev->hw_features;


dev->min_mtu = ETH_MIN_MTU;
dev->max_mtu = VNET_MAX_MTU;

SET_NETDEV_DEV(dev, &vdev->dev);

return dev;
}