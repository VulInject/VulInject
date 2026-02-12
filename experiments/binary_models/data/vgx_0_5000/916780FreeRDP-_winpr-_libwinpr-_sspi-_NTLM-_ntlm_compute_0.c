BOOL ntlm_read_version_info(wStream* s, NTLM_VERSION_INFO* versionInfo)
{
WINPR_ASSERT(s);
WINPR_ASSERT(versionInfo);

if (!Stream_CheckAndLogRequiredLength(TAG, s, 8))
return FALSE;

Stream_Read_UINT8(s, versionInfo->ProductMajorVersion); 
Stream_Read_UINT8(s, versionInfo->ProductMinorVersion); 
Stream_Read_UINT16(s, versionInfo->ProductBuild);       
Stream_Read(s, versionInfo->Reserved, sizeof(versionInfo->Reserved)); 
Stream_Read_UINT8(s, versionInfo->NTLMRevisionCurrent); 
return TRUE;
}