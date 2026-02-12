struct amdgpu_device *
svm_range_get_adev_by_id(struct svm_range *prange, uint32_t gpu_id)
{
struct kfd_process_device *pdd;
struct kfd_process *p;
int32_t gpu_idx;

p = container_of(prange->svms, struct kfd_process, svms);

gpu_idx = kfd_process_gpuidx_from_gpuid(p, gpu_id);
if (gpu_idx < 0) {
pr_debug("failed to get device by id 0x%x\n", gpu_id);
return NULL;
}
pdd = kfd_process_device_from_gpuidx(p, gpu_idx);
if (!pdd) {
pr_debug("failed to get device by idx 0x%x\n", gpu_idx);
return NULL;
}

return pdd->dev->adev;
}