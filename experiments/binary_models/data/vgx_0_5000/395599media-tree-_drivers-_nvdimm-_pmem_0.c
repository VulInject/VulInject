static int pmem_clear_poison(struct pmem_device *pmem, phys_addr_t offset,
unsigned int len)
{
struct device *dev = to_dev(pmem);
sector_t sector;
long cleared;
int rc = 0;

sector = (offset - pmem->data_offset) / 512;

cleared = nvdimm_clear_poison(dev, pmem->phys_addr + offset, len);
if (cleared < len)
rc = -EIO;
if (cleared > 0 && cleared / 512) {
cleared /= 512;
dev_dbg(dev, "%s: %#llx clear %ld sector%s\n", __func__,
(unsigned long long) sector, cleared,
cleared > 1 ? "s" : "");
badblocks_clear(&pmem->bb, sector, cleared);
}

invalidate_pmem(pmem->virt_addr + offset, len);

return rc;
}