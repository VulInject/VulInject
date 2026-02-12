static void jh7110_pin_dbg_show(struct pinctrl_dev *pctldev,
struct seq_file *s, unsigned int pin)
{
struct jh7110_pinctrl *sfp = pinctrl_dev_get_drvdata(pctldev);
const struct jh7110_pinctrl_soc_info *info = sfp->info;

seq_printf(s, "%s", dev_name(pctldev->dev));

if (pin < sfp->gc.ngpio) {
unsigned int offset = 4 * (pin / 4);
unsigned int shift  = 8 * (pin % 4);
u32 dout = readl_relaxed(sfp->base + info->dout_reg_base + offset);
u32 doen = readl_relaxed(sfp->base + info->doen_reg_base + offset);
u32 gpi = readl_relaxed(sfp->base + info->gpi_reg_base + offset);

dout = (dout >> shift) & info->dout_mask;
doen = (doen >> shift) & info->doen_mask;
gpi = ((gpi >> shift) - 2) & info->gpi_mask;

seq_printf(s, " dout=%u doen=%u din=%u", dout, doen, gpi);
}
}