static int amd_pmu_get_msr(struct kvm_vcpu *vcpu, u32 msr, u64 *data)
{
struct kvm_pmu *pmu = vcpu_to_pmu(vcpu);
struct kvm_pmc *pmc;


pmc = get_gp_pmc(pmu, msr, MSR_K7_PERFCTR0);
if (pmc) {
*data = pmc_read_counter(pmc);
return 0;
}

pmc = get_gp_pmc(pmu, msr, MSR_K7_EVNTSEL0);
if (pmc) {
*data = pmc->eventsel;
return 0;
}

return 1;
}