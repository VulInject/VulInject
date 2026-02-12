static int __init
__efi_memmap_init(struct efi_memory_map_data *data, bool late)
{
struct efi_memory_map map;
phys_addr_t phys_map;

if (efi_enabled(EFI_PARAVIRT))
return 0;

phys_map = data->phys_map;

if (late)
map.map = memremap(phys_map, data->size, MEMREMAP_WB);
else
map.map = early_memremap(phys_map, data->size);

if (!map.map) {
pr_err("Could not map the memory map!\n");
return -ENOMEM;
}

map.phys_map = data->phys_map;
map.nr_map = data->size / data->desc_size;
map.map_end = map.map + data->size;

map.desc_version = data->desc_version;
map.desc_size = data->desc_size;
map.late = late;

set_bit(EFI_MEMMAP, &efi.flags);

efi.memmap = map;

return 0;
}