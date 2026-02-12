void ringbuffer_commit_read_bytes(RingBuffer* rb, size_t sz)
{
DEBUG_RINGBUFFER("ringbuffer_commit_read_bytes(%p): sz: %" PRIdz "", (void*)rb, sz);

if (sz < 1)
return;

WINPR_ASSERT(rb->size - rb->freeSize >= sz);
rb->readPtr = (rb->readPtr + sz) % rb->size;
rb->freeSize += sz;


if ((rb->size != rb->initialSize) && (ringbuffer_used(rb) < rb->initialSize / 2))
ringbuffer_realloc(rb, rb->initialSize);
}