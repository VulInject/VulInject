NTSTATUS
BalloonEvtDeviceD0Entry(
IN  WDFDEVICE Device,
IN  WDF_POWER_DEVICE_STATE PreviousState
)
{
NTSTATUS            status = STATUS_SUCCESS;
PDEVICE_CONTEXT devCtx = GetDeviceContext(Device);

UNREFERENCED_PARAMETER(PreviousState);
TraceEvents(TRACE_LEVEL_INFORMATION, DBG_INIT, "--> %s\n", __FUNCTION__);

status = BalloonInit(Device);
if(!NT_SUCCESS(status))
{
TraceEvents(TRACE_LEVEL_ERROR, DBG_PNP,
"BalloonInit failed with status 0x%08x\n", status);
BalloonTerm(Device);
return status;
}

status = BalloonCreateWorkerThread(Device);
if(!NT_SUCCESS(status))
{
TraceEvents(TRACE_LEVEL_ERROR, DBG_PNP,
"BalloonCreateWorkerThread failed with status 0x%08x\n", status);
} 

devCtx->evLowMem = IoCreateNotificationEvent(
(PUNICODE_STRING)&evLowMemString, &devCtx->hLowMem);

return status;
}