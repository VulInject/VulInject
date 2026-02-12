static int daud_packet(AVFormatContext *s, AVPacket *pkt) {
AVIOContext *pb = s->pb;
int ret, size;
if (pb->eof_reached)
return AVERROR(EIO);
size = avio_rb16(pb);
avio_rb16(pb); 
ret = av_get_packet(pb, pkt, size);
pkt->stream_index = 0;
return ret;
}

AVInputFormat ff_daud_demuxer = {
.name           = "daud",
.long_name      = NULL_IF_CONFIG_SMALL("D-Cinema audio"),
.read_header    = daud_header,
.read_packet    = daud_packet,
.extensions     = "302",
};