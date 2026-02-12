extern void die_if_kernel(char *, struct pt_regs *, long);

int send_fault_sig(struct pt_regs *regs)
{
siginfo_t siginfo = { 0, 0, 0, };

siginfo.si_signo = current->thread.signo;
siginfo.si_code = current->thread.code;
siginfo.si_addr = (void *)current->thread.faddr;
pr_debug("send_fault_sig: %p,%d,%d\n", siginfo.si_addr,
siginfo.si_signo, siginfo.si_code);

if (user_mode(regs)) {
force_sig_info(siginfo.si_signo,
&siginfo, current);
} else {
if (fixup_exception(regs))
return -1;






if ((unsigned long)siginfo.si_addr < PAGE_SIZE)
pr_alert("Unable to handle kernel NULL pointer dereference");
else
pr_alert("Unable to handle kernel access");
pr_cont(" at virtual address %p\n", siginfo.si_addr);
die_if_kernel("Oops", regs, 0 );
do_exit(SIGKILL);
}

return 1;
}