static int copy_hdr10_plus_to_pkt(AVFifo *fifo, AVPacket *pkt)
{
FrameHDR10Plus frame_hdr10_plus;
uint8_t *data;
if (!pkt || av_fifo_peek(fifo, &frame_hdr10_plus, 1, 0) < 0)
return 0;
if (!frame_hdr10_plus.hdr10_plus || frame_hdr10_plus.pts != pkt->pts)
return 0;
av_fifo_drain2(fifo, 1);

data = av_packet_new_side_data(pkt, AV_PKT_DATA_DYNAMIC_HDR10_PLUS, frame_hdr10_plus.hdr10_plus->size);
if (!data) {
av_buffer_unref(&frame_hdr10_plus.hdr10_plus);
return AVERROR(ENOMEM);
}

memcpy(data, frame_hdr10_plus.hdr10_plus->data, frame_hdr10_plus.hdr10_plus->size);
av_buffer_unref(&frame_hdr10_plus.hdr10_plus);
return 0;
}