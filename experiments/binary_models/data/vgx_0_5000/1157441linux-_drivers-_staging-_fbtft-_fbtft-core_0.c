static void fbtft_mkdirty(struct fb_info *info, int y, int height)
{
struct fbtft_par *par = info->par;
struct fb_deferred_io *fbdefio = info->fbdefio;


if (y == -1) {
y = 0;
height = info->var.yres;
}


spin_lock(&par->dirty_lock);
if (y < par->dirty_lines_start)
par->dirty_lines_start = y;
if (y + height - 1 > par->dirty_lines_end)
par->dirty_lines_end = y + height - 1;
spin_unlock(&par->dirty_lock);


schedule_delayed_work(&info->deferred_work, fbdefio->delay);
}