int exynos_drm_register_dma(struct drm_device *drm, struct device *dev,
void **dma_priv)
{
struct exynos_drm_private *priv = drm->dev_private;

if (!priv->dma_dev) {
priv->dma_dev = dev;
DRM_INFO("Exynos DRM: using %s device for DMA mapping operations\n",
dev_name(dev));
}

if (!IS_ENABLED(CONFIG_EXYNOS_IOMMU))
return 0;

if (!priv->mapping) {
void *mapping;

if (IS_ENABLED(CONFIG_ARM_DMA_USE_IOMMU))
mapping = arm_iommu_create_mapping(&platform_bus_type,
EXYNOS_DEV_ADDR_START, EXYNOS_DEV_ADDR_SIZE);
else if (IS_ENABLED(CONFIG_IOMMU_DMA))
mapping = iommu_get_domain_for_dev(priv->dma_dev);
else
mapping = ERR_PTR(-ENODEV);

if (IS_ERR(mapping))
return PTR_ERR(mapping);
priv->mapping = mapping;
}

return drm_iommu_attach_device(drm, dev, dma_priv);
}