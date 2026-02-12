static int mdio_mux_i2creg_select(struct udevice *mux, int cur, int sel)
{
struct mdio_mux_i2creg_priv *priv = dev_get_priv(mux);
u8 val, val_old;


if (cur == sel)
return 0;

val_old = dm_i2c_reg_read(priv->chip, priv->reg);
val = (val_old & ~priv->mask) | (sel & priv->mask);
debug("%s: chip %s, reg %x, val %x => %x\n", __func__, priv->chip->name,
priv->reg, val_old, val);
dm_i2c_reg_write(priv->chip, priv->reg, val);

return 0;
}

static const struct mdio_mux_ops mdio_mux_i2creg_ops = {
.select = mdio_mux_i2creg_select,
};