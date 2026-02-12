}
EXPORT_SYMBOL(ttm_tt_fini);

int ttm_dma_tt_init(struct ttm_dma_tt *ttm_dma, struct ttm_bo_device *bdev,
unsigned long size, uint32_t page_flags,
struct page *dummy_read_page)
{
struct ttm_tt *ttm = &ttm_dma->ttm;

ttm->bdev = bdev;
ttm->glob = bdev->glob;
ttm->num_pages = (size + PAGE_SIZE - 1) >> PAGE_SHIFT;
ttm->caching_state = tt_cached;
ttm->page_flags = page_flags;
ttm->dummy_read_page = dummy_read_page;
ttm->state = tt_unpopulated;
ttm->swap_storage = NULL;

INIT_LIST_HEAD(&ttm_dma->pages_list);
ttm_dma_tt_alloc_page_directory(ttm_dma);
if (!ttm->pages) {
ttm_tt_destroy(ttm);
pr_err("Failed allocating page table\n");
return -ENOMEM;
}
return 0;
}