void spi_flash_mtd_unregister(struct spi_flash *flash)
{
del_mtd_device(&flash->mtd);
}


static struct mtd_info sf_mtd_info;
static bool sf_mtd_registered;
static char sf_mtd_name[8];

static int spi_flash_mtd_erase(struct mtd_info *mtd, struct erase_info *instr)
{
struct spi_flash *flash = mtd->priv;
int err;

if (!flash)
return -ENODEV;

instr->state = MTD_ERASING;

err = spi_flash_erase(flash, instr->addr, instr->len);
if (err) {
instr->state = MTD_ERASE_FAILED;
instr->fail_addr = MTD_FAIL_ADDR_UNKNOWN;
return -EIO;
}

instr->state = MTD_ERASE_DONE;

return 0;
}