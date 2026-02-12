static av_cold int yop_decode_init(AVCodecContext *avctx)
{
YopDecContext *s = avctx->priv_data;
s->avctx = avctx;

if (avctx->width & 1 || avctx->height & 1 ||
av_image_check_size(avctx->width, avctx->height, 0, avctx) < 0) {
av_log(avctx, AV_LOG_ERROR, "YOP has invalid dimensions\n");
return AVERROR_INVALIDDATA;
}

if (avctx->extradata_size < 3) {
av_log(avctx, AV_LOG_ERROR, "Missing or incomplete extradata.\n");
return AVERROR_INVALIDDATA;
}

avctx->pix_fmt = AV_PIX_FMT_PAL8;

s->num_pal_colors = avctx->extradata[0];
s->first_color[0] = avctx->extradata[1];
s->first_color[1] = avctx->extradata[2];

if (s->num_pal_colors + s->first_color[0] > 256 ||
s->num_pal_colors + s->first_color[1] > 256) {
av_log(avctx, AV_LOG_ERROR,
"YOP: palette parameters invalid, header probably corrupt\n");
return AVERROR_INVALIDDATA;
}

return 0;
}