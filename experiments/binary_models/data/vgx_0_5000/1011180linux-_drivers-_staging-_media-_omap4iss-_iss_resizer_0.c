static int resizer_set_format(struct v4l2_subdev *sd,
struct v4l2_subdev_state *sd_state,
struct v4l2_subdev_format *fmt)
{
struct iss_resizer_device *resizer = v4l2_get_subdevdata(sd);
struct v4l2_mbus_framefmt *format;

format = __resizer_get_format(resizer, sd_state, fmt->pad, fmt->which);
if (!format)
return -EINVAL;

resizer_try_format(resizer, sd_state, fmt->pad, &fmt->format,
fmt->which);
*format = fmt->format;


if (fmt->pad == RESIZER_PAD_SINK) {
format = __resizer_get_format(resizer, sd_state,
RESIZER_PAD_SOURCE_MEM,
fmt->which);
*format = fmt->format;
resizer_try_format(resizer, sd_state, RESIZER_PAD_SOURCE_MEM,
format,
fmt->which);
}

return 0;
}