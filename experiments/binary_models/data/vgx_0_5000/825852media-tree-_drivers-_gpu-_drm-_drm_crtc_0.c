static int __drm_mode_set_config_internal(struct drm_mode_set *set,
struct drm_modeset_acquire_ctx *ctx)
{
struct drm_crtc *crtc = set->crtc;
struct drm_framebuffer *fb;
struct drm_crtc *tmp;
int ret;


drm_for_each_crtc(tmp, crtc->dev)
tmp->primary->old_fb = tmp->primary->fb;

fb = set->fb;

ret = crtc->funcs->set_config(set, ctx);
if (ret == 0) {
crtc->primary->crtc = crtc;
crtc->primary->fb = fb;
}

drm_for_each_crtc(tmp, crtc->dev) {
if (tmp->primary->fb)
drm_framebuffer_get(tmp->primary->fb);
if (tmp->primary->old_fb)
drm_framebuffer_put(tmp->primary->old_fb);
tmp->primary->old_fb = NULL;
}

return ret;
}