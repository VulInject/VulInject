static int qsv_device_init(AVHWDeviceContext *ctx)
{
AVQSVDeviceContext *hwctx = ctx->hwctx;
QSVDeviceContext       *s = ctx->internal->priv;

mfxStatus err;
int i;

for (i = 0; supported_handle_types[i].handle_type; i++) {
err = MFXVideoCORE_GetHandle(hwctx->session, supported_handle_types[i].handle_type,
&s->handle);
if (err == MFX_ERR_NONE) {
s->handle_type       = supported_handle_types[i].handle_type;
s->child_device_type = supported_handle_types[i].device_type;
s->child_pix_fmt     = supported_handle_types[i].pix_fmt;
break;
}
}
if (!s->handle) {
av_log(ctx, AV_LOG_VERBOSE, "No supported hw handle could be retrieved "
"from the session\n");
}

err = MFXQueryIMPL(hwctx->session, &s->impl);
if (err == MFX_ERR_NONE)
err = MFXQueryVersion(hwctx->session, &s->ver);
if (err != MFX_ERR_NONE) {
av_log(ctx, AV_LOG_ERROR, "Error querying the session attributes\n");
return AVERROR_UNKNOWN;
}

return 0;
}