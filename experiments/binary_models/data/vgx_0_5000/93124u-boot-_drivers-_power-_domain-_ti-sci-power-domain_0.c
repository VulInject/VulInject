static int ti_sci_power_domain_on(struct power_domain *pd)
{
struct ti_sci_power_domain_data *data = dev_get_priv(pd->dev);
const struct ti_sci_handle *sci = data->sci;
const struct ti_sci_dev_ops *dops = &sci->ops.dev_ops;
u8 flags = (uintptr_t)pd->priv;
int ret;

debug("%s(pd=%p)\n", __func__, pd);

if (flags & TI_SCI_PD_EXCLUSIVE)
ret = dops->get_device_exclusive(sci, pd->id);
else
ret = dops->get_device(sci, pd->id);

if (ret)
dev_err(pd->dev, "%s: get_device(%lu) failed (%d)\n",
__func__, pd->id, ret);

return ret;
}