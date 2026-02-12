static int write_skip_frames(AVFormatContext *s, int stream_index, int64_t dts)
{
AVIContext *avi = s->priv_data;
AVIStream *avist    = s->streams[stream_index]->priv_data;
AVCodecParameters *par = s->streams[stream_index]->codecpar;

ff_dlog(s, "dts:%s packet_count:%d stream_index:%d\n", av_ts2str(dts), avist->packet_count, stream_index);
while (par->block_align == 0 && dts != AV_NOPTS_VALUE &&
dts > avist->packet_count && par->codec_id != AV_CODEC_ID_XSUB && avist->packet_count) {

if (dts - avist->packet_count > 60000) {
av_log(s, AV_LOG_ERROR, "Too large number of skipped frames %"PRId64" > 60000\n", dts - avist->packet_count);
return AVERROR(EINVAL);
}

avi->empty_packet->stream_index = stream_index;
avi_write_packet_internal(s, avi->empty_packet);
ff_dlog(s, "dup dts:%s packet_count:%d\n", av_ts2str(dts), avist->packet_count);
}

return 0;
}