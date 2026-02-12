static void a_idle(struct isp1301 *isp, const char *tag)
{
u32 l;

if (isp->phy.otg->state == OTG_STATE_A_IDLE)
return;

isp->phy.otg->default_a = 1;
if (isp->phy.otg->host) {
isp->phy.otg->host->is_b_host = 0;
host_suspend(isp);
}
if (isp->phy.otg->gadget) {
isp->phy.otg->gadget->is_a_peripheral = 1;
gadget_suspend(isp);
}
isp->phy.otg->state = OTG_STATE_A_IDLE;
l = omap_readl(OTG_CTRL) & OTG_XCEIV_OUTPUTS;
omap_writel(l, OTG_CTRL);
isp->last_otg_ctrl = l;
pr_debug("  --> %s/%s\n", state_name(isp), tag);
}