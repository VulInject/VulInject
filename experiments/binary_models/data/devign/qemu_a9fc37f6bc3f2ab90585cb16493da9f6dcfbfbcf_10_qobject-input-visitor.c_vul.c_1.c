static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, size_t VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = FUN3(VAR10, VAR3, true, VAR8);
    const VAR13 *VAR14;
    if (VAR5)
    {
        *VAR5 = NULL;
    }
    if (!VAR12)
    {
        return;
    }
    if (FUN4(VAR12) != VAR15)
    {
        FUN5(VAR8, VAR16, VAR3 ? VAR3 : "", "");
        return;
    }
    VAR14 = FUN6(VAR10, VAR12, VAR5);
    if (VAR14 && VAR5)
    {
        *VAR5 = FUN7(VAR6);
    }
}