static GSF_Stream *gsfdmx_get_stream(GF_Filter *filter, GSF_DemuxCtx *ctx, u32 idx, u32 pkt_type)
{
GSF_Stream *gst;
u32 i, count;

count = gf_list_count(ctx->streams);
for (i=0; i<count; i++) {
gst = gf_list_get(ctx->streams, i);
if (gst->idx == idx) return gst;
}

if ((pkt_type==GFS_PCKTYPE_PID_CONFIG) || (pkt_type==GFS_PCKTYPE_PID_INFO_UPDATE) ) {
GF_SAFEALLOC(gst, GSF_Stream);
if (!gst) return NULL;
gst->packets = gf_list_new();
gst->idx = idx;
gf_list_add(ctx->streams, gst);
gst->opid = gf_filter_pid_new(filter);
return gst;
}

GF_LOG(GF_LOG_DEBUG, GF_LOG_CONTAINER, ("[GSFDemux] no stream found for idx %d\n", idx));
return NULL;
}