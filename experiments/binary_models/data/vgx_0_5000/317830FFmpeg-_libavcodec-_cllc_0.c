static int read_yuv_component_line(CLLCContext *ctx, GetBitContext *gb,
int *top_left, VLC *vlc, uint8_t *outbuf,
int is_chroma)
{
int pred, code;
int i;

OPEN_READER(bits, gb);

pred = *top_left;


for (i = 0; i < ctx->avctx->width >> is_chroma; i++) {
UPDATE_CACHE(bits, gb);
GET_VLC(code, bits, gb, vlc->table, VLC_BITS, VLC_DEPTH);

pred     += code;
outbuf[i] = pred;
}

CLOSE_READER(bits, gb);


*top_left = outbuf[0];

return 0;
}