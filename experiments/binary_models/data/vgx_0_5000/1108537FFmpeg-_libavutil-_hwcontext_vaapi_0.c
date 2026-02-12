static int vaapi_device_connect(AVHWDeviceContext *ctx,
VADisplay display)
{
AVVAAPIDeviceContext *hwctx = ctx->hwctx;
int major, minor;
VAStatus vas;

vaSetErrorCallback(display, &vaapi_device_log_error, ctx);
vaSetInfoCallback (display, &vaapi_device_log_info,  ctx);

hwctx->display = display;

vas = vaInitialize(display, &major, &minor);
if (vas != VA_STATUS_SUCCESS) {
av_log(ctx, AV_LOG_ERROR, "Failed to initialise VAAPI "
"connection: %d (%s).\n", vas, vaErrorStr(vas));
return AVERROR(EIO);
}
av_log(ctx, AV_LOG_VERBOSE, "Initialised VAAPI connection: "
"version %d.%d\n", major, minor);

return 0;
}