static int cdns_dphy_rx_configure(struct phy *phy,
union phy_configure_opts *opts)
{
struct cdns_dphy_rx *dphy = phy_get_drvdata(phy);
unsigned int reg, lanes = opts->mipi_dphy.lanes;
int band_ctrl, ret;


if (lanes < DPHY_LANES_MIN || lanes > DPHY_LANES_MAX)
return -EINVAL;

band_ctrl = cdns_dphy_rx_get_band_ctrl(opts->mipi_dphy.hs_clk_rate);
if (band_ctrl < 0)
return band_ctrl;

reg = FIELD_PREP(DPHY_BAND_CFG_LEFT_BAND, band_ctrl) |
FIELD_PREP(DPHY_BAND_CFG_RIGHT_BAND, band_ctrl);
writel(reg, dphy->regs + DPHY_BAND_CFG);


reg = DPHY_POWER_ISLAND_EN_DATA_VAL;
writel(reg, dphy->regs + DPHY_POWER_ISLAND_EN_DATA);
reg = DPHY_POWER_ISLAND_EN_CLK_VAL;
writel(reg, dphy->regs + DPHY_POWER_ISLAND_EN_CLK);

ret = cdns_dphy_rx_wait_lane_ready(dphy, lanes);
if (ret) {
dev_err(dphy->dev, "DPHY wait for lane ready timeout\n");
return ret;
}

return 0;
}