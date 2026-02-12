static av_cold int vaapi_encode_h264_configure(AVCodecContext *avctx)
{
VAAPIEncodeContext      *ctx = avctx->priv_data;
VAAPIEncodeH264Context *priv = ctx->priv_data;
VAAPIEncodeH264Options  *opt = ctx->codec_options;
int err;

err = ff_cbs_init(&priv->cbc, AV_CODEC_ID_H264, avctx);
if (err < 0)
return err;

priv->mb_width  = FFALIGN(avctx->width,  16) / 16;
priv->mb_height = FFALIGN(avctx->height, 16) / 16;

if (ctx->va_rc_mode == VA_RC_CQP) {
priv->fixed_qp_p = opt->qp;
if (avctx->i_quant_factor > 0.0)
priv->fixed_qp_idr = (int)((priv->fixed_qp_p * avctx->i_quant_factor +
avctx->i_quant_offset) + 0.5);
else
priv->fixed_qp_idr = priv->fixed_qp_p;
if (avctx->b_quant_factor > 0.0)
priv->fixed_qp_b = (int)((priv->fixed_qp_p * avctx->b_quant_factor +
avctx->b_quant_offset) + 0.5);
else
priv->fixed_qp_b = priv->fixed_qp_p;

opt->sei &= ~SEI_TIMING;

av_log(avctx, AV_LOG_DEBUG, "Using fixed QP = "
"%d / %d / %d for IDR- / P- / B-frames.\n",
priv->fixed_qp_idr, priv->fixed_qp_p, priv->fixed_qp_b);

} else if (ctx->va_rc_mode == VA_RC_CBR ||
ctx->va_rc_mode == VA_RC_VBR) {

priv->fixed_qp_idr = 26;
priv->fixed_qp_p   = 26;
priv->fixed_qp_b   = 26;

av_log(avctx, AV_LOG_DEBUG, "Using %s-bitrate = %d bps.\n",
ctx->va_rc_mode == VA_RC_CBR ? "constant" : "variable",
avctx->bit_rate);

} else {
av_assert0(0 && "Invalid RC mode.");
}

if (avctx->compression_level == FF_COMPRESSION_DEFAULT)
avctx->compression_level = opt->quality;

if (opt->sei & SEI_IDENTIFIER) {
const char *lavc  = LIBAVCODEC_IDENT;
const char *vaapi = VA_VERSION_S;
const char *driver;
int len;

memcpy(priv->identifier.uuid_iso_iec_11578,
vaapi_encode_h264_sei_identifier_uuid,
sizeof(priv->identifier.uuid_iso_iec_11578));

driver = vaQueryVendorString(ctx->hwctx->display);
if (!driver)
driver = "unknown driver";

len = snprintf(NULL, 0, "%s / VAAPI %s / %s", lavc, vaapi, driver);
if (len >= 0) {
priv->identifier_string = av_malloc(len + 1);
if (!priv->identifier_string)
return AVERROR(ENOMEM);

snprintf(priv->identifier_string, len + 1,
"%s / VAAPI %s / %s", lavc, vaapi, driver);

priv->identifier.data = priv->identifier_string;
priv->identifier.data_length = len + 1;
}
}

return 0;
}