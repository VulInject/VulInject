static int adp_read_packet(AVFormatContext *s, AVPacket *pkt)
{
int ret, size = 1024;

if (avio_feof(s->pb))
return AVERROR_EOF;

ret = av_get_packet(s->pb, pkt, size);
if (ret < 0)
return ret;

pkt->stream_index = 0;

return ret;
}

const AVInputFormat ff_adp_demuxer = {
.name           = "adp",
.long_name      = NULL_IF_CONFIG_SMALL("ADP"),
.read_probe     = adp_probe,
.read_header    = adp_read_header,
.read_packet    = adp_read_packet,
.extensions     = "adp,dtk",
};