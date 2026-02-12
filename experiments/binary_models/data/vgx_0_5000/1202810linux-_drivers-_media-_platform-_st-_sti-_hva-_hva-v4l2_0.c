static int hva_s_fmt_frame(struct file *file, void *fh, struct v4l2_format *f)
{
struct hva_ctx *ctx = fh_to_ctx(file->private_data);
struct device *dev = ctx_to_dev(ctx);
struct v4l2_pix_format *pix = &f->fmt.pix;
struct vb2_queue *vq;
int ret;

ret = hva_try_fmt_frame(file, fh, f);
if (ret) {
dev_dbg(dev, "%s V4L2 S_FMT (OUTPUT): unsupported format %.4s\n",
ctx->name, (char *)&pix->pixelformat);
return ret;
}

vq = v4l2_m2m_get_vq(ctx->fh.m2m_ctx, f->type);
if (vb2_is_streaming(vq)) {
dev_dbg(dev, "%s V4L2 S_FMT (OUTPUT): queue busy\n", ctx->name);
return -EBUSY;
}

ctx->colorspace = pix->colorspace;
ctx->xfer_func = pix->xfer_func;
ctx->ycbcr_enc = pix->ycbcr_enc;
ctx->quantization = pix->quantization;

ctx->frameinfo.aligned_width = ALIGN(pix->width, HVA_WIDTH_ALIGNMENT);
ctx->frameinfo.aligned_height = ALIGN(pix->height,
HVA_HEIGHT_ALIGNMENT);
ctx->frameinfo.size = pix->sizeimage;
ctx->frameinfo.pixelformat = pix->pixelformat;
ctx->frameinfo.width = pix->width;
ctx->frameinfo.height = pix->height;
ctx->flags |= HVA_FLAG_FRAMEINFO;

return 0;
}