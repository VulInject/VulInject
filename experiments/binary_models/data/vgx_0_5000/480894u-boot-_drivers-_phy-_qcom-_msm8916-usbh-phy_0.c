static int msm_phy_probe(struct udevice *dev)
{
struct msm_phy_priv *priv = dev_get_priv(dev);

priv->regs = dev_remap_addr(dev);
if (!priv->regs)
return -EINVAL;

priv->ehci = (struct usb_ehci *)priv->regs;
priv->ulpi_vp.port_num = 0;


priv->ulpi_vp.viewport_addr = (phys_addr_t)&priv->ehci->ulpi_viewpoint;

return 0;
}

static struct phy_ops msm_phy_ops = {
.power_on = msm_phy_power_on,
.power_off = msm_phy_power_off,
.reset = msm_phy_reset,
};