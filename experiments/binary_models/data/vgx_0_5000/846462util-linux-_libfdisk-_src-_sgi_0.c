static int sgi_get_partition(struct fdisk_context *cxt, size_t n, struct fdisk_partition *pa)
{
fdisk_sector_t start, len;

pa->used = sgi_get_num_sectors(cxt, n) > 0;
if (!pa->used)
return 0;

start = sgi_get_start_sector(cxt, n);
len = sgi_get_num_sectors(cxt, n);

pa->type = sgi_get_parttype(cxt, n);
pa->size = len;
pa->start = start;

if (pa->type && pa->type->code == SGI_TYPE_ENTIRE_DISK)
pa->wholedisk = 1;

pa->attrs = sgi_get_swappartition(cxt) == (int) n ? "swap" :
sgi_get_bootpartition(cxt) == (int) n ? "boot" : NULL;
if (pa->attrs)
pa->attrs = strdup(pa->attrs);

return 0;
}