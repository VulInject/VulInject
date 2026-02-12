int mtdtest_erase_eraseblock(struct mtd_info *mtd, unsigned int ebnum)
{
int err;
struct erase_info ei;
loff_t addr = (loff_t)ebnum * mtd->erasesize;

memset(&ei, 0, sizeof(struct erase_info));
ei.mtd  = mtd;
ei.addr = addr;
ei.len  = mtd->erasesize;

err = mtd_erase(mtd, &ei);
if (err) {
pr_info("error %d while erasing EB %d\n", err, ebnum);
return err;
}

if (ei.state == MTD_ERASE_FAILED) {
pr_info("some erase error occurred at EB %d\n", ebnum);
return -EIO;
}
return 0;
}