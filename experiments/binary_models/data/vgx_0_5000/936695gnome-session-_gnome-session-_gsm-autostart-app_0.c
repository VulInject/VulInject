gsm_autostart_app_initable_init (GInitable *initable,
GCancellable *cancellable,
GError  **error)
{
GsmAutostartApp *app = GSM_AUTOSTART_APP (initable);
GsmAutostartAppPrivate *priv = gsm_autostart_app_get_instance_private (app);

g_assert (priv->desktop_filename != NULL);
priv->app_info = g_desktop_app_info_new_from_filename (priv->desktop_filename);
if (priv->app_info == NULL) {
g_set_error (error, G_IO_ERROR, G_IO_ERROR_FAILED,
"Could not parse desktop file %s or it references a not found TryExec binary", priv->desktop_id);
return FALSE;
}

load_desktop_file (app);

return TRUE;
}