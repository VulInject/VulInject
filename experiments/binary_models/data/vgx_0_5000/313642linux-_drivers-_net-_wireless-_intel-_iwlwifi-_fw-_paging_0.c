void iwl_free_fw_paging(struct iwl_fw_runtime *fwrt)
{
int i;

if (!fwrt->fw_paging_db[0].fw_paging_block)
return;

for (i = 0; i < NUM_OF_FW_PAGING_BLOCKS; i++) {
struct iwl_fw_paging *paging = &fwrt->fw_paging_db[i];

if (!paging->fw_paging_block) {
IWL_DEBUG_FW(fwrt,
"Paging: block %d already freed, continue to next page\n",
i);

continue;
}
dma_unmap_page(fwrt->trans->dev, paging->fw_paging_phys,
paging->fw_paging_size, DMA_BIDIRECTIONAL);

__free_pages(paging->fw_paging_block,
get_order(paging->fw_paging_size));
paging->fw_paging_block = NULL;
}

memset(fwrt->fw_paging_db, 0, sizeof(fwrt->fw_paging_db));
}