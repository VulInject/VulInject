int vkms_crtc_init(struct drm_device *dev, struct drm_crtc *crtc,
struct drm_plane *primary, struct drm_plane *cursor)
{
struct vkms_output *vkms_out = drm_crtc_to_vkms_output(crtc);
int ret;

ret = drm_crtc_init_with_planes(dev, crtc, primary, cursor,
&vkms_crtc_funcs, NULL);
if (ret) {
DRM_ERROR("Failed to init CRTC\n");
return ret;
}

drm_crtc_helper_add(crtc, &vkms_crtc_helper_funcs);

spin_lock_init(&vkms_out->lock);
spin_lock_init(&vkms_out->composer_lock);

vkms_out->composer_workq = alloc_ordered_workqueue("vkms_composer", 0);
if (!vkms_out->composer_workq)
return -ENOMEM;

return ret;
}