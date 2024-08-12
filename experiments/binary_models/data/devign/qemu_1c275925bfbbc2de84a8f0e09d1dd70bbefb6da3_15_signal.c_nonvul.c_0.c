static long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5 = NULL;
    sigset_t VAR6;
    VAR3 = VAR2->VAR7[13];
    if (VAR3 & 7)
    {
        goto VAR8;
    }
    if (!FUN2(VAR9, VAR5, VAR3, 1))
        goto VAR8;
    FUN3(&VAR6, &VAR5->VAR10.VAR11);
    FUN4(VAR12, &VAR6, NULL);
    if (FUN5(VAR2, &VAR5->VAR10.VAR13))
        goto VAR8;
    if (FUN6(VAR3 + FUN7(struct VAR4, VAR10.VAR14), 0, FUN8(VAR2)) == -VAR15)
        goto VAR8;
    if (FUN9(VAR16))
        FUN10(VAR17, VAR16, 1);
    FUN11(VAR5, VAR3, 0);
    return VAR2->VAR7[0];
VAR8:
    FUN11(VAR5, VAR3, 0);
    FUN12(VAR18);
    return 0;
}