static ssize_t alt_name_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
{
struct nd_region *nd_region = to_nd_region(dev->parent);
ssize_t rc;

device_lock(dev);
nvdimm_bus_lock(dev);
wait_nvdimm_bus_probe_idle(dev);
rc = __alt_name_store(dev, buf, len);
if (rc >= 0)
rc = nd_namespace_label_update(nd_region, dev);
dev_dbg(dev, "%s: %s(%zd)\n", __func__, rc < 0 ? "fail " : "", rc);
nvdimm_bus_unlock(dev);
device_unlock(dev);

return rc < 0 ? rc : len;
}