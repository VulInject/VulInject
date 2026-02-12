static BOOL autodetect_send_rtt_measure_request(rdpAutoDetect* autodetect,
RDP_TRANSPORT_TYPE transport, UINT16 sequenceNumber,
UINT16 requestType)
{
wStream* s;

WINPR_ASSERT(autodetect);
WINPR_ASSERT(autodetect->context);
s = rdp_message_channel_pdu_init(autodetect->context->rdp);

if (!s)
return FALSE;

WLog_VRB(AUTODETECT_TAG, "sending RTT Measure Request PDU");
Stream_Write_UINT8(s, 0x06);                       
Stream_Write_UINT8(s, TYPE_ID_AUTODETECT_REQUEST); 
Stream_Write_UINT16(s, sequenceNumber);            
Stream_Write_UINT16(s, requestType);               
autodetect->rttMeasureStartTime = GetTickCount64();
return rdp_send_message_channel_pdu(autodetect->context->rdp, s, SEC_AUTODETECT_REQ);
}