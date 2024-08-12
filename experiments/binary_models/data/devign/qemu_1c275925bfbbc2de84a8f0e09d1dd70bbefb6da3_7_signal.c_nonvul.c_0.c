long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5 = VAR2->VAR6[7] - 4;
    target_sigset_t VAR7;
    sigset_t VAR8;
    int VAR9;
    if (!FUN2(VAR10, VAR4, VAR5, 1))
        goto VAR11;
    FUN3(&VAR8, &VAR7);
    FUN4(VAR12, &VAR8, NULL);
    if (FUN5(VAR2, &VAR4->VAR13, &VAR9))
        goto VAR11;
    if (FUN6(VAR5 + FUN7(struct VAR3, VAR13.VAR14), 0, FUN8(VAR2)) == -VAR15)
        goto VAR11;
    FUN9(VAR4, VAR5, 0);
    return VAR9;
VAR11:
    FUN9(VAR4, VAR5, 0);
    FUN10(VAR16);
    return 0;
}