irqreturn_t r128_driver_irq_handler(int irq, void *arg)
{
struct drm_device *dev = (struct drm_device *) arg;
drm_r128_private_t *dev_priv = (drm_r128_private_t *) dev->dev_private;
int status;

status = R128_READ(R128_GEN_INT_STATUS);


if (status & R128_CRTC_VBLANK_INT) {
R128_WRITE(R128_GEN_INT_STATUS, R128_CRTC_VBLANK_INT_AK);
atomic_inc(&dev_priv->vbl_received);
drm_handle_vblank(dev, 0);
return IRQ_HANDLED;
}
return IRQ_NONE;
}