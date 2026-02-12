static int hax_vcpu_interrupt(CPUArchState *env)
{
CPUState *cpu = env_cpu(env);
struct hax_vcpu_state *vcpu = cpu->hax_vcpu;
struct hax_tunnel *ht = vcpu->tunnel;


if (ht->ready_for_interrupt_injection &&
(cpu->interrupt_request & CPU_INTERRUPT_HARD)) {
int irq;

irq = cpu_get_pic_interrupt(env);
if (irq >= 0) {
hax_inject_interrupt(env, irq);
cpu->interrupt_request &= ~CPU_INTERRUPT_HARD;
}
}


if ((cpu->interrupt_request & CPU_INTERRUPT_HARD)) {
ht->request_interrupt_window = 1;
} else {
ht->request_interrupt_window = 0;
}
return 0;
}