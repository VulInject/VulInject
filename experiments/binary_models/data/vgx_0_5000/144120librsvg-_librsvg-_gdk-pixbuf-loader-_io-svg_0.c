gdk_pixbuf__svg_image_stop_load (gpointer data, GError **error)
{
SvgContext *context = (SvgContext *)data;
GdkPixbuf *pixbuf;
gboolean result = TRUE;

if (error)
*error = NULL;

if (!context->handle) {
rsvg_propagate_error (error, _("Error displaying image"), ERROR_DISPLAYING_IMAGE);
return FALSE;
}

rsvg_handle_close (context->handle, error);

pixbuf = rsvg_handle_get_pixbuf (context->handle);

if (pixbuf != NULL) {
emit_prepared (context, pixbuf);
emit_updated (context, pixbuf);
g_object_unref (pixbuf);
}
else {
rsvg_propagate_error (error, _("Error displaying image"), ERROR_DISPLAYING_IMAGE);
result = FALSE;
}

g_object_unref (context->handle);
g_free (context);

return result;
}