static int cavsvideo_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
{
ParseContext *pc = s->priv_data;
int next;

if(s->flags & PARSER_FLAG_COMPLETE_FRAMES){
next= buf_size;
}else{
next= cavs_find_frame_end(pc, buf, buf_size);

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

const AVCodecParser ff_cavsvideo_parser = {
.codec_ids      = { AV_CODEC_ID_CAVS },
.priv_data_size = sizeof(ParseContext),
.parser_parse   = cavsvideo_parse,
.parser_close   = ff_parse_close,
};