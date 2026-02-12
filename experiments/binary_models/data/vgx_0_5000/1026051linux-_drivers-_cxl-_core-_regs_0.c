}
EXPORT_SYMBOL_NS_GPL(cxl_probe_device_regs, CXL);

void __iomem *devm_cxl_iomap_block(struct device *dev, resource_size_t addr,
resource_size_t length)
{
void __iomem *ret_val;
struct resource *res;

if (WARN_ON_ONCE(addr == CXL_RESOURCE_NONE))
return NULL;

res = devm_request_mem_region(dev, addr, length, dev_name(dev));
if (!res) {
resource_size_t end = addr + length - 1;

dev_err(dev, "Failed to request region %pa-%pa\n", &addr, &end);
return NULL;
}

ret_val = devm_ioremap(dev, addr, length);
if (!ret_val)
dev_err(dev, "Failed to map region %pr\n", res);

return ret_val;
}