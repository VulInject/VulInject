static void
boot_fb_eraseline_impl(uint16_t x, uint16_t y)
{
uint32_t toffset, size;
uint32_t fg, bg;
uint8_t *dst, *sdst;
int i;

boot_get_color(&fg, &bg);
bg = boot_color_map(bg);

size = fb_info.terminal.x * boot_fb_font.vf_width * fb_info.bpp;

toffset = x * fb_info.bpp + y * fb_info.pitch;
dst = fb_info.fb + toffset;
sdst = fb_info.shadow_fb + toffset;

for (i = 0; i < boot_fb_font.vf_height; i++) {
uint8_t *dest = dst + i * fb_info.pitch;
if (fb_info.fb + fb_info.fb_size >= dest + size)
boot_fb_fill(dest, bg, size);
if (fb_info.shadow_fb != NULL) {
dest = sdst + i * fb_info.pitch;
if (fb_info.shadow_fb + fb_info.fb_size >=
dest + size) {
boot_fb_fill(dest, bg, size);
}
}
}
}