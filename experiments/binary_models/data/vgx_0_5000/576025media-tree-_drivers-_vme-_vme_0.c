}
EXPORT_SYMBOL(vme_lm_set);


int vme_lm_get(struct vme_resource *resource, unsigned long long *lm_base,
u32 *aspace, u32 *cycle)
{
struct vme_bridge *bridge = find_bridge(resource);
struct vme_lm_resource *lm;

if (resource->type != VME_LM) {
printk(KERN_ERR "Not a Location Monitor resource\n");
return -EINVAL;
}

lm = list_entry(resource->entry, struct vme_lm_resource, list);

if (bridge->lm_get == NULL) {
printk(KERN_ERR "vme_lm_get not supported\n");
return -EINVAL;
}

return bridge->lm_get(lm, lm_base, aspace, cycle);
}