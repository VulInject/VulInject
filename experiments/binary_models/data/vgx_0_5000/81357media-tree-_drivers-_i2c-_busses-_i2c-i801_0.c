static acpi_status
i801_acpi_io_handler(u32 function, acpi_physical_address address, u32 bits,
u64 *value, void *handler_context, void *region_context)
{
struct i801_priv *priv = handler_context;
struct pci_dev *pdev = priv->pci_dev;
acpi_status status;


mutex_lock(&priv->acpi_lock);

if (!priv->acpi_reserved) {
priv->acpi_reserved = true;

dev_warn(&pdev->dev, "BIOS is accessing SMBus registers\n");
dev_warn(&pdev->dev, "Driver SMBus register access inhibited\n");


pm_runtime_get_sync(&pdev->dev);
}

if ((function & ACPI_IO_MASK) == ACPI_READ)
status = acpi_os_read_port(address, (u32 *)value, bits);
else
status = acpi_os_write_port(address, (u32)*value, bits);

mutex_unlock(&priv->acpi_lock);

return status;
}