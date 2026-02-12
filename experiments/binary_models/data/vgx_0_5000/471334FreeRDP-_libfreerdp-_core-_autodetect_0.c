BOOL autodetect_send_bandwidth_measure_payload(rdpAutoDetect* autodetect,
RDP_TRANSPORT_TYPE transport, UINT16 payloadLength,
UINT16 sequenceNumber)
{
wStream* s;

WINPR_ASSERT(autodetect);
WINPR_ASSERT(autodetect->context);

s = rdp_message_channel_pdu_init(autodetect->context->rdp);

if (!s)
return FALSE;

WLog_VRB(AUTODETECT_TAG, "sending Bandwidth Measure Payload PDU -> payloadLength=%" PRIu16 "",
payloadLength);

payloadLength &= ~3;

if (!Stream_EnsureRemainingCapacity(s, 8 + payloadLength))
{
WLog_ERR(AUTODETECT_TAG, "Failed to ensure %" PRIuz " bytes in stream",
8ull + payloadLength);
Stream_Release(s);
return FALSE;
}

Stream_Write_UINT8(s, 0x08);                         
Stream_Write_UINT8(s, TYPE_ID_AUTODETECT_REQUEST);   
Stream_Write_UINT16(s, sequenceNumber);              
Stream_Write_UINT16(s, RDP_BW_PAYLOAD_REQUEST_TYPE); 
Stream_Write_UINT16(s, payloadLength);               

winpr_RAND(Stream_Pointer(s), payloadLength);
Stream_Seek(s, payloadLength);
return rdp_send_message_channel_pdu(autodetect->context->rdp, s, SEC_AUTODETECT_REQ);
}