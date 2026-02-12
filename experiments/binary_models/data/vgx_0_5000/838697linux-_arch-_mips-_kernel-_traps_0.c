static void show_backtrace(struct task_struct *task, const struct pt_regs *regs,
const char *loglvl, bool user)
{
unsigned long sp = regs->regs[29];
unsigned long ra = regs->regs[31];
unsigned long pc = regs->cp0_epc;

if (!task)
task = current;

if (raw_show_trace || user_mode(regs) || !__kernel_text_address(pc)) {
show_raw_backtrace(sp, loglvl, user);
return;
}
printk("%sCall Trace:\n", loglvl);
do {
print_ip_sym(loglvl, pc);
pc = unwind_stack(task, &sp, pc, &ra);
} while (pc);
pr_cont("\n");
}