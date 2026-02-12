ck_session_proxy_signal_cb (GDBusProxy  *proxy,
const gchar *sender_name,
const gchar *signal_name,
GVariant    *parameters,
gpointer     user_data)
{
GsmConsolekit *consolekit = user_data;
gboolean is_active;

g_debug ("GsmConsolekit: received ConsoleKit signal: %s", signal_name);

if (g_strcmp0 (signal_name, "ActiveChanged") != 0) {
g_debug ("GsmConsolekit: ignoring %s signal", signal_name);
return;
}

g_variant_get (parameters, "(b)", &is_active);
if (consolekit->priv->is_active != is_active) {
g_debug ("GsmConsolekit: session state changed");
consolekit->priv->is_active = is_active;
g_object_notify (G_OBJECT (consolekit), "active");
}
}