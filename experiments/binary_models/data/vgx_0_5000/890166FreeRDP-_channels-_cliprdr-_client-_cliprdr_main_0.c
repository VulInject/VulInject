static UINT cliprdr_packet_send(cliprdrPlugin* cliprdr, wStream* s)
{
size_t pos;
UINT32 dataLen;
UINT status = CHANNEL_RC_OK;

WINPR_ASSERT(cliprdr);
WINPR_ASSERT(s);

pos = Stream_GetPosition(s);
dataLen = pos - 8;
Stream_SetPosition(s, 4);
Stream_Write_UINT32(s, dataLen);
Stream_SetPosition(s, pos);

WLog_DBG(TAG, "Cliprdr Sending (%" PRIu32 " bytes)", dataLen + 8);

if (!cliprdr)
{
status = CHANNEL_RC_BAD_INIT_HANDLE;
}
else
{
WINPR_ASSERT(cliprdr->channelEntryPoints.pVirtualChannelWriteEx);
status = cliprdr->channelEntryPoints.pVirtualChannelWriteEx(
cliprdr->InitHandle, cliprdr->OpenHandle, Stream_Buffer(s),
(UINT32)Stream_GetPosition(s), s);
}

if (status != CHANNEL_RC_OK)
{
Stream_Free(s, TRUE);
WLog_ERR(TAG, "VirtualChannelWrite failed with %s [%08" PRIX32 "]",
WTSErrorToString(status), status);
}

return status;
}