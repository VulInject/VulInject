static int qtrle_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
{
QtrleEncContext * const s = avctx->priv_data;
int ret;

if ((ret = ff_alloc_packet(avctx, pkt, s->max_buf_size)) < 0)
return ret;

if (avctx->gop_size == 0 || !s->previous_frame->data[0] ||
(s->avctx->frame_num % avctx->gop_size) == 0) {

s->key_frame = 1;
} else {

s->key_frame = 0;
}

pkt->size = encode_frame(s, pict, pkt->data);


av_frame_unref(s->previous_frame);
ret = av_frame_ref(s->previous_frame, pict);
if (ret < 0) {
av_log(avctx, AV_LOG_ERROR, "cannot add reference\n");
return ret;
}

if (s->key_frame)
pkt->flags |= AV_PKT_FLAG_KEY;
*got_packet = 1;

return 0;
}