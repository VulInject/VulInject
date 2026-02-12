static void save_clear_guest_mmu(struct kvm *kvm, struct kvm_vcpu *vcpu)
{
if (kvm_is_radix(kvm)) {
radix_clear_slb();
} else {
int i;
int nr = 0;


for (i = 0; i < vcpu->arch.slb_nr; i++) {
u64 slbee, slbev;

slbee = mfslbe(i);
if (slbee & SLB_ESID_V) {
slbev = mfslbv(i);
vcpu->arch.slb[nr].orige = slbee | i;
vcpu->arch.slb[nr].origv = slbev;
nr++;
}
}
vcpu->arch.slb_max = nr;
slb_clear_invalidate_partition();
}
}