static void mpegts_find_stream_type(AVStream *st,
uint32_t stream_type,
const StreamType *types)
{
FFStream *const sti = ffstream(st);
for (; types->stream_type; types++)
if (stream_type == types->stream_type) {
if (st->codecpar->codec_type != types->codec_type ||
st->codecpar->codec_id   != types->codec_id) {
st->codecpar->codec_type = types->codec_type;
st->codecpar->codec_id   = types->codec_id;
sti->need_context_update = 1;
}
sti->request_probe = 0;
return;
}
}