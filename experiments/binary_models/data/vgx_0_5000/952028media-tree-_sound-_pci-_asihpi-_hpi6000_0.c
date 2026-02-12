static short hpi6000_send_host_command(struct hpi_adapter_obj *pao,
u16 dsp_index, u32 host_cmd)
{
struct hpi_hw_obj *phw = pao->priv;
struct dsp_obj *pdo = &phw->ado[dsp_index];
u32 timeout = TIMEOUT;


do {
hpi_write_word(pdo, HPI_HIF_ADDR(host_cmd), host_cmd);

hpi_set_address(pdo, HPI_HIF_ADDR(host_cmd));
} while (hpi6000_check_PCI2040_error_flag(pao, H6WRITE) && --timeout);


iowrite32(0x00040004, pdo->prHPI_control);

if (timeout)
return 0;
else
return 1;
}