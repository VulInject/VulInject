void transform_channel_key(const char *i, char *o, int n);

MOD_INIT()
{
CmodeInfo creq;
ModDataInfo mreq;

MARK_AS_OFFICIAL_MODULE(modinfo);

memset(&creq, 0, sizeof(creq));
creq.paracount = 1;
creq.is_ok = cmode_key_is_ok;
creq.letter = 'k';
creq.unset_with_param = 1; 
creq.put_param = cmode_key_put_param;
creq.get_param = cmode_key_get_param;
creq.conv_param = cmode_key_conv_param;
creq.free_param = cmode_key_free_param;
creq.dup_struct = cmode_key_dup_struct;
creq.sjoin_check = cmode_key_sjoin_check;
CmodeAdd(modinfo->handle, creq, &EXTMODE_KEY);

HookAdd(modinfo->handle, HOOKTYPE_CAN_JOIN, 0, key_can_join);
return MOD_SUCCESS;
}