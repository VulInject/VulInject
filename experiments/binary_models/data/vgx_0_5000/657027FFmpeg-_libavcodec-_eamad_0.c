static av_cold int decode_end(AVCodecContext *avctx)
{
MadContext *t = avctx->priv_data;
av_frame_free(&t->last_frame);
av_freep(&t->bitstream_buf);
return 0;
}

const FFCodec ff_eamad_decoder = {
.p.name         = "eamad",
CODEC_LONG_NAME("Electronic Arts Madcow Video"),
.p.type         = AVMEDIA_TYPE_VIDEO,
.p.id           = AV_CODEC_ID_MAD,
.priv_data_size = sizeof(MadContext),
.init           = decode_init,
.close          = decode_end,
FF_CODEC_DECODE_CB(decode_frame),
.p.capabilities = AV_CODEC_CAP_DR1,
};