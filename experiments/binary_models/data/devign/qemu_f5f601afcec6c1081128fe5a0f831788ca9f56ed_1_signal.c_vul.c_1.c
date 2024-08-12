long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5;
    target_sigset_t VAR6;
    sigset_t VAR7;
    int VAR8;
    VAR5 = VAR2->VAR9[VAR10];
    if (!FUN2(VAR11, VAR4, VAR5, 1))
        goto VAR12;
    if (FUN3(VAR6.VAR13[0], &VAR4->VAR14.VAR15))
        goto VAR12;
    for (VAR8 = 1; VAR8 < VAR16; VAR8++)
    {
        if (FUN3(VAR6.VAR13[VAR8], &VAR4->VAR17[VAR8 - 1]))
            goto VAR12;
    }
    FUN4(&VAR7, &VAR6);
    FUN5(VAR18, &VAR7, NULL);
    FUN6(&VAR4->VAR14, VAR2);
    FUN7(VAR4, VAR5, 0);
    return VAR2->VAR9[10];
VAR12:
    FUN7(VAR4, VAR5, 0);
    FUN8(VAR19);
}