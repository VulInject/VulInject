file_to_pixbuf (const char  *path,
guint        destination_size,
GError     **error)
{
GdkPixbuf *pixbuf, *tmp_pixbuf;
GFile *file;
char *uri;
int original_width, original_height;

file = g_file_new_for_path (path);
uri = g_file_get_uri (file);
pixbuf = _gdk_pixbuf_new_from_uri_at_scale (uri, destination_size, error);
if (pixbuf == NULL)
return NULL;

tmp_pixbuf = gdk_pixbuf_apply_embedded_orientation (pixbuf);
gdk_pixbuf_copy_options (pixbuf, tmp_pixbuf);
gdk_pixbuf_remove_option (tmp_pixbuf, "orientation");
g_object_unref (pixbuf);
pixbuf = tmp_pixbuf;

original_width = GPOINTER_TO_INT (g_object_get_data (G_OBJECT (pixbuf),
"gnome-original-width"));
original_height = GPOINTER_TO_INT (g_object_get_data (G_OBJECT (pixbuf),
"gnome-original-height"));

if (original_width > 0 && original_height > 0) {
char *tmp;

tmp = g_strdup_printf ("%d", original_width);
gdk_pixbuf_set_option (pixbuf, "tEXt::Thumb::Image::Width", tmp);
g_free (tmp);

tmp = g_strdup_printf ("%d", original_height);
gdk_pixbuf_set_option (pixbuf, "tEXt::Thumb::Image::Height", tmp);
g_free (tmp);
}

return pixbuf;
}