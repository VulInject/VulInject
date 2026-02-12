void omap_control_pcie_pcs(struct device *dev, u8 delay)
{
u32 val;
struct omap_control_phy	*control_phy;

if (IS_ERR(dev) || !dev) {
pr_err("%s: invalid device\n", __func__);
return;
}

control_phy = dev_get_drvdata(dev);
if (!control_phy) {
dev_err(dev, "%s: invalid control phy device\n", __func__);
return;
}

if (control_phy->type != OMAP_CTRL_TYPE_PCIE) {
dev_err(dev, "%s: unsupported operation\n", __func__);
return;
}

val = readl(control_phy->pcie_pcs);
val &= ~(OMAP_CTRL_PCIE_PCS_MASK <<
OMAP_CTRL_PCIE_PCS_DELAY_COUNT_SHIFT);
val |= (delay << OMAP_CTRL_PCIE_PCS_DELAY_COUNT_SHIFT);
writel(val, control_phy->pcie_pcs);
}