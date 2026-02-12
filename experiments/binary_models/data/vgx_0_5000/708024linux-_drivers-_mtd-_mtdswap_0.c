static int mtdswap_write_marker(struct mtdswap_dev *d, struct swap_eb *eb,
u16 marker)
{
struct mtdswap_oobdata n;
int ret;
loff_t offset;
struct mtd_oob_ops ops = { };

ops.ooboffs = 0;
ops.oobbuf = (uint8_t *)&n;
ops.mode = MTD_OPS_AUTO_OOB;
ops.datbuf = NULL;

if (marker == MTDSWAP_TYPE_CLEAN) {
n.magic = cpu_to_le16(MTDSWAP_MAGIC_CLEAN);
n.count = cpu_to_le32(eb->erase_count);
ops.ooblen = MTDSWAP_OOBSIZE;
offset = mtdswap_eb_offset(d, eb);
} else {
n.magic = cpu_to_le16(MTDSWAP_MAGIC_DIRTY);
ops.ooblen = sizeof(n.magic);
offset = mtdswap_eb_offset(d, eb) + d->mtd->writesize;
}

ret = mtd_write_oob(d->mtd, offset, &ops);

if (ret) {
dev_warn(d->dev, "Write OOB failed for block at %08llx "
"error %d\n", offset, ret);
if (ret == -EIO || mtd_is_eccerr(ret))
mtdswap_handle_write_error(d, eb);
return ret;
}

if (ops.oobretlen != ops.ooblen) {
dev_warn(d->dev, "Short OOB write for block at %08llx: "
"%zd not %zd\n",
offset, ops.oobretlen, ops.ooblen);
return ret;
}

return 0;
}