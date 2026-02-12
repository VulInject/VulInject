static int bcm_sf2_eth_init(struct eth_device *dev)
{
struct eth_info *eth = (struct eth_info *)(dev->priv);
struct eth_dma *dma = &(eth->dma);
struct phy_device *phydev;
int rc = 0;
int i;

rc = eth->mac_init(dev);
if (rc) {
pr_err("%s: Couldn't cofigure MAC!\n", __func__);
return rc;
}


dma->disable_dma(dma, MAC_DMA_RX);
dma->disable_dma(dma, MAC_DMA_TX);

eth->port_num = 0;
debug("Connecting PHY 0...\n");
phydev = phy_connect(miiphy_get_dev_by_name(dev->name),
-1, dev, eth->phy_interface);
if (phydev != NULL) {
eth->port[0] = phydev;
eth->port_num += 1;
} else {
debug("No PHY found for port 0\n");
}

for (i = 0; i < eth->port_num; i++)
phy_config(eth->port[i]);

return rc;
}