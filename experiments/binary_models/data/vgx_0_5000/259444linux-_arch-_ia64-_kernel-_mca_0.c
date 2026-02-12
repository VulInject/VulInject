ia64_mca_cmc_vector_setup (void)
{
cmcv_reg_t	cmcv;

cmcv.cmcv_regval	= 0;
cmcv.cmcv_mask		= 1;        
cmcv.cmcv_vector	= IA64_CMC_VECTOR;
ia64_setreg(_IA64_REG_CR_CMCV, cmcv.cmcv_regval);

IA64_MCA_DEBUG("%s: CPU %d corrected machine check vector %#x registered.\n",
__func__, smp_processor_id(), IA64_CMC_VECTOR);

IA64_MCA_DEBUG("%s: CPU %d CMCV = %#016lx\n",
__func__, smp_processor_id(), ia64_getreg(_IA64_REG_CR_CMCV));
}