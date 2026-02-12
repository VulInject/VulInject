static av_cold int decode_init(AVCodecContext *avctx)
{
ArgoContext *s = avctx->priv_data;

switch (avctx->bits_per_coded_sample) {
case  8: s->bpp = 1;
avctx->pix_fmt = AV_PIX_FMT_PAL8; break;
case 24: s->bpp = 4;
avctx->pix_fmt = AV_PIX_FMT_BGR0; break;
default: avpriv_request_sample(s, "depth == %u", avctx->bits_per_coded_sample);
return AVERROR_PATCHWELCOME;
}

if (avctx->width % 2 || avctx->height % 2) {
avpriv_request_sample(s, "Odd dimensions\n");
return AVERROR_PATCHWELCOME;
}

s->frame = av_frame_alloc();
if (!s->frame)
return AVERROR(ENOMEM);

for (int n = 0, i = -4; i < 4; i++) {
for (int j = -14; j < 2; j++) {
s->mv0[n][0] = j;
s->mv0[n++][1] = i;
}
}

for (int n = 0, i = -5; i <= 1; i += 2) {
int j = -5;

while (j <= 1) {
s->mv1[n][0] = j;
s->mv1[n++][1] = i;
j += 2;
}
}

return 0;
}