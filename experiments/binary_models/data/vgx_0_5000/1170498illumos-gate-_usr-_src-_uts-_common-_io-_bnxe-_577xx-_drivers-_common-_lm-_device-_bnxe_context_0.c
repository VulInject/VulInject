static lm_status_t lm_alloc_searcher_hash_info(struct _lm_device_t *pdev)
{
u32_t                    num_con    = 0 ;
u32_t                    alloc_size = 0 ;
lm_searcher_hash_info_t* hash_info  = NULL ;
u8_t                     mm_cli_idx = 0 ;

if CHK_NULL(pdev)
{
return LM_STATUS_INVALID_PARAMETER ;
}

mm_cli_idx = LM_RESOURCE_COMMON;


num_con    = pdev->params.max_func_connections;
alloc_size = sizeof(lm_searcher_hash_entry_t) * num_con;

hash_info  = &pdev->context_info->searcher_hash;

if CHK_NULL(hash_info)
{
return LM_STATUS_INVALID_PARAMETER ;
}


hash_info->searcher_table = mm_alloc_mem(pdev, alloc_size, mm_cli_idx);

if CHK_NULL( hash_info->searcher_table )
{
DbgBreakIf(DBG_BREAK_ON(MEMORY_ALLOCATION_FAILURE));
return  LM_STATUS_RESOURCE ;
}
return LM_STATUS_SUCCESS ;
}