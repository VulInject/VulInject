void kvm_set_msi_irq(struct kvm *kvm, struct kvm_kernel_irq_routing_entry *e,
struct kvm_lapic_irq *irq)
{
struct msi_msg msg = { .address_lo = e->msi.address_lo,
.address_hi = e->msi.address_hi,
.data = e->msi.data };

trace_kvm_msi_set_irq(msg.address_lo | (kvm->arch.x2apic_format ?
(u64)msg.address_hi << 32 : 0), msg.data);

irq->dest_id = x86_msi_msg_get_destid(&msg, kvm->arch.x2apic_format);
irq->vector = msg.arch_data.vector;
irq->dest_mode = kvm_lapic_irq_dest_mode(msg.arch_addr_lo.dest_mode_logical);
irq->trig_mode = msg.arch_data.is_level;
irq->delivery_mode = msg.arch_data.delivery_mode << 8;
irq->msi_redir_hint = msg.arch_addr_lo.redirect_hint;
irq->level = 1;
irq->shorthand = APIC_DEST_NOSHORT;
}