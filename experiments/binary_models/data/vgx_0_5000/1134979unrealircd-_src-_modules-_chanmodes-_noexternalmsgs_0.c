int noexternalmsgs_can_send_to_channel(Client *client, Channel *channel, Membership *lp, const char **msg, const char **errmsg, SendType sendtype);

MOD_INIT()
{
CmodeInfo req;

MARK_AS_OFFICIAL_MODULE(modinfo);

memset(&req, 0, sizeof(req));
req.paracount = 0;
req.letter = 'n';
req.is_ok = extcmode_default_requirehalfop;
CmodeAdd(modinfo->handle, req, &EXTCMODE_NO_EXTERNAL_MESSAGES);

HookAdd(modinfo->handle, HOOKTYPE_CAN_SEND_TO_CHANNEL, 0, noexternalmsgs_can_send_to_channel);

return MOD_SUCCESS;
}