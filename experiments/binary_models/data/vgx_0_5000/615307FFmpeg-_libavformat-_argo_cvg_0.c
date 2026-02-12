static int argo_cvg_seek(AVFormatContext *s, int stream_index,
int64_t pts, int flags)
{
int64_t ret;
ArgoCVGDemuxContext *ctx = s->priv_data;

if (pts != 0 || stream_index != 0)
return AVERROR(EINVAL);

if ((ret = avio_seek(s->pb, ARGO_CVG_HEADER_SIZE, SEEK_SET)) < 0)
return ret;

ctx->blocks_read = 0;
return 0;
}

const AVInputFormat ff_argo_cvg_demuxer = {
.name           = "argo_cvg",
.long_name      = NULL_IF_CONFIG_SMALL("Argonaut Games CVG"),
.priv_data_size = sizeof(ArgoCVGDemuxContext),
.read_probe     = argo_cvg_probe,
.read_header    = argo_cvg_read_header,
.read_packet    = argo_cvg_read_packet,
.read_seek      = argo_cvg_seek,
};