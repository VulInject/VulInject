static int init_context_defaults(AVCodecContext *s, const AVCodec *codec)
{
const FFCodec *const codec2 = ffcodec(codec);
int flags=0;
memset(s, 0, sizeof(AVCodecContext));

s->av_class = &av_codec_context_class;

s->codec_type = codec ? codec->type : AVMEDIA_TYPE_UNKNOWN;
if (codec) {
s->codec = codec;
s->codec_id = codec->id;
}

if(s->codec_type == AVMEDIA_TYPE_AUDIO)
flags= AV_OPT_FLAG_AUDIO_PARAM;
else if(s->codec_type == AVMEDIA_TYPE_VIDEO)
flags= AV_OPT_FLAG_VIDEO_PARAM;
else if(s->codec_type == AVMEDIA_TYPE_SUBTITLE)
flags= AV_OPT_FLAG_SUBTITLE_PARAM;
av_opt_set_defaults2(s, flags, flags);

av_channel_layout_uninit(&s->ch_layout);

s->time_base           = (AVRational){0,1};
s->framerate           = (AVRational){ 0, 1 };
s->pkt_timebase        = (AVRational){ 0, 1 };
s->get_buffer2         = avcodec_default_get_buffer2;
s->get_format          = avcodec_default_get_format;
s->get_encode_buffer   = avcodec_default_get_encode_buffer;
s->execute             = avcodec_default_execute;
s->execute2            = avcodec_default_execute2;
s->sample_aspect_ratio = (AVRational){0,1};
s->ch_layout.order     = AV_CHANNEL_ORDER_UNSPEC;
s->pix_fmt             = AV_PIX_FMT_NONE;
s->sw_pix_fmt          = AV_PIX_FMT_NONE;
s->sample_fmt          = AV_SAMPLE_FMT_NONE;

FF_DISABLE_DEPRECATION_WARNINGS
s->reordered_opaque    = AV_NOPTS_VALUE;
FF_ENABLE_DEPRECATION_WARNINGS
if(codec && codec2->priv_data_size){
s->priv_data = av_mallocz(codec2->priv_data_size);
if (!s->priv_data)
return AVERROR(ENOMEM);
if(codec->priv_class){
*(const AVClass**)s->priv_data = codec->priv_class;
av_opt_set_defaults(s->priv_data);
}
}
if (codec && codec2->defaults) {
int ret;
const FFCodecDefault *d = codec2->defaults;
while (d->key) {
ret = av_opt_set(s, d->key, d->value, 0);
av_assert0(ret >= 0);
d++;
}
}
return 0;
}