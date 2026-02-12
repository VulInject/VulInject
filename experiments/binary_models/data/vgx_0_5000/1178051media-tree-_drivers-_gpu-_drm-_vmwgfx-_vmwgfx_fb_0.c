static int vmw_fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
{
struct vmw_fb_par *par = info->par;

if ((var->xoffset + var->xres) > var->xres_virtual ||
(var->yoffset + var->yres) > var->yres_virtual) {
DRM_ERROR("Requested panning can not fit in framebuffer\n");
return -EINVAL;
}

mutex_lock(&par->bo_mutex);
par->fb_x = var->xoffset;
par->fb_y = var->yoffset;
if (par->set_fb)
vmw_fb_dirty_mark(par, par->fb_x, par->fb_y, par->set_fb->width,
par->set_fb->height);
mutex_unlock(&par->bo_mutex);

return 0;
}