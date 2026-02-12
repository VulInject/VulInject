static void afu_set_wwpn(struct afu *afu, int port, __be64 __iomem *fc_regs,
u64 wwpn)
{
struct cxlflash_cfg *cfg = afu->parent;
struct device *dev = &cfg->dev->dev;

set_port_offline(fc_regs);
if (!wait_port_offline(fc_regs, FC_PORT_STATUS_RETRY_INTERVAL_US,
FC_PORT_STATUS_RETRY_CNT)) {
dev_dbg(dev, "%s: wait on port %d to go offline timed out\n",
__func__, port);
}

writeq_be(wwpn, &fc_regs[FC_PNAME / 8]);

set_port_online(fc_regs);
if (!wait_port_online(fc_regs, FC_PORT_STATUS_RETRY_INTERVAL_US,
FC_PORT_STATUS_RETRY_CNT)) {
dev_dbg(dev, "%s: wait on port %d to go online timed out\n",
__func__, port);
}
}