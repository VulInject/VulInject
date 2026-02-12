static void s3c_onenand_check_lock_status(struct mtd_info *mtd)
{
struct onenand_chip *this = mtd->priv;
struct device *dev = &onenand->pdev->dev;
unsigned int block, end;
int tmp;

end = this->chipsize >> this->erase_shift;

for (block = 0; block < end; block++) {
unsigned int mem_addr = onenand->mem_addr(block, 0, 0);
tmp = s3c_read_cmd(CMD_MAP_01(onenand, mem_addr));

if (s3c_read_reg(INT_ERR_STAT_OFFSET) & LOCKED_BLK) {
dev_err(dev, "block %d is write-protected!\n", block);
s3c_write_reg(LOCKED_BLK, INT_ERR_ACK_OFFSET);
}
}
}