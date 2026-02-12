static av_cold int gif_encode_init(AVCodecContext *avctx)
{
GIFContext *s = avctx->priv_data;

FF_DISABLE_DEPRECATION_WARNINGS
avctx->coded_frame->pict_type = AV_PICTURE_TYPE_I;
avctx->coded_frame->key_frame = 1;
FF_ENABLE_DEPRECATION_WARNINGS

s->lzw = av_mallocz(ff_lzw_encode_state_size);
if (!s->lzw)
return AVERROR(ENOMEM);
s->buf = av_malloc(avctx->width*avctx->height*2);
if (!s->buf)
return AVERROR(ENOMEM);
return 0;
}