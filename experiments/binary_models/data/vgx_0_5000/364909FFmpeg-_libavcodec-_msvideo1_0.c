static av_cold int msvideo1_decode_init(AVCodecContext *avctx)
{
Msvideo1Context *s = avctx->priv_data;

s->avctx = avctx;

if (avctx->width < 4 || avctx->height < 4)
return AVERROR_INVALIDDATA;


if (s->avctx->bits_per_coded_sample == 8) {
s->mode_8bit = 1;
avctx->pix_fmt = AV_PIX_FMT_PAL8;
if (avctx->extradata_size >= AVPALETTE_SIZE)
memcpy(s->pal, avctx->extradata, AVPALETTE_SIZE);
} else {
s->mode_8bit = 0;
avctx->pix_fmt = AV_PIX_FMT_RGB555;
}

s->frame = av_frame_alloc();
if (!s->frame)
return AVERROR(ENOMEM);

return 0;
}