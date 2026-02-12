static void tbnet_free_buffers(struct tbnet_ring *ring)
{
unsigned int i;

for (i = 0; i < TBNET_RING_SIZE; i++) {
struct device *dma_dev = tb_ring_dma_device(ring->ring);
struct tbnet_frame *tf = &ring->frames[i];
enum dma_data_direction dir;
unsigned int order;
size_t size;

if (!tf->page)
continue;

if (ring->ring->is_tx) {
dir = DMA_TO_DEVICE;
order = 0;
size = TBNET_FRAME_SIZE;
} else {
dir = DMA_FROM_DEVICE;
order = TBNET_RX_PAGE_ORDER;
size = TBNET_RX_PAGE_SIZE;
}

trace_tbnet_free_frame(i, tf->page, tf->frame.buffer_phy, dir);

if (tf->frame.buffer_phy)
dma_unmap_page(dma_dev, tf->frame.buffer_phy, size,
dir);

__free_pages(tf->page, order);
tf->page = NULL;
}

ring->cons = 0;
ring->prod = 0;
}