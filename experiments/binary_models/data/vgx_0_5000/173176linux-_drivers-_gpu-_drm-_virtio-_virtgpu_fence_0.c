void virtio_gpu_fence_emit(struct virtio_gpu_device *vgdev,
struct virtio_gpu_ctrl_hdr *cmd_hdr,
struct virtio_gpu_fence *fence)
{
struct virtio_gpu_fence_driver *drv = &vgdev->fence_drv;
unsigned long irq_flags;

spin_lock_irqsave(&drv->lock, irq_flags);
fence->fence_id = fence->f.seqno = ++drv->current_fence_id;
dma_fence_get(&fence->f);
list_add_tail(&fence->node, &drv->fences);
spin_unlock_irqrestore(&drv->lock, irq_flags);

trace_dma_fence_emit(&fence->f);

cmd_hdr->flags |= cpu_to_le32(VIRTIO_GPU_FLAG_FENCE);
cmd_hdr->fence_id = cpu_to_le64(fence->fence_id);


if (fence->emit_fence_info) {
cmd_hdr->flags |=
cpu_to_le32(VIRTIO_GPU_FLAG_INFO_RING_IDX);
cmd_hdr->ring_idx = (u8)fence->ring_idx;
}
}