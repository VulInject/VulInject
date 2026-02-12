NTSTATUS
VIOSerialInitAllQueues(
IN WDFOBJECT Device)
{
NTSTATUS               status = STATUS_SUCCESS;
PPORTS_DEVICE          pContext = GetPortsDevice(Device);
UINT                   nr_ports;

TraceEvents(TRACE_LEVEL_INFORMATION, DBG_INIT, "--> %s\n", __FUNCTION__);

nr_ports = pContext->consoleConfig.max_nr_ports;
if (pContext->isHostMultiport)
{
nr_ports++;
}

status = VirtIOWdfInitQueuesCB(
&pContext->VDevice,
nr_ports * 2,
VIOSerialGetQueueParamCallback,
VIOSerialSetQueueCallback);

if (!NT_SUCCESS(status))
{
TraceEvents(TRACE_LEVEL_INFORMATION, DBG_INIT,
"VirtIOWdfInitQueues failed with %x\n", status);
}

TraceEvents(TRACE_LEVEL_INFORMATION, DBG_INIT, "<-- %s\n", __FUNCTION__);
return status;
}