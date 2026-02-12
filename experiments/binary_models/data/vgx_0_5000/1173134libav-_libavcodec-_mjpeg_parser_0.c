static int jpeg_parse(AVCodecParserContext *s,
AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
{
ParseContext *pc = s->priv_data;
int next;

if(s->flags & PARSER_FLAG_COMPLETE_FRAMES){
next= buf_size;
}else{
next= find_frame_end(pc, buf, buf_size);

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


AVCodecParser ff_mjpeg_parser = {
.codec_ids      = { AV_CODEC_ID_MJPEG },
.priv_data_size = sizeof(ParseContext),
.parser_parse   = jpeg_parse,
.parser_close   = ff_parse_close,
};