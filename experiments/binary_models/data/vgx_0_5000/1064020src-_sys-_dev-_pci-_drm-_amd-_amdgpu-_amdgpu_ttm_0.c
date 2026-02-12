static void amdgpu_ttm_backend_unbind(struct ttm_device *bdev,
struct ttm_tt *ttm)
{
struct amdgpu_device *adev = amdgpu_ttm_adev(bdev);
struct amdgpu_ttm_tt *gtt = ttm_to_amdgpu_ttm_tt(ttm);


if (gtt->userptr) {
amdgpu_ttm_tt_unpin_userptr(bdev, ttm);
} else if (ttm->sg && gtt->gobj->import_attach) {
struct dma_buf_attachment *attach;

attach = gtt->gobj->import_attach;
dma_buf_unmap_attachment(attach, ttm->sg, DMA_BIDIRECTIONAL);
STUB();
ttm->sg = NULL;
}

if (!gtt->bound)
return;

if (gtt->offset == AMDGPU_BO_INVALID_OFFSET)
return;


amdgpu_gart_unbind(adev, gtt->offset, ttm->num_pages);
gtt->bound = false;
}