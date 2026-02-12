static void vgic_mmio_write_target(struct kvm_vcpu *vcpu,
gpa_t addr, unsigned int len,
unsigned long val)
{
u32 intid = VGIC_ADDR_TO_INTID(addr, 8);
u8 cpu_mask = GENMASK(atomic_read(&vcpu->kvm->online_vcpus) - 1, 0);
int i;


if (intid < VGIC_NR_PRIVATE_IRQS)
return;

for (i = 0; i < len; i++) {
struct vgic_irq *irq = vgic_get_irq(vcpu->kvm, NULL, intid + i);
int target;

spin_lock(&irq->irq_lock);

irq->targets = (val >> (i * 8)) & cpu_mask;
target = irq->targets ? __ffs(irq->targets) : 0;
irq->target_vcpu = kvm_get_vcpu(vcpu->kvm, target);

spin_unlock(&irq->irq_lock);
vgic_put_irq(vcpu->kvm, irq);
}
}