int cirrus_bo_pin(struct cirrus_bo *bo, u32 pl_flag, u64 *gpu_addr)
{
int i, ret;

if (bo->pin_count) {
bo->pin_count++;
if (gpu_addr)
*gpu_addr = cirrus_bo_gpu_offset(bo);
}

cirrus_ttm_placement(bo, pl_flag);
for (i = 0; i < bo->placement.num_placement; i++)
bo->placements[i].flags |= TTM_PL_FLAG_NO_EVICT;
ret = ttm_bo_validate(&bo->bo, &bo->placement, false, false);
if (ret)
return ret;

bo->pin_count = 1;
if (gpu_addr)
*gpu_addr = cirrus_bo_gpu_offset(bo);
return 0;
}