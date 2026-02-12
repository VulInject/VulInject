static int tvp5150_get_selection(struct v4l2_subdev *sd,
struct v4l2_subdev_pad_config *cfg,
struct v4l2_subdev_selection *sel)
{
struct tvp5150 *decoder = container_of(sd, struct tvp5150, sd);
v4l2_std_id std;

if (sel->which != V4L2_SUBDEV_FORMAT_ACTIVE)
return -EINVAL;

switch (sel->target) {
case V4L2_SEL_TGT_CROP_BOUNDS:
case V4L2_SEL_TGT_CROP_DEFAULT:
sel->r.left = 0;
sel->r.top = 0;
sel->r.width = TVP5150_H_MAX;


if (decoder->norm == V4L2_STD_ALL)
std = tvp5150_read_std(sd);
else
std = decoder->norm;
if (std & V4L2_STD_525_60)
sel->r.height = TVP5150_V_MAX_525_60;
else
sel->r.height = TVP5150_V_MAX_OTHERS;
return 0;
case V4L2_SEL_TGT_CROP:
sel->r = decoder->rect;
return 0;
default:
return -EINVAL;
}
}