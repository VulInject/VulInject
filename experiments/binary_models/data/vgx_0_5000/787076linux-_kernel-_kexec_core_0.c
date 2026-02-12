void crash_save_cpu(struct pt_regs *regs, int cpu)
{
struct elf_prstatus prstatus;
u32 *buf;

if ((cpu < 0) || (cpu >= nr_cpu_ids))
return;


buf = (u32 *)per_cpu_ptr(crash_notes, cpu);
if (!buf)
return;
memset(&prstatus, 0, sizeof(prstatus));
prstatus.common.pr_pid = current->pid;
elf_core_copy_regs(&prstatus.pr_reg, regs);
buf = append_elf_note(buf, KEXEC_CORE_NOTE_NAME, NT_PRSTATUS,
&prstatus, sizeof(prstatus));
final_note(buf);
}