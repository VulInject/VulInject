long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5 = VAR2->VAR6[VAR7];
    target_sigset_t VAR8;
    sigset_t VAR9;
    if (!FUN2(VAR10, VAR4, VAR5, 1))
    {
        goto VAR11;
    }
    FUN3(&VAR8);
    if (FUN4(VAR8.VAR12[0], &VAR4->VAR13))
    {
        goto VAR11;
    }
    FUN5(&VAR9, &VAR8);
    FUN6(VAR14, &VAR9, NULL);
    if (FUN7(VAR2, VAR4))
    {
        goto VAR11;
    }
    FUN8(VAR4, VAR5, 0);
    return VAR2->VAR6[VAR15];
VAR11:
    FUN8(VAR4, VAR5, 0);
    FUN9(VAR16);
}