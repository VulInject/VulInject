static int FUN1(char *VAR1, int VAR2, bool VAR3, bool VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10;
    if (VAR11)
    {
        FUN2("");
        FUN3(VAR6);
        return 1;
    }
    if (VAR4)
    {
        if (!VAR6)
        {
            VAR6 = FUN4();
        }
        if (FUN5(VAR6, VAR12) && !FUN6(VAR6, VAR12))
        {
            FUN2("");
            FUN3(VAR6);
            return 1;
        }
        FUN7(VAR6, VAR12, true);
    }
    VAR11 = FUN8(VAR1, NULL, VAR6, VAR2, &VAR8);
    if (!VAR11)
    {
        FUN9(VAR8, "", VAR1 ? "" : "", VAR1 ?: "");
        return 1;
    }
    VAR10 = FUN10(VAR11);
    if (FUN11(VAR10) && FUN12(VAR10))
    {
        char VAR13[256];
        FUN13("", VAR1);
        if (FUN14(VAR13, sizeof(VAR13)) < 0)
        {
            FUN2("");
            goto VAR14;
        }
        if (FUN15(VAR10, VAR13) < 0)
        {
            FUN2("");
            goto VAR14;
        }
    }
    FUN16(VAR11, !VAR3);
    return 0;
VAR14:
    FUN17(VAR11);
    VAR11 = NULL;
    return 1;
}