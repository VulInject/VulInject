static int spear_mtd_erase(struct mtd_info *mtd, struct erase_info *e_info)
{
struct spear_snor_flash *flash = get_flash_data(mtd);
struct spear_smi *dev = mtd->priv;
u32 addr, command, bank;
int len, ret;

if (!flash || !dev)
return -ENODEV;

bank = flash->bank;
if (bank > dev->num_flashes - 1) {
dev_err(&dev->pdev->dev, "Invalid Bank Num");
return -EINVAL;
}

addr = e_info->addr;
len = e_info->len;

mutex_lock(&flash->lock);


while (len) {
command = get_sector_erase_cmd(flash, addr);

ret = spear_smi_erase_sector(dev, bank, command, 4);
if (ret) {
mutex_unlock(&flash->lock);
return ret;
}
addr += mtd->erasesize;
len -= mtd->erasesize;
}

mutex_unlock(&flash->lock);

return 0;
}