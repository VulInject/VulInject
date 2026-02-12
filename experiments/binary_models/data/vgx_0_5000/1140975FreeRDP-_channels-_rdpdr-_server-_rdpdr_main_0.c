static UINT rdpdr_server_send_device_create_request(RdpdrServerContext* context, UINT32 deviceId,
UINT32 completionId, const char* path,
UINT32 desiredAccess, UINT32 createOptions,
UINT32 createDisposition)
{
size_t pathLength;
wStream* s;
WINPR_ASSERT(context);
WINPR_ASSERT(context->priv);

WLog_Print(context->priv->log, WLOG_DEBUG,
"RdpdrServerSendDeviceCreateRequest: deviceId=%" PRIu32
", path=%s, desiredAccess=0x%" PRIx32 " createOptions=0x%" PRIx32
" createDisposition=0x%" PRIx32 "",
deviceId, path, desiredAccess, createOptions, createDisposition);

pathLength = (strlen(path) + 1U) * sizeof(WCHAR);
s = Stream_New(NULL, 256U + pathLength);

if (!s)
{
WLog_Print(context->priv->log, WLOG_ERROR, "Stream_New failed!");
return CHANNEL_RC_NO_MEMORY;
}

rdpdr_server_write_device_iorequest(s, deviceId, 0, completionId, IRP_MJ_CREATE, 0);
Stream_Write_UINT32(s, desiredAccess); 
Stream_Write_UINT32(s, 0);             
Stream_Write_UINT32(s, 0);
Stream_Write_UINT32(s, 0);                 
Stream_Write_UINT32(s, 3);                 
Stream_Write_UINT32(s, createDisposition); 
Stream_Write_UINT32(s, createOptions);     
WINPR_ASSERT(pathLength <= UINT32_MAX);
Stream_Write_UINT32(s, (UINT32)pathLength); 

if (Stream_Write_UTF16_String_From_UTF8(s, pathLength / sizeof(WCHAR), path,
pathLength / sizeof(WCHAR), TRUE) < 0)
return ERROR_INTERNAL_ERROR;
return rdpdr_seal_send_free_request(context, s);
}