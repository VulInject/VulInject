static void i2s_txctrl(struct i2s_reg *i2s_reg, int on)
{
unsigned int con = readl(&i2s_reg->con);
unsigned int mod = readl(&i2s_reg->mod) & ~MOD_MASK;

if (on) {
con |= CON_ACTIVE;
con &= ~CON_TXCH_PAUSE;
} else {
con |=  CON_TXCH_PAUSE;
con &= ~CON_ACTIVE;
}

writel(mod, &i2s_reg->mod);
writel(con, &i2s_reg->con);
}