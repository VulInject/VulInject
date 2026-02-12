static int zx_vl_plane_atomic_check(struct drm_plane *plane,
struct drm_plane_state *plane_state)
{
struct drm_framebuffer *fb = plane_state->fb;
struct drm_crtc *crtc = plane_state->crtc;
struct drm_crtc_state *crtc_state;
struct drm_rect clip;
int min_scale = FRAC_16_16(1, 8);
int max_scale = FRAC_16_16(8, 1);

if (!crtc || !fb)
return 0;

crtc_state = drm_atomic_get_existing_crtc_state(plane_state->state,
crtc);
if (WARN_ON(!crtc_state))
return -EINVAL;


if (!crtc_state->enable)
return 0;


if (!plane_state->crtc)
return -EINVAL;

clip.x1 = 0;
clip.y1 = 0;
clip.x2 = crtc_state->adjusted_mode.hdisplay;
clip.y2 = crtc_state->adjusted_mode.vdisplay;

return drm_plane_helper_check_state(plane_state, &clip,
min_scale, max_scale,
true, true);
}