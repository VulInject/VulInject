static int x86_cpu_gdb_load_seg(X86CPU *cpu, X86Seg sreg, uint8_t *mem_buf)
{
CPUX86State *env = &cpu->env;
uint16_t selector = ldl_p(mem_buf);

if (selector != env->segs[sreg].selector) {
cpu_x86_load_seg(env, sreg, selector);
unsigned int limit, flags;
target_ulong base;

if (!(env->cr[0] & CR0_PE_MASK) || (env->eflags & VM_MASK)) {
int dpl = (env->eflags & VM_MASK) ? 3 : 0;
base = selector << 4;
limit = 0xffff;
flags = DESC_P_MASK | DESC_S_MASK | DESC_W_MASK |
DESC_A_MASK | (dpl << DESC_DPL_SHIFT);
} else {
if (!cpu_x86_get_descr_debug(env, selector, &base, &limit,
&flags)) {
return 4;
}
}
cpu_x86_load_seg_cache(env, sreg, selector, base, limit, flags);
}
return 4;
}