gsm_inhibitor_get_client_id (GsmExportedInhibitor  *skeleton,
GDBusMethodInvocation *invocation,
GsmInhibitor          *inhibitor)
{

if (IS_STRING_EMPTY (inhibitor->priv->client_id)) {
g_dbus_method_invocation_return_error (invocation,
GSM_INHIBITOR_ERROR,
GSM_INHIBITOR_ERROR_NOT_SET,
"Value is not set");
return TRUE;
}

gsm_exported_inhibitor_complete_get_client_id (skeleton, invocation, inhibitor->priv->client_id);
g_debug ("GsmInhibitor: getting client-id = '%s'", inhibitor->priv->client_id);

return TRUE;
}