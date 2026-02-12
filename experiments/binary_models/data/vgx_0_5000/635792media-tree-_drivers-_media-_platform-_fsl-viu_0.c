static int vidioc_s_fmt_cap(struct file *file, void *priv,
struct v4l2_format *f)
{
struct viu_fh *fh = priv;
int ret;

ret = vidioc_try_fmt_cap(file, fh, f);
if (ret < 0)
return ret;

fh->fmt           = format_by_fourcc(f->fmt.pix.pixelformat);
fh->width         = f->fmt.pix.width;
fh->height        = f->fmt.pix.height;
fh->sizeimage     = f->fmt.pix.sizeimage;
fh->vb_vidq.field = f->fmt.pix.field;
fh->type          = f->type;
return 0;
}