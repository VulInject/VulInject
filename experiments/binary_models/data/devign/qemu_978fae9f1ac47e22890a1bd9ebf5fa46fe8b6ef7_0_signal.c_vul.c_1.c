static long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5;
    target_sigset_t VAR6;
    sigset_t VAR7;
    int VAR8;
    if (VAR2->VAR9[13] & 7)
        goto VAR10;
    VAR3 = VAR2->VAR9[13];
    if (!FUN2(VAR11, VAR5, VAR3, 1))
        goto VAR10;
    if (FUN3(VAR6.VAR12[0], &VAR5->VAR13.VAR14))
        goto VAR10;
    for (VAR8 = 1; VAR8 < VAR15; VAR8++)
    {
        if (FUN3(VAR6.VAR12[VAR8], &VAR5->VAR16[VAR8 - 1]))
            goto VAR10;
    }
    FUN4(&VAR7, &VAR6);
    FUN5(VAR17, &VAR7, NULL);
    if (FUN6(VAR2, &VAR5->VAR13))
        goto VAR10;
    if (FUN7(VAR18))
        FUN8(VAR19, VAR18, 1);
    FUN9(VAR5, VAR3, 0);
    return VAR2->VAR9[0];
VAR10:
    FUN9(VAR5, VAR3, 0);
    FUN10(VAR20);
    return 0;
}