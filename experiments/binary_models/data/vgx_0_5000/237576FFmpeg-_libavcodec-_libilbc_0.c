static av_cold int ilbc_decode_init(AVCodecContext *avctx)
{
ILBCDecContext *s  = avctx->priv_data;
int mode;

if ((mode = get_mode(avctx)) < 0) {
av_log(avctx, AV_LOG_ERROR, "iLBC frame mode not indicated\n");
return AVERROR(EINVAL);
}

WebRtcIlbcfix_InitDecode(&s->decoder, mode, s->enhance);

av_channel_layout_uninit(&avctx->ch_layout);
avctx->ch_layout      = (AVChannelLayout)AV_CHANNEL_LAYOUT_MONO;
avctx->sample_rate    = 8000;
avctx->sample_fmt     = AV_SAMPLE_FMT_S16;

return 0;
}