static UINT remdesk_send_ctl_version_info_pdu(remdeskPlugin* remdesk)
{
wStream* s;
REMDESK_CTL_VERSION_INFO_PDU pdu;
UINT error;

WINPR_ASSERT(remdesk);

remdesk_prepare_ctl_header(&(pdu.ctlHeader), REMDESK_CTL_VERSIONINFO, 8);
pdu.versionMajor = 1;
pdu.versionMinor = 2;
s = Stream_New(NULL, REMDESK_CHANNEL_CTL_SIZE + pdu.ctlHeader.ch.DataLength);

if (!s)
{
WLog_ERR(TAG, "Stream_New failed!");
return CHANNEL_RC_NO_MEMORY;
}

remdesk_write_ctl_header(s, &(pdu.ctlHeader));
Stream_Write_UINT32(s, pdu.versionMajor); 
Stream_Write_UINT32(s, pdu.versionMinor); 
Stream_SealLength(s);

if ((error = remdesk_virtual_channel_write(remdesk, s)))
WLog_ERR(TAG, "remdesk_virtual_channel_write failed with error %" PRIu32 "!", error);

return error;
}