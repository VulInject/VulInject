static bool intel_fbc_hw_tracking_covers_screen(const struct intel_plane_state *plane_state)
{
struct drm_i915_private *i915 = to_i915(plane_state->uapi.plane->dev);
unsigned int effective_w, effective_h, max_w, max_h;

if (DISPLAY_VER(i915) >= 10) {
max_w = 5120;
max_h = 4096;
} else if (DISPLAY_VER(i915) >= 8 || IS_HASWELL(i915)) {
max_w = 4096;
max_h = 4096;
} else if (IS_G4X(i915) || DISPLAY_VER(i915) >= 5) {
max_w = 4096;
max_h = 2048;
} else {
max_w = 2048;
max_h = 1536;
}

effective_w = plane_state->view.color_plane[0].x +
(drm_rect_width(&plane_state->uapi.src) >> 16);
effective_h = plane_state->view.color_plane[0].y +
(drm_rect_height(&plane_state->uapi.src) >> 16);

return effective_w <= max_w && effective_h <= max_h;
}