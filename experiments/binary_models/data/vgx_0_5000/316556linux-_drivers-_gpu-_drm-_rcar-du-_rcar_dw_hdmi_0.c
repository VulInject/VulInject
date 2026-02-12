static int rcar_hdmi_phy_configure(struct dw_hdmi *hdmi, void *data,
unsigned long mpixelclock)
{
const struct rcar_hdmi_phy_params *params = rcar_hdmi_phy_params;

for (; params->mpixelclock != ~0UL; ++params) {
if (mpixelclock <= params->mpixelclock)
break;
}

if (params->mpixelclock == ~0UL)
return -EINVAL;

dw_hdmi_phy_i2c_write(hdmi, params->opmode_div,
RCAR_HDMI_PHY_OPMODE_PLLCFG);
dw_hdmi_phy_i2c_write(hdmi, params->curr_gmp,
RCAR_HDMI_PHY_PLLCURRGMPCTRL);
dw_hdmi_phy_i2c_write(hdmi, params->div, RCAR_HDMI_PHY_PLLDIVCTRL);

return 0;
}

static const struct dw_hdmi_plat_data rcar_dw_hdmi_plat_data = {
.output_port = 1,
.mode_valid = rcar_hdmi_mode_valid,
.configure_phy	= rcar_hdmi_phy_configure,
};