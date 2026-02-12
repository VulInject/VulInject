static void temac_adjust_link(struct net_device *ndev)
{
struct temac_local *lp = netdev_priv(ndev);
struct phy_device *phy = ndev->phydev;
u32 mii_speed;
int link_state;


link_state = phy->speed | (phy->duplex << 1) | phy->link;

mutex_lock(&lp->indirect_mutex);
if (lp->last_link != link_state) {
mii_speed = temac_indirect_in32(lp, XTE_EMCFG_OFFSET);
mii_speed &= ~XTE_EMCFG_LINKSPD_MASK;

switch (phy->speed) {
case SPEED_1000: mii_speed |= XTE_EMCFG_LINKSPD_1000; break;
case SPEED_100: mii_speed |= XTE_EMCFG_LINKSPD_100; break;
case SPEED_10: mii_speed |= XTE_EMCFG_LINKSPD_10; break;
}


temac_indirect_out32(lp, XTE_EMCFG_OFFSET, mii_speed);
lp->last_link = link_state;
phy_print_status(phy);
}
mutex_unlock(&lp->indirect_mutex);
}