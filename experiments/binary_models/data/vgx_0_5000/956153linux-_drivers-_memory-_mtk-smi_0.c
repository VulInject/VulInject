static int __maybe_unused mtk_smi_common_resume(struct device *dev)
{
struct mtk_smi *common = dev_get_drvdata(dev);
const struct mtk_smi_reg_pair *init = common->plat->init;
u32 bus_sel = common->plat->bus_sel; 
int ret, i;

ret = clk_bulk_prepare_enable(common->clk_num, common->clks);
if (ret)
return ret;

if (common->plat->type != MTK_SMI_GEN2)
return 0;

for (i = 0; i < SMI_COMMON_INIT_REGS_NR && init && init[i].offset; i++)
writel_relaxed(init[i].value, common->base + init[i].offset);

writel(bus_sel, common->base + SMI_BUS_SEL);
return 0;
}