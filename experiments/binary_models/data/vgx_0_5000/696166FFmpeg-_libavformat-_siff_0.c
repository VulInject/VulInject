static int create_audio_stream(AVFormatContext *s, SIFFContext *c)
{
AVStream *ast;
ast = avformat_new_stream(s, NULL);
if (!ast)
return AVERROR(ENOMEM);
ast->codecpar->codec_type            = AVMEDIA_TYPE_AUDIO;
ast->codecpar->codec_id              = AV_CODEC_ID_PCM_U8;
ast->codecpar->ch_layout             = (AVChannelLayout)AV_CHANNEL_LAYOUT_MONO;
ast->codecpar->bits_per_coded_sample = 8;
ast->codecpar->sample_rate           = c->rate;
avpriv_set_pts_info(ast, 16, 1, c->rate);
ast->start_time                   = 0;
return 0;
}