long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5;
    target_sigset_t VAR6;
    sigset_t VAR7;
    int VAR8;
    VAR5 = VAR2->VAR9[VAR10];
    FUN2(VAR2, VAR5);
    if (!FUN3(VAR11, VAR4, VAR5, 1))
        goto VAR12;
    FUN4(VAR6.VAR13[0], &VAR4->VAR14.VAR15.VAR16);
    for (VAR8 = 1; VAR8 < VAR17; VAR8++)
    {
        FUN4(VAR6.VAR13[VAR8], &VAR4->VAR18[VAR8 - 1]);
    }
    FUN5(&VAR7, &VAR6);
    FUN6(VAR19, &VAR7, NULL);
    FUN7(&VAR4->VAR14.VAR15, VAR2);
    VAR2->VAR9[14] = VAR2->VAR20[VAR21];
    FUN8(VAR4, VAR5, 0);
    return VAR2->VAR9[10];
VAR12:
    FUN9(VAR22);
}