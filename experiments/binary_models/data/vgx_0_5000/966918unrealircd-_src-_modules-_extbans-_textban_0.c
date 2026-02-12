const char *extban_modeT_conv_param(BanContext *b, Extban *extban);
int textban_check_ban(Client *client, Channel *channel, const char *ban, const char **msg, const char **errmsg);
int textban_can_send_to_channel(Client *client, Channel *channel, Membership *lp, const char **msg, const char **errmsg, SendType sendtype);
int extban_modeT_is_ok(BanContext *b);
void parse_word(const char *s, char **word, int *type);

MOD_INIT()
{
ExtbanInfo req;

MARK_AS_OFFICIAL_MODULE(modinfo);

memset(&req, 0, sizeof(ExtbanInfo));
req.letter = 'T';
req.name = "text";
req.options = EXTBOPT_NOSTACKCHILD; 
req.conv_param = extban_modeT_conv_param;
req.is_ok = extban_modeT_is_ok;

if (!ExtbanAdd(modinfo->handle, req))
{
config_error("textban module: adding extban ~T failed! module NOT loaded");
return MOD_FAILED;
}

HookAdd(modinfo->handle, HOOKTYPE_CAN_SEND_TO_CHANNEL, 0, textban_can_send_to_channel);

return MOD_SUCCESS;
}