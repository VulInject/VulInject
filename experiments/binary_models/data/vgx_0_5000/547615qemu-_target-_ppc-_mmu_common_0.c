static bool mmubooke206_get_as(CPUPPCState *env,
int mmu_idx, uint32_t *epid_out,
bool *as_out, bool *pr_out)
{
if (is_epid_mmu(mmu_idx)) {
uint32_t epidr;
if (mmu_idx == PPC_TLB_EPID_STORE) {
epidr = env->spr[SPR_BOOKE_EPSC];
} else {
epidr = env->spr[SPR_BOOKE_EPLC];
}
*epid_out = (epidr & EPID_EPID) >> EPID_EPID_SHIFT;
*as_out = !!(epidr & EPID_EAS);
*pr_out = !!(epidr & EPID_EPR);
return true;
} else {
*as_out = msr_ds;
*pr_out = msr_pr;
return false;
}
}