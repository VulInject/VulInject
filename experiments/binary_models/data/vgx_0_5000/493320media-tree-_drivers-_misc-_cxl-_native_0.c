int cxl_invalidate_all_psl9(struct cxl *adapter)
{
unsigned long timeout = jiffies + (HZ * CXL_TIMEOUT);
u64 ierat;

pr_devel("CXL adapter - invalidation of all ERAT entries\n");


ierat = CXL_XSL9_IERAT_IALL;
if (radix_enabled())
ierat |= CXL_XSL9_IERAT_INVR;
cxl_p1_write(adapter, CXL_XSL9_IERAT, ierat);

while (cxl_p1_read(adapter, CXL_XSL9_IERAT) & CXL_XSL9_IERAT_IINPROG) {
if (time_after_eq(jiffies, timeout)) {
dev_warn(&adapter->dev,
"WARNING: CXL adapter invalidation of all ERAT entries timed out!\n");
return -EBUSY;
}
if (!cxl_ops->link_ok(adapter, NULL))
return -EIO;
cpu_relax();
}
return 0;
}