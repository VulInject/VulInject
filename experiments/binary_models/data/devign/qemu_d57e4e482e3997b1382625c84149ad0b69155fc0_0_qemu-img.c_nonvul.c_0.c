static VAR1 *FUN1(const char *VAR2, const char *VAR3, const char *VAR4, int VAR5, bool VAR6, bool VAR7)
{
    VAR1 *VAR8;
    VAR9 *VAR10;
    char VAR11[256];
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    if (VAR4)
    {
        VAR15 = FUN2();
        FUN3(VAR15, "", FUN4(VAR4));
    }
    VAR8 = FUN5(VAR2, VAR3, NULL, VAR15, VAR5, &VAR13);
    if (!VAR8)
    {
        FUN6("", VAR3, FUN7(VAR13));
        FUN8(VAR13);
        goto VAR16;
    }
    VAR10 = FUN9(VAR8);
    if (FUN10(VAR10) && VAR6)
    {
        FUN11(VAR7, "", VAR3);
        if (FUN12(VAR11, sizeof(VAR11)) < 0)
        {
            FUN6("");
            goto VAR16;
        }
        if (FUN13(VAR10, VAR11) < 0)
        {
            FUN6("");
            goto VAR16;
        }
    }
    return VAR8;
VAR16:
    FUN14(VAR8);
    return NULL;
}