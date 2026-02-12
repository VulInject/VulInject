static void radeon_bo_clear_surface_reg(struct radeon_bo *bo);



static void radeon_update_memory_usage(struct radeon_bo *bo,
unsigned mem_type, int sign)
{
struct radeon_device *rdev = bo->rdev;
u64 size = (u64)bo->tbo.num_pages << PAGE_SHIFT;

switch (mem_type) {
case TTM_PL_TT:
if (sign > 0)
atomic64_add(size, &rdev->gtt_usage);
else
atomic64_sub(size, &rdev->gtt_usage);
break;
case TTM_PL_VRAM:
if (sign > 0)
atomic64_add(size, &rdev->vram_usage);
else
atomic64_sub(size, &rdev->vram_usage);
break;
}
}