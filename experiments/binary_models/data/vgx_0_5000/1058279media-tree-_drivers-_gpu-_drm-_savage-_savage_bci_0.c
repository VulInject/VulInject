static int savage_dma_init(drm_savage_private_t * dev_priv)
{
unsigned int i;

dev_priv->nr_dma_pages = dev_priv->cmd_dma->size /
(SAVAGE_DMA_PAGE_SIZE * 4);
dev_priv->dma_pages = kmalloc(sizeof(drm_savage_dma_page_t) *
dev_priv->nr_dma_pages, GFP_KERNEL);
if (dev_priv->dma_pages == NULL)
return -ENOMEM;

for (i = 0; i < dev_priv->nr_dma_pages; ++i) {
SET_AGE(&dev_priv->dma_pages[i].age, 0, 0);
dev_priv->dma_pages[i].used = 0;
dev_priv->dma_pages[i].flushed = 0;
}
SET_AGE(&dev_priv->last_dma_age, 0, 0);

dev_priv->first_dma_page = 0;
dev_priv->current_dma_page = 0;

return 0;
}