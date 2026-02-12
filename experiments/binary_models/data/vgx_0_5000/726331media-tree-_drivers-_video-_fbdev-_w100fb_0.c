static int w100fb_set_par(struct fb_info *info)
{
struct w100fb_par *par=info->par;

if (par->xres != info->var.xres || par->yres != info->var.yres)	{
par->xres = info->var.xres;
par->yres = info->var.yres;
par->mode = w100fb_get_mode(par, &par->xres, &par->yres, 0);

info->fix.visual = FB_VISUAL_TRUECOLOR;
info->fix.ypanstep = 0;
info->fix.ywrapstep = 0;
info->fix.line_length = par->xres * BITS_PER_PIXEL / 8;

mutex_lock(&info->mm_lock);
if ((par->xres*par->yres*BITS_PER_PIXEL/8) > (MEM_INT_SIZE+1)) {
par->extmem_active = 1;
info->fix.smem_len = par->mach->mem->size+1;
} else {
par->extmem_active = 0;
info->fix.smem_len = MEM_INT_SIZE+1;
}
mutex_unlock(&info->mm_lock);

w100fb_activate_var(par);
}
return 0;
}