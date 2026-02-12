static IUDEVICE* udevman_get_udevice_by_UsbDevice(IUDEVMAN* idevman, UINT32 UsbDevice)
{
UDEVICE* pdev;
URBDRC_PLUGIN* urbdrc;

if (!idevman || !idevman->plugin)
return NULL;


UsbDevice = UsbDevice & INTERFACE_ID_MASK;
urbdrc = (URBDRC_PLUGIN*)idevman->plugin;
idevman->loading_lock(idevman);
idevman->rewind(idevman);

while (idevman->has_next(idevman))
{
pdev = (UDEVICE*)idevman->get_next(idevman);

if (pdev->UsbDevice == UsbDevice)
{
idevman->loading_unlock(idevman);
return (IUDEVICE*)pdev;
}
}

idevman->loading_unlock(idevman);
WLog_Print(urbdrc->log, WLOG_WARN, "Failed to find a USB device mapped to deviceId=%08" PRIx32,
UsbDevice);
return NULL;
}