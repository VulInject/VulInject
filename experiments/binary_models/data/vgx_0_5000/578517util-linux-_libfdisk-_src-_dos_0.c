static int get_disk_ranges(struct fdisk_context *cxt, int logical,
fdisk_sector_t *first, fdisk_sector_t *last)
{
if (logical) {

struct fdisk_dos_label *l = self_label(cxt);
struct pte *ext_pe = l->ext_offset ? self_pte(cxt, l->ext_index) : NULL;

if (!ext_pe)
return -EINVAL;

*first = l->ext_offset + cxt->first_lba;
*last = get_abs_partition_end(ext_pe);

} else {

if (fdisk_use_cylinders(cxt) || !cxt->total_sectors)
*last = cxt->geom.heads * cxt->geom.sectors * cxt->geom.cylinders - 1;
else
*last = cxt->total_sectors - 1;

if (*last > UINT_MAX)
*last = UINT_MAX;
*first = cxt->first_lba;
}

return 0;
}