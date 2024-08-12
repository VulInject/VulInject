static long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5 = NULL;
    target_sigset_t VAR6;
    sigset_t VAR7;
    int VAR8;
    VAR3 = VAR2->VAR9[13];
    FUN2(VAR2, VAR3);
    if (VAR3 & 7)
    {
        goto VAR10;
    }
    if (!FUN3(VAR11, VAR5, VAR3, 1))
    {
        goto VAR10;
    }
    FUN4(VAR6.VAR12[0], &VAR5->VAR13.VAR14);
    for (VAR8 = 1; VAR8 < VAR15; VAR8++)
    {
        FUN4(VAR6.VAR12[VAR8], &VAR5->VAR16[VAR8 - 1]);
    }
    FUN5(&VAR7, &VAR6);
    FUN6(VAR17, &VAR7, NULL);
    if (FUN7(VAR2, &VAR5->VAR13))
    {
        goto VAR10;
    }
    if (FUN8(VAR18))
        FUN9(VAR19, VAR18, 1);
    FUN10(VAR5, VAR3, 0);
    return -VAR20;
VAR10:
    FUN11(VAR21);
    return 0;
}