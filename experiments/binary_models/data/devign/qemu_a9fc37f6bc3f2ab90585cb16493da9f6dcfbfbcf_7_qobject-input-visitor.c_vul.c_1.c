static void FUN1(VAR1 *VAR2, const char *VAR3, void **VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = FUN3(VAR9, VAR3, true, VAR7);
    if (VAR4)
    {
        *VAR4 = NULL;
    }
    if (!VAR11)
    {
        return;
    }
    if (FUN4(VAR11) != VAR12)
    {
        FUN5(VAR7, VAR13, VAR3 ? VAR3 : "", "");
        return;
    }
    FUN6(VAR9, VAR11, VAR4);
    if (VAR4)
    {
        *VAR4 = FUN7(VAR5);
    }
}