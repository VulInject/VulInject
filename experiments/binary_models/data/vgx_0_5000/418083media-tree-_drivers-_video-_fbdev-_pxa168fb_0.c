static int
pxa168fb_setcolreg(unsigned int regno, unsigned int red, unsigned int green,
unsigned int blue, unsigned int trans, struct fb_info *info)
{
struct pxa168fb_info *fbi = info->par;
u32 val;

if (info->var.grayscale)
red = green = blue = (19595 * red + 38470 * green +
7471 * blue) >> 16;

if (info->fix.visual == FB_VISUAL_TRUECOLOR && regno < 16) {
val =  chan_to_field(red,   &info->var.red);
val |= chan_to_field(green, &info->var.green);
val |= chan_to_field(blue , &info->var.blue);
fbi->pseudo_palette[regno] = val;
}

if (info->fix.visual == FB_VISUAL_PSEUDOCOLOR && regno < 256) {
val = to_rgb(red, green, blue);
writel(val, fbi->reg_base + LCD_SPU_SRAM_WRDAT);
writel(0x8300 | regno, fbi->reg_base + LCD_SPU_SRAM_CTRL);
}

return 0;
}