void __show_regs(struct pt_regs *regs)
{
int i, top_reg;
u64 lr, sp;

if (compat_user_mode(regs)) {
lr = regs->compat_lr;
sp = regs->compat_sp;
top_reg = 12;
} else {
lr = regs->regs[30];
sp = regs->sp;
top_reg = 29;
}

show_regs_print_info(KERN_DEFAULT);
print_symbol("PC is at %s\n", instruction_pointer(regs));
print_symbol("LR is at %s\n", lr);
printk("pc : [<%016llx>] lr : [<%016llx>] pstate: %08llx\n",
regs->pc, lr, regs->pstate);
printk("sp : %016llx\n", sp);

i = top_reg;

while (i >= 0) {
printk("x%-2d: %016llx ", i, regs->regs[i]);
i--;

if (i % 2 == 0) {
pr_cont("x%-2d: %016llx ", i, regs->regs[i]);
i--;
}

pr_cont("\n");
}
}