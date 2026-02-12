NTSTATUS
VIOSerialAddInBuf(
IN struct virtqueue *vq,
IN PPORT_BUFFER buf)
{
NTSTATUS  status = STATUS_SUCCESS;
struct VirtIOBufferDescriptor sg;

TraceEvents(TRACE_LEVEL_VERBOSE, DBG_QUEUEING, "--> %s  buf = %p\n", __FUNCTION__, buf);
if (buf == NULL)
{
ASSERT(0);
return STATUS_INSUFFICIENT_RESOURCES;
}
if (vq == NULL)
{
ASSERT(0);
return STATUS_INSUFFICIENT_RESOURCES;
}

sg.physAddr = buf->pa_buf;
sg.length = buf->size;

if(0 > virtqueue_add_buf(vq, &sg, 0, 1, buf, NULL, 0))
{
TraceEvents(TRACE_LEVEL_ERROR, DBG_QUEUEING, "<-- %s cannot add_buf\n", __FUNCTION__);
status = STATUS_INSUFFICIENT_RESOURCES;
}

virtqueue_kick(vq);
TraceEvents(TRACE_LEVEL_VERBOSE, DBG_QUEUEING, "<-- %s\n", __FUNCTION__);
return status;
}