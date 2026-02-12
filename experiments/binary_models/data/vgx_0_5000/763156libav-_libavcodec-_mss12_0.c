static int decode_region_intra(SliceContext *sc, ArithCoder *acoder,
int x, int y, int width, int height)
{
MSS12Context const *c = sc->c;
int mode;

mode = acoder->get_model_sym(acoder, &sc->intra_region);

if (!mode) {
int i, j, pix, rgb_pix;
ptrdiff_t stride     = c->pal_stride;
ptrdiff_t rgb_stride = c->rgb_stride;
uint8_t *dst     = c->pal_pic + x     + y * stride;
uint8_t *rgb_dst = c->rgb_pic + x * 3 + y * rgb_stride;

pix     = decode_pixel(acoder, &sc->intra_pix_ctx, NULL, 0, 0);
rgb_pix = c->pal[pix];
for (i = 0; i < height; i++, dst += stride, rgb_dst += rgb_stride) {
memset(dst, pix, width);
if (c->rgb_pic)
for (j = 0; j < width * 3; j += 3)
AV_WB24(rgb_dst + j, rgb_pix);
}
} else {
return decode_region(acoder, c->pal_pic, c->rgb_pic,
x, y, width, height, c->pal_stride, c->rgb_stride,
&sc->intra_pix_ctx, &c->pal[0]);
}

return 0;
}