static int sipr_parse(AVCodecParserContext *s1, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
{
SiprParserContext *s = s1->priv_data;
ParseContext *pc = &s->pc;
int next;

next = sipr_split(avctx, buf, buf_size);
if (ff_combine_frame(pc, next, &buf, &buf_size) < 0) {
*poutbuf = NULL;
*poutbuf_size = 0;
return buf_size;
}

*poutbuf      = buf;
*poutbuf_size = buf_size;
return next;
}

const AVCodecParser ff_sipr_parser = {
.codec_ids      = { AV_CODEC_ID_SIPR },
.priv_data_size = sizeof(SiprParserContext),
.parser_parse   = sipr_parse,
.parser_close   = ff_parse_close,
};