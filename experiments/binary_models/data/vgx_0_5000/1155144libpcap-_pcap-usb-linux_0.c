static int
usb_set_ring_size(pcap_t* handle, int header_size)
{

int ring_size;

if (handle->snapshot < header_size)
handle->snapshot = header_size;

ring_size = (handle->snapshot - header_size) * 5;


if (ring_size > MAX_RING_SIZE) {

ring_size = MAX_RING_SIZE;
handle->snapshot = header_size + (MAX_RING_SIZE/5);
} else if (ring_size < MIN_RING_SIZE) {

ring_size = MIN_RING_SIZE;
}

if (ioctl(handle->fd, MON_IOCT_RING_SIZE, ring_size) == -1) {
pcap_fmt_errmsg_for_errno(handle->errbuf, PCAP_ERRBUF_SIZE,
errno, "Can't set ring size from fd %d", handle->fd);
return -1;
}
return ring_size;
}