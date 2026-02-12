static void mtk_gmac0_rgmii_adjust(struct mtk_eth *eth,
phy_interface_t interface, int speed)
{
u32 val;
int ret;

if (interface == PHY_INTERFACE_MODE_TRGMII) {
mtk_w32(eth, TRGMII_MODE, INTF_MODE);
val = 500000000;
ret = clk_set_rate(eth->clks[MTK_CLK_TRGPLL], val);
if (ret)
dev_err(eth->dev, "Failed to set trgmii pll: %d\n", ret);
return;
}

val = (speed == SPEED_1000) ?
INTF_MODE_RGMII_1000 : INTF_MODE_RGMII_10_100;
mtk_w32(eth, val, INTF_MODE);

regmap_update_bits(eth->ethsys, ETHSYS_CLKCFG0,
ETHSYS_TRGMII_CLK_SEL362_5,
ETHSYS_TRGMII_CLK_SEL362_5);

val = (speed == SPEED_1000) ? 250000000 : 500000000;
ret = clk_set_rate(eth->clks[MTK_CLK_TRGPLL], val);
if (ret)
dev_err(eth->dev, "Failed to set trgmii pll: %d\n", ret);

val = (speed == SPEED_1000) ?
RCK_CTRL_RGMII_1000 : RCK_CTRL_RGMII_10_100;
mtk_w32(eth, val, TRGMII_RCK_CTRL);

val = (speed == SPEED_1000) ?
TCK_CTRL_RGMII_1000 : TCK_CTRL_RGMII_10_100;
mtk_w32(eth, val, TRGMII_TCK_CTRL);
}