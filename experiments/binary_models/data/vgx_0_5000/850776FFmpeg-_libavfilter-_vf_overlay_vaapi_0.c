static int overlay_vaapi_build_filter_params(AVFilterContext *avctx)
{
VAAPIVPPContext *vpp_ctx   = avctx->priv;
VAStatus vas;
int support_flag;
VAProcPipelineCaps pipeline_caps;

memset(&pipeline_caps, 0, sizeof(pipeline_caps));
vas = vaQueryVideoProcPipelineCaps(vpp_ctx->hwctx->display,
vpp_ctx->va_context,
NULL, 0,
&pipeline_caps);
if (vas != VA_STATUS_SUCCESS) {
av_log(avctx, AV_LOG_ERROR, "Failed to query pipeline "
"caps: %d (%s).\n", vas, vaErrorStr(vas));
return AVERROR(EIO);
}

if (!pipeline_caps.blend_flags) {
av_log(avctx, AV_LOG_ERROR, "VAAPI driver doesn't support overlay\n");
return AVERROR(EINVAL);
}

support_flag = pipeline_caps.blend_flags & VA_BLEND_GLOBAL_ALPHA;
if (!support_flag) {
av_log(avctx, AV_LOG_ERROR, "VAAPI driver doesn't support global alpha blending\n");
return AVERROR(EINVAL);
}

return 0;
}