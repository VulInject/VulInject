drive_poll_for_media_cb (GObject      *source_object,
GAsyncResult *res,
gpointer      user_data)
{
NautilusGtkPlacesSidebar *sidebar;
GError *error;
char *primary;
char *name;

sidebar = NAUTILUS_GTK_PLACES_SIDEBAR (user_data);

error = NULL;
if (!g_drive_poll_for_media_finish (G_DRIVE (source_object), res, &error))
{
if (error->code != G_IO_ERROR_FAILED_HANDLED)
{
name = g_drive_get_name (G_DRIVE (source_object));
primary = g_strdup_printf (_("Unable to poll “%s” for media changes"), name);
g_free (name);
emit_show_error_message (sidebar, primary, error->message);
g_free (primary);
}
g_error_free (error);
}

g_object_unref (sidebar);
}