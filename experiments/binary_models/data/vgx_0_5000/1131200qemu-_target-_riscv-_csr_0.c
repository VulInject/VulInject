static RISCVException write_satp(CPURISCVState *env, int csrno,
target_ulong val)
{
target_ulong vm, mask, asid;

if (!riscv_feature(env, RISCV_FEATURE_MMU)) {
return RISCV_EXCP_NONE;
}

if (riscv_cpu_mxl(env) == MXL_RV32) {
vm = validate_vm(env, get_field(val, SATP32_MODE));
mask = (val ^ env->satp) & (SATP32_MODE | SATP32_ASID | SATP32_PPN);
asid = (val ^ env->satp) & SATP32_ASID;
} else {
vm = validate_vm(env, get_field(val, SATP64_MODE));
mask = (val ^ env->satp) & (SATP64_MODE | SATP64_ASID | SATP64_PPN);
asid = (val ^ env->satp) & SATP64_ASID;
}

if (vm && mask) {
if (env->priv == PRV_S && get_field(env->mstatus, MSTATUS_TVM)) {
return RISCV_EXCP_ILLEGAL_INST;
} else {
if (asid) {
tlb_flush(env_cpu(env));
}
env->satp = val;
}
}
return RISCV_EXCP_NONE;
}