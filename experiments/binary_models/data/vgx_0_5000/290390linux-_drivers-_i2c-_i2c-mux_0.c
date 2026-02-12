void i2c_mux_del_adapters(struct i2c_mux_core *muxc)
{
char symlink_name[20];

while (muxc->num_adapters) {
struct i2c_adapter *adap = muxc->adapter[--muxc->num_adapters];
struct i2c_mux_priv *priv = adap->algo_data;
struct device_node *np = adap->dev.of_node;

muxc->adapter[muxc->num_adapters] = NULL;

snprintf(symlink_name, sizeof(symlink_name),
"channel-%u", priv->chan_id);
sysfs_remove_link(&muxc->dev->kobj, symlink_name);

sysfs_remove_link(&priv->adap.dev.kobj, "mux_device");
i2c_del_adapter(adap);
of_node_put(np);
kfree(priv);
}
}