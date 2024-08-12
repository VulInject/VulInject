void FUN1(const char *VAR1, bool VAR2, const char *VAR3, bool VAR4, int64_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    VAR8 *VAR10 = NULL;
    VAR6 *VAR11 = NULL;
    VAR9 = FUN2(VAR1);
    if (!VAR9)
    {
        FUN3(VAR7, VAR12, VAR1);
        return;
    }
    if (VAR3)
    {
        VAR10 = FUN4(VAR9, VAR3);
        if (VAR10 == NULL)
        {
            FUN3(VAR7, VAR13, VAR3);
            return;
        }
    }
    FUN5(VAR9, VAR10, VAR3, VAR4 ? VAR5 : 0, VAR14, VAR9, &VAR11);
    if (FUN6(&VAR11))
    {
        FUN7(VAR7, VAR11);
        return;
    }
    FUN8(FUN9(VAR9));
    FUN10(VAR9, VAR9->VAR15);
}