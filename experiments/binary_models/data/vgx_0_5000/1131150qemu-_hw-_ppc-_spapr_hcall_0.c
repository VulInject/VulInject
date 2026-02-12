static target_ulong h_cede(PowerPCCPU *cpu, SpaprMachineState *spapr,
target_ulong opcode, target_ulong *args)
{
CPUPPCState *env = &cpu->env;
CPUState *cs = CPU(cpu);
SpaprCpuState *spapr_cpu = spapr_cpu_state(cpu);

env->msr |= (1ULL << MSR_EE);
hreg_compute_hflags(env);

if (spapr_cpu->prod) {
spapr_cpu->prod = false;
return H_SUCCESS;
}

if (!cpu_has_work(cs)) {
cs->halted = 1;
cs->exception_index = EXCP_HLT;
cs->exit_request = 1;
}

return H_SUCCESS;
}