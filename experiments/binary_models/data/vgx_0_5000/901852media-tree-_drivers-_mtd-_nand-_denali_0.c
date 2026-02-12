static int write_oob_data(struct mtd_info *mtd, uint8_t *buf, int page)
{
struct denali_nand_info *denali = mtd_to_denali(mtd);
uint32_t irq_status;
uint32_t irq_mask = INTR__PROGRAM_COMP | INTR__PROGRAM_FAIL;
int status = 0;

denali->page = page;

if (denali_send_pipeline_cmd(denali, false, false, SPARE_ACCESS,
DENALI_WRITE) == PASS) {
write_data_to_flash_mem(denali, buf, mtd->oobsize);


irq_status = wait_for_irq(denali, irq_mask);

if (irq_status == 0) {
dev_err(denali->dev, "OOB write failed\n");
status = -EIO;
}
} else {
dev_err(denali->dev, "unable to send pipeline command\n");
status = -EIO;
}
return status;
}