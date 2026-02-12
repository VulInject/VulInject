lm_status_t lm_remove_nig_entry(
lm_device_t *pdev,
u8_t        *addr)
{
u8_t offset = 0;
lm_status_t lm_status = LM_STATUS_SUCCESS;
lm_nig_mirror_entry_t* entry = NULL;

offset = lm_find_nig_entry_for_addr(pdev, addr);
if (offset == INVALID_NIG_OFFSET)
{
DbgBreakIf(offset == INVALID_NIG_OFFSET); 
return LM_STATUS_FAILURE;
}

entry = &pdev->vars.nig_mirror.entries[offset];

NIG_ENTRY_DEC_REFCNT(entry);

if (entry->refcnt == 0)
{
lm_status = lm_set_mac_in_nig(pdev, NULL, LM_CLI_IDX_NDIS, offset);
if (lm_status != LM_STATUS_SUCCESS)
{
return lm_status;
}
mm_mem_zero(entry->addr, sizeof(entry->addr));
}

return lm_status;
}