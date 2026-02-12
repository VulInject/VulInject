static int venc_bind(struct device *dev, struct device *master, void *data)
{
struct dss_device *dss = dss_get_device(master);
struct venc_device *venc = dev_get_drvdata(dev);
u8 rev_id;
int r;

venc->dss = dss;

r = venc_runtime_get(venc);
if (r)
return r;

rev_id = (u8)(venc_read_reg(venc, VENC_REV_ID) & 0xff);
dev_dbg(dev, "OMAP VENC rev %d\n", rev_id);

venc_runtime_put(venc);

venc->debugfs = dss_debugfs_create_file(dss, "venc", venc_dump_regs,
venc);

return 0;
}