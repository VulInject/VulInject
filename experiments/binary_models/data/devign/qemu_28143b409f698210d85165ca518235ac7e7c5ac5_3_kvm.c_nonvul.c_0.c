static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    struct kvm_xcrs VAR5 = {};
    if (!VAR6)
    {
        return 0;
    }
    VAR5.VAR7 = 1;
    VAR5.VAR8 = 0;
    VAR5.VAR5[0].VAR9 = 0;
    VAR5.VAR5[0].VAR10 = VAR4->VAR11;
    return FUN2(FUN3(VAR2), VAR12, &VAR5);
}