static av_cold int decode_init(AVCodecContext *avctx)
{
MSCCContext *s = avctx->priv_data;
int stride;

switch (avctx->bits_per_coded_sample) {
case  8: avctx->pix_fmt = AV_PIX_FMT_PAL8;   break;
case 16: avctx->pix_fmt = AV_PIX_FMT_RGB555; break;
case 24: avctx->pix_fmt = AV_PIX_FMT_BGR24;  break;
case 32: avctx->pix_fmt = AV_PIX_FMT_BGRA;   break;
default:
av_log(avctx, AV_LOG_ERROR, "Unsupported bitdepth %i\n", avctx->bits_per_coded_sample);
return AVERROR_INVALIDDATA;
}

s->bpp = avctx->bits_per_coded_sample >> 3;
stride = 4 * ((avctx->width * avctx->bits_per_coded_sample + 31) / 32);

s->decomp_size = 2 * avctx->height * stride;
if (!(s->decomp_buf = av_malloc(s->decomp_size)))
return AVERROR(ENOMEM);

s->uncomp_size = avctx->height * stride;
if (!(s->uncomp_buf = av_malloc(s->uncomp_size)))
return AVERROR(ENOMEM);

return ff_inflate_init(&s->zstream, avctx);
}