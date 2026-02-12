static void amdgpu_ttm_tt_unpin_userptr(struct ttm_device *bdev,
struct ttm_tt *ttm)
{
STUB();
struct amdgpu_device *adev = amdgpu_ttm_adev(bdev);
struct amdgpu_ttm_tt *gtt = ttm_to_amdgpu_ttm_tt(ttm);
int write = !(gtt->userflags & AMDGPU_GEM_USERPTR_READONLY);
enum dma_data_direction direction = write ?
DMA_BIDIRECTIONAL : DMA_TO_DEVICE;


if (!ttm->sg || !ttm->sg->sgl)
return;


dma_unmap_sgtable(adev->dev, ttm->sg, direction, 0);
sg_free_table(ttm->sg);
}