static ssize_t scrub_show(struct device *dev,
struct device_attribute *attr, char *buf)
{
struct nvdimm_bus_descriptor *nd_desc;
ssize_t rc = -ENXIO;

device_lock(dev);
nd_desc = dev_get_drvdata(dev);
if (nd_desc) {
struct acpi_nfit_desc *acpi_desc = to_acpi_desc(nd_desc);

rc = sprintf(buf, "%d%s", acpi_desc->scrub_count,
(work_busy(&acpi_desc->work)) ? "+\n" : "\n");
}
device_unlock(dev);
return rc;
}