static av_cold int flic_decode_end(AVCodecContext *avctx)
{
FlicDecodeContext *s = avctx->priv_data;

av_frame_free(&s->frame);

return 0;
}

AVCodec ff_flic_decoder = {
.name           = "flic",
.long_name      = NULL_IF_CONFIG_SMALL("Autodesk Animator Flic video"),
.type           = AVMEDIA_TYPE_VIDEO,
.id             = AV_CODEC_ID_FLIC,
.priv_data_size = sizeof(FlicDecodeContext),
.init           = flic_decode_init,
.close          = flic_decode_end,
.decode         = flic_decode_frame,
.capabilities   = AV_CODEC_CAP_DR1,
};