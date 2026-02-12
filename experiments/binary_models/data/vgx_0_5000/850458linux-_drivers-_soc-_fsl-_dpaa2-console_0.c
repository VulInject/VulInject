static u64 get_mc_fw_base_address(void)
{
u64 mcfwbase = 0ULL;
u32 __iomem *mcfbaregs;

mcfbaregs = ioremap(mc_base_addr.start, resource_size(&mc_base_addr));
if (!mcfbaregs) {
pr_err("could not map MC Firmware Base registers\n");
return 0;
}

mcfwbase  = readl(mcfbaregs + MCFBAHR_OFFSET) &
MC_FW_ADDR_MASK_HIGH;
mcfwbase <<= 32;
mcfwbase |= readl(mcfbaregs + MCFBALR_OFFSET) & MC_FW_ADDR_MASK_LOW;
iounmap(mcfbaregs);

pr_debug("MC base address at 0x%016llx\n", mcfwbase);
return mcfwbase;
}