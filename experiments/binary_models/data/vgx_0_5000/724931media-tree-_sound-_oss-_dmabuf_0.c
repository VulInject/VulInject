static int local_start_dma(struct audio_operations *adev, unsigned long physaddr, int count, int dma_mode)
{
struct dma_buffparms *dmap = (dma_mode == DMA_MODE_WRITE) ? adev->dmap_out : adev->dmap_in;

if (dmap->raw_buf == NULL) {
printk(KERN_ERR "sound: DMA buffer(2) == NULL\n");
printk(KERN_ERR "Device %s, chn=%s\n", adev->name, (dmap == adev->dmap_out) ? "out" : "in");
return 0;
}
if (dmap->flags & DMA_NODMA)
return 1;
if (dmap->dma < 0)
return 0;
sound_start_dma(dmap, dmap->raw_buf_phys, dmap->bytes_in_use, dma_mode | DMA_AUTOINIT);
dmap->flags |= DMA_STARTED;
return count;
}