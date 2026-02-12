static int onenand_recover_lsb(struct mtd_info *mtd, loff_t addr, int status)
{
struct onenand_chip *this = mtd->priv;
int i;


if (!FLEXONENAND(this))
return status;


if (!mtd_is_eccerr(status) && status != ONENAND_BBT_READ_ECC_ERROR)
return status;


i = flexonenand_region(mtd, addr);
if (mtd->eraseregions[i].erasesize < (1 << this->erase_shift))
return status;

printk("onenand_recover_lsb:"
"Attempting to recover from uncorrectable read\n");


this->command(mtd, FLEXONENAND_CMD_RECOVER_LSB, addr, this->writesize);
return this->wait(mtd, FL_READING);
}