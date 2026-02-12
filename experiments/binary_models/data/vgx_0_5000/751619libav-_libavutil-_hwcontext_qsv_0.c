static int qsv_device_create(AVHWDeviceContext *ctx, const char *device,
AVDictionary *opts, int flags)
{
QSVDevicePriv *priv;
enum AVHWDeviceType child_device_type;
AVHWDeviceContext *child_device;
AVDictionaryEntry *e;

mfxIMPL impl;
int ret;

priv = av_mallocz(sizeof(*priv));
if (!priv)
return AVERROR(ENOMEM);

ctx->user_opaque = priv;
ctx->free        = qsv_device_free;

e = av_dict_get(opts, "child_device", NULL, 0);

if (CONFIG_VAAPI)
child_device_type = AV_HWDEVICE_TYPE_VAAPI;
else if (CONFIG_DXVA2)
child_device_type = AV_HWDEVICE_TYPE_DXVA2;
else {
av_log(ctx, AV_LOG_ERROR, "No supported child device type is enabled\n");
return AVERROR(ENOSYS);
}

ret = av_hwdevice_ctx_create(&priv->child_device_ctx, child_device_type,
e ? e->value : NULL, NULL, 0);
if (ret < 0)
return ret;

child_device = (AVHWDeviceContext*)priv->child_device_ctx->data;

impl = choose_implementation(device);

return qsv_device_derive_from_child(ctx, impl, child_device, 0);
}