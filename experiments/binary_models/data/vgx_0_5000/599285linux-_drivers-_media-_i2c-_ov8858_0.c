static int ov8858_set_fmt(struct v4l2_subdev *sd,
struct v4l2_subdev_state *state,
struct v4l2_subdev_format *fmt)
{
struct ov8858 *ov8858 = sd_to_ov8858(sd);
const struct ov8858_mode *mode;
s64 h_blank, vblank_def;

mode = v4l2_find_nearest_size(ov8858_modes, ARRAY_SIZE(ov8858_modes),
width, height, fmt->format.width,
fmt->format.height);

fmt->format.code = MEDIA_BUS_FMT_SBGGR10_1X10;
fmt->format.width = mode->width;
fmt->format.height = mode->height;
fmt->format.field = V4L2_FIELD_NONE;


*v4l2_subdev_get_pad_format(sd, state, 0) =  fmt->format;

if (fmt->which == V4L2_SUBDEV_FORMAT_TRY)
return 0;


h_blank = mode->hts_def - mode->width;
__v4l2_ctrl_modify_range(ov8858->hblank, h_blank, h_blank, 1,
h_blank);

vblank_def = mode->vts_def - mode->height;
__v4l2_ctrl_modify_range(ov8858->vblank, vblank_def,
OV8858_VTS_MAX - mode->height, 1,
vblank_def);

return 0;
}