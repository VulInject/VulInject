NTSTATUS
VIOSockInterruptInit(
IN WDFDEVICE hDevice)
{
WDF_OBJECT_ATTRIBUTES        attributes;
WDF_INTERRUPT_CONFIG         interruptConfig;
PDEVICE_CONTEXT              pContext = GetDeviceContext(hDevice);
NTSTATUS                     status = STATUS_SUCCESS;

PAGED_CODE();

TraceEvents(TRACE_LEVEL_VERBOSE, DBG_INIT, "--> %s\n", __FUNCTION__);

WDF_OBJECT_ATTRIBUTES_INIT(&attributes);
WDF_INTERRUPT_CONFIG_INIT(
&interruptConfig,
VIOSockInterruptIsr,
VIOSockInterruptDpc
);

interruptConfig.EvtInterruptEnable = VIOSockInterruptEnable;
interruptConfig.EvtInterruptDisable = VIOSockInterruptDisable;

status = WdfInterruptCreate(
hDevice,
&interruptConfig,
&attributes,
&pContext->WdfInterrupt
);

if (!NT_SUCCESS(status))
{
TraceEvents(TRACE_LEVEL_ERROR, DBG_INIT,
"Failed to create interrupt: %x\n", status);
return status;
}

return status;
}