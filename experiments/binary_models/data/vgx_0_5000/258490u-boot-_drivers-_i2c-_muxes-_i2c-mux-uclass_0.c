static int i2c_mux_bus_xfer(struct udevice *dev, struct i2c_msg *msg,
int nmsgs)
{
struct udevice *mux = dev->parent;
struct i2c_mux *priv = dev_get_uclass_priv(mux);
struct dm_i2c_ops *ops = i2c_get_ops(priv->i2c_bus);
int ret, ret2;

debug("%s: %s, bus %s\n", __func__, dev->name, priv->i2c_bus->name);
if (!ops->xfer)
return -ENOSYS;
ret = i2c_mux_select(dev);
if (ret)
return ret;
ret = ops->xfer(priv->i2c_bus, msg, nmsgs);
ret2 = i2c_mux_deselect(dev);

return ret ? ret : ret2;
}