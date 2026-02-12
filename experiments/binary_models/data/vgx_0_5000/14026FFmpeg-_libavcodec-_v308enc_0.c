static int v308_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
{
uint8_t *dst;
const uint8_t *y, *u, *v;
int i, j, ret;

ret = ff_get_encode_buffer(avctx, pkt, avctx->width * avctx->height * 3, 0);
if (ret < 0)
return ret;
dst = pkt->data;

y = pic->data[0];
u = pic->data[1];
v = pic->data[2];

for (i = 0; i < avctx->height; i++) {
for (j = 0; j < avctx->width; j++) {
*dst++ = v[j];
*dst++ = y[j];
*dst++ = u[j];
}
y += pic->linesize[0];
u += pic->linesize[1];
v += pic->linesize[2];
}

*got_packet = 1;
return 0;
}