trash_query_info_cb (GObject      *source,
GAsyncResult *res,
gpointer      user_data)
{
NautilusTrashMonitor *trash_monitor = user_data;
GFileInfo *info;
guint32 item_count;
gboolean is_empty = TRUE;

info = g_file_query_info_finish (G_FILE (source), res, NULL);

if (info != NULL)
{
item_count = g_file_info_get_attribute_uint32 (info,
G_FILE_ATTRIBUTE_TRASH_ITEM_COUNT);
is_empty = item_count == 0;

g_object_unref (info);
}

update_empty_info (trash_monitor, is_empty);

g_object_unref (trash_monitor);
}