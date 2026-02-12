static int vaapi_encode_mpeg2_write_fragment(AVCodecContext *avctx,
char *data, size_t *data_len,
CodedBitstreamFragment *frag)
{
VAAPIEncodeContext       *ctx = avctx->priv_data;
VAAPIEncodeMPEG2Context *priv = ctx->priv_data;
int err;

err = ff_cbs_write_fragment_data(priv->cbc, frag);
if (err < 0) {
av_log(avctx, AV_LOG_ERROR, "Failed to write packed header.\n");
return err;
}

if (*data_len < 8 * frag->data_size - frag->data_bit_padding) {
av_log(avctx, AV_LOG_ERROR, "Access unit too large: "
"%zu < %zu.\n", *data_len,
8 * frag->data_size - frag->data_bit_padding);
return AVERROR(ENOSPC);
}

memcpy(data, frag->data, frag->data_size);
*data_len = 8 * frag->data_size - frag->data_bit_padding;

return 0;
}