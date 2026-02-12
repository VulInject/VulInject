int i40evf_lan_add_device(struct i40evf_adapter *adapter)
{
struct i40e_device *ldev;
int ret = 0;

mutex_lock(&i40evf_device_mutex);
list_for_each_entry(ldev, &i40evf_devices, list) {
if (ldev->vf == adapter) {
ret = -EEXIST;
goto out;
}
}
ldev = kzalloc(sizeof(*ldev), GFP_KERNEL);
if (!ldev) {
ret = -ENOMEM;
goto out;
}
ldev->vf = adapter;
INIT_LIST_HEAD(&ldev->list);
list_add(&ldev->list, &i40evf_devices);
dev_info(&adapter->pdev->dev, "Added LAN device bus=0x%02x dev=0x%02x func=0x%02x\n",
adapter->hw.bus.bus_id, adapter->hw.bus.device,
adapter->hw.bus.func);


adapter->flags |= I40EVF_FLAG_SERVICE_CLIENT_REQUESTED;

out:
mutex_unlock(&i40evf_device_mutex);
return ret;
}