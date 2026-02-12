static int ov7670_set_fmt(struct v4l2_subdev *sd,
struct v4l2_subdev_state *sd_state,
struct v4l2_subdev_format *format)
{
struct ov7670_info *info = to_state(sd);
struct v4l2_mbus_framefmt *mbus_fmt;
int ret;

if (format->pad)
return -EINVAL;

if (format->which == V4L2_SUBDEV_FORMAT_TRY) {
ret = ov7670_try_fmt_internal(sd, &format->format, NULL, NULL);
if (ret)
return ret;
mbus_fmt = v4l2_subdev_get_try_format(sd, sd_state,
format->pad);
*mbus_fmt = format->format;
return 0;
}

ret = ov7670_try_fmt_internal(sd, &format->format, &info->fmt, &info->wsize);
if (ret)
return ret;


if (info->on)
return ov7670_apply_fmt(sd);

return 0;
}