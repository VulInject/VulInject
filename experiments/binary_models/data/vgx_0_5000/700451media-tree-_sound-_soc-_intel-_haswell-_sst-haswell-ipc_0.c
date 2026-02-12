int sst_hsw_stream_pause(struct sst_hsw *hsw, struct sst_hsw_stream *stream,
int wait)
{
int ret;

if (!stream) {
dev_warn(hsw->dev, "warning: stream is NULL, no stream to pause, ignore it.\n");
return 0;
}

trace_ipc_request("stream pause", stream->reply.stream_hw_id);

ret = sst_hsw_stream_operations(hsw, IPC_STR_PAUSE,
stream->reply.stream_hw_id, wait);
if (ret < 0)
dev_err(hsw->dev, "error: failed to pause stream %d\n",
stream->reply.stream_hw_id);

return ret;
}