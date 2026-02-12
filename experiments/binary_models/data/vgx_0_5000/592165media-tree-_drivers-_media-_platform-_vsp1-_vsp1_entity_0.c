int vsp1_entity_init_cfg(struct v4l2_subdev *subdev,
struct v4l2_subdev_pad_config *cfg)
{
struct v4l2_subdev_format format;
unsigned int pad;

for (pad = 0; pad < subdev->entity.num_pads - 1; ++pad) {
memset(&format, 0, sizeof(format));

format.pad = pad;
format.which = cfg ? V4L2_SUBDEV_FORMAT_TRY
: V4L2_SUBDEV_FORMAT_ACTIVE;

v4l2_subdev_call(subdev, pad, set_fmt, cfg, &format);
}

return 0;
}