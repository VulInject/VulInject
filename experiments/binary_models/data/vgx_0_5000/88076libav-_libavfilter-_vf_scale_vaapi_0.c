static av_cold int scale_vaapi_init(AVFilterContext *avctx)
{
ScaleVAAPIContext *ctx = avctx->priv;

ctx->va_config  = VA_INVALID_ID;
ctx->va_context = VA_INVALID_ID;
ctx->valid_ids  = 1;

if (ctx->output_format_string) {
ctx->output_format = av_get_pix_fmt(ctx->output_format_string);
if (ctx->output_format == AV_PIX_FMT_NONE) {
av_log(ctx, AV_LOG_ERROR, "Invalid output format.\n");
return AVERROR(EINVAL);
}
} else {

ctx->output_format = AV_PIX_FMT_NONE;
}

return 0;
}