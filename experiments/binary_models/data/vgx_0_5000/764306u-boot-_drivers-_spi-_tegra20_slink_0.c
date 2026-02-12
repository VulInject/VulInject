static int tegra30_spi_claim_bus(struct udevice *dev)
{
struct udevice *bus = dev->parent;
struct tegra30_spi_priv *priv = dev_get_priv(bus);
struct spi_regs *regs = priv->regs;
u32 reg;


clock_start_periph_pll(priv->periph_id, CLOCK_ID_PERIPH,
priv->freq);


reg = SLINK_STAT_RDY | SLINK_STAT_RXF_FLUSH | SLINK_STAT_TXF_FLUSH | \
SLINK_STAT_RXF_UNR | SLINK_STAT_TXF_OVF;
writel(reg, &regs->status);
debug("%s: STATUS = %08x\n", __func__, readl(&regs->status));


reg = readl(&regs->command);
reg |= SLINK_CMD_M_S | SLINK_CMD_CS_SOFT;
writel(reg, &regs->command);
debug("%s: COMMAND = %08x\n", __func__, readl(&regs->command));

return 0;
}