static int raw_read_packet(AVFormatContext *s, AVPacket *pkt)
{
TAKDemuxContext *tc = s->priv_data;
int ret;

if (tc->mlast_frame) {
AVIOContext *pb = s->pb;
int64_t size, left;

left = tc->data_end - avio_tell(s->pb);
size = FFMIN(left, 1024);
if (size <= 0)
return AVERROR_EOF;

ret = av_get_packet(pb, pkt, size);
if (ret < 0)
return ret;

pkt->stream_index = 0;
} else {
ret = ff_raw_read_partial_packet(s, pkt);
}

return ret;
}

AVInputFormat ff_tak_demuxer = {
.name           = "tak",
.long_name      = NULL_IF_CONFIG_SMALL("raw TAK"),
.priv_data_size = sizeof(TAKDemuxContext),
.read_probe     = tak_probe,
.read_header    = tak_read_header,
.read_packet    = raw_read_packet,
.flags          = AVFMT_GENERIC_INDEX,
.extensions     = "tak",
.raw_codec_id   = AV_CODEC_ID_TAK,
};