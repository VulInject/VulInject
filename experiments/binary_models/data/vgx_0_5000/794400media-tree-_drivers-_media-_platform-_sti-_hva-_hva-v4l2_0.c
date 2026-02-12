static int hva_s_fmt_stream(struct file *file, void *fh, struct v4l2_format *f)
{
struct hva_ctx *ctx = fh_to_ctx(file->private_data);
struct device *dev = ctx_to_dev(ctx);
struct vb2_queue *vq;
int ret;

ret = hva_try_fmt_stream(file, fh, f);
if (ret) {
dev_dbg(dev, "%s V4L2 S_FMT (CAPTURE): unsupported format %.4s\n",
ctx->name, (char *)&f->fmt.pix.pixelformat);
return ret;
}

vq = v4l2_m2m_get_vq(ctx->fh.m2m_ctx, f->type);
if (vb2_is_streaming(vq)) {
dev_dbg(dev, "%s V4L2 S_FMT (CAPTURE): queue busy\n",
ctx->name);
return -EBUSY;
}

ctx->max_stream_size = f->fmt.pix.sizeimage;
ctx->streaminfo.width = f->fmt.pix.width;
ctx->streaminfo.height = f->fmt.pix.height;
ctx->streaminfo.streamformat = f->fmt.pix.pixelformat;
ctx->flags |= HVA_FLAG_STREAMINFO;

return 0;
}