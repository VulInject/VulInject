static BOOL license_send(rdpLicense* license, wStream* s, BYTE type)
{
size_t length;
BYTE flags;
UINT16 wMsgSize;
rdpRdp* rdp;
BOOL ret;

WINPR_ASSERT(license);
WINPR_ASSERT(license->rdp);

rdp = license->rdp;
WINPR_ASSERT(rdp->settings);

DEBUG_LICENSE("Sending %s Packet", license_request_type_string(type));
length = Stream_GetPosition(s);
wMsgSize = length - license->PacketHeaderLength;
Stream_SetPosition(s, license->PacketHeaderLength);
flags = PREAMBLE_VERSION_3_0;



if (!rdp->settings->ServerMode)
flags |= EXTENDED_ERROR_MSG_SUPPORTED;

if (!license_write_preamble(s, type, flags, wMsgSize))
return FALSE;

WLog_DBG(TAG, "Sending %s Packet, length %" PRIu16 "", license_request_type_string(type),
wMsgSize);
winpr_HexDump(TAG, WLOG_DEBUG, Stream_Pointer(s) - LICENSE_PREAMBLE_LENGTH, wMsgSize);
Stream_SetPosition(s, length);
ret = rdp_send(rdp, s, MCS_GLOBAL_CHANNEL_ID);
rdp->sec_flags = 0;
return ret;
}