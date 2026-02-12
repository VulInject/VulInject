static void rk3228_set_rmii_speed(struct rk_priv_data *bsp_priv, int speed)
{
struct device *dev = &bsp_priv->pdev->dev;

if (IS_ERR(bsp_priv->grf)) {
dev_err(dev, "Missing rockchip,grf property\n");
return;
}

if (speed == 10)
regmap_write(bsp_priv->grf, RK3228_GRF_MAC_CON1,
RK3228_GMAC_RMII_CLK_2_5M |
RK3228_GMAC_SPEED_10M);
else if (speed == 100)
regmap_write(bsp_priv->grf, RK3228_GRF_MAC_CON1,
RK3228_GMAC_RMII_CLK_25M |
RK3228_GMAC_SPEED_100M);
else
dev_err(dev, "unknown speed value for RMII! speed=%d", speed);
}

static const struct rk_gmac_ops rk3228_ops = {
.set_to_rgmii = rk3228_set_to_rgmii,
.set_to_rmii = rk3228_set_to_rmii,
.set_rgmii_speed = rk3228_set_rgmii_speed,
.set_rmii_speed = rk3228_set_rmii_speed,
};