int arm_cpu_write_elf32_note(WriteCoreDumpFunction f, CPUState *cs,
int cpuid, void *opaque)
{
struct arm_note note;
ARMCPU *cpu = ARM_CPU(cs);
CPUARMState *env = &cpu->env;
DumpState *s = opaque;
int ret, i;
bool fpvalid = cpu_isar_feature(aa32_vfp_simd, cpu);

arm_note_init(&note, s, "CORE", 5, NT_PRSTATUS, sizeof(note.prstatus));

note.prstatus.pr_pid = cpu_to_dump32(s, cpuid);
note.prstatus.pr_fpvalid = cpu_to_dump32(s, fpvalid);

for (i = 0; i < 16; ++i) {
note.prstatus.pr_reg.regs[i] = cpu_to_dump32(s, env->regs[i]);
}
note.prstatus.pr_reg.regs[16] = cpu_to_dump32(s, cpsr_read(env));

ret = f(&note, ARM_PRSTATUS_NOTE_SIZE, s);
if (ret < 0) {
return -1;
} else if (fpvalid) {
return arm_write_elf32_vfp(f, env, cpuid, s);
}

return 0;
}