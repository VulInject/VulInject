void
ivpu_mmu_context_unmap_sgt(struct ivpu_device *vdev, struct ivpu_mmu_context *ctx,
u64 vpu_addr, struct sg_table *sgt)
{
struct scatterlist *sg;
int ret;
u64 i;

if (!IS_ALIGNED(vpu_addr, IVPU_MMU_PAGE_SIZE))
ivpu_warn(vdev, "Unaligned vpu_addr: 0x%llx\n", vpu_addr);

mutex_lock(&ctx->lock);

for_each_sgtable_dma_sg(sgt, sg, i) {
size_t size = sg_dma_len(sg) + sg->offset;

ivpu_mmu_context_unmap_pages(ctx, vpu_addr, size);
ivpu_mmu_context_flush_page_tables(ctx, vpu_addr, size);
vpu_addr += size;
}

mutex_unlock(&ctx->lock);

ret = ivpu_mmu_invalidate_tlb(vdev, ctx->id);
if (ret)
ivpu_warn(vdev, "Failed to invalidate TLB for ctx %u: %d\n", ctx->id, ret);
}