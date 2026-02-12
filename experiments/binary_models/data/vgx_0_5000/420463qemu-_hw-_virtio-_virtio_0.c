static void virtqueue_unmap_sg(VirtQueue *vq, const VirtQueueElement *elem,
unsigned int len)
{
AddressSpace *dma_as = vq->vdev->dma_as;
unsigned int offset;
int i;

offset = 0;
for (i = 0; i < elem->in_num; i++) {
size_t size = MIN(len - offset, elem->in_sg[i].iov_len);

dma_memory_unmap(dma_as, elem->in_sg[i].iov_base,
elem->in_sg[i].iov_len,
DMA_DIRECTION_FROM_DEVICE, size);

offset += size;
}

for (i = 0; i < elem->out_num; i++)
dma_memory_unmap(dma_as, elem->out_sg[i].iov_base,
elem->out_sg[i].iov_len,
DMA_DIRECTION_TO_DEVICE,
elem->out_sg[i].iov_len);
}