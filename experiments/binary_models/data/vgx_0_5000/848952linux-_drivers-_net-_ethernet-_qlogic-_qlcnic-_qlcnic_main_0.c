static void qlcnic_free_adapter_resources(struct qlcnic_adapter *adapter)
{
struct qlcnic_fw_dump *fw_dump = &adapter->ahw->fw_dump;

kfree(adapter->recv_ctx);
adapter->recv_ctx = NULL;

if (fw_dump->tmpl_hdr) {
vfree(fw_dump->tmpl_hdr);
fw_dump->tmpl_hdr = NULL;
}

if (fw_dump->dma_buffer) {
dma_free_coherent(&adapter->pdev->dev, QLC_PEX_DMA_READ_SIZE,
fw_dump->dma_buffer, fw_dump->phys_addr);
fw_dump->dma_buffer = NULL;
}

kfree(adapter->ahw->reset.buff);
adapter->ahw->fw_dump.tmpl_hdr = NULL;
}