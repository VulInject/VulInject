struct dma_buf *virtgpu_gem_prime_export(struct drm_gem_object *obj,
int flags)
{
struct dma_buf *buf;
struct drm_device *dev = obj->dev;
struct virtio_gpu_device *vgdev = dev->dev_private;
struct virtio_gpu_object *bo = gem_to_virtio_gpu_obj(obj);
int ret = 0;
bool blob = bo->host3d_blob || bo->guest_blob;
DEFINE_DMA_BUF_EXPORT_INFO(exp_info);

if (!blob) {
if (vgdev->has_resource_assign_uuid) {
ret = virtio_gpu_resource_assign_uuid(vgdev, bo);
if (ret)
return ERR_PTR(ret);

virtio_gpu_notify(vgdev);
} else {
bo->uuid_state = STATE_ERR;
}
} else if (!(bo->blob_flags & VIRTGPU_BLOB_FLAG_USE_CROSS_DEVICE)) {
bo->uuid_state = STATE_ERR;
}

exp_info.ops = &virtgpu_dmabuf_ops.ops;
exp_info.size = obj->size;
exp_info.flags = flags;
exp_info.priv = obj;
exp_info.resv = obj->resv;

buf = virtio_dma_buf_export(&exp_info);
if (IS_ERR(buf))
return buf;

drm_dev_get(dev);
drm_gem_object_get(obj);

return buf;
}