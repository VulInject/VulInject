static int amdgpu_show_powershift_percent(struct device *dev,
char *buf, bool dgpu_share)
{
struct drm_device *ddev = dev_get_drvdata(dev);
struct amdgpu_device *adev = drm_to_adev(ddev);
uint32_t ss_power;
int r = 0, i;

r = amdgpu_device_read_powershift(adev, &ss_power, dgpu_share);
if (r == -EOPNOTSUPP) {

adev = NULL;
mutex_lock(&mgpu_info.mutex);
for (i = 0; i < mgpu_info.num_gpu; i++) {
if (mgpu_info.gpu_ins[i].adev->flags & AMD_IS_APU) {
adev = mgpu_info.gpu_ins[i].adev;
break;
}
}
mutex_unlock(&mgpu_info.mutex);
if (adev)
r = amdgpu_device_read_powershift(adev, &ss_power, dgpu_share);
}

if (!r)
r = sysfs_emit(buf, "%u%%\n", ss_power);

return r;
}