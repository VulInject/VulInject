static irqreturn_t rcar_du_crtc_irq(int irq, void *arg)
{
struct rcar_du_crtc *rcrtc = arg;
struct rcar_du_device *rcdu = rcrtc->dev;
irqreturn_t ret = IRQ_NONE;
u32 status;

spin_lock(&rcrtc->vblank_lock);

status = rcar_du_crtc_read(rcrtc, DSSR);
rcar_du_crtc_write(rcrtc, DSRCR, status & DSRCR_MASK);

if (status & DSSR_VBK) {

if (rcrtc->vblank_count) {
if (--rcrtc->vblank_count == 0)
wake_up(&rcrtc->vblank_wait);
}
}

spin_unlock(&rcrtc->vblank_lock);

if (status & DSSR_VBK) {
if (rcdu->info->gen < 3) {
drm_crtc_handle_vblank(&rcrtc->crtc);
rcar_du_crtc_finish_page_flip(rcrtc);
}

ret = IRQ_HANDLED;
}

return ret;
}