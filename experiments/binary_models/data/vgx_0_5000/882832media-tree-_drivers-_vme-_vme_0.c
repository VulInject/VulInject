void *vme_alloc_consistent(struct vme_resource *resource, size_t size,
dma_addr_t *dma)
{
struct vme_bridge *bridge;

if (resource == NULL) {
printk(KERN_ERR "No resource\n");
return NULL;
}

bridge = find_bridge(resource);
if (bridge == NULL) {
printk(KERN_ERR "Can't find bridge\n");
return NULL;
}

if (bridge->parent == NULL) {
printk(KERN_ERR "Dev entry NULL for bridge %s\n", bridge->name);
return NULL;
}

if (bridge->alloc_consistent == NULL) {
printk(KERN_ERR "alloc_consistent not supported by bridge %s\n",
bridge->name);
return NULL;
}

return bridge->alloc_consistent(bridge->parent, size, dma);
}