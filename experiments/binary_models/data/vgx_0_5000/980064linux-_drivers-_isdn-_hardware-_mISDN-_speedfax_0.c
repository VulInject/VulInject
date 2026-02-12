static int
setup_speedfax(struct sfax_hw *sf)
{
u_long flags;

if (!request_region(sf->cfg, 256, sf->name)) {
pr_info("mISDN: %s config port %x-%x already in use\n",
sf->name, sf->cfg, sf->cfg + 255);
return -EIO;
}
outb(0xff, sf->cfg);
outb(0, sf->cfg);
outb(0xdd, sf->cfg + TIGER_AUX_CTRL);
outb(0, sf->cfg + TIGER_AUX_IRQMASK);

sf->isac.type = IPAC_TYPE_ISAC;
sf->p_isac.ale = sf->cfg + SFAX_PCI_ADDR;
sf->p_isac.port = sf->cfg + SFAX_PCI_ISAC;
sf->p_isar.ale = sf->cfg + SFAX_PCI_ADDR;
sf->p_isar.port = sf->cfg + SFAX_PCI_ISAR;
ASSIGN_FUNC(IND, ISAC, sf->isac);
ASSIGN_FUNC(IND, ISAR, sf->isar);
spin_lock_irqsave(&sf->lock, flags);
reset_speedfax(sf);
disable_hwirq(sf);
spin_unlock_irqrestore(&sf->lock, flags);
return 0;
}