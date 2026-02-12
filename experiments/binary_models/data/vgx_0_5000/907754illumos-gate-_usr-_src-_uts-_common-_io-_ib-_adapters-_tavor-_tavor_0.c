static int
tavor_pci_read_vpd(ddi_acc_handle_t hdl, uint_t offset, uint32_t addr,
uint32_t *data)
{
int		retry = 4;  
uint32_t	val;
int		vpd_addr = offset + 2;
int		vpd_data = offset + 4;


(void) pci_config_put32(hdl, offset, addr << 16);
do {
drv_usecwait(1000);
val = pci_config_get16(hdl, vpd_addr);
if ((val >> 15) & 0x01) {
*data = pci_config_get32(hdl, vpd_data);
return (DDI_SUCCESS);
}
} while (--retry);

return (DDI_FAILURE);
}