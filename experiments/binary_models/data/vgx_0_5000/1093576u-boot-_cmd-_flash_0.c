int flash_sect_roundb(ulong *addr)
{
flash_info_t *info;
ulong bank, sector_end_addr;
char found;
int i;


found = 0;
for (bank = 0; bank < CFI_FLASH_BANKS && !found; ++bank) {
info = &flash_info[bank];
for (i = 0; i < info->sector_count && !found; ++i) {

if (i == info->sector_count - 1) {
sector_end_addr = info->start[0] +
info->size - 1;
} else {
sector_end_addr = info->start[i + 1] - 1;
}

if (*addr <= sector_end_addr && *addr >= info->start[i]) {
found = 1;

if (*addr < sector_end_addr)
*addr = sector_end_addr;
} 
} 
}
if (!found) {

printf("Error: end address (0x%08lx) not in flash!\n", *addr);
return 1;
}

return 0;
}