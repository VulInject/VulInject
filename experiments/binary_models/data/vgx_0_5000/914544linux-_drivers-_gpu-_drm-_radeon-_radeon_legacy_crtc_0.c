static int radeon_crtc_mode_set(struct drm_crtc *crtc,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode,
int x, int y, struct drm_framebuffer *old_fb)
{
struct radeon_crtc *radeon_crtc = to_radeon_crtc(crtc);


radeon_crtc_set_base(crtc, x, y, old_fb);
radeon_set_crtc_timing(crtc, adjusted_mode);
radeon_set_pll(crtc, adjusted_mode);
radeon_overscan_setup(crtc, adjusted_mode);
if (radeon_crtc->crtc_id == 0) {
radeon_legacy_rmx_mode_set(crtc, adjusted_mode);
} else {
if (radeon_crtc->rmx_type != RMX_OFF) {

DRM_ERROR("Mode need scaling but only first crtc can do that.\n");
}
}
radeon_cursor_reset(crtc);
return 0;
}