static int raise_local(void)
{
struct mce *m = this_cpu_ptr(&injectm);
int context = MCJ_CTX(m->inject_flags);
int ret = 0;
int cpu = m->extcpu;

if (m->inject_flags & MCJ_EXCEPTION) {
pr_info("Triggering MCE exception on CPU %d\n", cpu);
switch (context) {
case MCJ_CTX_IRQ:


case MCJ_CTX_PROCESS:
raise_exception(m, NULL);
break;
default:
pr_info("Invalid MCE context\n");
ret = -EINVAL;
}
pr_info("MCE exception done on CPU %d\n", cpu);
} else if (m->status) {
pr_info("Starting machine check poll CPU %d\n", cpu);
raise_poll(m);
mce_notify_irq();
pr_info("Machine check poll done on CPU %d\n", cpu);
} else
m->finished = 0;

return ret;
}