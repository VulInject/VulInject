static av_cold int decode_end(AVCodecContext *avctx)
{
ASV1Context *const a = avctx->priv_data;

av_freep(&a->bitstream_buffer);
a->bitstream_buffer_size = 0;

return 0;
}

AVCodec ff_asv1_decoder = {
.name           = "asv1",
.long_name      = NULL_IF_CONFIG_SMALL("ASUS V1"),
.type           = AVMEDIA_TYPE_VIDEO,
.id             = AV_CODEC_ID_ASV1,
.priv_data_size = sizeof(ASV1Context),
.init           = decode_init,
.close          = decode_end,
.decode         = decode_frame,
.capabilities   = AV_CODEC_CAP_DR1,
};