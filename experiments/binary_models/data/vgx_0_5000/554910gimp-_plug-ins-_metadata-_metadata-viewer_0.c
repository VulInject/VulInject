metadata_dialog_add_translated_tag (GExiv2Metadata  *metadata,
GtkListStore    *store,
gint             tag_column,
gint             value_column,
const gchar     *tag)
{
gchar  *value = NULL;
GError *error = NULL;

value = gexiv2_metadata_try_get_tag_interpreted_string (metadata, tag, &error);
if (error)
{
g_printerr ("%s: unreadable '%s' metadata tag: %s\n",
G_STRFUNC, tag, error->message);
g_clear_error (&error);
}

metadata_dialog_add_tag (store, tag_column, value_column,
tag, gettext (value));
g_free (value);
}