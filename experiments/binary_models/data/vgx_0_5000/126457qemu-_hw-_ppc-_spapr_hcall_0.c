static target_ulong register_vpa(PowerPCCPU *cpu, target_ulong vpa)
{
CPUState *cs = CPU(cpu);
CPUPPCState *env = &cpu->env;
SpaprCpuState *spapr_cpu = spapr_cpu_state(cpu);
uint16_t size;
uint8_t tmp;

if (vpa == 0) {
hcall_dprintf("Can't cope with registering a VPA at logical 0\n");
return H_HARDWARE;
}

if (vpa % env->dcache_line_size) {
return H_PARAMETER;
}


size = lduw_be_phys(cs->as, vpa + 0x4);

if (size < VPA_MIN_SIZE) {
return H_PARAMETER;
}


if ((vpa / 4096) != ((vpa + size - 1) / 4096)) {
return H_PARAMETER;
}

spapr_cpu->vpa_addr = vpa;

tmp = ldub_phys(cs->as, spapr_cpu->vpa_addr + VPA_SHARED_PROC_OFFSET);
tmp |= VPA_SHARED_PROC_VAL;
stb_phys(cs->as, spapr_cpu->vpa_addr + VPA_SHARED_PROC_OFFSET, tmp);

return H_SUCCESS;
}