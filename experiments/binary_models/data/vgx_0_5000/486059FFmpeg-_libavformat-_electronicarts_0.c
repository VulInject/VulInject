static int init_video_stream(AVFormatContext *s, VideoProperties *video)
{
AVStream *st;

if (!video->codec)
return 0;


st = avformat_new_stream(s, NULL);
if (!st)
return AVERROR(ENOMEM);
video->stream_index = st->index;
st->codecpar->codec_type  = AVMEDIA_TYPE_VIDEO;
st->codecpar->codec_id    = video->codec;

if (st->codecpar->codec_id == AV_CODEC_ID_MPEG2VIDEO)
ffstream(st)->need_parsing = AVSTREAM_PARSE_HEADERS;
st->codecpar->codec_tag   = 0; 
st->codecpar->width       = video->width;
st->codecpar->height      = video->height;
st->duration           = st->nb_frames = video->nb_frames;
if (video->time_base.num)
avpriv_set_pts_info(st, 64, video->time_base.num, video->time_base.den);
st->r_frame_rate       =
st->avg_frame_rate     = av_inv_q(video->time_base);
return 0;
}