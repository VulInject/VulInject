static void rk3x_i2c_handle_start(struct rk3x_i2c *i2c, unsigned int ipd)
{
if (!(ipd & REG_INT_START)) {
rk3x_i2c_stop(i2c, -EIO);
dev_warn(i2c->dev, "unexpected irq in START: 0x%x\n", ipd);
rk3x_i2c_clean_ipd(i2c);
return;
}


i2c_writel(i2c, REG_INT_START, REG_IPD);


i2c_writel(i2c, i2c_readl(i2c, REG_CON) & ~REG_CON_START, REG_CON);


if (i2c->mode == REG_CON_MOD_TX) {
i2c_writel(i2c, REG_INT_MBTF | REG_INT_NAKRCV, REG_IEN);
i2c->state = STATE_WRITE;
rk3x_i2c_fill_transmit_buf(i2c);
} else {

i2c_writel(i2c, REG_INT_MBRF | REG_INT_NAKRCV, REG_IEN);
i2c->state = STATE_READ;
rk3x_i2c_prepare_read(i2c);
}
}