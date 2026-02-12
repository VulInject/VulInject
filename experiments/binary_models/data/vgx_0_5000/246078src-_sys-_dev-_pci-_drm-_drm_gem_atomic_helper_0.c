int
drm_gem_plane_helper_prepare_fb(struct drm_plane *dp,
struct drm_plane_state *dps)
{
struct drm_gem_object *obj;
struct dma_fence *f;
int r;

if (dps->fb != NULL) {
obj = dps->fb->obj[0];
if (obj == NULL)
return -EINVAL;
if (dps->fence) {
printf("%s: explicit fence not handled\n", __func__);
return -EINVAL;
}
r = dma_resv_get_singleton(obj->resv, DMA_RESV_USAGE_WRITE, &f);
if (r)
return r;
dps->fence = f;
}

return 0;
}