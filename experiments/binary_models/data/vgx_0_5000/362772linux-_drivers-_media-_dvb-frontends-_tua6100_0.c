static int tua6100_sleep(struct dvb_frontend *fe)
{
struct tua6100_priv *priv = fe->tuner_priv;
int ret;
u8 reg0[] = { 0x00, 0x00 };
struct i2c_msg msg = { .addr = priv->i2c_address, .flags = 0, .buf = reg0, .len = 2 };

if (fe->ops.i2c_gate_ctrl)
fe->ops.i2c_gate_ctrl(fe, 1);
if ((ret = i2c_transfer (priv->i2c, &msg, 1)) != 1) {
printk("%s: i2c error\n", __func__);
}
if (fe->ops.i2c_gate_ctrl)
fe->ops.i2c_gate_ctrl(fe, 0);

return (ret == 1) ? 0 : ret;
}