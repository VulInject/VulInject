void mtag_add_or_inherit_time(Client *sender, MessageTag *recv_mtags, MessageTag **mtag_list, const char *signature);

MOD_INIT()
{
ClientCapabilityInfo cap;
ClientCapability *c;
MessageTagHandlerInfo mtag;

MARK_AS_OFFICIAL_MODULE(modinfo);

memset(&cap, 0, sizeof(cap));
cap.name = "server-time";
c = ClientCapabilityAdd(modinfo->handle, &cap, &CAP_SERVER_TIME);

memset(&mtag, 0, sizeof(mtag));
mtag.name = "time";
mtag.is_ok = server_time_mtag_is_ok;
mtag.clicap_handler = c;
MessageTagHandlerAdd(modinfo->handle, &mtag);

HookAddVoid(modinfo->handle, HOOKTYPE_NEW_MESSAGE, 0, mtag_add_or_inherit_time);

return MOD_SUCCESS;
}