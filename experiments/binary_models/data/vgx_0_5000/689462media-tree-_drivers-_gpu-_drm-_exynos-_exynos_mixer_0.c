static int mixer_atomic_check(struct exynos_drm_crtc *crtc,
struct drm_crtc_state *state)
{
struct drm_display_mode *mode = &state->adjusted_mode;
u32 w, h;

w = mode->hdisplay;
h = mode->vdisplay;

DRM_DEBUG_KMS("xres=%d, yres=%d, refresh=%d, intl=%d\n",
mode->hdisplay, mode->vdisplay, mode->vrefresh,
(mode->flags & DRM_MODE_FLAG_INTERLACE) ? 1 : 0);

if ((w >= 464 && w <= 720 && h >= 261 && h <= 576) ||
(w >= 1024 && w <= 1280 && h >= 576 && h <= 720) ||
(w >= 1664 && w <= 1920 && h >= 936 && h <= 1080))
return 0;

return -EINVAL;
}

static const struct exynos_drm_crtc_ops mixer_crtc_ops = {
.enable			= mixer_enable,
.disable		= mixer_disable,
.enable_vblank		= mixer_enable_vblank,
.disable_vblank		= mixer_disable_vblank,
.atomic_begin		= mixer_atomic_begin,
.update_plane		= mixer_update_plane,
.disable_plane		= mixer_disable_plane,
.atomic_flush		= mixer_atomic_flush,
.atomic_check		= mixer_atomic_check,
};