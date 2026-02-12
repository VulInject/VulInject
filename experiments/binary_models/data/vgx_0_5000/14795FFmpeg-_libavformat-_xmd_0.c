static int xmd_read_header(AVFormatContext *s)
{
AVIOContext *pb = s->pb;
AVCodecParameters *par;
int channels;
AVStream *st;

avio_skip(pb, 3);

st = avformat_new_stream(s, NULL);
if (!st)
return AVERROR(ENOMEM);

par              = st->codecpar;
par->codec_type  = AVMEDIA_TYPE_AUDIO;
par->codec_id    = AV_CODEC_ID_ADPCM_XMD;
channels         = avio_r8(pb);
if (channels == 0)
return AVERROR_INVALIDDATA;
av_channel_layout_default(&par->ch_layout, channels);
par->sample_rate = avio_rl16(pb);
if (par->sample_rate <= 0)
return AVERROR_INVALIDDATA;
par->block_align = 21 * channels;
st->duration = (avio_rl32(pb) / par->block_align) * 32LL;
avpriv_set_pts_info(st, 64, 1, par->sample_rate);
avio_skip(pb, 7);

return 0;
}