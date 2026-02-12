static void RGB565_to_argb_u16(struct line_buffer *stage_buffer,
const struct vkms_frame_info *frame_info, int y)
{
struct pixel_argb_u16 *out_pixels = stage_buffer->pixels;
u16 *src_pixels = get_packed_src_addr(frame_info, y);
int x_limit = min_t(size_t, drm_rect_width(&frame_info->dst),
stage_buffer->n_pixels);

s64 fp_rb_ratio = drm_fixp_div(drm_int2fixp(65535), drm_int2fixp(31));
s64 fp_g_ratio = drm_fixp_div(drm_int2fixp(65535), drm_int2fixp(63));

for (size_t x = 0; x < x_limit; x++, src_pixels++) {
u16 rgb_565 = le16_to_cpu(*src_pixels);
s64 fp_r = drm_int2fixp((rgb_565 >> 11) & 0x1f);
s64 fp_g = drm_int2fixp((rgb_565 >> 5) & 0x3f);
s64 fp_b = drm_int2fixp(rgb_565 & 0x1f);

out_pixels[x].a = (u16)0xffff;
out_pixels[x].r = drm_fixp2int(drm_fixp_mul(fp_r, fp_rb_ratio));
out_pixels[x].g = drm_fixp2int(drm_fixp_mul(fp_g, fp_g_ratio));
out_pixels[x].b = drm_fixp2int(drm_fixp_mul(fp_b, fp_rb_ratio));
}
}