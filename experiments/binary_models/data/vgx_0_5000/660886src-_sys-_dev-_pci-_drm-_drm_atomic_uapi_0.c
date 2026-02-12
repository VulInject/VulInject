int drm_atomic_set_mode_for_crtc(struct drm_crtc_state *state,
const struct drm_display_mode *mode)
{
struct drm_crtc *crtc = state->crtc;
struct drm_mode_modeinfo umode;


if (mode && memcmp(&state->mode, mode, sizeof(*mode)) == 0)
return 0;

drm_property_blob_put(state->mode_blob);
state->mode_blob = NULL;

if (mode) {
struct drm_property_blob *blob;

drm_mode_convert_to_umode(&umode, mode);
blob = drm_property_create_blob(crtc->dev,
sizeof(umode), &umode);
if (IS_ERR(blob))
return PTR_ERR(blob);

drm_mode_copy(&state->mode, mode);

state->mode_blob = blob;
state->enable = true;
drm_dbg_atomic(crtc->dev,
"Set [MODE:%s] for [CRTC:%d:%s] state %p\n",
mode->name, crtc->base.id, crtc->name, state);
} else {
memset(&state->mode, 0, sizeof(state->mode));
state->enable = false;
drm_dbg_atomic(crtc->dev,
"Set [NOMODE] for [CRTC:%d:%s] state %p\n",
crtc->base.id, crtc->name, state);
}

return 0;
}