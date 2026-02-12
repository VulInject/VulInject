}
EXPORT_SYMBOL_GPL(atmel_pmecc_reset);

int atmel_pmecc_enable(struct atmel_pmecc_user *user, int op)
{
struct atmel_pmecc *pmecc = user->pmecc;
u32 cfg;

if (op != NAND_ECC_READ && op != NAND_ECC_WRITE) {
dev_err(pmecc->dev, "Bad ECC operation!");
return -EINVAL;
}

mutex_lock(&user->pmecc->lock);

cfg = user->cache.cfg;
if (op == NAND_ECC_WRITE)
cfg |= PMECC_CFG_WRITE_OP;
else
cfg |= PMECC_CFG_AUTO_ENABLE;

writel(cfg, pmecc->regs.base + ATMEL_PMECC_CFG);
writel(user->cache.sarea, pmecc->regs.base + ATMEL_PMECC_SAREA);
writel(user->cache.saddr, pmecc->regs.base + ATMEL_PMECC_SADDR);
writel(user->cache.eaddr, pmecc->regs.base + ATMEL_PMECC_EADDR);

writel(PMECC_CTRL_ENABLE, pmecc->regs.base + ATMEL_PMECC_CTRL);
writel(PMECC_CTRL_DATA, pmecc->regs.base + ATMEL_PMECC_CTRL);

return 0;
}