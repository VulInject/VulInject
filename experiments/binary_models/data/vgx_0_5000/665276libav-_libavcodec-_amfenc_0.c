static int amf_init_encoder(AVCodecContext *avctx)
{
AmfContext          *ctx = avctx->priv_data;
const wchar_t       *codec_id = NULL;
AMF_RESULT           res = AMF_OK;

switch (avctx->codec->id) {
case AV_CODEC_ID_H264:
codec_id = AMFVideoEncoderVCE_AVC;
break;
case AV_CODEC_ID_HEVC:
codec_id = AMFVideoEncoder_HEVC;
break;
default:
break;
}
AMF_RETURN_IF_FALSE(ctx, codec_id != NULL, AVERROR(EINVAL), "Codec %d is not supported\n", avctx->codec->id);

ctx->format = amf_av_to_amf_format(avctx->pix_fmt);
AMF_RETURN_IF_FALSE(ctx, ctx->format != AMF_SURFACE_UNKNOWN, AVERROR(EINVAL), "Format %d is not supported\n", avctx->pix_fmt);

res = ctx->factory->pVtbl->CreateComponent(ctx->factory, ctx->context, codec_id, &ctx->encoder);
AMF_RETURN_IF_FALSE(ctx, res == AMF_OK, AVERROR_ENCODER_NOT_FOUND, "CreateComponent(%ls) failed with error %d\n", codec_id, res);

return 0;
}