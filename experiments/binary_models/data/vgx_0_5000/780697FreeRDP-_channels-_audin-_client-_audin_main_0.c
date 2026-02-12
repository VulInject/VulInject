static UINT audin_plugin_initialize(IWTSPlugin* pPlugin, IWTSVirtualChannelManager* pChannelMgr)
{
UINT rc;
AUDIN_PLUGIN* audin = (AUDIN_PLUGIN*)pPlugin;

if (!audin)
return CHANNEL_RC_BAD_CHANNEL_HANDLE;

if (!pChannelMgr)
return ERROR_INVALID_PARAMETER;

if (audin->initialized)
{
WLog_ERR(TAG, "[%s] channel initialized twice, aborting", AUDIN_DVC_CHANNEL_NAME);
return ERROR_INVALID_DATA;
}

WLog_Print(audin->log, WLOG_TRACE, "...");
audin->listener_callback =
(GENERIC_LISTENER_CALLBACK*)calloc(1, sizeof(GENERIC_LISTENER_CALLBACK));

if (!audin->listener_callback)
{
WLog_Print(audin->log, WLOG_ERROR, "calloc failed!");
return CHANNEL_RC_NO_MEMORY;
}

audin->listener_callback->iface.OnNewChannelConnection = audin_on_new_channel_connection;
audin->listener_callback->plugin = pPlugin;
audin->listener_callback->channel_mgr = pChannelMgr;
rc = pChannelMgr->CreateListener(pChannelMgr, AUDIN_DVC_CHANNEL_NAME, 0,
&audin->listener_callback->iface, &audin->listener);

audin->initialized = rc == CHANNEL_RC_OK;
return rc;
}