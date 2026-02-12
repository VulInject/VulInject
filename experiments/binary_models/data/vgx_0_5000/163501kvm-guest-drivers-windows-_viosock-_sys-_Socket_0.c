NTSTATUS
VIOSockGetPeerName(
IN WDFREQUEST   Request,
OUT size_t      *pLength
)
{
PSOCKET_CONTEXT pSocket = GetSocketContextFromRequest(Request);
PSOCKADDR_VM    pAddr;
SIZE_T          stAddrLen;
NTSTATUS        status;

PAGED_CODE();

TraceEvents(TRACE_LEVEL_VERBOSE, DBG_SOCKET, "--> %s\n", __FUNCTION__);

status = WdfRequestRetrieveOutputBuffer(Request, sizeof(*pAddr), &pAddr, &stAddrLen);
if (!NT_SUCCESS(status))
{
TraceEvents(TRACE_LEVEL_ERROR, DBG_IOCTLS, "WdfRequestRetrieveOutputBuffer failed: 0x%x\n", status);
return status;
}


_Analysis_assume_(stAddrLen >= sizeof(*pAddr));

if (VIOSockStateGet(pSocket) == VIOSOCK_STATE_CONNECTED)
{
RtlZeroBytes(pAddr, sizeof(*pAddr));
pAddr->svm_family = AF_VSOCK;
pAddr->svm_cid = pSocket->dst_cid;
pAddr->svm_port = pSocket->dst_port;
*pLength = sizeof(*pAddr);
}
else
status = STATUS_INVALID_DEVICE_STATE;

return STATUS_SUCCESS;
}