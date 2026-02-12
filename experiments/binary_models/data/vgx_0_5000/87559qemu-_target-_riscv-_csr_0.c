static RISCVException write_upmbase(CPURISCVState *env, int csrno,
target_ulong val)
{
uint64_t mstatus;


if (check_pm_current_disabled(env, csrno)) {
return RISCV_EXCP_NONE;
}
env->upmbase = val;
if ((env->priv == PRV_U) && (env->mmte & U_PM_ENABLE)) {
env->cur_pmbase = val;
}
env->mmte |= PM_EXT_DIRTY;


mstatus = env->mstatus | MSTATUS_XS;
write_mstatus(env, csrno, mstatus);
return RISCV_EXCP_NONE;
}