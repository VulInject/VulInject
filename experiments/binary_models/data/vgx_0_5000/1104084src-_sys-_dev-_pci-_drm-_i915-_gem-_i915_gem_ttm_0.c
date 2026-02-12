static void
i915_ttm_place_from_region(const struct intel_memory_region *mr,
struct ttm_place *place,
resource_size_t offset,
resource_size_t size,
unsigned int flags)
{
memset(place, 0, sizeof(*place));
place->mem_type = intel_region_to_ttm_type(mr);

if (mr->type == INTEL_MEMORY_SYSTEM)
return;

if (flags & I915_BO_ALLOC_CONTIGUOUS)
place->flags |= TTM_PL_FLAG_CONTIGUOUS;
if (offset != I915_BO_INVALID_OFFSET) {
place->fpfn = offset >> PAGE_SHIFT;
place->lpfn = place->fpfn + (size >> PAGE_SHIFT);
} else if (mr->io_size && mr->io_size < mr->total) {
if (flags & I915_BO_ALLOC_GPU_ONLY) {
place->flags |= TTM_PL_FLAG_TOPDOWN;
} else {
place->fpfn = 0;
place->lpfn = mr->io_size >> PAGE_SHIFT;
}
}
}