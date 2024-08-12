static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR6 *VAR10 = NULL;
    uint64_t VAR11;
    if (VAR9->VAR12)
    {
        FUN3(VAR3, VAR9->VAR12, &VAR11, &VAR10);
    }
    else
    {
        FUN4(VAR7, VAR13, VAR3 ? VAR3 : "", "");
        return;
    }
    if (VAR10)
    {
        FUN5(VAR7, VAR10);
        return;
    }
    *VAR5 = VAR11;
}