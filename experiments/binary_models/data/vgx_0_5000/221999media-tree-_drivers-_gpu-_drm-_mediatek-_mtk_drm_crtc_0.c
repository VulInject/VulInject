static void mtk_drm_crtc_reset(struct drm_crtc *crtc)
{
struct mtk_crtc_state *state;

if (crtc->state) {
__drm_atomic_helper_crtc_destroy_state(crtc->state);

state = to_mtk_crtc_state(crtc->state);
memset(state, 0, sizeof(*state));
} else {
state = kzalloc(sizeof(*state), GFP_KERNEL);
if (!state)
return;
crtc->state = &state->base;
}

state->base.crtc = crtc;
}