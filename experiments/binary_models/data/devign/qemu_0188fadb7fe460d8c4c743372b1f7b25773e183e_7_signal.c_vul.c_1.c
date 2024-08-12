static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    abi_ulong VAR10;
    VAR10 = FUN2(VAR3, VAR7, sizeof(*VAR9));
    FUN3("", VAR11, (unsigned long long)VAR10);
    if (!FUN4(VAR12, VAR9, VAR10, 0))
    {
        goto VAR13;
    }
    FUN3("", VAR11);
    if (FUN5(VAR5->VAR1[0], &VAR9->VAR14.VAR15[0]))
    {
        goto VAR13;
    }
    FUN6(VAR7, &VAR9->VAR16);
    FUN5((VAR17)(unsigned long)&VAR9->VAR16, (VAR17 *)&VAR9->VAR14.VAR16);
    if (VAR3->VAR18 & VAR19)
    {
        VAR7->VAR20[14] = (unsigned long)VAR3->VAR21 | VAR22;
    }
    else
    {
        VAR7->VAR20[14] = (unsigned long)VAR9->VAR23 | VAR22;
        if (FUN5(VAR24 | VAR25, (VAR26 *)(VAR9->VAR23)))
            goto VAR13;
    }
    if (FUN5(VAR7->VAR20[15], (VAR17 *)VAR9))
    {
        goto VAR13;
    }
    VAR7->VAR20[15] = VAR10;
    VAR7->VAR27.VAR28 = (VAR29)VAR3->VAR30 | VAR22;
    VAR7->VAR20[2] = VAR1;
    VAR7->VAR20[3] = VAR10 += FUN7(FUN8(*VAR9), VAR14);
    VAR7->VAR20[4] = 0;
    VAR7->VAR20[5] = 0;
    if (FUN5(VAR7->VAR20[2], (int *)&VAR9->VAR31))
    {
        goto VAR13;
    }
    FUN9(VAR9, VAR10, 1);
    return;
VAR13:
    FUN3("", VAR11);
    FUN9(VAR9, VAR10, 1);
    FUN10(VAR32);
}