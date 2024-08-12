void FUN1(const char *VAR1, const char *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    int VAR12;
    VAR4 *VAR13 = NULL;
    VAR7 = FUN2(VAR1);
    if (!VAR7)
    {
        FUN3(VAR5, VAR14, VAR1);
        return;
    }
    VAR9 = FUN4(VAR7);
    if (VAR3)
    {
        VAR11 = FUN5(VAR3, VAR9->VAR15);
        if (!VAR11)
        {
            FUN3(VAR5, VAR16, VAR3);
            return;
        }
    }
    FUN6(VAR7, 0, &VAR13);
    if (VAR13)
    {
        FUN7(VAR5, VAR13);
        return;
    }
    VAR12 = FUN8(VAR9) ? 0 : VAR17;
    VAR12 |= FUN9(VAR9) ? VAR18 : 0;
    FUN10(VAR9, VAR2, VAR12, VAR11, NULL, VAR5);
}