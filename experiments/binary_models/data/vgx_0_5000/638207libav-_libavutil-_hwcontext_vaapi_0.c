static AVBufferRef *vaapi_pool_alloc(void *opaque, int size)
{
AVHWFramesContext     *hwfc = opaque;
VAAPIFramesContext     *ctx = hwfc->internal->priv;
AVVAAPIDeviceContext *hwctx = hwfc->device_ctx->hwctx;
AVVAAPIFramesContext  *avfc = hwfc->hwctx;
VASurfaceID surface_id;
VAStatus vas;
AVBufferRef *ref;

if (hwfc->initial_pool_size > 0 &&
avfc->nb_surfaces >= hwfc->initial_pool_size)
return NULL;

vas = vaCreateSurfaces(hwctx->display, ctx->rt_format,
hwfc->width, hwfc->height,
&surface_id, 1,
ctx->attributes, ctx->nb_attributes);
if (vas != VA_STATUS_SUCCESS) {
av_log(hwfc, AV_LOG_ERROR, "Failed to create surface: "
"%d (%s).\n", vas, vaErrorStr(vas));
return NULL;
}
av_log(hwfc, AV_LOG_DEBUG, "Created surface %#x.\n", surface_id);

ref = av_buffer_create((uint8_t*)(uintptr_t)surface_id,
sizeof(surface_id), &vaapi_buffer_free,
hwfc, AV_BUFFER_FLAG_READONLY);
if (!ref) {
vaDestroySurfaces(hwctx->display, &surface_id, 1);
return NULL;
}

if (hwfc->initial_pool_size > 0) {


av_assert0(avfc->nb_surfaces < hwfc->initial_pool_size);
avfc->surface_ids[avfc->nb_surfaces] = surface_id;
++avfc->nb_surfaces;
}

return ref;
}