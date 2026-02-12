int arch_uprobe_pre_xol(struct arch_uprobe *auprobe, struct pt_regs *regs)
{
if (psw_bits(regs->psw).eaba == PSW_BITS_AMODE_24BIT)
return -EINVAL;
if (!is_compat_task() && psw_bits(regs->psw).eaba == PSW_BITS_AMODE_31BIT)
return -EINVAL;
clear_thread_flag(TIF_PER_TRAP);
auprobe->saved_per = psw_bits(regs->psw).per;
auprobe->saved_int_code = regs->int_code;
regs->int_code = UPROBE_TRAP_NR;
regs->psw.addr = current->utask->xol_vaddr;
set_tsk_thread_flag(current, TIF_UPROBE_SINGLESTEP);
update_cr_regs(current);
return 0;
}