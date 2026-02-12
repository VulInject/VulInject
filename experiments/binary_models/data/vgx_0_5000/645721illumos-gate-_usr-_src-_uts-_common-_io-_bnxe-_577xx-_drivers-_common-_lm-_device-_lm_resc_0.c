lm_status_t lm_setup_sq(struct _lm_device_t *pdev)
{
lm_sq_info_t * sq_info = &pdev->sq_info;

mm_mem_zero(sq_info->sq_chain.sq_chain_virt, LM_PAGE_SIZE);

pdev->sq_info.num_pending_normal = MAX_NORMAL_PRIORITY_SPE;
pdev->sq_info.num_pending_high = MAX_HIGH_PRIORITY_SPE;

d_list_init(&pdev->sq_info.pending_normal, 0,0,0);
d_list_init(&pdev->sq_info.pending_high, 0,0,0);
d_list_init(&pdev->sq_info.pending_complete, 0,0,0);



pdev->sq_info.sq_chain.bd_left =  USABLE_BDS_PER_PAGE(sizeof(struct slow_path_element), TRUE); 
pdev->sq_info.sq_chain.con_idx = 0;

pdev->sq_info.sq_chain.prod_bd = pdev->sq_info.sq_chain.sq_chain_virt;
pdev->sq_info.sq_chain.last_bd = pdev->sq_info.sq_chain.prod_bd + pdev->sq_info.sq_chain.bd_left ;
pdev->sq_info.sq_chain.prod_idx = 0;

return LM_STATUS_SUCCESS;

}