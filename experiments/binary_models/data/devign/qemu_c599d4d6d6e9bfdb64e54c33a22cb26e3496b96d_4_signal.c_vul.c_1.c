long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5 = VAR2->VAR6[7] - 4;
    target_sigset_t VAR7;
    sigset_t VAR8;
    FUN2(VAR2, VAR5);
    if (!FUN3(VAR9, VAR4, VAR5, 1))
        goto VAR10;
    FUN4(&VAR8, &VAR7);
    FUN5(&VAR8);
    if (FUN6(VAR2, &VAR4->VAR11))
        goto VAR10;
    if (FUN7(VAR5 + FUN8(struct VAR3, VAR11.VAR12), 0, FUN9(VAR2)) == -VAR13)
        goto VAR10;
    FUN10(VAR4, VAR5, 0);
    return -VAR14;
VAR10:
    FUN10(VAR4, VAR5, 0);
    FUN11(VAR15);
    return 0;
}