static void oggmux_send_seg_info(OGGMuxCtx *ctx)
{
if (ctx->seg_size) {
GF_FilterEvent evt;
OGGMuxStream *pctx = gf_list_get(ctx->streams, 0);
GF_FEVT_INIT(evt, GF_FEVT_SEGMENT_SIZE, pctx->ipid);
evt.seg_size.media_range_start = ctx->seg_start;
evt.seg_size.media_range_end = ctx->seg_start + ctx->seg_size - 1;
gf_filter_pid_send_event(pctx->ipid, &evt);

ctx->seg_start += ctx->seg_size;
ctx->seg_size = 0;
}
}