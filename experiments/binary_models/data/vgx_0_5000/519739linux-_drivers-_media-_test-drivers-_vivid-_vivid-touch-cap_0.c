int vivid_set_touch(struct vivid_dev *dev, unsigned int i)
{
struct v4l2_pix_format *f = &dev->tch_format;

if (i)
return -EINVAL;

f->pixelformat = V4L2_TCH_FMT_DELTA_TD16;
f->width =  VIVID_TCH_WIDTH;
f->height = VIVID_TCH_HEIGHT;
f->field = V4L2_FIELD_NONE;
f->colorspace = V4L2_COLORSPACE_RAW;
f->bytesperline = f->width * sizeof(s16);
f->sizeimage = f->width * f->height * sizeof(s16);
return 0;
}