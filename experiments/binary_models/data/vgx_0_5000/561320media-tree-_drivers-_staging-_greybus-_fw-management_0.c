static long fw_mgmt_ioctl_unlocked(struct file *file, unsigned int cmd,
unsigned long arg)
{
struct fw_mgmt *fw_mgmt = file->private_data;
struct gb_bundle *bundle = fw_mgmt->connection->bundle;
int ret = -ENODEV;


mutex_lock(&fw_mgmt->mutex);
if (!fw_mgmt->disabled) {
ret = gb_pm_runtime_get_sync(bundle);
if (!ret) {
ret = fw_mgmt_ioctl(fw_mgmt, cmd, (void __user *)arg);
gb_pm_runtime_put_autosuspend(bundle);
}
}
mutex_unlock(&fw_mgmt->mutex);

return ret;
}