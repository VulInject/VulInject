static UINT cliprdr_server_receive_lock_clipdata(CliprdrServerContext* context, wStream* s,
const CLIPRDR_HEADER* header)
{
CLIPRDR_LOCK_CLIPBOARD_DATA lockClipboardData = { 0 };
UINT error = CHANNEL_RC_OK;

WINPR_ASSERT(context);
WINPR_ASSERT(header);

WLog_DBG(TAG, "CliprdrClientLockClipData");

if (!Stream_CheckAndLogRequiredLength(TAG, s, 4))
return ERROR_INVALID_DATA;

lockClipboardData.common.msgType = CB_LOCK_CLIPDATA;
lockClipboardData.common.msgFlags = header->msgFlags;
lockClipboardData.common.dataLen = header->dataLen;
Stream_Read_UINT32(s, lockClipboardData.clipDataId); 
IFCALLRET(context->ClientLockClipboardData, error, context, &lockClipboardData);

if (error)
WLog_ERR(TAG, "ClientLockClipboardData failed with error %" PRIu32 "!", error);

return error;
}