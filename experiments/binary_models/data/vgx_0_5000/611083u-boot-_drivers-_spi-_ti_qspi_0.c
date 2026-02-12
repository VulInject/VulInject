static int ti_qspi_set_speed(struct udevice *bus, uint hz)
{
struct ti_qspi_priv *priv = dev_get_priv(bus);
uint clk_div;

if (!hz)
clk_div = 0;
else
clk_div = DIV_ROUND_UP(priv->fclk, hz) - 1;


if (clk_div > QSPI_CLK_DIV_MAX)
clk_div = QSPI_CLK_DIV_MAX;

debug("ti_spi_set_speed: hz: %d, clock divider %d\n", hz, clk_div);


writel(readl(&priv->base->clk_ctrl) & ~QSPI_CLK_EN,
&priv->base->clk_ctrl);

writel(QSPI_CLK_EN | clk_div, &priv->base->clk_ctrl);

return 0;
}