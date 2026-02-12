gdk_pixbuf_scale_simple (const GdkPixbuf *src,
int              dest_width,
int              dest_height,
GdkInterpType    interp_type)
{
GdkPixbuf *dest;

g_return_val_if_fail (GDK_IS_PIXBUF (src), NULL);
g_return_val_if_fail (dest_width > 0, NULL);
g_return_val_if_fail (dest_height > 0, NULL);


if (dest_width == src->width && dest_height == src->height)
return gdk_pixbuf_copy (src);

dest = gdk_pixbuf_new (GDK_COLORSPACE_RGB, src->has_alpha, 8, dest_width, dest_height);
if (!dest)
return NULL;

gdk_pixbuf_scale (src, dest,  0, 0, dest_width, dest_height, 0, 0,
(double) dest_width / src->width,
(double) dest_height / src->height,
interp_type);

return dest;
}