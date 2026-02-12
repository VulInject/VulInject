static int tdsc_decode_jpeg_tile(AVCodecContext *avctx, int tile_size,
int x, int y, int w, int h)
{
TDSCContext *ctx = avctx->priv_data;
AVPacket jpkt;
int ret;


av_init_packet(&jpkt);
jpkt.data = ctx->tilebuffer;
jpkt.size = tile_size;

ret = avcodec_send_packet(ctx->jpeg_avctx, &jpkt);
if (ret < 0) {
av_log(avctx, AV_LOG_ERROR, "Error submitting a packet for decoding\n");
return ret;
}

ret = avcodec_receive_frame(ctx->jpeg_avctx, ctx->jpgframe);
if (ret < 0 || ctx->jpgframe->format != AV_PIX_FMT_YUVJ420P) {
av_log(avctx, AV_LOG_ERROR,
"JPEG decoding error (%d).\n", ret);


if (avctx->err_recognition & AV_EF_EXPLODE)
return AVERROR_INVALIDDATA;
else
return 0;
}


tdsc_blit(ctx->refframe->data[0] + x * 3 + ctx->refframe->linesize[0] * y,
ctx->refframe->linesize[0],
ctx->jpgframe->data[0], ctx->jpgframe->linesize[0],
ctx->jpgframe->data[1], ctx->jpgframe->data[2],
ctx->jpgframe->linesize[1], w, h);

av_frame_unref(ctx->jpgframe);

return 0;
}