static void fsmc_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
{
struct nand_chip *this = mtd_to_nand(mtd);
struct fsmc_nand_data *host = mtd_to_fsmc(mtd);
void __iomem *regs = host->regs_va;
unsigned int bank = host->bank;

if (ctrl & NAND_CTRL_CHANGE) {
u32 pc;

if (ctrl & NAND_CLE) {
this->IO_ADDR_R = host->cmd_va;
this->IO_ADDR_W = host->cmd_va;
} else if (ctrl & NAND_ALE) {
this->IO_ADDR_R = host->addr_va;
this->IO_ADDR_W = host->addr_va;
} else {
this->IO_ADDR_R = host->data_va;
this->IO_ADDR_W = host->data_va;
}

pc = readl(FSMC_NAND_REG(regs, bank, PC));
if (ctrl & NAND_NCE)
pc |= FSMC_ENABLE;
else
pc &= ~FSMC_ENABLE;
writel_relaxed(pc, FSMC_NAND_REG(regs, bank, PC));
}

mb();

if (cmd != NAND_CMD_NONE)
writeb_relaxed(cmd, this->IO_ADDR_W);
}