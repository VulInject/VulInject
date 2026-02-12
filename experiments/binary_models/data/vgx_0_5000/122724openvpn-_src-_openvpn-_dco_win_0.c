int
dco_set_peer(dco_context_t *dco, unsigned int peerid,
int keepalive_interval, int keepalive_timeout, int mss)
{
msg(D_DCO_DEBUG, "%s: peer-id %d, keepalive %d/%d, mss %d", __func__,
peerid, keepalive_interval, keepalive_timeout, mss);

OVPN_SET_PEER peer;

peer.KeepaliveInterval =  keepalive_interval;
peer.KeepaliveTimeout = keepalive_timeout;
peer.MSS = mss;

DWORD bytes_returned = 0;
if (!DeviceIoControl(dco->tt->hand, OVPN_IOCTL_SET_PEER, &peer,
sizeof(peer), NULL, 0, &bytes_returned, NULL))
{
msg(M_WARN | M_ERRNO, "DeviceIoControl(OVPN_IOCTL_SET_PEER) failed");
return -1;
}
return 0;
}