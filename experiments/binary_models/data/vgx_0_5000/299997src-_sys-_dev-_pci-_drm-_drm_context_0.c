int drm_legacy_addctx(struct drm_device *dev, void *data,
struct drm_file *file_priv)
{
struct drm_ctx_list *ctx_entry;
struct drm_ctx *ctx = data;
int tmp_handle;

if (!drm_core_check_feature(dev, DRIVER_KMS_LEGACY_CONTEXT) &&
!drm_core_check_feature(dev, DRIVER_LEGACY))
return -EOPNOTSUPP;

tmp_handle = drm_legacy_ctxbitmap_next(dev);
if (tmp_handle == DRM_KERNEL_CONTEXT) {

tmp_handle = drm_legacy_ctxbitmap_next(dev);
}
DRM_DEBUG("%d\n", tmp_handle);
if (tmp_handle < 0) {
DRM_DEBUG("Not enough free contexts.\n");

return tmp_handle;
}

ctx->handle = tmp_handle;

ctx_entry = kmalloc(sizeof(*ctx_entry), GFP_KERNEL);
if (!ctx_entry) {
DRM_DEBUG("out of memory\n");
return -ENOMEM;
}

INIT_LIST_HEAD(&ctx_entry->head);
ctx_entry->handle = ctx->handle;
ctx_entry->tag = file_priv;

mutex_lock(&dev->ctxlist_mutex);
list_add(&ctx_entry->head, &dev->ctxlist);
mutex_unlock(&dev->ctxlist_mutex);

return 0;
}