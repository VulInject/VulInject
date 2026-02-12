static void mtk_drm_crtc_atomic_begin(struct drm_crtc *crtc,
struct drm_crtc_state *old_crtc_state)
{
struct mtk_crtc_state *state = to_mtk_crtc_state(crtc->state);
struct mtk_drm_crtc *mtk_crtc = to_mtk_crtc(crtc);

if (mtk_crtc->event && state->base.event)
DRM_ERROR("new event while there is still a pending event\n");

if (state->base.event) {
state->base.event->pipe = drm_crtc_index(crtc);
WARN_ON(drm_crtc_vblank_get(crtc) != 0);
mtk_crtc->event = state->base.event;
state->base.event = NULL;
}
}