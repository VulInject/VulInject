static int vaapi_encode_h265_write_access_unit(AVCodecContext *avctx,
char *data, size_t *data_len,
CodedBitstreamFragment *au)
{
VAAPIEncodeH265Context *priv = avctx->priv_data;
int err;

err = ff_cbs_write_fragment_data(priv->cbc, au);
if (err < 0) {
av_log(avctx, AV_LOG_ERROR, "Failed to write packed header.\n");
return err;
}

if (*data_len < 8 * au->data_size - au->data_bit_padding) {
av_log(avctx, AV_LOG_ERROR, "Access unit too large: "
"%zu < %zu.\n", *data_len,
8 * au->data_size - au->data_bit_padding);
return AVERROR(ENOSPC);
}

memcpy(data, au->data, au->data_size);
*data_len = 8 * au->data_size - au->data_bit_padding;

return 0;
}