static UINT sshagent_plugin_initialize(IWTSPlugin* pPlugin, IWTSVirtualChannelManager* pChannelMgr)
{
SSHAGENT_PLUGIN* sshagent = (SSHAGENT_PLUGIN*)pPlugin;
sshagent->listener_callback =
(SSHAGENT_LISTENER_CALLBACK*)calloc(1, sizeof(SSHAGENT_LISTENER_CALLBACK));

if (!sshagent->listener_callback)
{
WLog_ERR(TAG, "calloc failed!");
return CHANNEL_RC_NO_MEMORY;
}

sshagent->listener_callback->rdpcontext = sshagent->rdpcontext;
sshagent->listener_callback->iface.OnNewChannelConnection = sshagent_on_new_channel_connection;
sshagent->listener_callback->plugin = pPlugin;
sshagent->listener_callback->channel_mgr = pChannelMgr;
sshagent->listener_callback->agent_uds_path = getenv("SSH_AUTH_SOCK");

if (sshagent->listener_callback->agent_uds_path == NULL)
{
WLog_ERR(TAG, "Environment variable $SSH_AUTH_SOCK undefined!");
free(sshagent->listener_callback);
sshagent->listener_callback = NULL;
return CHANNEL_RC_INITIALIZATION_ERROR;
}

return pChannelMgr->CreateListener(pChannelMgr, "SSHAGENT", 0,
(IWTSListenerCallback*)sshagent->listener_callback, NULL);
}