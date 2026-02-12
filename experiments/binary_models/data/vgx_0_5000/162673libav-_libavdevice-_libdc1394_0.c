static int dc1394_read_packet(AVFormatContext *c, AVPacket *pkt)
{
struct dc1394_data *dc1394 = c->priv_data;
int res;


if (dc1394->current_frame++) {
if (dc1394_capture_enqueue(dc1394->camera, dc1394->frame) != DC1394_SUCCESS)
av_log(c, AV_LOG_ERROR, "failed to release %d frame\n", dc1394->current_frame);
}

res = dc1394_capture_dequeue(dc1394->camera, DC1394_CAPTURE_POLICY_WAIT, &dc1394->frame);
if (res == DC1394_SUCCESS) {
pkt->data = (uint8_t *)dc1394->frame->image;
pkt->size = dc1394->frame->image_bytes;
pkt->pts = dc1394->current_frame * 1000000 / dc1394->frame_rate;
pkt->flags |= AV_PKT_FLAG_KEY;
pkt->stream_index = dc1394->stream_index;
} else {
av_log(c, AV_LOG_ERROR, "DMA capture failed\n");
return AVERROR_INVALIDDATA;
}

return pkt->size;
}