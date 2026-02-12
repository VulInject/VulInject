int dell_smbios_register_device(struct device *d, void *call_fn)
{
struct smbios_device *priv;

priv = devm_kzalloc(d, sizeof(struct smbios_device), GFP_KERNEL);
if (!priv)
return -ENOMEM;
get_device(d);
priv->device = d;
priv->call_fn = call_fn;
mutex_lock(&smbios_mutex);
list_add_tail(&priv->list, &smbios_device_list);
mutex_unlock(&smbios_mutex);
dev_dbg(d, "Added device: %s\n", d->driver->name);
return 0;
}