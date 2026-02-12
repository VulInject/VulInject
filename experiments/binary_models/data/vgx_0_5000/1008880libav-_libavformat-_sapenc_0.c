static int sap_write_packet(AVFormatContext *s, AVPacket *pkt)
{
AVFormatContext *rtpctx;
struct SAPState *sap = s->priv_data;
int64_t now = av_gettime_relative();

if (!sap->last_time || now - sap->last_time > 5000000) {
int ret = ffurl_write(sap->ann_fd, sap->ann, sap->ann_size);

if (ret < 0 && ret != AVERROR(ECONNREFUSED))
return ret;
sap->last_time = now;
}
rtpctx = s->streams[pkt->stream_index]->priv_data;
return ff_write_chained(rtpctx, 0, pkt, s);
}

AVOutputFormat ff_sap_muxer = {
.name              = "sap",
.long_name         = NULL_IF_CONFIG_SMALL("SAP output"),
.priv_data_size    = sizeof(struct SAPState),
.audio_codec       = AV_CODEC_ID_AAC,
.video_codec       = AV_CODEC_ID_MPEG4,
.write_header      = sap_write_header,
.write_packet      = sap_write_packet,
.write_trailer     = sap_write_close,
.flags             = AVFMT_NOFILE | AVFMT_GLOBALHEADER,
};