static int resizer_enum_frame_size(struct v4l2_subdev *sd,
struct v4l2_subdev_pad_config *cfg,
struct v4l2_subdev_frame_size_enum *fse)
{
struct v4l2_mbus_framefmt format;

if (fse->index != 0)
return -EINVAL;

format.code = fse->code;
format.width = 1;
format.height = 1;
resizer_try_format(sd, cfg, fse->pad, &format, fse->which);
fse->min_width = format.width;
fse->min_height = format.height;

if (format.code != fse->code)
return -EINVAL;

format.code = fse->code;
format.width = -1;
format.height = -1;
resizer_try_format(sd, cfg, fse->pad, &format, fse->which);
fse->max_width = format.width;
fse->max_height = format.height;

return 0;
}