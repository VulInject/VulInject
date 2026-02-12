static void drm_fb_helper_dpms(struct fb_info *info, int dpms_mode)
{
struct drm_fb_helper *fb_helper = info->par;
struct drm_device *dev = fb_helper->dev;
struct drm_crtc *crtc;
struct drm_connector *connector;
int i, j;


drm_modeset_lock_all(dev);
if (!drm_fb_helper_is_bound(fb_helper)) {
drm_modeset_unlock_all(dev);
return;
}

for (i = 0; i < fb_helper->crtc_count; i++) {
crtc = fb_helper->crtc_info[i].mode_set.crtc;

if (!crtc->enabled)
continue;


drm_fb_helper_for_each_connector(fb_helper, j) {
connector = fb_helper->connector_info[j]->connector;
connector->funcs->dpms(connector, dpms_mode);
drm_object_property_set_value(&connector->base,
dev->mode_config.dpms_property, dpms_mode);
}
}
drm_modeset_unlock_all(dev);
}