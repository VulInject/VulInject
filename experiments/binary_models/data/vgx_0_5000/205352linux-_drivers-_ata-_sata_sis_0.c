MODULE_DEVICE_TABLE(pci, sis_pci_tbl);
MODULE_VERSION(DRV_VERSION);

static unsigned int get_scr_cfg_addr(struct ata_link *link, unsigned int sc_reg)
{
struct ata_port *ap = link->ap;
struct pci_dev *pdev = to_pci_dev(ap->host->dev);
unsigned int addr = SIS_SCR_BASE + (4 * sc_reg);
u8 pmr;

if (ap->port_no)  {
switch (pdev->device) {
case 0x0180:
case 0x0181:
pci_read_config_byte(pdev, SIS_PMR, &pmr);
if ((pmr & SIS_PMR_COMBINED) == 0)
addr += SIS180_SATA1_OFS;
break;

case 0x0182:
case 0x0183:
case 0x1182:
addr += SIS182_SATA1_OFS;
break;
}
}
if (link->pmp)
addr += 0x10;

return addr;
}