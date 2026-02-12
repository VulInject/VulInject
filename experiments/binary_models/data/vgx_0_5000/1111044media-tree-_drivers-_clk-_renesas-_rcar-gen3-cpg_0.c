int __init rcar_gen3_cpg_init(const struct rcar_gen3_cpg_pll_config *config,
unsigned int clk_extalr, u32 mode)
{
const struct soc_device_attribute *attr;

cpg_pll_config = config;
cpg_clk_extalr = clk_extalr;
cpg_mode = mode;
attr = soc_device_match(cpg_quirks_match);
if (attr)
cpg_quirks = (uintptr_t)attr->data;
pr_debug("%s: mode = 0x%x quirks = 0x%x\n", __func__, mode, cpg_quirks);
return 0;
}