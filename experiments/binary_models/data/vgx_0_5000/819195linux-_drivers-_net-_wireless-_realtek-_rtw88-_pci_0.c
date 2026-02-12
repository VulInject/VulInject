static int rtw_pci_init_tx_ring(struct rtw_dev *rtwdev,
struct rtw_pci_tx_ring *tx_ring,
u8 desc_size, u32 len)
{
struct pci_dev *pdev = to_pci_dev(rtwdev->dev);
int ring_sz = desc_size * len;
dma_addr_t dma;
u8 *head;

if (len > TRX_BD_IDX_MASK) {
rtw_err(rtwdev, "len %d exceeds maximum TX entries\n", len);
return -EINVAL;
}

head = dma_alloc_coherent(&pdev->dev, ring_sz, &dma, GFP_KERNEL);
if (!head) {
rtw_err(rtwdev, "failed to allocate tx ring\n");
return -ENOMEM;
}

skb_queue_head_init(&tx_ring->queue);
tx_ring->r.head = head;
tx_ring->r.dma = dma;
tx_ring->r.len = len;
tx_ring->r.desc_size = desc_size;
tx_ring->r.wp = 0;
tx_ring->r.rp = 0;

return 0;
}