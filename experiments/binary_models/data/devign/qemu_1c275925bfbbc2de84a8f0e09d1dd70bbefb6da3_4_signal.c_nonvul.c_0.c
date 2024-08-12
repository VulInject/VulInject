long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5;
    sigset_t VAR6;
    target_sigset_t VAR7;
    target_ulong VAR8;
    int VAR9;
    int VAR10 = 0;
    fprintf(VAR11, "");
    VAR5 = VAR2->VAR12[15];
    if (!FUN2(VAR13, VAR4, VAR5, 1))
        goto VAR14;
    VAR10 |= FUN3(VAR7.VAR15[0], &VAR4->VAR16.VAR17);
    for (VAR9 = 1; VAR9 < VAR18; VAR9++)
    {
        VAR10 |= (FUN3(VAR7.VAR15[VAR9], &VAR4->VAR19[VAR9 - 1]));
    }
    if (VAR10)
        goto VAR14;
    FUN4(&VAR6, &VAR7);
    FUN5(VAR20, &VAR6, NULL);
    if (FUN6(VAR2, &VAR4->VAR16, &VAR8))
        goto VAR14;
    FUN7(VAR4, VAR5, 0);
    return VAR8;
VAR14:
    FUN7(VAR4, VAR5, 0);
    FUN8(VAR21);
    return 0;
}