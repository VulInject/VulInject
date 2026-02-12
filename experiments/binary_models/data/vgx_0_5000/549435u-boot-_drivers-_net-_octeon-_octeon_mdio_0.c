static int octeon_mdio_read(struct udevice *mdio_dev, int phy_addr,
int dev_addr, int reg_addr)
{
struct octeon_mdiobus *p = dev_get_priv(mdio_dev);
struct mii_dev *dev = p->mii_dev;
int value;

debug("%s(0x%p(%s): bus_id=%d phy_addr=%d, 0x%x, 0x%x) - ", __func__,
dev, dev->name, p->bus_id, phy_addr, dev_addr, reg_addr);
if (IS_ENABLED(CONFIG_PHYLIB_10G) && dev_addr != MDIO_DEVAD_NONE) {
debug("clause 45 mode\n");
value = cvmx_mdio_45_read(p->bus_id & 0xff, phy_addr, dev_addr,
reg_addr);
} else {
value = cvmx_mdio_read(p->bus_id & 0xff, phy_addr, reg_addr);
}

debug("Return value: 0x%x\n", value);
return value;
}