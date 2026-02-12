struct drm_gem_dma_object *
vc4_use_bo(struct vc4_exec_info *exec, uint32_t hindex)
{
struct vc4_dev *vc4 = exec->dev;
struct drm_gem_dma_object *obj;
struct vc4_bo *bo;

if (WARN_ON_ONCE(vc4->is_vc5))
return NULL;

if (hindex >= exec->bo_count) {
DRM_DEBUG("BO index %d greater than BO count %d\n",
hindex, exec->bo_count);
return NULL;
}
obj = exec->bo[hindex];
bo = to_vc4_bo(&obj->base);

if (bo->validated_shader) {
DRM_DEBUG("Trying to use shader BO as something other than "
"a shader\n");
return NULL;
}

return obj;
}