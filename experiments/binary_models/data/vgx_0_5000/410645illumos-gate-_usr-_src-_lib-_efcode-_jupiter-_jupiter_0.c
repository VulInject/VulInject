fstack_t
mem_map_in(fcode_env_t *env, fstack_t hi, fstack_t lo, fstack_t len)
{
private_data_t	*pdp = DEVICE_PRIVATE(env);
fc_cell_t	virt;
fstack_t	mcookie = 0;
char		*service = "map-in";
int		error;
int		offset = 0;



offset = lo & PAGEOFFSET;
lo &= PAGEMASK;
len = (len + offset + PAGEOFFSET) & PAGEMASK;

error = fc_run_priv(pdp->common, service, 3, 1, fc_size2cell(len),
fc_uint32_t2cell(hi), fc_uint32_t2cell(lo), &virt);

if (error)
throw_from_fclib(env, 1, "jupiter:%s: failed\n", service);

mcookie = mapping_to_mcookie(virt, len, 0, 0);

if (mcookie == 0)
throw_from_fclib(env, 1,
"jupiter:%s: mapping_to_mcookie failed\n", service);

mcookie += offset;

debug_msg(DEBUG_REG_ACCESS, "jupiter:%s: %llx -> %x\n", service,
(long long)virt, (uint32_t)mcookie);

return (mcookie);
}