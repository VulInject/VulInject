int malidp_de_irq_init(struct drm_device *drm, int irq)
{
struct malidp_drm *malidp = drm_to_malidp(drm);
struct malidp_hw_device *hwdev = malidp->dev;
int ret;


malidp_hw_disable_irq(hwdev, MALIDP_DE_BLOCK, 0xffffffff);
malidp_hw_clear_irq(hwdev, MALIDP_DE_BLOCK, 0xffffffff);
malidp_hw_disable_irq(hwdev, MALIDP_DC_BLOCK, 0xffffffff);
malidp_hw_clear_irq(hwdev, MALIDP_DC_BLOCK, 0xffffffff);

ret = devm_request_threaded_irq(drm->dev, irq, malidp_de_irq,
malidp_de_irq_thread_handler,
IRQF_SHARED, "malidp-de", drm);
if (ret < 0) {
DRM_ERROR("failed to install DE IRQ handler\n");
return ret;
}

malidp_de_irq_hw_init(hwdev);

return 0;
}