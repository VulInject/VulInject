static void FUN1(VAR1 *VAR2, uint16_t VAR3)
{
    struct kvm_s390_irq VAR4 = {
        .VAR5 = VAR6,
        .VAR7.VAR8.VAR3 = VAR3,
    };
    FUN2(VAR2, &VAR4);
}