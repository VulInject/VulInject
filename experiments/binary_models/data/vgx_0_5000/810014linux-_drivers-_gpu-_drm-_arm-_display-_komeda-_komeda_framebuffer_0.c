bool komeda_fb_is_layer_supported(struct komeda_fb *kfb, u32 layer_type,
u32 rot)
{
struct drm_framebuffer *fb = &kfb->base;
struct komeda_dev *mdev = fb->dev->dev_private;
u32 fourcc = fb->format->format;
u64 modifier = fb->modifier;
bool supported;

supported = komeda_format_mod_supported(&mdev->fmt_tbl, layer_type,
fourcc, modifier, rot);
if (!supported)
DRM_DEBUG_ATOMIC("Layer TYPE: %d doesn't support fb FMT: %p4cc with modifier: 0x%llx.\n",
layer_type, &fourcc, modifier);

return supported;
}