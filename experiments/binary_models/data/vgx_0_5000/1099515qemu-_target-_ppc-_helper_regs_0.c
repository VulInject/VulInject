void cpu_get_tb_cpu_state(CPUPPCState *env, target_ulong *pc,
target_ulong *cs_base, uint32_t *flags)
{
uint32_t hflags_current = env->hflags;
uint32_t hflags_rebuilt;

*pc = env->nip;
*cs_base = 0;
*flags = hflags_current;

hflags_rebuilt = hreg_compute_hflags_value(env);
if (unlikely(hflags_current != hflags_rebuilt)) {
cpu_abort(env_cpu(env),
"TCG hflags mismatch (current:0x%08x rebuilt:0x%08x)\n",
hflags_current, hflags_rebuilt);
}
}