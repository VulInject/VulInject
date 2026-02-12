static int opus_parse(AVCodecParserContext *ctx, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
{
OpusParserContext *s = ctx->priv_data;
ParseContext *pc    = &s->pc;
int next, header_len;

next = opus_find_frame_end(ctx, avctx, buf, buf_size, &header_len);

if (s->ts_framing && next != AVERROR_INVALIDDATA &&
ff_combine_frame(pc, next, &buf, &buf_size) < 0) {
*poutbuf      = NULL;
*poutbuf_size = 0;
return buf_size;
}

if (next == AVERROR_INVALIDDATA){
*poutbuf      = NULL;
*poutbuf_size = 0;
return buf_size;
}

*poutbuf      = buf + header_len;
*poutbuf_size = buf_size - header_len;
return next;
}