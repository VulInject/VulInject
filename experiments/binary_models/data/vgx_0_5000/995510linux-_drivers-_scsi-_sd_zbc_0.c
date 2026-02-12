static void *sd_zbc_alloc_report_buffer(struct scsi_disk *sdkp,
unsigned int nr_zones, size_t *buflen)
{
struct request_queue *q = sdkp->disk->queue;
size_t bufsize;
void *buf;


nr_zones = min(nr_zones, sdkp->zone_info.nr_zones);
bufsize = roundup((nr_zones + 1) * 64, SECTOR_SIZE);
bufsize = min_t(size_t, bufsize,
queue_max_hw_sectors(q) << SECTOR_SHIFT);
bufsize = min_t(size_t, bufsize, queue_max_segments(q) << PAGE_SHIFT);

while (bufsize >= SECTOR_SIZE) {
buf = __vmalloc(bufsize,
GFP_KERNEL | __GFP_ZERO | __GFP_NORETRY);
if (buf) {
*buflen = bufsize;
return buf;
}
bufsize = rounddown(bufsize >> 1, SECTOR_SIZE);
}

return NULL;
}