int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    struct kvm_s390_irq_state VAR5;
    int VAR6;
    if (VAR2->VAR7 == 0)
    {
        return 0;
    }
    if (!FUN3(VAR8, VAR9))
    {
        return -VAR10;
    }
    VAR5.VAR11 = (VAR12)VAR2->VAR13;
    VAR5.VAR14 = VAR2->VAR7;
    VAR6 = FUN4(VAR4, VAR15, &VAR5);
    if (VAR6)
    {
        FUN5("", VAR6);
    }
    return VAR6;
}