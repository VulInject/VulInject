static ssize_t mappingN(struct device *dev, char *buf, int n)
{
struct nd_region *nd_region = to_nd_region(dev);
struct nd_mapping *nd_mapping;
struct nvdimm *nvdimm;

if (n >= nd_region->ndr_mappings)
return -ENXIO;
nd_mapping = &nd_region->mapping[n];
nvdimm = nd_mapping->nvdimm;

return sprintf(buf, "%s,%llu,%llu\n", dev_name(&nvdimm->dev),
nd_mapping->start, nd_mapping->size);
}