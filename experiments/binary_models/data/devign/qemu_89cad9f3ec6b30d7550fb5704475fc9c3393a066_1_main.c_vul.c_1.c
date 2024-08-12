static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR2);
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = NULL;
    int VAR13;
    FUN3(VAR6 && VAR2);
    FUN4("");
    VAR8 = FUN5(VAR4, NULL, &VAR12);
    if (VAR12 || !VAR8 || FUN6(VAR8) != VAR14)
    {
        FUN7(VAR8);
        VAR10 = FUN8();
        if (!VAR12)
        {
            FUN9("");
            FUN10(&VAR12, VAR15);
        }
        else
        {
            FUN9("", FUN11(VAR12));
        }
        FUN12(VAR10, "", FUN13(VAR12));
        FUN14(VAR12);
    }
    else
    {
        VAR10 = FUN15(VAR8);
    }
    FUN3(VAR10);
    if (FUN16(VAR10, ""))
    {
        FUN17(VAR6, VAR10);
    }
    else
    {
        if (!FUN16(VAR10, ""))
        {
            FUN18(VAR10);
            VAR10 = FUN8();
            FUN9("");
            FUN10(&VAR12, VAR16);
            FUN12(VAR10, "", FUN13(VAR12));
            FUN14(VAR12);
        }
        VAR13 = FUN19(VAR6, FUN20(VAR10));
        if (VAR13 < 0)
        {
            FUN9("", strerror(-VAR13));
        }
    }
    FUN18(VAR10);
}