static irqreturn_t
ks8695_link_irq(int irq, void *dev_id)
{
struct net_device *ndev = (struct net_device *)dev_id;
struct ks8695_priv *ksp = netdev_priv(ndev);
u32 ctrl;

ctrl = readl(ksp->phyiface_regs + KS8695_WMC);
if (ctrl & WMC_WLS) {
netif_carrier_on(ndev);
if (netif_msg_link(ksp))
dev_info(ksp->dev,
"%s: Link is now up (10%sMbps/%s-duplex)\n",
ndev->name,
(ctrl & WMC_WSS) ? "0" : "",
(ctrl & WMC_WDS) ? "Full" : "Half");
} else {
netif_carrier_off(ndev);
if (netif_msg_link(ksp))
dev_info(ksp->dev, "%s: Link is now down.\n",
ndev->name);
}

return IRQ_HANDLED;
}