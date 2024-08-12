static int FUN1(VAR1 *VAR2)
{
    struct kvm_xcrs VAR3;
    if (!FUN2())
    {
        return 0;
    }
    VAR3.VAR4 = 1;
    VAR3.VAR5 = 0;
    VAR3.VAR3[0].VAR6 = 0;
    VAR3.VAR3[0].VAR7 = VAR2->VAR8;
    return FUN3(VAR2, VAR9, &VAR3);
    return 0;
}