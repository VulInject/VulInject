long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5 = VAR2->VAR6[7] - 4;
    target_sigset_t VAR7;
    sigset_t VAR8;
    int VAR9, VAR10;
    if (!FUN2(VAR11, VAR4, VAR5, 1))
        goto VAR12;
    if (FUN3(VAR7.VAR13[0], &VAR4->VAR14.VAR15))
        goto VAR12;
    for (VAR10 = 1; VAR10 < VAR16; VAR10++)
    {
        if (FUN3(VAR7.VAR13[VAR10], &VAR4->VAR17[VAR10 - 1]))
            goto VAR12;
    }
    FUN4(&VAR8, &VAR7);
    FUN5(VAR18, &VAR8, NULL);
    if (FUN6(VAR2, &VAR4->VAR14, &VAR9))
        goto VAR12;
    FUN7(VAR4, VAR5, 0);
    return VAR9;
VAR12:
    FUN7(VAR4, VAR5, 0);
    FUN8(VAR19);
    return 0;
}