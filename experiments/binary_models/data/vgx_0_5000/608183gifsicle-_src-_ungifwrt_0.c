static int
calculate_min_code_bits(Gif_Image *gfi, const Gif_Writer *grr)
{
int colors_used = -1, min_code_bits, i;

if (grr->gcinfo.flags & GIF_WRITE_CAREFUL_MIN_CODE_SIZE) {

if (grr->local_size > 0)
colors_used = grr->local_size;
else if (grr->global_size > 0)
colors_used = grr->global_size;

} else if (gfi->img) {

int x, y, width = gfi->width, height = gfi->height;
colors_used = 0;
for (y = 0; y < height && colors_used < 128; y++) {
uint8_t *data = gfi->img[y];
for (x = width; x > 0; x--, data++)
if (*data > colors_used)
colors_used = *data;
}
colors_used++;

} else if (gfi->compressed) {

colors_used = 1 << gfi->compressed[0];

} else {

colors_used = 256;
}

min_code_bits = 2;		
i = 4;
while (i < colors_used) {
min_code_bits++;
i *= 2;
}

return min_code_bits;
}