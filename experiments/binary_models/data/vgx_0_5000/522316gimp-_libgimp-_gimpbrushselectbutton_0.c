gimp_brush_select_preview_draw (GimpPreviewArea *area,
gint             x,
gint             y,
_PreviewBitmap   mask,
gint             rowstride)
{
const guchar *src;
guchar       *dest;
guchar       *buf;
gint          i, j;

g_debug ("%s", G_STRFUNC);

buf = g_new (guchar, mask.width * mask.height);

src  = mask.mask_data;
dest = buf;

for (j = 0; j < mask.height; j++)
{
const guchar *s = src;

for (i = 0; i < mask.width; i++, s++, dest++)
*dest = 255 - *s;

src += rowstride;
}

gimp_preview_area_draw (area,
x, y, mask.width, mask.height,
GIMP_GRAY_IMAGE,
buf,
mask.width);

g_free (buf);
}