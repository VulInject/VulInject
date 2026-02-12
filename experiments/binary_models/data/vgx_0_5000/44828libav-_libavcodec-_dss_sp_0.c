static int dss_sp_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
{
DssSpContext *p    = avctx->priv_data;
AVFrame *frame     = data;
const uint8_t *buf = avpkt->data;
int buf_size       = avpkt->size;

int16_t *out;
int ret;

if (buf_size < DSS_SP_FRAME_SIZE) {
if (buf_size)
av_log(avctx, AV_LOG_WARNING,
"Expected %d bytes, got %d - skipping packet.\n",
DSS_SP_FRAME_SIZE, buf_size);
*got_frame_ptr = 0;
return AVERROR_INVALIDDATA;
}

frame->nb_samples = DSS_SP_SAMPLE_COUNT;
if ((ret = ff_get_buffer(avctx, frame, 0)) < 0) {
av_log(avctx, AV_LOG_ERROR, "get_buffer() failed.\n");
return ret;
}

out = (int16_t *)frame->data[0];

dss_sp_decode_one_frame(p, out, buf);

*got_frame_ptr = 1;

return DSS_SP_FRAME_SIZE;
}