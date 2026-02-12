static int vidioc_enum_framesizes(struct file *file, void *fh,
struct v4l2_frmsizeenum *fsize)
{
const struct mtk_video_fmt *fmt;
struct mtk_vcodec_ctx *ctx = fh_to_ctx(fh);

if (fsize->index != 0)
return -EINVAL;

fmt = mtk_venc_find_format(fsize->pixel_format,
ctx->dev->venc_pdata);
if (!fmt)
return -EINVAL;

fsize->type = V4L2_FRMSIZE_TYPE_STEPWISE;

if (ctx->dev->enc_capability & MTK_VENC_4K_CAPABILITY_ENABLE)
fsize->stepwise = mtk_venc_4k_framesizes;
else
fsize->stepwise = mtk_venc_hd_framesizes;

return 0;
}