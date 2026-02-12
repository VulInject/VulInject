static int rmi_f01_attention(struct rmi_function *fn,
unsigned long *irq_bits)
{
struct rmi_device *rmi_dev = fn->rmi_dev;
int error;
u8 device_status;

error = rmi_read(rmi_dev, fn->fd.data_base_addr, &device_status);
if (error) {
dev_err(&fn->dev,
"Failed to read device status: %d.\n", error);
return error;
}

if (RMI_F01_STATUS_BOOTLOADER(device_status))
dev_warn(&fn->dev,
"Device in bootloader mode, please update firmware\n");

if (RMI_F01_STATUS_UNCONFIGURED(device_status)) {
dev_warn(&fn->dev, "Device reset detected.\n");
error = rmi_dev->driver->reset_handler(rmi_dev);
if (error) {
dev_err(&fn->dev, "Device reset failed: %d\n", error);
return error;
}
}

return 0;
}