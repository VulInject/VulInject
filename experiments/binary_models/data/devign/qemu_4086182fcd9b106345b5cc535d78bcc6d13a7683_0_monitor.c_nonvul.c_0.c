static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8, *VAR9;
    VAR10 *VAR11, *VAR12;
    const VAR13 *VAR14;
    const char *VAR15;
    VAR16 *VAR17 = VAR18;
    VAR12 = VAR11 = NULL;
    VAR9 = NULL;
    VAR8 = FUN2(VAR4, NULL);
    if (!VAR8)
    {
        FUN3(VAR19);
        goto VAR20;
    }
    VAR11 = FUN4(VAR8, &VAR6);
    if (!VAR11)
    {
        FUN5(VAR6);
        FUN6(VAR8);
        goto VAR20;
    }
    VAR17->VAR21->VAR22 = FUN7(VAR11, "");
    FUN8(VAR17->VAR21->VAR22);
    VAR15 = FUN9(VAR11, "");
    FUN10(VAR17, VAR15);
    VAR14 = FUN11(VAR15);
    if (!VAR14)
    {
        FUN3(VAR23, "", VAR15);
        goto VAR20;
    }
    if (FUN12(VAR17, VAR14, &VAR6))
    {
        FUN5(VAR6);
        goto VAR20;
    }
    VAR8 = FUN7(VAR11, "");
    if (!VAR8)
    {
        VAR12 = FUN13();
    }
    else
    {
        VAR12 = FUN14(VAR8);
        FUN15(VAR12);
    }
    FUN16(VAR14, VAR12, &VAR6);
    if (VAR6)
    {
        FUN5(VAR6);
        goto VAR20;
    }
    if (VAR14->VAR24.FUN17(VAR17, VAR12, &VAR9))
    {
        if (!FUN18(VAR17))
        {
            FUN3(VAR25);
        }
    }
VAR20:
    FUN19(VAR17, VAR9);
    FUN6(VAR9);
    FUN20(VAR11);
    FUN20(VAR12);
}