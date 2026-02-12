static int vidioc_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
{
struct tm6000_fh  *fh = priv;
struct tm6000_core *dev = fh->dev;
int ret = vidioc_try_fmt_vid_cap(file, fh, f);
if (ret < 0)
return ret;

fh->fmt           = format_by_fourcc(f->fmt.pix.pixelformat);
fh->width         = f->fmt.pix.width;
fh->height        = f->fmt.pix.height;
fh->vb_vidq.field = f->fmt.pix.field;
fh->type          = f->type;

dev->fourcc       = f->fmt.pix.pixelformat;

tm6000_set_fourcc_format(dev);

return 0;
}