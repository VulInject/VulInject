static int getvar_get_part_info(const char *part_name, char *response,
size_t *size)
{
int r;
struct blk_desc *dev_desc;
struct disk_partition disk_part;
struct part_info *part_info;

if (IS_ENABLED(CONFIG_FASTBOOT_FLASH_MMC)) {
r = fastboot_mmc_get_part_info(part_name, &dev_desc, &disk_part,
response);
if (r >= 0 && size)
*size = disk_part.size * disk_part.blksz;
} else if (IS_ENABLED(CONFIG_FASTBOOT_FLASH_NAND)) {
r = fastboot_nand_get_part_info(part_name, &part_info, response);
if (r >= 0 && size)
*size = part_info->size;
} else {
fastboot_fail("this storage is not supported in bootloader", response);
r = -ENODEV;
}

return r;
}