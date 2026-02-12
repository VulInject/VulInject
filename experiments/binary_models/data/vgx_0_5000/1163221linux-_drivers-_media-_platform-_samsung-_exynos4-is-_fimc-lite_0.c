static int fimc_lite_subdev_get_fmt(struct v4l2_subdev *sd,
struct v4l2_subdev_state *sd_state,
struct v4l2_subdev_format *fmt)
{
struct fimc_lite *fimc = v4l2_get_subdevdata(sd);
struct v4l2_mbus_framefmt *mf = &fmt->format;
struct flite_frame *f = &fimc->inp_frame;

if (fmt->which == V4L2_SUBDEV_FORMAT_TRY) {
mf = __fimc_lite_subdev_get_try_fmt(sd, sd_state, fmt->pad);
fmt->format = *mf;
return 0;
}

mutex_lock(&fimc->lock);
mf->colorspace = f->fmt->colorspace;
mf->code = f->fmt->mbus_code;

if (fmt->pad == FLITE_SD_PAD_SINK) {

mf->width = f->f_width;
mf->height = f->f_height;
} else {

mf->width = f->rect.width;
mf->height = f->rect.height;
}
mutex_unlock(&fimc->lock);
return 0;
}