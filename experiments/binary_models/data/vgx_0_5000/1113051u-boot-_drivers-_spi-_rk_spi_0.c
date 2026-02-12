static void rkspi_set_clk(struct rockchip_spi_priv *priv, uint speed)
{

uint clk_div = DIV_ROUND_UP(priv->input_rate, speed);


if (clk_div > 0xfffe) {
clk_div = 0xfffe;
debug("%s: can't divide down to %d Hz (actual will be %d Hz)\n",
__func__, speed, priv->input_rate / clk_div);
}


clk_div = (clk_div + 1) & 0xfffe;

debug("spi speed %u, div %u\n", speed, clk_div);

clrsetbits_le32(&priv->regs->baudr, 0xffff, clk_div);
priv->last_speed_hz = speed;
}