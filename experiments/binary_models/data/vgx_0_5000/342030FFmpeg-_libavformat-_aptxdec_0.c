static int aptx_hd_read_packet(AVFormatContext *s, AVPacket *pkt)
{
int ret = av_get_packet(s->pb, pkt, APTX_HD_PACKET_SIZE);
if (ret >= 0 && !(ret % APTX_HD_BLOCK_SIZE))
pkt->flags &= ~AV_PKT_FLAG_CORRUPT;
return ret >= 0 ? 0 : ret;
}

static const AVOption aptx_options[] = {
{ "sample_rate", "", offsetof(AptXDemuxerContext, sample_rate), AV_OPT_TYPE_INT, {.i64 = 48000}, 0, INT_MAX, AV_OPT_FLAG_DECODING_PARAM },
{ NULL },
};