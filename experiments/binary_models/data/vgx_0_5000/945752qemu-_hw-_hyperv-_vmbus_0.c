int vmbus_channel_recv_start(VMBusChannel *chan)
{
VMBusRecvRingBuf *ringbuf = &chan->recv_ringbuf;
vmbus_ring_buffer *rb;

rb = ringbuf_map_hdr(&ringbuf->common);
if (!rb) {
return -EFAULT;
}
ringbuf->last_seen_wr_idx = rb->write_index;
ringbuf_unmap_hdr(&ringbuf->common, rb, false);

if (ringbuf->last_seen_wr_idx >= ringbuf->common.len) {
return -EOVERFLOW;
}


smp_mb();                   
return 0;
}