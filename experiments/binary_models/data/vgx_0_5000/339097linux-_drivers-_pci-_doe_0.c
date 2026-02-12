static int pci_doe_abort(struct pci_doe_mb *doe_mb)
{
struct pci_dev *pdev = doe_mb->pdev;
int offset = doe_mb->cap_offset;
unsigned long timeout_jiffies;

pci_dbg(pdev, "[%x] Issuing Abort\n", offset);

timeout_jiffies = jiffies + PCI_DOE_TIMEOUT;
pci_doe_write_ctrl(doe_mb, PCI_DOE_CTRL_ABORT);

do {
int rc;
u32 val;

rc = pci_doe_wait(doe_mb, PCI_DOE_POLL_INTERVAL);
if (rc)
return rc;
pci_read_config_dword(pdev, offset + PCI_DOE_STATUS, &val);


if (!FIELD_GET(PCI_DOE_STATUS_ERROR, val) &&
!FIELD_GET(PCI_DOE_STATUS_BUSY, val))
return 0;

} while (!time_after(jiffies, timeout_jiffies));


pci_err(pdev, "[%x] ABORT timed out\n", offset);
return -EIO;
}