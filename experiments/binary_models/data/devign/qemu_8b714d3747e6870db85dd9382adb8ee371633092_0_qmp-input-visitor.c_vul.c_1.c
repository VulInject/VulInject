static void FUN1(VAR1 *VAR2, void **VAR3, const char *VAR4, const char *VAR5, size_t VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    const VAR11 *VAR12 = FUN3(VAR10, VAR5);
    if (!VAR12 || FUN4(VAR12) != VAR13)
    {
        FUN5(VAR8, VAR14, VAR5 ? VAR5 : "", "");
        return;
    }
    FUN6(VAR10, VAR12, VAR8);
    if (FUN7(VAR8))
    {
        return;
    }
    if (VAR3)
    {
        *VAR3 = FUN8(VAR6);
    }
}