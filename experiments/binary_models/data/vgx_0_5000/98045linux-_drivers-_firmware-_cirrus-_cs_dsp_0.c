static int cs_dsp_coeff_base_reg(struct cs_dsp_coeff_ctl *ctl, unsigned int *reg,
unsigned int off)
{
const struct cs_dsp_alg_region *alg_region = &ctl->alg_region;
struct cs_dsp *dsp = ctl->dsp;
const struct cs_dsp_region *mem;

mem = cs_dsp_find_region(dsp, alg_region->type);
if (!mem) {
cs_dsp_err(dsp, "No base for region %x\n",
alg_region->type);
return -EINVAL;
}

*reg = dsp->ops->region_to_reg(mem, ctl->alg_region.base + ctl->offset + off);

return 0;
}