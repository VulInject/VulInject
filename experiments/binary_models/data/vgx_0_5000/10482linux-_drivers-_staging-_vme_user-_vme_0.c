int vme_slave_set(struct vme_resource *resource, int enabled,
unsigned long long vme_base, unsigned long long size,
dma_addr_t buf_base, u32 aspace, u32 cycle)
{
struct vme_bridge *bridge = find_bridge(resource);
struct vme_slave_resource *image;
int retval;

if (resource->type != VME_SLAVE) {
printk(KERN_ERR "Not a slave resource\n");
return -EINVAL;
}

image = list_entry(resource->entry, struct vme_slave_resource, list);

if (!bridge->slave_set) {
printk(KERN_ERR "Function not supported\n");
return -ENOSYS;
}

if (!(((image->address_attr & aspace) == aspace) &&
((image->cycle_attr & cycle) == cycle))) {
printk(KERN_ERR "Invalid attributes\n");
return -EINVAL;
}

retval = vme_check_window(aspace, vme_base, size);
if (retval)
return retval;

return bridge->slave_set(image, enabled, vme_base, size, buf_base,
aspace, cycle);
}