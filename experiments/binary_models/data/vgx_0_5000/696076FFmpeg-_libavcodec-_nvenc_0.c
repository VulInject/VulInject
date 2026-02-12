av_cold int ff_nvenc_encode_close(AVCodecContext *avctx)
{
NvencContext *ctx               = avctx->priv_data;
NvencDynLoadFunctions *dl_fn = &ctx->nvenc_dload_funcs;
NV_ENCODE_API_FUNCTION_LIST *p_nvenc = &dl_fn->nvenc_funcs;
int i, res;


if (ctx->nvencoder) {
NV_ENC_PIC_PARAMS params        = { .version        = NV_ENC_PIC_PARAMS_VER,
.encodePicFlags = NV_ENC_PIC_FLAG_EOS };

res = nvenc_push_context(avctx);
if (res < 0)
return res;

p_nvenc->nvEncEncodePicture(ctx->nvencoder, &params);
}

reorder_queue_flush(ctx->reorder_queue);
av_fifo_freep2(&ctx->reorder_queue);
av_fifo_freep2(&ctx->output_surface_ready_queue);
av_fifo_freep2(&ctx->output_surface_queue);
av_fifo_freep2(&ctx->unused_surface_queue);

if (ctx->surfaces && (avctx->pix_fmt == AV_PIX_FMT_CUDA || avctx->pix_fmt == AV_PIX_FMT_D3D11)) {
for (i = 0; i < ctx->nb_registered_frames; i++) {
if (ctx->registered_frames[i].mapped)
p_nvenc->nvEncUnmapInputResource(ctx->nvencoder, ctx->registered_frames[i].in_map.mappedResource);
if (ctx->registered_frames[i].regptr)
p_nvenc->nvEncUnregisterResource(ctx->nvencoder, ctx->registered_frames[i].regptr);
}
ctx->nb_registered_frames = 0;
}

if (ctx->surfaces) {
for (i = 0; i < ctx->nb_surfaces; ++i) {
if (avctx->pix_fmt != AV_PIX_FMT_CUDA && avctx->pix_fmt != AV_PIX_FMT_D3D11)
p_nvenc->nvEncDestroyInputBuffer(ctx->nvencoder, ctx->surfaces[i].input_surface);
av_frame_free(&ctx->surfaces[i].in_ref);
p_nvenc->nvEncDestroyBitstreamBuffer(ctx->nvencoder, ctx->surfaces[i].output_surface);
}
}
av_freep(&ctx->surfaces);
ctx->nb_surfaces = 0;

av_frame_free(&ctx->frame);

av_freep(&ctx->sei_data);

if (ctx->nvencoder) {
p_nvenc->nvEncDestroyEncoder(ctx->nvencoder);

res = nvenc_pop_context(avctx);
if (res < 0)
return res;
}
ctx->nvencoder = NULL;

if (ctx->cu_context_internal)
CHECK_CU(dl_fn->cuda_dl->cuCtxDestroy(ctx->cu_context_internal));
ctx->cu_context = ctx->cu_context_internal = NULL;

if (ctx->d3d11_device) {
ID3D11Device_Release(ctx->d3d11_device);
ctx->d3d11_device = NULL;
}

nvenc_free_functions(&dl_fn->nvenc_dl);
cuda_free_functions(&dl_fn->cuda_dl);

dl_fn->nvenc_device_count = 0;

av_log(avctx, AV_LOG_VERBOSE, "Nvenc unloaded\n");

return 0;
}