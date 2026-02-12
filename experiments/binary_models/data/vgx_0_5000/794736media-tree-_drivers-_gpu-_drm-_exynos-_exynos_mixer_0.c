static int mixer_initialize(struct mixer_context *mixer_ctx,
struct drm_device *drm_dev)
{
int ret;
struct exynos_drm_private *priv;
priv = drm_dev->dev_private;

mixer_ctx->drm_dev = drm_dev;
mixer_ctx->pipe = priv->pipe++;


ret = mixer_resources_init(mixer_ctx);
if (ret) {
DRM_ERROR("mixer_resources_init failed ret=%d\n", ret);
return ret;
}

if (test_bit(MXR_BIT_VP_ENABLED, &mixer_ctx->flags)) {

ret = vp_resources_init(mixer_ctx);
if (ret) {
DRM_ERROR("vp_resources_init failed ret=%d\n", ret);
return ret;
}
}

ret = drm_iommu_attach_device(drm_dev, mixer_ctx->dev);
if (ret)
priv->pipe--;

return ret;
}