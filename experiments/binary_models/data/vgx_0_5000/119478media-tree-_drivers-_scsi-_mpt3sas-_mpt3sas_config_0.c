static int
_config_alloc_config_dma_memory(struct MPT3SAS_ADAPTER *ioc,
struct config_request *mem)
{
int r = 0;

if (mem->sz > ioc->config_page_sz) {
mem->page = dma_alloc_coherent(&ioc->pdev->dev, mem->sz,
&mem->page_dma, GFP_KERNEL);
if (!mem->page) {
pr_err(MPT3SAS_FMT
"%s: dma_alloc_coherent failed asking for (%d) bytes!!\n",
ioc->name, __func__, mem->sz);
r = -ENOMEM;
}
} else { 
mem->page = ioc->config_page;
mem->page_dma = ioc->config_page_dma;
}
return r;
}