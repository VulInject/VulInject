void write_v7m_exception(CPUARMState *env, uint32_t new_exc)
{

bool new_is_psp, old_is_psp = v7m_using_psp(env);
uint32_t tmp;

env->v7m.exception = new_exc;

new_is_psp = v7m_using_psp(env);

if (old_is_psp != new_is_psp) {
tmp = env->v7m.other_sp;
env->v7m.other_sp = env->regs[13];
env->regs[13] = tmp;
}
}