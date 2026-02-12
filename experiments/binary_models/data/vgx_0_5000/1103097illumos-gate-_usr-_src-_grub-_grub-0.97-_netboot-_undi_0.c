int eb_pxenv_tftp_open(char *file, IP4_t serverip, IP4_t gatewayip,
uint16_t *pktlen)
{
int success;
memset(undi.pxs, 0, sizeof (undi.pxs));
undi.pxs->tftp_open.ServerIPAddress = serverip;
undi.pxs->tftp_open.GatewayIPAddress = gatewayip;
undi.pxs->tftp_open.TFTPPort = htons(TFTP_PORT);
undi.pxs->tftp_open.PacketSize = TFTP_MAX_PACKET;
(void) sprintf(undi.pxs->tftp_open.FileName, "%s", file);
success = undi_call(PXENV_TFTP_OPEN);
DBG ("PXENV_TFTP_OPEN <= Status=%s\n", UNDI_STATUS(undi.pxs));
*pktlen = undi.pxs->tftp_open.PacketSize;
return success;
}