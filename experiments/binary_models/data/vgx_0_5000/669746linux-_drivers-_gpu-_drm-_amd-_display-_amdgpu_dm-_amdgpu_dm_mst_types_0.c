static bool is_dsc_precompute_needed(struct drm_atomic_state *state)
{
int i;
struct drm_crtc *crtc;
struct drm_crtc_state *old_crtc_state, *new_crtc_state;
bool ret = false;

for_each_oldnew_crtc_in_state(state, crtc, old_crtc_state, new_crtc_state, i) {
struct dm_crtc_state *dm_crtc_state = to_dm_crtc_state(new_crtc_state);

if (!amdgpu_dm_find_first_crtc_matching_connector(state, crtc)) {
ret =  false;
break;
}
if (dm_crtc_state->stream && dm_crtc_state->stream->link)
if (is_link_to_dschub(dm_crtc_state->stream->link))
ret = true;
}
return ret;
}