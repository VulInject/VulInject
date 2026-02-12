int hibmc_dumb_create(struct drm_file *file, struct drm_device *dev,
struct drm_mode_create_dumb *args)
{
struct drm_gem_object *gobj;
u32 handle;
int ret;

args->pitch = ALIGN(args->width * DIV_ROUND_UP(args->bpp, 8), 16);
args->size = args->pitch * args->height;

ret = hibmc_gem_create(dev, args->size, false,
&gobj);
if (ret) {
DRM_ERROR("failed to create GEM object: %d\n", ret);
return ret;
}

ret = drm_gem_handle_create(file, gobj, &handle);
drm_gem_object_unreference_unlocked(gobj);
if (ret) {
DRM_ERROR("failed to unreference GEM object: %d\n", ret);
return ret;
}

args->handle = handle;
return 0;
}