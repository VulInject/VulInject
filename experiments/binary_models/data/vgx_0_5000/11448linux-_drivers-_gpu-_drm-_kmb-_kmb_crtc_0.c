static void kmb_crtc_atomic_flush(struct drm_crtc *crtc,
struct drm_atomic_state *state)
{
struct drm_device *dev = crtc->dev;
struct kmb_drm_private *kmb = to_kmb(dev);

kmb_set_bitmask_lcd(kmb, LCD_INT_ENABLE,
LCD_INT_VERT_COMP);

spin_lock_irq(&crtc->dev->event_lock);
if (crtc->state->event) {
if (drm_crtc_vblank_get(crtc) == 0)
drm_crtc_arm_vblank_event(crtc, crtc->state->event);
else
drm_crtc_send_vblank_event(crtc, crtc->state->event);
}
crtc->state->event = NULL;
spin_unlock_irq(&crtc->dev->event_lock);
}