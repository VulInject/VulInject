static int ax_mii_probe(struct net_device *dev)
{
struct ax_device  *ax = to_ax_dev(dev);
struct phy_device *phy_dev = NULL;
int ret;


phy_dev = phy_find_first(ax->mii_bus);
if (!phy_dev) {
netdev_err(dev, "no PHY found\n");
return -ENODEV;
}

ret = phy_connect_direct(dev, phy_dev, ax_handle_link_change,
PHY_INTERFACE_MODE_MII);
if (ret) {
netdev_err(dev, "Could not attach to PHY\n");
return ret;
}


phy_dev->supported &= PHY_BASIC_FEATURES;
phy_dev->advertising = phy_dev->supported;

netdev_info(dev, "PHY driver [%s] (mii_bus:phy_addr=%s, irq=%d)\n",
phy_dev->drv->name, phydev_name(phy_dev), phy_dev->irq);

return 0;
}