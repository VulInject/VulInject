static void arkfb_settile(struct fb_info *info, struct fb_tilemap *map)
{
const u8 *font = map->data;
u8 __iomem *fb = (u8 __iomem *)info->screen_base;
int i, c;

if ((map->width != 8) || (map->height != 16) ||
(map->depth != 1) || (map->length != 256)) {
fb_err(info, "unsupported font parameters: width %d, height %d, depth %d, length %d\n",
map->width, map->height, map->depth, map->length);
return;
}

fb += 2;
for (c = 0; c < map->length; c++) {
for (i = 0; i < map->height; i++) {
fb_writeb(font[i], &fb[i * 4]);
fb_writeb(font[i], &fb[i * 4 + (128 * 8)]);
}
fb += 128;

if ((c % 8) == 7)
fb += 128*8;

font += map->height;
}
}