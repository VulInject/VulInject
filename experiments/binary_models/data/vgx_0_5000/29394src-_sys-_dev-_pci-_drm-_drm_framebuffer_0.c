int drm_mode_addfb2(struct drm_device *dev,
void *data, struct drm_file *file_priv)
{
struct drm_mode_fb_cmd2 *r = data;
struct drm_framebuffer *fb;

if (!drm_core_check_feature(dev, DRIVER_MODESET))
return -EOPNOTSUPP;

fb = drm_internal_framebuffer_create(dev, r, file_priv);
if (IS_ERR(fb))
return PTR_ERR(fb);

drm_dbg_kms(dev, "[FB:%d]\n", fb->base.id);
r->fb_id = fb->base.id;


mutex_lock(&file_priv->fbs_lock);
list_add(&fb->filp_head, &file_priv->fbs);
mutex_unlock(&file_priv->fbs_lock);

return 0;
}