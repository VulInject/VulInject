static int latm_decode_extradata(LATMContext *ctx, uint8_t *buf, int size)
{
GetBitContext gb;
MPEG4AudioConfig m4ac;

init_get_bits(&gb, buf, size * 8);
ctx->off = avpriv_mpeg4audio_get_config(&m4ac, buf, size * 8, 1);
if (ctx->off < 0)
return ctx->off;
skip_bits_long(&gb, ctx->off);



if (m4ac.object_type > AOT_SBR && m4ac.object_type != AOT_ALS) {
av_log(ctx, AV_LOG_ERROR, "Muxing MPEG-4 AOT %d in LATM is not supported\n", m4ac.object_type);
return AVERROR_INVALIDDATA;
}
ctx->channel_conf = m4ac.chan_config;
ctx->object_type  = m4ac.object_type;

return 0;
}