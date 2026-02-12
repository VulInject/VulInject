gsettings_condition_cb (GSettings  *settings,
const char *key,
gpointer    user_data)
{
GsmApp *app = GSM_APP (user_data);
GsmAutostartAppPrivate *priv = gsm_autostart_app_get_instance_private (GSM_AUTOSTART_APP (app));
gboolean                condition;

g_return_if_fail (GSM_IS_APP (user_data));

condition = g_settings_get_boolean (settings, key);

g_debug ("GsmAutostartApp: app:%s condition changed condition:%d",
gsm_app_peek_id (app),
condition);


if (condition != priv->condition) {
priv->condition = condition;
g_signal_emit (app, signals[CONDITION_CHANGED], 0, condition);
}
}