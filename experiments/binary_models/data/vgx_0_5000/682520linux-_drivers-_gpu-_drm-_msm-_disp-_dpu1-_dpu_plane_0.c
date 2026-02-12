static int dpu_plane_check_inline_rotation(struct dpu_plane *pdpu,
const struct dpu_sspp_sub_blks *sblk,
struct drm_rect src, const struct dpu_format *fmt)
{
size_t num_formats;
const u32 *supported_formats;

if (!sblk->rotation_cfg) {
DPU_ERROR("invalid rotation cfg\n");
return -EINVAL;
}

if (drm_rect_width(&src) > sblk->rotation_cfg->rot_maxheight) {
DPU_DEBUG_PLANE(pdpu, "invalid height for inline rot:%d max:%d\n",
src.y2, sblk->rotation_cfg->rot_maxheight);
return -EINVAL;
}

supported_formats = sblk->rotation_cfg->rot_format_list;
num_formats = sblk->rotation_cfg->rot_num_formats;

if (!DPU_FORMAT_IS_UBWC(fmt) ||
!dpu_find_format(fmt->base.pixel_format, supported_formats, num_formats))
return -EINVAL;

return 0;
}