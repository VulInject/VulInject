static irqreturn_t fsl_ssi_isr(int irq, void *dev_id)
{
struct fsl_ssi_private *ssi_private = dev_id;
struct regmap *regs = ssi_private->regs;
__be32 sisr;
__be32 sisr2;


regmap_read(regs, CCSR_SSI_SISR, &sisr);

sisr2 = sisr & ssi_private->soc->sisr_write_mask;

if (sisr2)
regmap_write(regs, CCSR_SSI_SISR, sisr2);

fsl_ssi_dbg_isr(&ssi_private->dbg_stats, sisr);

return IRQ_HANDLED;
}