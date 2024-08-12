static void FUN1(const char *VAR1, bool VAR2)
{
    char *VAR3;
    VAR4 *VAR5, *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    FUN2("", VAR1);
    VAR5 = FUN3(""
                   "",
                   VAR1);
    FUN4(VAR5);
    if (!VAR2)
    {
        return;
    }
    FUN4(FUN5(VAR5, ""));
    VAR8 = FUN6(FUN7(VAR5, ""));
    FUN8(VAR8, VAR10)
    {
        VAR6 = FUN9(FUN10(VAR10));
        bool VAR11 = FUN11(FUN12(VAR6, ""), "", NULL);
        bool VAR12 = FUN11(FUN12(VAR6, ""), "", NULL);
        if (VAR11 || VAR12)
        {
            VAR3 = FUN13("", VAR1, FUN12(VAR6, ""));
            FUN1(VAR3, VAR11);
            FUN14(VAR3);
        }
        else
        {
            const char *VAR13 = FUN12(VAR6, "");
            FUN2("", VAR1, VAR13);
            VAR5 = FUN3(""
                           ""
                           "",
                           VAR1, VAR13);
            FUN4(VAR5);
        }
    }
}