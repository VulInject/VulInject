static int write_frame(AVFormatContext *fmt_ctx, AVCodecContext *c,
AVStream *st, AVFrame *frame, AVPacket *pkt)
{
int ret;


ret = avcodec_send_frame(c, frame);
if (ret < 0) {
fprintf(stderr, "Error sending a frame to the encoder: %s\n",
av_err2str(ret));
exit(1);
}

while (ret >= 0) {
ret = avcodec_receive_packet(c, pkt);
if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
break;
else if (ret < 0) {
fprintf(stderr, "Error encoding a frame: %s\n", av_err2str(ret));
exit(1);
}


av_packet_rescale_ts(pkt, c->time_base, st->time_base);
pkt->stream_index = st->index;


log_packet(fmt_ctx, pkt);
ret = av_interleaved_write_frame(fmt_ctx, pkt);

if (ret < 0) {
fprintf(stderr, "Error while writing output packet: %s\n", av_err2str(ret));
exit(1);
}
}

return ret == AVERROR_EOF ? 1 : 0;
}