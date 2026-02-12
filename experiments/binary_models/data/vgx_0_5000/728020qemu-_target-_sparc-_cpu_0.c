static bool sparc_cpu_exec_interrupt(CPUState *cs, int interrupt_request)
{
if (interrupt_request & CPU_INTERRUPT_HARD) {
SPARCCPU *cpu = SPARC_CPU(cs);
CPUSPARCState *env = &cpu->env;

if (cpu_interrupts_enabled(env) && env->interrupt_index > 0) {
int pil = env->interrupt_index & 0xf;
int type = env->interrupt_index & 0xf0;

if (type != TT_EXTINT || cpu_pil_allowed(env, pil)) {
cs->exception_index = env->interrupt_index;
sparc_cpu_do_interrupt(cs);
return true;
}
}
}
return false;
}