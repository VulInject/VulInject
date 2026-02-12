*/


CMD_FUNC(cmd_wallops);


ModuleHeader MOD_HEADER
= {
"usermodes/wallops",
"5.0",
"command /wallops", 
"UnrealIRCd Team",
"unrealircd-6",
};

long UMODE_WALLOP = 0L;        

MOD_INIT()
{
MARK_AS_OFFICIAL_MODULE(modinfo);
CommandAdd(modinfo->handle, MSG_WALLOPS, cmd_wallops, 1, CMD_USER|CMD_SERVER);
UmodeAdd(modinfo->handle, 'w', UMODE_GLOBAL, 0, umode_allow_all, &UMODE_WALLOP);
return MOD_SUCCESS;
}