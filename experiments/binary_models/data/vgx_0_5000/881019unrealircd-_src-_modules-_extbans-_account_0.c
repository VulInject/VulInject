int extban_account_is_banned(BanContext *b);

Extban *register_account_extban(ModuleInfo *modinfo)
{
ExtbanInfo req;

memset(&req, 0, sizeof(req));
req.letter = 'a';
req.name = "account";
req.is_ok = NULL;
req.conv_param = extban_account_conv_param;
req.is_banned = extban_account_is_banned;
req.is_banned_events = BANCHK_ALL|BANCHK_TKL;
req.options = EXTBOPT_INVEX|EXTBOPT_TKL;
return ExtbanAdd(modinfo->handle, req);
}