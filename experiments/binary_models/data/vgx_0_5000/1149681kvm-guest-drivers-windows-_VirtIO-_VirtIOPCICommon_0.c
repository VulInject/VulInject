NTSTATUS virtio_device_initialize(VirtIODevice *vdev,
const VirtIOSystemOps *pSystemOps,
PVOID DeviceContext,
bool msix_used)
{
NTSTATUS status;

RtlZeroMemory(vdev, sizeof(VirtIODevice));
vdev->DeviceContext = DeviceContext;
vdev->system = pSystemOps;
vdev->msix_used = msix_used;
vdev->info = vdev->inline_info;
vdev->maxQueues = ARRAYSIZE(vdev->inline_info);

status = vio_modern_initialize(vdev);
if (status == STATUS_DEVICE_NOT_CONNECTED) {

status = vio_legacy_initialize(vdev);
}
if (NT_SUCCESS(status)) {

virtio_device_reset(vdev);


virtio_add_status(vdev, VIRTIO_CONFIG_S_ACKNOWLEDGE);


virtio_add_status(vdev, VIRTIO_CONFIG_S_DRIVER);
}

return status;
}