static int __diag_ipl_functions(struct kvm_vcpu *vcpu)
{
unsigned int reg = vcpu->arch.sie_block->ipa & 0xf;
unsigned long subcode = vcpu->run->s.regs.gprs[reg] & 0xffff;

VCPU_EVENT(vcpu, 3, "diag ipl functions, subcode %lx", subcode);
vcpu->stat.instruction_diagnose_308++;
switch (subcode) {
case 3:
vcpu->run->s390_reset_flags = KVM_S390_RESET_CLEAR;
break;
case 4:
vcpu->run->s390_reset_flags = 0;
break;
default:
return -EOPNOTSUPP;
}


if (!kvm_s390_user_cpu_state_ctrl(vcpu->kvm))
kvm_s390_vcpu_stop(vcpu);
vcpu->run->s390_reset_flags |= KVM_S390_RESET_SUBSYSTEM;
vcpu->run->s390_reset_flags |= KVM_S390_RESET_IPL;
vcpu->run->s390_reset_flags |= KVM_S390_RESET_CPU_INIT;
vcpu->run->exit_reason = KVM_EXIT_S390_RESET;
VCPU_EVENT(vcpu, 3, "requesting userspace resets %llx",
vcpu->run->s390_reset_flags);
trace_kvm_s390_request_resets(vcpu->run->s390_reset_flags);
return -EREMOTE;
}