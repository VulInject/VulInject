reboot_or_poweroff_done (GObject      *source,
GAsyncResult *res,
gpointer      user_data)
{
GsmConsolekit *consolekit = user_data;
GVariant *result;
GError *error = NULL;

result = g_dbus_proxy_call_finish (G_DBUS_PROXY (source),
res,
&error);

if (result == NULL) {
if (!g_error_matches (error, G_DBUS_ERROR, G_DBUS_ERROR_ACCESS_DENIED)) {
g_warning ("Shutdown failed: %s", error->message);
}
g_error_free (error);
drop_delay_inhibitor (consolekit);
g_debug ("GsmConsolekit: shutdown preparation failed");
consolekit->priv->prepare_for_shutdown_expected = FALSE;
g_signal_emit_by_name (consolekit, "shutdown-prepared", FALSE);
} else {
g_variant_unref (result);
}
}