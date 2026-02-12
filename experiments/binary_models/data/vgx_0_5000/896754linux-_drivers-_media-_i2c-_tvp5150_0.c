static int tvp5150_fill_fmt(struct v4l2_subdev *sd,
struct v4l2_subdev_state *sd_state,
struct v4l2_subdev_format *format)
{
struct v4l2_mbus_framefmt *f;
struct tvp5150 *decoder = to_tvp5150(sd);

if (!format || (format->pad != TVP5150_PAD_VID_OUT))
return -EINVAL;

f = &format->format;

f->width = decoder->rect.width;
f->height = decoder->rect.height / 2;

f->code = TVP5150_MBUS_FMT;
f->field = TVP5150_FIELD;
f->colorspace = TVP5150_COLORSPACE;

dev_dbg_lvl(sd->dev, 1, debug, "width = %d, height = %d\n", f->width,
f->height);
return 0;
}