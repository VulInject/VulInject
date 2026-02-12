static int ivpu_bo_map_pages_locked(struct ivpu_bo *bo)
{
int npages = bo->base.size >> PAGE_SHIFT;
struct ivpu_device *vdev = ivpu_bo_to_vdev(bo);
struct sg_table *sgt;
int ret;

sgt = drm_prime_pages_to_sg(&vdev->drm, bo->pages, npages);
if (IS_ERR(sgt)) {
ivpu_err(vdev, "Failed to allocate sgtable\n");
return PTR_ERR(sgt);
}

ret = dma_map_sgtable(vdev->drm.dev, sgt, DMA_BIDIRECTIONAL, 0);
if (ret) {
ivpu_err(vdev, "Failed to map BO in IOMMU: %d\n", ret);
goto err_free_sgt;
}

bo->sgt = sgt;
return 0;

err_free_sgt:
kfree(sgt);
return ret;
}