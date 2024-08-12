long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5;
    uint32_t VAR6, VAR7, VAR8;
    target_sigset_t VAR9;
    sigset_t VAR10;
    int VAR11 = 0, VAR12;
    VAR3 = VAR2->VAR13[VAR14];
    FUN2(VAR2, VAR3);
    if (!FUN3(VAR15, VAR5, VAR3, 1))
    {
        goto VAR16;
    }
    if (VAR3 & 3)
        goto VAR16;
    FUN4(VAR7, &VAR5->VAR17.VAR18.VAR7);
    FUN4(VAR8, &VAR5->VAR17.VAR18.VAR8);
    if ((VAR7 | VAR8) & 3)
    {
        goto VAR16;
    }
    FUN4(VAR6, &VAR5->VAR17.VAR18.VAR19);
    VAR2->VAR19 = (VAR6 & (VAR20)) | (VAR2->VAR19 & ~(VAR20));
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = VAR8;
    FUN4(VAR2->VAR21, &VAR5->VAR17.VAR18.VAR21);
    for (VAR12 = 0; VAR12 < 8; VAR12++)
    {
        FUN4(VAR2->VAR22[VAR12], &VAR5->VAR17.VAR18.VAR23[VAR12]);
    }
    for (VAR12 = 0; VAR12 < 8; VAR12++)
    {
        FUN4(VAR2->VAR13[VAR12 + VAR24], &VAR5->VAR17.VAR18.VAR23[VAR12 + 8]);
    }
    FUN4(VAR9.VAR25[0], &VAR5->VAR17.VAR26);
    for (VAR12 = 1; VAR12 < VAR27; VAR12++)
    {
        FUN4(VAR9.VAR25[VAR12], &VAR5->VAR28[VAR12 - 1]);
    }
    FUN5(&VAR10, &VAR9);
    FUN6(VAR29, &VAR10, NULL);
    if (VAR11)
    {
        goto VAR16;
    }
    FUN7(VAR5, VAR3, 0);
    return -VAR30;
VAR16:
    FUN7(VAR5, VAR3, 0);
    FUN8(VAR31);
}