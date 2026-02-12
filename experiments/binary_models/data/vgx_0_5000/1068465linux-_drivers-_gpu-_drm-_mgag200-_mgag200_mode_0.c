int mgag200_crtc_helper_atomic_check(struct drm_crtc *crtc, struct drm_atomic_state *new_state)
{
struct drm_device *dev = crtc->dev;
struct mga_device *mdev = to_mga_device(dev);
const struct mgag200_device_funcs *funcs = mdev->funcs;
struct drm_crtc_state *new_crtc_state = drm_atomic_get_new_crtc_state(new_state, crtc);
struct drm_property_blob *new_gamma_lut = new_crtc_state->gamma_lut;
int ret;

if (!new_crtc_state->enable)
return 0;

ret = drm_atomic_helper_check_crtc_primary_plane(new_crtc_state);
if (ret)
return ret;

if (new_crtc_state->mode_changed) {
if (funcs->pixpllc_atomic_check) {
ret = funcs->pixpllc_atomic_check(crtc, new_state);
if (ret)
return ret;
}
}

if (new_crtc_state->color_mgmt_changed && new_gamma_lut) {
if (new_gamma_lut->length != MGAG200_LUT_SIZE * sizeof(struct drm_color_lut)) {
drm_dbg(dev, "Wrong size for gamma_lut %zu\n", new_gamma_lut->length);
return -EINVAL;
}
}

return 0;
}