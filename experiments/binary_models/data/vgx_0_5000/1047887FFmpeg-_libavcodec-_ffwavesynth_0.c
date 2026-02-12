static av_cold int wavesynth_close(AVCodecContext *avc)
{
struct wavesynth_context *ws = avc->priv_data;

av_freep(&ws->sin);
av_freep(&ws->inter);
return 0;
}

const FFCodec ff_ffwavesynth_decoder = {
.p.name         = "wavesynth",
CODEC_LONG_NAME("Wave synthesis pseudo-codec"),
.p.type         = AVMEDIA_TYPE_AUDIO,
.p.id           = AV_CODEC_ID_FFWAVESYNTH,
.priv_data_size = sizeof(struct wavesynth_context),
.init           = wavesynth_init,
.close          = wavesynth_close,
FF_CODEC_DECODE_CB(wavesynth_decode),
.p.capabilities = AV_CODEC_CAP_DR1,
.caps_internal  = FF_CODEC_CAP_INIT_CLEANUP,
};