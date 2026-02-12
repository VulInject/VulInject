ev_file_monitor_new (const gchar *uri)
{
EvFileMonitor *ev_monitor;
EvFileMonitorPrivate *priv;
GFile         *file;
GError        *error = NULL;

ev_monitor = EV_FILE_MONITOR (g_object_new (EV_TYPE_FILE_MONITOR, NULL));
priv = GET_PRIVATE (ev_monitor);

file = g_file_new_for_uri (uri);
priv->monitor = g_file_monitor_file (file, G_FILE_MONITOR_NONE, NULL, &error);
if (priv->monitor) {
g_signal_connect (priv->monitor, "changed",
G_CALLBACK (ev_file_monitor_changed_cb), ev_monitor);
} else if (error) {
g_warning ("%s", error->message);
g_error_free (error);
}

g_object_unref (file);

return ev_monitor;
}