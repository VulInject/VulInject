static int dnn_classify_flush_frame(AVFilterLink *outlink, int64_t pts, int64_t *out_pts)
{
DnnClassifyContext *ctx = outlink->src->priv;
int ret;
DNNAsyncStatusType async_state;

ret = ff_dnn_flush(&ctx->dnnctx);
if (ret != 0) {
return -1;
}

do {
AVFrame *in_frame = NULL;
AVFrame *out_frame = NULL;
async_state = ff_dnn_get_result(&ctx->dnnctx, &in_frame, &out_frame);
if (async_state == DAST_SUCCESS) {
ret = ff_filter_frame(outlink, in_frame);
if (ret < 0)
return ret;
if (out_pts)
*out_pts = in_frame->pts + pts;
}
av_usleep(5000);
} while (async_state >= DAST_NOT_READY);

return 0;
}