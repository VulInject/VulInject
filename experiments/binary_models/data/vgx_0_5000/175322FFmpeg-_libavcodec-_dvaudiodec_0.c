static av_cold int decode_init(AVCodecContext *avctx)
{
DVAudioContext *s = avctx->priv_data;
int i;

if (avctx->codec_tag == 0x0215) {
s->block_size = 7200;
} else if (avctx->codec_tag == 0x0216) {
s->block_size = 8640;
} else if (avctx->block_align == 7200 ||
avctx->block_align == 8640) {
s->block_size = avctx->block_align;
} else {
return AVERROR(EINVAL);
}

s->is_pal = s->block_size == 8640;
s->is_12bit = avctx->bits_per_coded_sample == 12;
avctx->sample_fmt = AV_SAMPLE_FMT_S16;
av_channel_layout_uninit(&avctx->ch_layout);
avctx->ch_layout = (AVChannelLayout)AV_CHANNEL_LAYOUT_STEREO;

for (i = 0; i < FF_ARRAY_ELEMS(s->shuffle); i++) {
const unsigned a = s->is_pal ? 18 : 15;
const unsigned b = 3 * a;

s->shuffle[i] = 80 * ((21 * (i % 3) + 9 * (i / 3) + ((i / a) % 3)) % b) +
(2 + s->is_12bit) * (i / b) + 8;
}

return 0;
}