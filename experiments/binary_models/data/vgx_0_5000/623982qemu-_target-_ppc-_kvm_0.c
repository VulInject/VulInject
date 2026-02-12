static int kvm_arch_sync_sregs(PowerPCCPU *cpu)
{
CPUPPCState *cenv = &cpu->env;
CPUState *cs = CPU(cpu);
struct kvm_sregs sregs;
int ret;

if (cenv->excp_model == POWERPC_EXCP_BOOKE) {

return 0;
} else {
if (!cap_segstate) {
fprintf(stderr, "kvm error: missing PVR setting capability\n");
return -ENOSYS;
}
}

ret = kvm_vcpu_ioctl(cs, KVM_GET_SREGS, &sregs);
if (ret) {
return ret;
}

sregs.pvr = cenv->spr[SPR_PVR];
return kvm_vcpu_ioctl(cs, KVM_SET_SREGS, &sregs);
}