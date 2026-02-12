static void omap_read_buf_irq_pref(struct mtd_info *mtd, u_char *buf, int len)
{
struct omap_nand_info *info = mtd_to_omap(mtd);
int ret = 0;

if (len <= mtd->oobsize) {
omap_read_buf_pref(mtd, buf, len);
return;
}

info->iomode = OMAP_NAND_IO_READ;
info->buf = buf;
init_completion(&info->comp);


ret = omap_prefetch_enable(info->gpmc_cs,
PREFETCH_FIFOTHRESHOLD_MAX/2, 0x0, len, 0x0, info);
if (ret)

goto out_copy;

info->buf_len = len;

enable_irq(info->gpmc_irq_count);
enable_irq(info->gpmc_irq_fifo);


wait_for_completion(&info->comp);


omap_prefetch_reset(info->gpmc_cs, info);
return;

out_copy:
if (info->nand.options & NAND_BUSWIDTH_16)
omap_read_buf16(mtd, buf, len);
else
omap_read_buf8(mtd, buf, len);
}