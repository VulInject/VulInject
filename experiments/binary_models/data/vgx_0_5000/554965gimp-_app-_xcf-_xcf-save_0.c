xcf_save_tile (XcfInfo        *info,
GeglBuffer     *buffer,
GeglRectangle  *tile_rect,
const Babl     *format,
GError        **error)
{
gint    bpp       = babl_format_get_bytes_per_pixel (format);
gint    tile_size = bpp * tile_rect->width * tile_rect->height;
guchar *tile_data = g_alloca (tile_size);
GError *tmp_error = NULL;

gegl_buffer_get (buffer, tile_rect, 1.0, format, tile_data,
GEGL_AUTO_ROWSTRIDE, GEGL_ABYSS_NONE);

if (info->file_version <= 11)
{
xcf_write_int8_check_error (info, tile_data, tile_size);
}
else
{
gint n_components = babl_format_get_n_components (format);

xcf_write_component_check_error (info, bpp / n_components, tile_data,
tile_size / bpp * n_components);
}

return TRUE;
}