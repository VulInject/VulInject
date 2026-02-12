static AVStream * new_stream(AVFormatContext *s, AVStream *st, int sid, int codec_type)
{
if (st) {
if (st->codecpar->extradata) {
av_freep(&st->codecpar->extradata);
st->codecpar->extradata_size = 0;
}
} else {
WtvStream *wst = av_mallocz(sizeof(WtvStream));
if (!wst)
return NULL;
st = avformat_new_stream(s, NULL);
if (!st) {
av_free(wst);
return NULL;
}
st->id = sid;
st->priv_data = wst;
}
st->codecpar->codec_type = codec_type;
st->need_parsing      = AVSTREAM_PARSE_FULL;
avpriv_set_pts_info(st, 64, 1, 10000000);
return st;
}