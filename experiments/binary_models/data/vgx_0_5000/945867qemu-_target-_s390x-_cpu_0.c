void s390_cpu_set_psw(CPUS390XState *env, uint64_t mask, uint64_t addr)
{
uint64_t old_mask = env->psw.mask;

env->psw.addr = addr;
env->psw.mask = mask;


if (!tcg_enabled()) {
return;
}
env->cc_op = (mask >> 44) & 3;

if ((old_mask ^ mask) & PSW_MASK_PER) {
s390_cpu_recompute_watchpoints(env_cpu(env));
}

if (mask & PSW_MASK_WAIT) {
s390_handle_wait(env_archcpu(env));
}
}