}
EXPORT_SYMBOL_NS_GPL(ccu_sdm_helper_read_rate, SUNXI_CCU);

int ccu_sdm_helper_get_factors(struct ccu_common *common,
struct ccu_sdm_internal *sdm,
unsigned long rate,
unsigned long *m, unsigned long *n)
{
unsigned int i;

if (!(common->features & CCU_FEATURE_SIGMA_DELTA_MOD))
return -EINVAL;

for (i = 0; i < sdm->table_size; i++)
if (sdm->table[i].rate == rate) {
*m = sdm->table[i].m;
*n = sdm->table[i].n;
return 0;
}


return -EINVAL;
}