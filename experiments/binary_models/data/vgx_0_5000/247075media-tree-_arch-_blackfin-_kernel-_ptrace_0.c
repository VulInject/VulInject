static inline int
put_reg(struct task_struct *task, unsigned long regno, unsigned long data)
{
struct pt_regs *regs = task_pt_regs(task);

if (regno & 3 || regno > PT_LAST_PSEUDO)
return -EIO;

switch (regno) {
case PT_PC:




regs->retx = data;
regs->pc = data;
break;
case PT_RETX:
break;		
case PT_USP:
regs->usp = data;
task->thread.usp = data;
break;
case PT_SYSCFG:	
if ((data & ~1) != 0x6)
pr_warning("ptrace: ignore syscfg write of %#lx\n", data);
break;		
default:
if (regno < sizeof(*regs)) {
void *reg_offset = regs;
*(long *)(reg_offset + regno) = data;
}

}

return 0;
}