static void set_encoder_id(OutputFile *of, OutputStream *ost)
{
const char *cname = ost->enc_ctx->codec->name;
uint8_t *encoder_string;
int encoder_string_len;

if (av_dict_get(ost->st->metadata, "encoder",  NULL, 0))
return;

encoder_string_len = sizeof(LIBAVCODEC_IDENT) + strlen(cname) + 2;
encoder_string     = av_mallocz(encoder_string_len);
if (!encoder_string)
report_and_exit(AVERROR(ENOMEM));

if (!of->bitexact && !ost->bitexact)
av_strlcpy(encoder_string, LIBAVCODEC_IDENT " ", encoder_string_len);
else
av_strlcpy(encoder_string, "Lavc ", encoder_string_len);
av_strlcat(encoder_string, cname, encoder_string_len);
av_dict_set(&ost->st->metadata, "encoder",  encoder_string,
AV_DICT_DONT_STRDUP_VAL | AV_DICT_DONT_OVERWRITE);
}