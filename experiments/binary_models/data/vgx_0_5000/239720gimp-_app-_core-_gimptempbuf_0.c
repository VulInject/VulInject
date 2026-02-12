gimp_temp_buf_lock (const GimpTempBuf *buf,
const Babl        *format,
GeglAccessMode     access_mode)
{
guchar   *data;
LockData *lock_data;
gint      n_pixels;
gint      bpp;

g_return_val_if_fail (buf != NULL, NULL);

if (! format || format == buf->format)
return gimp_temp_buf_get_data (buf);

n_pixels = buf->width * buf->height;
bpp      = babl_format_get_bytes_per_pixel (format);

data = gegl_scratch_alloc (LOCK_DATA_ALIGNMENT + n_pixels * bpp);

if ((guintptr) data % LOCK_DATA_ALIGNMENT)
{
g_free (data);

g_return_val_if_reached (NULL);
}

lock_data              = (LockData *) data;
lock_data->format      = format;
lock_data->access_mode = access_mode;

data += LOCK_DATA_ALIGNMENT;

if (access_mode & GEGL_ACCESS_READ)
{
babl_process (babl_fish (buf->format, format),
gimp_temp_buf_get_data (buf),
data,
n_pixels);
}

return data;
}