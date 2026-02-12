extern void die_if_kernel(char *, struct pt_regs *, long);

int send_fault_sig(struct pt_regs *regs)
{
int signo, si_code;
void __user *addr;

signo = current->thread.signo;
si_code = current->thread.code;
addr = (void __user *)current->thread.faddr;
pr_debug("send_fault_sig: %p,%d,%d\n", addr, signo, si_code);

if (user_mode(regs)) {
force_sig_fault(signo, si_code, addr);
} else {
if (fixup_exception(regs))
return -1;





if ((unsigned long)addr < PAGE_SIZE)
pr_alert("Unable to handle kernel NULL pointer dereference");
else
pr_alert("Unable to handle kernel access");
pr_cont(" at virtual address %p\n", addr);
die_if_kernel("Oops", regs, 0 );
make_task_dead(SIGKILL);
}

return 1;
}