int configure_and_run_dma(struct acp_dev_data *adata, unsigned int src_addr,
unsigned int dest_addr, int dsp_data_size)
{
struct snd_sof_dev *sdev = adata->dev;
unsigned int desc_count, index;
int ret;

for (desc_count = 0; desc_count < ACP_MAX_DESC && dsp_data_size >= 0;
desc_count++, dsp_data_size -= ACP_PAGE_SIZE) {
adata->dscr_info[desc_count].src_addr = src_addr + desc_count * ACP_PAGE_SIZE;
adata->dscr_info[desc_count].dest_addr = dest_addr + desc_count * ACP_PAGE_SIZE;
adata->dscr_info[desc_count].tx_cnt.bits.count = ACP_PAGE_SIZE;
if (dsp_data_size < ACP_PAGE_SIZE)
adata->dscr_info[desc_count].tx_cnt.bits.count = dsp_data_size;
}

ret = acpbus_dma_start(adata, 0, desc_count, adata->dscr_info);
if (ret)
dev_err(sdev->dev, "acpbus_dma_start failed\n");


for (index = 0; index < desc_count; index++)
memset(&adata->dscr_info[index], 0x00, sizeof(struct dma_descriptor));

return ret;
}