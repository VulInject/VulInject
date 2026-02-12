static int vimc_capture_enum_framesizes(struct file *file, void *fh,
struct v4l2_frmsizeenum *fsize)
{
const struct vimc_pix_map *vpix;

if (fsize->index)
return -EINVAL;


vpix = vimc_pix_map_by_code(fsize->pixel_format);
if (!vpix)
return -EINVAL;

fsize->type = V4L2_FRMSIZE_TYPE_CONTINUOUS;
fsize->stepwise.min_width = VIMC_FRAME_MIN_WIDTH;
fsize->stepwise.max_width = VIMC_FRAME_MAX_WIDTH;
fsize->stepwise.min_height = VIMC_FRAME_MIN_HEIGHT;
fsize->stepwise.max_height = VIMC_FRAME_MAX_HEIGHT;
fsize->stepwise.step_width = 1;
fsize->stepwise.step_height = 1;

return 0;
}