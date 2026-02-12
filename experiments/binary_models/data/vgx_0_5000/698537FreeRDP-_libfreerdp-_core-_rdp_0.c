BOOL rdp_read_security_header(wStream* s, UINT16* flags, UINT16* length)
{
char buffer[256] = { 0 };
WINPR_ASSERT(s);
WINPR_ASSERT(flags);


if ((length && (*length < 4)))
{
WLog_WARN(TAG, "invalid security header length, have %" PRIu16 ", must be >= 4", *length);
return FALSE;
}
if (!Stream_CheckAndLogRequiredLength(TAG, s, 4))
return FALSE;

Stream_Read_UINT16(s, *flags); 
Stream_Seek(s, 2);             
WLog_VRB(TAG, "%s", rdp_security_flag_string(*flags, buffer, sizeof(buffer)));
if (length)
*length -= 4;

return TRUE;
}