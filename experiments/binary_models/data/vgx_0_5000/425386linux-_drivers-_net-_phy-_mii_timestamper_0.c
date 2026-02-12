}
EXPORT_SYMBOL(unregister_mii_tstamp_controller);


struct mii_timestamper *register_mii_timestamper(struct device_node *node,
unsigned int port)
{
struct mii_timestamper *mii_ts = NULL;
struct mii_timestamping_desc *desc;
struct list_head *this;

mutex_lock(&tstamping_devices_lock);
list_for_each(this, &mii_timestamping_devices) {
desc = list_entry(this, struct mii_timestamping_desc, list);
if (desc->device->of_node == node) {
mii_ts = desc->ctrl->probe_channel(desc->device, port);
if (!IS_ERR(mii_ts)) {
mii_ts->device = desc->device;
get_device(desc->device);
}
break;
}
}
mutex_unlock(&tstamping_devices_lock);

return mii_ts ? mii_ts : ERR_PTR(-EPROBE_DEFER);
}