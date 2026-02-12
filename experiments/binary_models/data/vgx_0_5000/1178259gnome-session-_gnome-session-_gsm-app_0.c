gsm_app_restart (GsmApp  *app,
GError **error)
{
GsmAppPrivate *priv = gsm_app_get_instance_private (app);
GTimeVal current_time;
g_debug ("Re-starting app: %s", priv->id);

g_get_current_time (&current_time);
if (priv->last_restart_time.tv_sec > 0
&& (current_time.tv_sec - priv->last_restart_time.tv_sec) < _GSM_APP_RESPAWN_RATELIMIT_SECONDS) {
g_warning ("App '%s' respawning too quickly", gsm_app_peek_app_id (app));
g_set_error (error,
GSM_APP_ERROR,
GSM_APP_ERROR_RESTART_LIMIT,
"Component '%s' crashing too quickly",
gsm_app_peek_app_id (app));
return FALSE;
}
priv->last_restart_time = current_time;

return GSM_APP_GET_CLASS (app)->impl_restart (app, error);
}