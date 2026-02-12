static int latm_parse(AVCodecParserContext *s1, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
{
LATMParseContext *s = s1->priv_data;
ParseContext *pc    = &s->pc;
int next;

if (s1->flags & PARSER_FLAG_COMPLETE_FRAMES) {
next = buf_size;
} else {
next = latm_find_frame_end(s1, buf, buf_size);

if (ff_combine_frame(pc, next, &buf, &buf_size) < 0) {
*poutbuf      = NULL;
*poutbuf_size = 0;
return buf_size;
}
}
*poutbuf      = buf;
*poutbuf_size = buf_size;
return next;
}