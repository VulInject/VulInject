static void mvs_64xx_phy_disable(struct mvs_info *mvi, u32 phy_id)
{
void __iomem *regs = mvi->regs;
u32 tmp;
if (!(mvi->flags & MVF_FLAG_SOC)) {
u32 offs;
if (phy_id < 4)
offs = PCR_PHY_CTL;
else {
offs = PCR_PHY_CTL2;
phy_id -= 4;
}
pci_read_config_dword(mvi->pdev, offs, &tmp);
tmp |= 1U << (PCTL_PHY_DSBL_OFFS + phy_id);
pci_write_config_dword(mvi->pdev, offs, tmp);
} else {
tmp = mr32(MVS_PHY_CTL);
tmp |= 1U << (PCTL_PHY_DSBL_OFFS + phy_id);
mw32(MVS_PHY_CTL, tmp);
}
}