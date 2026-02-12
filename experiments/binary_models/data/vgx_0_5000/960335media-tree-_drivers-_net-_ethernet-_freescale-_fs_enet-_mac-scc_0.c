static void stop(struct net_device *dev)
{
struct fs_enet_private *fep = netdev_priv(dev);
scc_t __iomem *sccp = fep->scc.sccp;
int i;

for (i = 0; (R16(sccp, scc_sccm) == 0) && i < SCC_RESET_DELAY; i++)
udelay(1);

if (i == SCC_RESET_DELAY)
dev_warn(fep->dev, "SCC timeout on graceful transmit stop\n");

W16(sccp, scc_sccm, 0);
C32(sccp, scc_gsmrl, SCC_GSMRL_ENR | SCC_GSMRL_ENT);

fs_cleanup_bds(dev);
}