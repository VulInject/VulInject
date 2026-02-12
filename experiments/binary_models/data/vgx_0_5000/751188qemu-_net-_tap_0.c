static ssize_t tap_receive_iov(NetClientState *nc, const struct iovec *iov,
int iovcnt)
{
TAPState *s = DO_UPCAST(TAPState, nc, nc);
const struct iovec *iovp = iov;
struct iovec iov_copy[iovcnt + 1];
struct virtio_net_hdr_mrg_rxbuf hdr = { };

if (s->host_vnet_hdr_len && !s->using_vnet_hdr) {
iov_copy[0].iov_base = &hdr;
iov_copy[0].iov_len =  s->host_vnet_hdr_len;
memcpy(&iov_copy[1], iov, iovcnt * sizeof(*iov));
iovp = iov_copy;
iovcnt++;
}

return tap_write_packet(s, iovp, iovcnt);
}