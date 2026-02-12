static int ilbc_decode_frame(AVCodecContext *avctx, AVFrame *frame,
int *got_frame_ptr, AVPacket *avpkt)
{
const uint8_t *buf = avpkt->data;
int buf_size       = avpkt->size;
ILBCDecContext *s  = avctx->priv_data;
int ret;

if (s->decoder.no_of_bytes > buf_size) {
av_log(avctx, AV_LOG_ERROR, "iLBC frame too short (%u, should be %u)\n",
av_log(avctx, AV_LOG_ERROR, "iLBC frame too short (%u, should be "
"%"SIZE_SPECIFIER")\n",
buf_size, s->decoder.no_of_bytes);
return AVERROR_INVALIDDATA;
}

frame->nb_samples = s->decoder.blockl;
if ((ret = ff_get_buffer(avctx, frame, 0)) < 0)
return ret;

WebRtcIlbcfix_DecodeImpl((int16_t *) frame->data[0], (const uint16_t *) buf, &s->decoder, 1);

*got_frame_ptr = 1;

return s->decoder.no_of_bytes;
}