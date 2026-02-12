static int
ivpu_bo_alloc_vpu_addr(struct ivpu_bo *bo, struct ivpu_mmu_context *ctx,
const struct ivpu_addr_range *range)
{
struct ivpu_device *vdev = ivpu_bo_to_vdev(bo);
int ret;

if (!range) {
if (bo->flags & DRM_IVPU_BO_HIGH_MEM)
range = &vdev->hw->ranges.user_high;
else
range = &vdev->hw->ranges.user_low;
}

mutex_lock(&ctx->lock);
ret = ivpu_mmu_context_insert_node_locked(ctx, range, bo->base.size, &bo->mm_node);
if (!ret) {
bo->ctx = ctx;
bo->vpu_addr = bo->mm_node.start;
list_add_tail(&bo->ctx_node, &ctx->bo_list);
}
mutex_unlock(&ctx->lock);

return ret;
}