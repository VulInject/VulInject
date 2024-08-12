void FUN1(const char *VAR1, const char *VAR2, bool VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    const VAR8 *VAR9 = NULL;
    VAR10 *VAR11;
    VAR12 *VAR13;
    if (VAR5)
    {
        VAR9 = FUN2(VAR5);
        if (!VAR9)
        {
            FUN3(VAR7, VAR14, "", "");
            return;
        }
    }
    VAR11 = FUN4(VAR5, true);
    VAR13 = FUN5(VAR1, VAR2, VAR9, FUN6(VAR11), VAR7);
    FUN7(VAR11);
    if (VAR13)
    {
        FUN8(VAR13);
    }
}