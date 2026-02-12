struct nvdimm *nvdimm_create(struct nvdimm_bus *nvdimm_bus, void *provider_data,
const struct attribute_group **groups, unsigned long flags,
unsigned long cmd_mask, int num_flush,
struct resource *flush_wpq)
{
struct nvdimm *nvdimm = kzalloc(sizeof(*nvdimm), GFP_KERNEL);
struct device *dev;

if (!nvdimm)
return NULL;

nvdimm->id = ida_simple_get(&dimm_ida, 0, 0, GFP_KERNEL);
if (nvdimm->id < 0) {
kfree(nvdimm);
return NULL;
}
nvdimm->provider_data = provider_data;
nvdimm->flags = flags;
nvdimm->cmd_mask = cmd_mask;
nvdimm->num_flush = num_flush;
nvdimm->flush_wpq = flush_wpq;
atomic_set(&nvdimm->busy, 0);
dev = &nvdimm->dev;
dev_set_name(dev, "nmem%d", nvdimm->id);
dev->parent = &nvdimm_bus->dev;
dev->type = &nvdimm_device_type;
dev->devt = MKDEV(nvdimm_major, nvdimm->id);
dev->groups = groups;
nd_device_register(dev);

return nvdimm;
}