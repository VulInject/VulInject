static void tlan_phy_power_down(struct net_device *dev)
{
struct tlan_priv	*priv = netdev_priv(dev);
u16		value;

TLAN_DBG(TLAN_DEBUG_GNRL, "%s: Powering down PHY(s).\n", dev->name);
value = MII_GC_PDOWN | MII_GC_LOOPBK | MII_GC_ISOLATE;
tlan_mii_sync(dev->base_addr);
tlan_mii_write_reg(dev, priv->phy[priv->phy_num], MII_GEN_CTL, value);
if ((priv->phy_num == 0) && (priv->phy[1] != TLAN_PHY_NONE)) {

if (priv->adapter->flags & TLAN_ADAPTER_USE_INTERN_10)
value = MII_GC_ISOLATE; 
tlan_mii_sync(dev->base_addr);
tlan_mii_write_reg(dev, priv->phy[1], MII_GEN_CTL, value);
}


tlan_set_timer(dev, msecs_to_jiffies(50), TLAN_TIMER_PHY_PUP);

}