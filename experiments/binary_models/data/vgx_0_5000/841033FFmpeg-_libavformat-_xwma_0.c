static int xwma_read_packet(AVFormatContext *s, AVPacket *pkt)
{
int ret, size;
int64_t left;
AVStream *st;
XWMAContext *xwma = s->priv_data;

st = s->streams[0];

left = xwma->data_end - avio_tell(s->pb);
if (left <= 0) {
return AVERROR_EOF;
}


size = (st->codecpar->block_align > 1) ? st->codecpar->block_align : 2230;
size = FFMIN(size, left);

ret  = av_get_packet(s->pb, pkt, size);
if (ret < 0)
return ret;

pkt->stream_index = 0;
return ret;
}

const AVInputFormat ff_xwma_demuxer = {
.name           = "xwma",
.long_name      = NULL_IF_CONFIG_SMALL("Microsoft xWMA"),
.priv_data_size = sizeof(XWMAContext),
.read_probe     = xwma_probe,
.read_header    = xwma_read_header,
.read_packet    = xwma_read_packet,
};