struct pnp_resource *pnp_add_dma_resource(struct pnp_dev *dev, int dma,
int flags)
{
struct pnp_resource *pnp_res;
struct resource *res;

pnp_res = pnp_new_resource(dev);
if (!pnp_res) {
dev_err(&dev->dev, "can't add resource for DMA %d\n", dma);
return NULL;
}

res = &pnp_res->res;
res->flags = IORESOURCE_DMA | flags;
res->start = dma;
res->end = dma;

dev_printk(KERN_DEBUG, &dev->dev, "%pR\n", res);
return pnp_res;
}