static u64 scsi_calculate_bounce_limit(struct Scsi_Host *shost)
{
struct device *host_dev;
u64 bounce_limit = 0xffffffff;

if (shost->unchecked_isa_dma)
return BLK_BOUNCE_ISA;

if (!PCI_DMA_BUS_IS_PHYS)
return BLK_BOUNCE_ANY;

host_dev = scsi_get_device(shost);
if (host_dev && host_dev->dma_mask)
bounce_limit = (u64)dma_max_pfn(host_dev) << PAGE_SHIFT;

return bounce_limit;
}