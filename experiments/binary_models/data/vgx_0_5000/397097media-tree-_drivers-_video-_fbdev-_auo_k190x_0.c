static int auok190x_issue_pixels_rgb565(struct auok190xfb_par *par, int size,
u16 *data)
{
struct fb_var_screeninfo *var = &par->info->var;
struct device *dev = par->info->device;
int i;
u16 tmp;

if (size & 7) {
dev_err(dev, "issue_pixels: size %d must be a multiple of 8\n",
size);
return -EINVAL;
}

for (i = 0; i < (size >> 2); i++) {
par->board->set_ctl(par, AUOK190X_I80_WR, 0);

tmp  = (rgb565_to_gray4(data[4*i], var) & 0x000F);
tmp |= (rgb565_to_gray4(data[4*i+1], var) << 4) & 0x00F0;
tmp |= (rgb565_to_gray4(data[4*i+2], var) << 8) & 0x0F00;
tmp |= (rgb565_to_gray4(data[4*i+3], var) << 12) & 0xF000;

par->board->set_hdb(par, tmp);
par->board->set_ctl(par, AUOK190X_I80_WR, 1);
}

return 0;
}