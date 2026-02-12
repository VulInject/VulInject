int skl_check_plane_surface(struct intel_plane_state *plane_state)
{
const struct drm_framebuffer *fb = plane_state->base.fb;
unsigned int rotation = plane_state->base.rotation;
int ret;

if (!plane_state->base.visible)
return 0;


if (drm_rotation_90_or_270(rotation))
drm_rect_rotate(&plane_state->base.src,
fb->width << 16, fb->height << 16,
DRM_ROTATE_270);


if (fb->format->format == DRM_FORMAT_NV12) {
ret = skl_check_nv12_aux_surface(plane_state);
if (ret)
return ret;
} else {
plane_state->aux.offset = ~0xfff;
plane_state->aux.x = 0;
plane_state->aux.y = 0;
}

ret = skl_check_main_surface(plane_state);
if (ret)
return ret;

return 0;
}