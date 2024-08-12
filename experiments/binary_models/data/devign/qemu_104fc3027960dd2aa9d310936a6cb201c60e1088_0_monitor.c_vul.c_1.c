static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7 = NULL, *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    const char *VAR11;
    VAR12 *VAR13 = VAR14;
    VAR15 *VAR16 = NULL;
    VAR6 = FUN2(VAR4, NULL, &VAR16);
    if (!VAR6 && !VAR16)
    {
        FUN3(&VAR16, VAR17);
    }
    if (VAR16)
    {
        goto VAR18;
    }
    VAR10 = FUN4(VAR6, &VAR16);
    if (!VAR10)
    {
        goto VAR18;
    }
    VAR8 = FUN5(VAR10, "");
    FUN6(VAR8);
    FUN7(VAR10, "");
    VAR11 = FUN8(VAR10, "");
    FUN9(VAR13, VAR11);
    VAR7 = FUN10(VAR14->VAR19.VAR20, VAR6);
    if (VAR13->VAR19.VAR20 == &VAR21)
    {
        VAR10 = FUN11(FUN12(VAR7), "");
        if (VAR10 && !FUN13(FUN14(VAR10, ""), VAR22[VAR23]))
        {
            FUN7(VAR10, "");
            FUN15(VAR10, "", FUN16(""
                                                      ""));
        }
    }
VAR18:
    if (VAR16)
    {
        VAR10 = FUN17();
        FUN18(VAR10, "", FUN19(VAR16));
        FUN20(VAR16);
        VAR7 = FUN21(VAR10);
    }
    if (VAR7)
    {
        if (VAR8)
        {
            FUN18(FUN12(VAR7), "", VAR8);
            VAR8 = NULL;
        }
        FUN22(VAR13, VAR7);
    }
    FUN23(VAR8);
    FUN23(VAR7);
    FUN23(VAR6);
}