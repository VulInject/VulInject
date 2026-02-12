int
ql_alloc_dma_resouce(ql_adapter_state_t *ha, dma_mem_t *mem, int sleep)
{
ddi_dma_attr_t	dma_attr;

QL_PRINT_3(CE_CONT, "(%d): started\n", ha->instance);

dma_attr = CFG_IST(ha, CFG_ENABLE_64BIT_ADDRESSING) ?
ql_64bit_io_dma_attr : ql_32bit_io_dma_attr;
dma_attr.dma_attr_sgllen = (int)mem->cookie_count;


if (ddi_dma_alloc_handle(ha->dip, &dma_attr, (sleep == KM_SLEEP) ?
DDI_DMA_SLEEP : DDI_DMA_DONTWAIT, NULL, &mem->dma_handle) !=
DDI_SUCCESS) {
EL(ha, "failed, ddi_dma_alloc_handle\n");
mem->dma_handle = NULL;
return (QL_MEMORY_ALLOC_FAILED);
}

mem->flags = DDI_DMA_RDWR | DDI_DMA_CONSISTENT;

if (ql_bind_dma_buffer(ha, mem, sleep) != DDI_DMA_MAPPED) {
EL(ha, "failed, bind_dma_buffer\n");
ddi_dma_free_handle(&mem->dma_handle);
mem->dma_handle = NULL;
return (QL_MEMORY_ALLOC_FAILED);
}

QL_PRINT_3(CE_CONT, "(%d): done\n", ha->instance);

return (QL_SUCCESS);
}