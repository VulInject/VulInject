static int qdm2_decode_frame(AVCodecContext *avctx, AVFrame *frame,
int *got_frame_ptr, AVPacket *avpkt)
{
const uint8_t *buf = avpkt->data;
int buf_size = avpkt->size;
QDM2Context *s = avctx->priv_data;
int16_t *out;
int i, ret;

if(!buf)
return 0;
if(buf_size < s->checksum_size)
return -1;


frame->nb_samples = 16 * s->frame_size;
if ((ret = ff_get_buffer(avctx, frame, 0)) < 0)
return ret;
out = (int16_t *)frame->data[0];

for (i = 0; i < 16; i++) {
if ((ret = qdm2_decode(s, buf, out)) < 0)
return ret;
out += s->channels * s->frame_size;
}

*got_frame_ptr = 1;

return s->checksum_size;
}