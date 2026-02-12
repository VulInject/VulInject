static int pmc551_point(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, void **virt, resource_size_t *phys)
{
struct mypriv *priv = mtd->priv;
u32 soff_hi;
u32 soff_lo;

printk(KERN_DEBUG "pmc551_point(%ld, %ld)\n", (long)from, (long)len);

soff_hi = from & ~(priv->asize - 1);
soff_lo = from & (priv->asize - 1);


if (priv->curr_map0 != from) {
pci_write_config_dword(priv->dev, PMC551_PCI_MEM_MAP0,
(priv->base_map0 | soff_hi));
priv->curr_map0 = soff_hi;
}

*virt = priv->start + soff_lo;
*retlen = len;
return 0;
}