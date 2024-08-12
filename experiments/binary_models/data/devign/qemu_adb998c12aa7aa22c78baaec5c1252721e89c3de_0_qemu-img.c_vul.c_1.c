static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, int VAR5, bool VAR6, bool VAR7, bool VAR8)
{
    VAR9 *VAR10;
    VAR11 *VAR12 = NULL;
    VAR1 *VAR13;
    VAR10 = FUN2(VAR4, NULL);
    if (VAR8)
    {
        if (FUN3(VAR10, VAR14) && !FUN4(VAR10, VAR14))
        {
            FUN5("");
            return NULL;
        }
        FUN6(VAR10, VAR14, FUN7(true));
    }
    VAR13 = FUN8(NULL, NULL, VAR10, VAR5, &VAR12);
    if (!VAR13)
    {
        FUN9(VAR12, "", VAR2);
        return NULL;
    }
    FUN10(VAR13, !VAR6);
    if (FUN11(VAR13, VAR2, VAR5, VAR7) < 0)
    {
        FUN12(VAR13);
        return NULL;
    }
    return VAR13;