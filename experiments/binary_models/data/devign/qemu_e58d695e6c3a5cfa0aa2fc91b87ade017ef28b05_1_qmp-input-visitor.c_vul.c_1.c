static void FUN1(VAR1 *VAR2, const char *VAR3, void **VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = FUN3(VAR9, VAR3, true);
    VAR6 *VAR12 = NULL;
    if (!VAR11 || FUN4(VAR11) != VAR13)
    {
        FUN5(VAR7, VAR14, VAR3 ? VAR3 : "", "");
        return;
        FUN6(VAR9, VAR11, &VAR12);
        if (VAR12)
        {
            FUN7(VAR7, VAR12);
            return;
            *VAR4 = FUN8(VAR5);