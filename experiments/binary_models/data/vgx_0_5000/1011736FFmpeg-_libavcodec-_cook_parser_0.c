static int cook_parse(AVCodecParserContext *s1, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
{
CookParseContext *s = s1->priv_data;

if (!s->duration &&
avctx->extradata && avctx->extradata_size >= 8 && avctx->ch_layout.nb_channels)
s->duration = AV_RB16(avctx->extradata + 4) / avctx->ch_layout.nb_channels;

s1->duration = s->duration;


*poutbuf      = buf;
*poutbuf_size = buf_size;
return buf_size;
}

const AVCodecParser ff_cook_parser = {
.codec_ids      = { AV_CODEC_ID_COOK },
.priv_data_size = sizeof(CookParseContext),
.parser_parse   = cook_parse,
};