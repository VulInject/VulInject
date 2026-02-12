int __skip_singlestep(struct kprobe *p, struct pt_regs *regs,
struct kprobe_ctlblk *kcb, unsigned long orig_nip)
{

regs->nip = (unsigned long)p->addr + MCOUNT_INSN_SIZE;
if (unlikely(p->post_handler)) {
kcb->kprobe_status = KPROBE_HIT_SSDONE;
p->post_handler(p, regs, 0);
}
__this_cpu_write(current_kprobe, NULL);
if (orig_nip)
regs->nip = orig_nip;
return 1;
}