static BOOL multitransport_request_send(rdpMultitransport* multi, UINT32 reqId, UINT16 reqProto,
const BYTE* cookie)
{
WINPR_ASSERT(multi);
wStream* s = rdp_message_channel_pdu_init(multi->rdp);
if (!s)
return FALSE;

if (!Stream_EnsureRemainingCapacity(s, 24))
{
Stream_Release(s);
return FALSE;
}

Stream_Write_UINT32(s, reqId);              
Stream_Write_UINT16(s, reqProto);           
Stream_Zero(s, 2);                          
Stream_Write(s, cookie, RDPUDP_COOKIE_LEN); 

return rdp_send_message_channel_pdu(multi->rdp, s, SEC_TRANSPORT_REQ);
}