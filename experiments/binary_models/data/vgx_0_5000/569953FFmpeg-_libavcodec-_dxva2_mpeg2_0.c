static int dxva2_mpeg2_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
{
const struct MpegEncContext *s = avctx->priv_data;
struct dxva2_picture_context *ctx_pic =
s->current_picture_ptr->hwaccel_picture_private;
unsigned position;

if (ctx_pic->slice_count >= MAX_SLICES) {
avpriv_request_sample(avctx, "%d slices in dxva2",
ctx_pic->slice_count);
return -1;
}
if (!ctx_pic->bitstream)
ctx_pic->bitstream = buffer;
ctx_pic->bitstream_size += size;

position = buffer - ctx_pic->bitstream;
fill_slice(avctx, s, &ctx_pic->slice[ctx_pic->slice_count++], position,
buffer, size);
return 0;
}