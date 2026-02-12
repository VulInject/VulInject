static int vdpau_mpeg_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
{
MpegEncContext * const s = avctx->priv_data;
Picture *pic             = s->current_picture_ptr;
struct vdpau_picture_context *pic_ctx = pic->hwaccel_picture_private;
int val;

val = ff_vdpau_add_buffer(pic_ctx, buffer, size);
if (val < 0)
return val;

pic_ctx->info.mpeg.slice_count++;
return 0;
}