static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9, *VAR10;
    const VAR11 *VAR12;
    VAR13 *VAR14 = VAR15;
    const char *VAR16, *VAR17;
    VAR10 = NULL;
    VAR7 = FUN2(VAR4, NULL);
    if (!VAR7)
    {
        FUN3(VAR18);
        goto VAR19;
        FUN3(VAR20, "");
        FUN4(VAR7);
        goto VAR19;
    }
    VAR9 = FUN5(VAR7);
    VAR14->VAR21->VAR22 = FUN6(VAR9, "");
    FUN7(VAR14->VAR21->VAR22);
    VAR7 = FUN6(VAR9, "");
    if (!VAR7)
    {
        FUN3(VAR20, "");
    }
    else if (FUN8(VAR7) != VAR23)
    {
        FUN3(VAR24, "", "");
    }
    VAR16 = FUN9(FUN10(VAR7));
    if (FUN11(VAR14, VAR16))
    {
        FUN3(VAR25, VAR16);
    }
    if (FUN12(VAR16, ""))
    {
        FUN3(VAR25, VAR16);
    }
    else if (FUN13(VAR16, "", &VAR17))
    {
        VAR12 = FUN14("");
        FUN15(VAR9, "", FUN16("", VAR17));
    }
    else
    {
        VAR12 = FUN14(VAR16);
        if (!VAR12 || !FUN17(VAR12))
        {
            FUN3(VAR25, VAR16);
        }
    }
    VAR7 = FUN6(VAR9, "");
    if (!VAR7)
    {
        VAR10 = FUN18();
    }
    else
    {
        VAR10 = FUN5(VAR7);
        FUN19(VAR10);
    }
    FUN20(VAR9);
    VAR5 = FUN21(VAR12, VAR10);
    if (VAR5 < 0)
    {
        goto VAR19;
    }
    if (FUN22(VAR12))
    {
        FUN23(VAR14, VAR12, VAR10);
    }
    else
    {
        FUN24(VAR14, VAR12, VAR10);
    }
    goto VAR26;
VAR27:
    FUN20(VAR9);
VAR19:
    FUN25(VAR14, NULL);
VAR26:
    FUN20(VAR10);