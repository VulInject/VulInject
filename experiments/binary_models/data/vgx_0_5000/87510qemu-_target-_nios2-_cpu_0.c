static void nios2_cpu_reset(DeviceState *dev)
{
CPUState *cs = CPU(dev);
Nios2CPU *cpu = NIOS2_CPU(cs);
Nios2CPUClass *ncc = NIOS2_CPU_GET_CLASS(cpu);
CPUNios2State *env = &cpu->env;

if (qemu_loglevel_mask(CPU_LOG_RESET)) {
qemu_log("CPU Reset (CPU %d)\n", cs->cpu_index);
log_cpu_state(cs, 0);
}

ncc->parent_reset(dev);

memset(env->regs, 0, sizeof(uint32_t) * NUM_CORE_REGS);
env->regs[R_PC] = cpu->reset_addr;


env->regs[CR_STATUS] = CR_STATUS_U | CR_STATUS_PIE;
env->regs[CR_STATUS] = 0;
}