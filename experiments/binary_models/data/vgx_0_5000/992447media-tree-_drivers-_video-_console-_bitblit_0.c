static void bit_clear_margins(struct vc_data *vc, struct fb_info *info,
int bottom_only)
{
unsigned int cw = vc->vc_font.width;
unsigned int ch = vc->vc_font.height;
unsigned int rw = info->var.xres - (vc->vc_cols*cw);
unsigned int bh = info->var.yres - (vc->vc_rows*ch);
unsigned int rs = info->var.xres - rw;
unsigned int bs = info->var.yres - bh;
struct fb_fillrect region;

region.color = 0;
region.rop = ROP_COPY;

if (rw && !bottom_only) {
region.dx = info->var.xoffset + rs;
region.dy = 0;
region.width = rw;
region.height = info->var.yres_virtual;
info->fbops->fb_fillrect(info, &region);
}

if (bh) {
region.dx = info->var.xoffset;
region.dy = info->var.yoffset + bs;
region.width = rs;
region.height = bh;
info->fbops->fb_fillrect(info, &region);
}
}