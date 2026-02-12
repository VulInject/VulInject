int mtd_is_locked(struct mtd_info *mtd, loff_t ofs, uint64_t len)
{
struct mtd_info *master = mtd_get_master(mtd);

if (!master->_is_locked)
return -EOPNOTSUPP;
if (ofs < 0 || ofs >= mtd->size || len > mtd->size - ofs)
return -EINVAL;
if (!len)
return 0;

if (mtd->flags & MTD_SLC_ON_MLC_EMULATION) {
ofs = (loff_t)mtd_div_by_eb(ofs, mtd) * master->erasesize;
len = (u64)mtd_div_by_eb(len, mtd) * master->erasesize;
}

return master->_is_locked(master, mtd_get_master_ofs(mtd, ofs), len);
}