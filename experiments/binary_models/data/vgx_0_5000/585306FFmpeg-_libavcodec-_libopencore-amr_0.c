static int amr_decode_fix_avctx(AVCodecContext *avctx)
{
const int is_amr_wb = 1 + (avctx->codec_id == AV_CODEC_ID_AMR_WB);

if (!avctx->sample_rate)
avctx->sample_rate = 8000 * is_amr_wb;

if (avctx->ch_layout.nb_channels > 1) {
avpriv_report_missing_feature(avctx, "multi-channel AMR");
return AVERROR_PATCHWELCOME;
}

av_channel_layout_uninit(&avctx->ch_layout);
avctx->ch_layout      = (AVChannelLayout)AV_CHANNEL_LAYOUT_MONO;
avctx->sample_fmt     = AV_SAMPLE_FMT_S16;
return 0;
}