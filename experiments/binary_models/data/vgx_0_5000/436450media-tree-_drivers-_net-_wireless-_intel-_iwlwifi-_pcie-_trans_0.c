
static void iwl_pcie_free_fw_monitor(struct iwl_trans *trans)
{
struct iwl_trans_pcie *trans_pcie = IWL_TRANS_GET_PCIE_TRANS(trans);

if (!trans_pcie->fw_mon_page)
return;

dma_unmap_page(trans->dev, trans_pcie->fw_mon_phys,
trans_pcie->fw_mon_size, DMA_FROM_DEVICE);
__free_pages(trans_pcie->fw_mon_page,
get_order(trans_pcie->fw_mon_size));
trans_pcie->fw_mon_page = NULL;
trans_pcie->fw_mon_phys = 0;
trans_pcie->fw_mon_size = 0;
}