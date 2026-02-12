hp_zx1_configure (void)
{
struct _hp_private *hp = &hp_private;

agp_bridge->gart_bus_addr = hp->gart_base;
agp_bridge->capndx = hp->lba_cap_offset;
agp_bridge->mode = readl(hp->lba_regs+hp->lba_cap_offset+PCI_AGP_STATUS);

if (hp->io_pdir_owner) {
writel(virt_to_phys(hp->io_pdir), hp->ioc_regs+HP_ZX1_PDIR_BASE);
readl(hp->ioc_regs+HP_ZX1_PDIR_BASE);
writel(hp->io_tlb_ps, hp->ioc_regs+HP_ZX1_TCNFG);
readl(hp->ioc_regs+HP_ZX1_TCNFG);
writel((unsigned int)(~(HP_ZX1_IOVA_SIZE-1)), hp->ioc_regs+HP_ZX1_IMASK);
readl(hp->ioc_regs+HP_ZX1_IMASK);
writel(hp->iova_base|1, hp->ioc_regs+HP_ZX1_IBASE);
readl(hp->ioc_regs+HP_ZX1_IBASE);
writel(hp->iova_base|ilog2(HP_ZX1_IOVA_SIZE), hp->ioc_regs+HP_ZX1_PCOM);
readl(hp->ioc_regs+HP_ZX1_PCOM);
}

return 0;
}