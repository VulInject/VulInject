static void ud_clear(struct vc_data *vc, struct fb_info *info, int sy,
int sx, int height, int width)
{
struct fbcon_ops *ops = info->fbcon_par;
struct fb_fillrect region;
int bgshift = (vc->vc_hi_font_mask) ? 13 : 12;
u32 vyres = GETVYRES(ops->p, info);
u32 vxres = GETVXRES(ops->p, info);

region.color = attr_bgcol_ec(bgshift,vc,info);
region.dy = vyres - ((sy + height) * vc->vc_font.height);
region.dx = vxres - ((sx + width) *  vc->vc_font.width);
region.width = width * vc->vc_font.width;
region.height = height * vc->vc_font.height;
region.rop = ROP_COPY;

info->fbops->fb_fillrect(info, &region);
}