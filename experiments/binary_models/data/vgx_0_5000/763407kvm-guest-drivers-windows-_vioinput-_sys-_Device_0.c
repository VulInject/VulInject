NTSTATUS
VIOInputFillEventQueue(PINPUT_DEVICE pContext)
{
NTSTATUS status = STATUS_SUCCESS;
PVIRTIO_INPUT_EVENT buf = NULL;
TraceEvents(TRACE_LEVEL_VERBOSE, DBG_INIT, "--> %s\n", __FUNCTION__);

for (;;)
{
PHYSICAL_ADDRESS pa;
buf = pContext->EventQMemBlock->get_slice(pContext->EventQMemBlock, &pa);
if (buf == NULL)
{
TraceEvents(TRACE_LEVEL_ERROR, DBG_INIT, "VIRTIO_INPUT_EVENT alloc failed\n");
return STATUS_INSUFFICIENT_RESOURCES;
}

WdfSpinLockAcquire(pContext->EventQLock);
status = VIOInputAddInBuf(pContext->EventQ, buf, pa);
WdfSpinLockRelease(pContext->EventQLock);
if (!NT_SUCCESS(status))
{
pContext->EventQMemBlock->return_slice(pContext->EventQMemBlock, buf);
break;
}
}
TraceEvents(TRACE_LEVEL_VERBOSE, DBG_INIT, "<-- %s\n", __FUNCTION__);
return STATUS_SUCCESS;
}