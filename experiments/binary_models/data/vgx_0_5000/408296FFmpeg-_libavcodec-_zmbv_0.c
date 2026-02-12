static av_cold int decode_init(AVCodecContext *avctx)
{
ZmbvContext * const c = avctx->priv_data;

c->avctx = avctx;

c->width = avctx->width;
c->height = avctx->height;

c->bpp = avctx->bits_per_coded_sample;

if ((avctx->width + 255ULL) * (avctx->height + 64ULL) > FFMIN(avctx->max_pixels, INT_MAX / 4) ) {
av_log(avctx, AV_LOG_ERROR, "Internal buffer (decomp_size) larger than max_pixels or too large\n");
return AVERROR_INVALIDDATA;
}

c->decomp_size = (avctx->width + 255) * 4 * (avctx->height + 64);


c->decomp_buf = av_mallocz(c->decomp_size);
if (!c->decomp_buf) {
av_log(avctx, AV_LOG_ERROR,
"Can't allocate decompression buffer.\n");
return AVERROR(ENOMEM);
}

return ff_inflate_init(&c->zstream, avctx);
}