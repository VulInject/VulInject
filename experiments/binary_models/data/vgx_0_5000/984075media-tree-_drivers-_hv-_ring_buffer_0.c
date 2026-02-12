static u32 hv_copyfrom_ringbuffer(
const struct hv_ring_buffer_info *ring_info,
void				*dest,
u32				destlen,
u32				start_read_offset)
{
void *ring_buffer = hv_get_ring_buffer(ring_info);
u32 ring_buffer_size = hv_get_ring_buffersize(ring_info);

memcpy(dest, ring_buffer + start_read_offset, destlen);

start_read_offset += destlen;
if (start_read_offset >= ring_buffer_size)
start_read_offset -= ring_buffer_size;

return start_read_offset;
}