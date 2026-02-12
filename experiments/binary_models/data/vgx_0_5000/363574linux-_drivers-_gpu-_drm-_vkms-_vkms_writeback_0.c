static int vkms_wb_encoder_atomic_check(struct drm_encoder *encoder,
struct drm_crtc_state *crtc_state,
struct drm_connector_state *conn_state)
{
struct drm_framebuffer *fb;
const struct drm_display_mode *mode = &crtc_state->mode;
int ret;

if (!conn_state->writeback_job || !conn_state->writeback_job->fb)
return 0;

fb = conn_state->writeback_job->fb;
if (fb->width != mode->hdisplay || fb->height != mode->vdisplay) {
DRM_DEBUG_KMS("Invalid framebuffer size %ux%u\n",
fb->width, fb->height);
return -EINVAL;
}

ret = drm_atomic_helper_check_wb_encoder_state(encoder, conn_state);
if (ret < 0)
return ret;

return 0;
}

static const struct drm_encoder_helper_funcs vkms_wb_encoder_helper_funcs = {
.atomic_check = vkms_wb_encoder_atomic_check,
};