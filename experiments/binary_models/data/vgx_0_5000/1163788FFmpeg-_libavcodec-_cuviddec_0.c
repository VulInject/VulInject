static int CUDAAPI cuvid_handle_picture_decode(void *opaque, CUVIDPICPARAMS* picparams)
{
AVCodecContext *avctx = opaque;
CuvidContext *ctx = avctx->priv_data;

av_log(avctx, AV_LOG_TRACE, "pfnDecodePicture\n");

if(picparams->intra_pic_flag)
ctx->key_frame[picparams->CurrPicIdx] = picparams->intra_pic_flag;

ctx->internal_error = CHECK_CU(ctx->cvdl->cuvidDecodePicture(ctx->cudecoder, picparams));
if (ctx->internal_error < 0)
return 0;

return 1;
}