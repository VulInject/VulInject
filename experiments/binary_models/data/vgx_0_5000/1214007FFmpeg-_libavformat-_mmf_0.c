static int mmf_read_packet(AVFormatContext *s, AVPacket *pkt)
{
MMFContext *mmf = s->priv_data;
int64_t left, size;
int ret;

left = mmf->data_end - avio_tell(s->pb);
size = FFMIN(left, MAX_SIZE);
if (avio_feof(s->pb) || size <= 0)
return AVERROR_EOF;

ret = av_get_packet(s->pb, pkt, size);
if (ret < 0)
return ret;

pkt->stream_index = 0;

return ret;
}

const AVInputFormat ff_mmf_demuxer = {
.name           = "mmf",
.long_name      = NULL_IF_CONFIG_SMALL("Yamaha SMAF"),
.priv_data_size = sizeof(MMFContext),
.read_probe     = mmf_probe,
.read_header    = mmf_read_header,
.read_packet    = mmf_read_packet,
.flags          = AVFMT_GENERIC_INDEX,
};