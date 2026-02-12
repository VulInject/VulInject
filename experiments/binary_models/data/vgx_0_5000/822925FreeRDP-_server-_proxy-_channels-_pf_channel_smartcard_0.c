static pf_channel_client_context* scard_get_client_context(pClientContext* pc)
{
pf_channel_client_context* scard;

WINPR_ASSERT(pc);
WINPR_ASSERT(pc->interceptContextMap);

scard = HashTable_GetItemValue(pc->interceptContextMap, SCARD_SVC_CHANNEL_NAME);
if (!scard)
WLog_WARN(TAG, "[%s] missing in pc->interceptContextMap", SCARD_SVC_CHANNEL_NAME);
return scard;
}