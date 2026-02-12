* @file
* G.723.1 demuxer
*/


static const uint8_t frame_size[4] = { 24, 20, 4, 1 };

static av_cold int g723_1_init(AVFormatContext *s)
{
AVStream *st;

st = avformat_new_stream(s, NULL);
if (!st)
return AVERROR(ENOMEM);

st->codecpar->codec_type     = AVMEDIA_TYPE_AUDIO;
st->codecpar->codec_id       = AV_CODEC_ID_G723_1;
st->codecpar->channel_layout = AV_CH_LAYOUT_MONO;
st->codecpar->channels       = 1;
st->codecpar->sample_rate    = 8000;

avpriv_set_pts_info(st, 64, 1, st->codecpar->sample_rate);
st->start_time = 0;

return 0;
}