void drm_fb_helper_prepare(struct drm_device *dev, struct drm_fb_helper *helper,
unsigned int preferred_bpp,
const struct drm_fb_helper_funcs *funcs)
{

if (!preferred_bpp)
preferred_bpp = 32;

INIT_LIST_HEAD(&helper->kernel_fb_list);
spin_lock_init(&helper->damage_lock);
INIT_WORK(&helper->resume_work, drm_fb_helper_resume_worker);
INIT_WORK(&helper->damage_work, drm_fb_helper_damage_work);
helper->damage_clip.x1 = helper->damage_clip.y1 = ~0;
mutex_init(&helper->lock);
helper->funcs = funcs;
helper->dev = dev;
helper->preferred_bpp = preferred_bpp;
}