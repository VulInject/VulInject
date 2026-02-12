static BOOL rdp_print_color_cache_capability_set(wStream* s)
{
UINT16 colorTableCacheSize;
UINT16 pad2Octets;
WLog_VRB(TAG, "ColorCacheCapabilitySet (length %" PRIuz "):", Stream_GetRemainingLength(s));

if (!Stream_CheckAndLogRequiredLength(TAG, s, 4))
return FALSE;

Stream_Read_UINT16(s, colorTableCacheSize); 
Stream_Read_UINT16(s, pad2Octets);          
WLog_VRB(TAG, "\tcolorTableCacheSize: 0x%04" PRIX16 "", colorTableCacheSize);
WLog_VRB(TAG, "\tpad2Octets: 0x%04" PRIX16 "", pad2Octets);
return TRUE;
}