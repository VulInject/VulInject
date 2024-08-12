void FUN1(void)
{
    struct kvm_s390_irq VAR1 = {
        .VAR2 = VAR3,
        .VAR4.VAR5.VAR6 = VAR7,
        .VAR4.VAR5.VAR8 = FUN2() | VAR9,
    };
    FUN3(&VAR1);
}