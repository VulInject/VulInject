static bool iavf_alloc_mapped_page(struct iavf_ring *rx_ring,
struct iavf_rx_buffer *bi)
{
struct page *page = bi->page;
dma_addr_t dma;


if (likely(page)) {
rx_ring->rx_stats.page_reuse_count++;
return true;
}


page = dev_alloc_pages(iavf_rx_pg_order(rx_ring));
if (unlikely(!page)) {
rx_ring->rx_stats.alloc_page_failed++;
return false;
}


dma = dma_map_page_attrs(rx_ring->dev, page, 0,
iavf_rx_pg_size(rx_ring),
DMA_FROM_DEVICE,
IAVF_RX_DMA_ATTR);


if (dma_mapping_error(rx_ring->dev, dma)) {
__free_pages(page, iavf_rx_pg_order(rx_ring));
rx_ring->rx_stats.alloc_page_failed++;
return false;
}

bi->dma = dma;
bi->page = page;
bi->page_offset = iavf_rx_offset(rx_ring);


bi->pagecnt_bias = 1;

return true;
}