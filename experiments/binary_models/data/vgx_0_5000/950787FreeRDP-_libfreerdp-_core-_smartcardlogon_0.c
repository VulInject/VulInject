static BOOL add_cert_to_list(SmartcardCertInfo*** certInfoList, size_t* count,
SmartcardCertInfo* certInfo)
{
size_t curCount = *count;
SmartcardCertInfo** curInfoList = *certInfoList;


for (size_t i = 0; i < curCount; ++i)
{
if (wcscmp(curInfoList[i]->containerName, certInfo->containerName) == 0)
return TRUE;
}

curInfoList = realloc(curInfoList, sizeof(SmartcardCertInfo*) * (curCount + 1));
if (!curInfoList)
{
WLog_ERR(TAG, "unable to reallocate certs");
return FALSE;
}

curInfoList[curCount++] = certInfo;
*certInfoList = curInfoList;
*count = curCount;
return TRUE;
}