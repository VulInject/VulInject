static int fore200e_pca_map(struct fore200e* fore200e)
{
DPRINTK(2, "device %s being mapped in memory\n", fore200e->name);

fore200e->virt_base = ioremap(fore200e->phys_base, PCA200E_IOSPACE_LENGTH);

if (fore200e->virt_base == NULL) {
printk(FORE200E "can't map device %s\n", fore200e->name);
return -EFAULT;
}

DPRINTK(1, "device %s mapped to 0x%p\n", fore200e->name, fore200e->virt_base);


fore200e->regs.pca.hcr = fore200e->virt_base + PCA200E_HCR_OFFSET;
fore200e->regs.pca.imr = fore200e->virt_base + PCA200E_IMR_OFFSET;
fore200e->regs.pca.psr = fore200e->virt_base + PCA200E_PSR_OFFSET;

fore200e->state = FORE200E_STATE_MAP;
return 0;
}