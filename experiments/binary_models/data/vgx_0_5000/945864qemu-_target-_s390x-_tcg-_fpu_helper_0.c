static void handle_exceptions(CPUS390XState *env, bool XxC, uintptr_t retaddr)
{
unsigned s390_exc, qemu_exc;


qemu_exc = env->fpu_status.float_exception_flags;
if (qemu_exc == 0) {
return;
}
env->fpu_status.float_exception_flags = 0;
s390_exc = s390_softfloat_exc_to_ieee(qemu_exc);


if (!(s390_exc & S390_IEEE_MASK_INEXACT) &&
!((env->fpc >> 24) & S390_IEEE_MASK_UNDERFLOW)) {
s390_exc &= ~S390_IEEE_MASK_UNDERFLOW;
}




if (s390_exc & ~S390_IEEE_MASK_INEXACT) {
if (s390_exc & ~S390_IEEE_MASK_INEXACT & env->fpc >> 24) {

tcg_s390_data_exception(env, s390_exc, retaddr);
}

env->fpc |= (s390_exc & ~S390_IEEE_MASK_INEXACT) << 16;
}


if (s390_exc & S390_IEEE_MASK_INEXACT && !XxC) {

if (s390_exc & S390_IEEE_MASK_INEXACT & env->fpc >> 24) {
tcg_s390_data_exception(env, s390_exc & S390_IEEE_MASK_INEXACT,
retaddr);
}

env->fpc |= (s390_exc & S390_IEEE_MASK_INEXACT) << 16;
}
}