static unsigned short fsl_ssi_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
{
struct regmap *regs = fsl_ac97_data->regs;

unsigned short val = -1;
u32 reg_val;
unsigned int lreg;
int ret;

ret = clk_prepare_enable(fsl_ac97_data->clk);
if (ret) {
pr_err("ac97 read clk_prepare_enable failed: %d\n",
ret);
return -1;
}

lreg = (reg & 0x7f) <<  12;
regmap_write(regs, CCSR_SSI_SACADD, lreg);
regmap_update_bits(regs, CCSR_SSI_SACNT, CCSR_SSI_SACNT_RDWR_MASK,
CCSR_SSI_SACNT_RD);

udelay(100);

regmap_read(regs, CCSR_SSI_SACDAT, &reg_val);
val = (reg_val >> 4) & 0xffff;

clk_disable_unprepare(fsl_ac97_data->clk);

return val;
}