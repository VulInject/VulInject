static BOOL WTSReceiveChannelData(freerdp_peer* client, UINT16 channelId, const BYTE* data,
size_t size, UINT32 flags, size_t totalSize)
{
UINT32 i;
rdpMcs* mcs;

WINPR_ASSERT(client);
WINPR_ASSERT(client->context);
WINPR_ASSERT(client->context->rdp);

mcs = client->context->rdp->mcs;
WINPR_ASSERT(mcs);

for (i = 0; i < mcs->channelCount; i++)
{
rdpMcsChannel* cur = &mcs->channels[i];
if (cur->ChannelId == channelId)
{
rdpPeerChannel* channel = (rdpPeerChannel*)cur->handle;

if (channel)
return WTSProcessChannelData(channel, channelId, data, size, flags, totalSize);
}
}

WLog_WARN(TAG, "unknown channelId %" PRIu16 " ignored", channelId);

return TRUE;
}