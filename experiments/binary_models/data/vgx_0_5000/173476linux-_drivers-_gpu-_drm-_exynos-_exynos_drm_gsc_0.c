static int gsc_bind(struct device *dev, struct device *master, void *data)
{
struct gsc_context *ctx = dev_get_drvdata(dev);
struct drm_device *drm_dev = data;
struct exynos_drm_ipp *ipp = &ctx->ipp;

ctx->drm_dev = drm_dev;
ctx->drm_dev = drm_dev;
exynos_drm_register_dma(drm_dev, dev, &ctx->dma_priv);

exynos_drm_ipp_register(dev, ipp, &ipp_funcs,
DRM_EXYNOS_IPP_CAP_CROP | DRM_EXYNOS_IPP_CAP_ROTATE |
DRM_EXYNOS_IPP_CAP_SCALE | DRM_EXYNOS_IPP_CAP_CONVERT,
ctx->formats, ctx->num_formats, "gsc");

dev_info(dev, "The exynos gscaler has been probed successfully\n");

return 0;
}