static av_cold int g726_decode_init(AVCodecContext *avctx)
{
G726Context* c = avctx->priv_data;

avctx->channels       = 1;
avctx->channel_layout = AV_CH_LAYOUT_MONO;

c->code_size = avctx->bits_per_coded_sample;
if (c->code_size < 2 || c->code_size > 5) {
av_log(avctx, AV_LOG_ERROR, "Invalid number of bits %d\n", c->code_size);
return AVERROR(EINVAL);
}
g726_reset(c);

avctx->sample_fmt = AV_SAMPLE_FMT_S16;

return 0;
}