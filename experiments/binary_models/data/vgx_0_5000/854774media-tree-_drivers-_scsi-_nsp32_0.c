static int nsp32_resume(struct pci_dev *pdev)
{
struct Scsi_Host *host = pci_get_drvdata(pdev);
nsp32_hw_data    *data = (nsp32_hw_data *)host->hostdata;
unsigned short    reg;

nsp32_msg(KERN_INFO, "pci-resume: pdev=0x%p, slot=%s, host=0x%p", pdev, pci_name(pdev), host);

pci_set_power_state(pdev, PCI_D0);
pci_enable_wake    (pdev, PCI_D0, 0);
pci_restore_state  (pdev);

reg = nsp32_read2(data->BaseAddress, INDEX_REG);

nsp32_msg(KERN_INFO, "io=0x%x reg=0x%x", data->BaseAddress, reg);

if (reg == 0xffff) {
nsp32_msg(KERN_INFO, "missing device. abort resume.");
return 0;
}

nsp32hw_init      (data);
nsp32_do_bus_reset(data);

nsp32_msg(KERN_INFO, "resume success");

return 0;
}