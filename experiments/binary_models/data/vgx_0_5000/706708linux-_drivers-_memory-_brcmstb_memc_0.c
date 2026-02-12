static int brcmstb_memc_srpd_config(struct brcmstb_memc *memc,
unsigned int cycles)
{
void __iomem *cfg = memc->ddr_ctrl + memc->srpd_offset;
u32 val;


if (cycles > INACT_COUNT_MASK)
return -EINVAL;

memc->timeout_cycles = cycles;

val = (cycles << INACT_COUNT_SHIFT) & INACT_COUNT_MASK;
if (cycles)
val |= BIT(SRPD_EN_SHIFT);

writel_relaxed(val, cfg);

(void)readl_relaxed(cfg);

return 0;
}