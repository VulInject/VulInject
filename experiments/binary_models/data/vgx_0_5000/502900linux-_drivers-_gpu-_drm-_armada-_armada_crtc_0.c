static void armada_drm_crtc_atomic_begin(struct drm_crtc *crtc,
struct drm_atomic_state *state)
{
struct drm_crtc_state *crtc_state = drm_atomic_get_new_crtc_state(state,
crtc);
struct armada_crtc *dcrtc = drm_to_armada_crtc(crtc);

DRM_DEBUG_KMS("[CRTC:%d:%s]\n", crtc->base.id, crtc->name);

if (crtc_state->color_mgmt_changed)
armada_drm_update_gamma(crtc);

dcrtc->regs_idx = 0;
dcrtc->regs = dcrtc->atomic_regs;
}