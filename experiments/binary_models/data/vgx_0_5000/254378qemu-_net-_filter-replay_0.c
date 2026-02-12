static ssize_t filter_replay_receive_iov(NetFilterState *nf,
NetClientState *sndr,
unsigned flags,
const struct iovec *iov,
int iovcnt, NetPacketSent *sent_cb)
{
NetFilterReplayState *nfrs = FILTER_REPLAY(nf);
switch (replay_mode) {
case REPLAY_MODE_RECORD:
if (nf->netdev == sndr) {
replay_net_packet_event(nfrs->rns, flags, iov, iovcnt);
return iov_size(iov, iovcnt);
}
return 0;
case REPLAY_MODE_PLAY:

return iov_size(iov, iovcnt);
default:

return 0;
}
}