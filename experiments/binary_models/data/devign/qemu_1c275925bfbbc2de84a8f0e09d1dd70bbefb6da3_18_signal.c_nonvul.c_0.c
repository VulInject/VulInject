long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5 = VAR2->VAR6[VAR7] - 8;
    target_sigset_t VAR8;
    sigset_t VAR9;
    int VAR10, VAR11;
    fprintf(VAR12, "");
    if (!FUN2(VAR13, VAR4, VAR5, 1))
        goto VAR14;
    if (FUN3(VAR8.VAR15[0], &VAR4->VAR16.VAR17))
        goto VAR14;
    for (VAR11 = 1; VAR11 < VAR18; VAR11++)
    {
        if (FUN3(VAR8.VAR15[VAR11], &VAR4->VAR19[VAR11 - 1]))
            goto VAR14;
    }
    FUN4(&VAR9, &VAR8);
    FUN5(VAR20, &VAR9, NULL);
    if (FUN6(VAR2, &VAR4->VAR16, &VAR10))
        goto VAR14;
    FUN7(VAR4, VAR5, 0);
    return VAR10;
VAR14:
    FUN7(VAR4, VAR5, 0);
    FUN8(VAR21);
    return 0;
}