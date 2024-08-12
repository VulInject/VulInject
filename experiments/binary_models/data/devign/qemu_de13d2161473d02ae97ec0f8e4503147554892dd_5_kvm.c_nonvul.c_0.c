int FUN1(VAR1 *VAR2)
{
    struct kvm_s390_irq VAR3 = {
        .VAR4 = VAR5,
    };
    FUN2(VAR2, &VAR3);
    FUN3(VAR2);
    FUN4(FUN5(VAR2));
    FUN6("", &VAR2->VAR6);
    return 0;
}