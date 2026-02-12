static BufferDesc *
GetBufferFromRing(BufferAccessStrategy strategy, uint32 *buf_state)
{
BufferDesc *buf;
Buffer		bufnum;
uint32		local_buf_state;	



if (++strategy->current >= strategy->ring_size)
strategy->current = 0;


bufnum = strategy->buffers[strategy->current];
if (bufnum == InvalidBuffer)
return NULL;


buf = GetBufferDescriptor(bufnum - 1);
local_buf_state = LockBufHdr(buf);
if (BUF_STATE_GET_REFCOUNT(local_buf_state) == 0
&& BUF_STATE_GET_USAGECOUNT(local_buf_state) <= 1)
{
*buf_state = local_buf_state;
return buf;
}
UnlockBufHdr(buf, local_buf_state);


return NULL;
}