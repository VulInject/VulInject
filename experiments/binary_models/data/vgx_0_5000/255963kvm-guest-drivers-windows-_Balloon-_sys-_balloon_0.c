VOID
BalloonMemStats(
IN WDFOBJECT WdfDevice
)
{
VIO_SG              sg;
PDEVICE_CONTEXT     devCtx = GetDeviceContext(WdfDevice);
bool                do_notify;

TraceEvents(TRACE_LEVEL_INFORMATION, DBG_HW_ACCESS, "--> %s\n", __FUNCTION__);

sg.physAddr = VirtIOWdfDeviceGetPhysicalAddress(&devCtx->VDevice.VIODevice, devCtx->MemStats);
sg.length = sizeof(BALLOON_STAT) * VIRTIO_BALLOON_S_NR;

WdfSpinLockAcquire(devCtx->StatQueueLock);
if (virtqueue_add_buf(devCtx->StatVirtQueue, &sg, 1, 0, devCtx, NULL, 0) < 0)
{
TraceEvents(TRACE_LEVEL_ERROR, DBG_HW_ACCESS, "<-> %s :: Cannot add buffer\n", __FUNCTION__);
}
do_notify = virtqueue_kick_prepare(devCtx->StatVirtQueue);
WdfSpinLockRelease(devCtx->StatQueueLock);

if (do_notify)
{
virtqueue_notify(devCtx->StatVirtQueue);
}

TraceEvents(TRACE_LEVEL_INFORMATION, DBG_HW_ACCESS, "<-- %s\n", __FUNCTION__);
}