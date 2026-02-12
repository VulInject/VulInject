static void stop(struct net_device *dev)
{
struct fs_enet_private *fep = netdev_priv(dev);
const struct fs_platform_info *fpi = fep->fpi;
struct fec __iomem *fecp = fep->fec.fecp;

struct fec_info *feci = dev->phydev->mdio.bus->priv;

int i;

if ((FR(fecp, ecntrl) & FEC_ECNTRL_ETHER_EN) == 0)
return;		

FW(fecp, x_cntrl, 0x01);	
for (i = 0; ((FR(fecp, ievent) & 0x10000000) == 0) &&
i < FEC_RESET_DELAY; i++)
udelay(1);

if (i == FEC_RESET_DELAY)
dev_warn(fep->dev, "FEC timeout on graceful transmit stop\n");

FW(fecp, imask, 0);
FC(fecp, ecntrl, FEC_ECNTRL_ETHER_EN);

fs_cleanup_bds(dev);


if (fpi->has_phy) {
FS(fecp, r_cntrl, fpi->use_rmii ?
FEC_RCNTRL_RMII_MODE :
FEC_RCNTRL_MII_MODE);	
FS(fecp, ecntrl, FEC_ECNTRL_PINMUX | FEC_ECNTRL_ETHER_EN);
FW(fecp, ievent, FEC_ENET_MII);
FW(fecp, mii_speed, feci->mii_speed);
}
}