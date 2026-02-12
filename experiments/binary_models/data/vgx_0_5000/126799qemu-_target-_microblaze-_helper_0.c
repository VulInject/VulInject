void mb_cpu_do_unaligned_access(CPUState *cs, vaddr addr,
MMUAccessType access_type,
int mmu_idx, uintptr_t retaddr)
{
MicroBlazeCPU *cpu = MICROBLAZE_CPU(cs);
uint32_t esr, iflags;


cpu_restore_state(cs, retaddr, true);
iflags = cpu->env.iflags;

qemu_log_mask(CPU_LOG_INT,
"Unaligned access addr=" TARGET_FMT_lx " pc=%x iflags=%x\n",
(target_ulong)addr, cpu->env.pc, iflags);

esr = ESR_EC_UNALIGNED_DATA;
if (likely(iflags & ESR_ESS_FLAG)) {
esr |= iflags & ESR_ESS_MASK;
} else {
qemu_log_mask(LOG_UNIMP, "Unaligned access without ESR_ESS_FLAG\n");
}

cpu->env.ear = addr;
cpu->env.esr = esr;
cs->exception_index = EXCP_HW_EXCP;
cpu_loop_exit(cs);
}