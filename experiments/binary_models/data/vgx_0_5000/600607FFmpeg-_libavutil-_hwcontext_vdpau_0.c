static int vdpau_frames_init(AVHWFramesContext *ctx)
{
VDPAUDeviceContext *device_priv = ctx->device_ctx->internal->priv;
VDPAUFramesContext        *priv = ctx->internal->priv;

int i;

for (i = 0; i < FF_ARRAY_ELEMS(vdpau_pix_fmts); i++) {
if (vdpau_pix_fmts[i].frames_sw_format == ctx->sw_format) {
priv->chroma_type = vdpau_pix_fmts[i].chroma_type;
priv->chroma_idx  = i;
priv->pix_fmts    = device_priv->pix_fmts[i];
priv->nb_pix_fmts = device_priv->nb_pix_fmts[i];
break;
}
}
if (priv->nb_pix_fmts < 2) {
av_log(ctx, AV_LOG_ERROR, "Unsupported sw format: %s\n",
av_get_pix_fmt_name(ctx->sw_format));
return AVERROR(ENOSYS);
}

if (!ctx->pool) {
ctx->internal->pool_internal = av_buffer_pool_init2(sizeof(VdpVideoSurface), ctx,
vdpau_pool_alloc, NULL);
if (!ctx->internal->pool_internal)
return AVERROR(ENOMEM);
}

priv->get_data = device_priv->get_data;
priv->put_data = device_priv->put_data;

return 0;
}