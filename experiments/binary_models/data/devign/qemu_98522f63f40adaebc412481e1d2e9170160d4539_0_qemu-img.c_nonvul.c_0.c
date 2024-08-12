static VAR1 *FUN1(const char *VAR2, const char *VAR3, int VAR4, bool VAR5, bool VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    char VAR10[256];
    VAR11 *VAR12 = NULL;
    int VAR13;
    VAR7 = FUN2("", &VAR14);
    if (VAR3)
    {
        VAR9 = FUN3(VAR3);
        if (!VAR9)
        {
            FUN4("", VAR3);
            goto VAR15;
        }
    }
    else
    {
        VAR9 = NULL;
    }
    VAR13 = FUN5(&VAR7, VAR2, NULL, NULL, VAR4, VAR9, &VAR12);
    if (VAR13 < 0)
    {
        FUN4("", VAR2, FUN6(VAR12));
        FUN7(VAR12);
        goto VAR15;
    }
    if (FUN8(VAR7) && VAR5)
    {
        FUN9(VAR6, "", VAR2);
        if (FUN10(VAR10, sizeof(VAR10)) < 0)
        {
            FUN4("");
            goto VAR15;
        }
        if (FUN11(VAR7, VAR10) < 0)
        {
            FUN4("");
            goto VAR15;
        }
    }
    return VAR7;
VAR15:
    FUN12(VAR7);
    return NULL;
}