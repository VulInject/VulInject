static int jpeg2000_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
{
JPEG2000ParserContext *m = s->priv_data;
ParseContext *pc = &m->pc;
int next;

if(s->flags & PARSER_FLAG_COMPLETE_FRAMES) {
next= buf_size;
} else {
next= find_frame_end(m, buf, buf_size);

if (ff_combine_frame(pc, next, &buf, &buf_size) < 0) {
*poutbuf = NULL;
*poutbuf_size = 0;
return buf_size;
}
}

*poutbuf = buf;
*poutbuf_size = buf_size;
return next;
}