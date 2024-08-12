void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    const char *VAR6 = FUN2(VAR4, "");
    const char *VAR7 = FUN3(VAR4, "");
    const char *VAR8 = FUN3(VAR4, "");
    BlockdevChangeReadOnlyMode VAR9 = 0;
    VAR10 *VAR11 = NULL;
    if (strcmp(VAR5, "") == 0)
    {
        if (VAR8)
        {
            FUN4(VAR2, "");
            return;
        }
        if (strcmp(VAR6, "") == 0 || strcmp(VAR6, "") == 0)
        {
            if (!VAR7)
            {
                FUN5(VAR2, VAR12, NULL);
                return;
            }
        }
        FUN6("", VAR6, !!VAR7, VAR7, &VAR11);
    }
    else
    {
        if (VAR8)
        {
            VAR9 = FUN7(VAR13, VAR8, VAR14, VAR15, &VAR11);
            if (VAR11)
            {
                FUN8(VAR2, &VAR11);
                return;
            }
        }
        FUN9(true, VAR5, false, NULL, VAR6, !!VAR7, VAR7, !!VAR8, VAR9, &VAR11);
        if (VAR11 && FUN10(VAR11) == VAR16)
        {
            FUN11(VAR11);
            FUN12(VAR2, VAR5, NULL, NULL);
            return;
        }
    }
    FUN8(VAR2, &VAR11);
}