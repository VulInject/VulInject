static struct device *s5p_mfc_alloc_memdev(struct device *dev,
const char *name, unsigned int idx)
{
struct device *child;
int ret;

child = devm_kzalloc(dev, sizeof(struct device), GFP_KERNEL);
if (!child)
return NULL;

device_initialize(child);
dev_set_name(child, "%s:%s", dev_name(dev), name);
child->parent = dev;
child->bus = dev->bus;
child->coherent_dma_mask = dev->coherent_dma_mask;
child->dma_mask = dev->dma_mask;
child->release = s5p_mfc_memdev_release;

if (device_add(child) == 0) {
ret = of_reserved_mem_device_init_by_idx(child, dev->of_node,
idx);
if (ret == 0)
return child;
device_del(child);
}

put_device(child);
return NULL;
}