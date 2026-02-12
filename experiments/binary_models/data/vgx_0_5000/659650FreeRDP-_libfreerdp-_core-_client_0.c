void freerdp_channels_close(rdpChannels* channels, freerdp* instance)
{
int index;
CHANNEL_OPEN_DATA* pChannelOpenData;
CHANNEL_CLIENT_DATA* pChannelClientData;

WINPR_ASSERT(channels);
WINPR_ASSERT(instance);

MessageQueue_PostQuit(channels->queue, 0);
freerdp_channels_check_fds(channels, instance);


for (index = 0; index < channels->clientDataCount; index++)
{
pChannelClientData = &channels->clientDataList[index];

if (pChannelClientData->pChannelInitEventProc)
{
pChannelClientData->pChannelInitEventProc(pChannelClientData->pInitHandle,
CHANNEL_EVENT_TERMINATED, 0, 0);
}
else if (pChannelClientData->pChannelInitEventProcEx)
{
pChannelClientData->pChannelInitEventProcEx(pChannelClientData->lpUserParam,
pChannelClientData->pInitHandle,
CHANNEL_EVENT_TERMINATED, 0, 0);
}
}

channels->clientDataCount = 0;

for (index = 0; index < channels->openDataCount; index++)
{
pChannelOpenData = &channels->openDataList[index];
HashTable_Remove(g_ChannelHandles, (void*)(UINT_PTR)pChannelOpenData->OpenHandle);
}

channels->openDataCount = 0;
channels->initDataCount = 0;

WINPR_ASSERT(instance->context);
WINPR_ASSERT(instance->context->settings);
instance->context->settings->ChannelCount = 0;
g_Instance = NULL;
}