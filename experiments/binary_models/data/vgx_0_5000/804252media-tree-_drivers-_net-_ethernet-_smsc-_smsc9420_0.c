static void smsc9420_phy_update_flowcontrol(struct smsc9420_pdata *pd)
{
struct net_device *dev = pd->dev;
struct phy_device *phy_dev = dev->phydev;
u32 flow;

if (phy_dev->duplex == DUPLEX_FULL) {
u16 lcladv = phy_read(phy_dev, MII_ADVERTISE);
u16 rmtadv = phy_read(phy_dev, MII_LPA);
u8 cap = mii_resolve_flowctrl_fdx(lcladv, rmtadv);

if (cap & FLOW_CTRL_RX)
flow = 0xFFFF0002;
else
flow = 0;

netif_info(pd, link, pd->dev, "rx pause %s, tx pause %s\n",
cap & FLOW_CTRL_RX ? "enabled" : "disabled",
cap & FLOW_CTRL_TX ? "enabled" : "disabled");
} else {
netif_info(pd, link, pd->dev, "half duplex\n");
flow = 0;
}

smsc9420_reg_write(pd, FLOW, flow);
}