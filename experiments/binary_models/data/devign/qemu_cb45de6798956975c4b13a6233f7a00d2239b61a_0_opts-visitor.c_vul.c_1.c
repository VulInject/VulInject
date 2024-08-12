FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR2);
    const VAR11 *VAR12;
    int64_t VAR13;
    char *VAR14;
    VAR12 = FUN3(VAR9, VAR5, VAR7);
    if (!VAR12)
    {
        return;
    }
    VAR13 = FUN4(VAR12->VAR15 ? VAR12->VAR15 : "", &VAR14, VAR16);
    if (VAR13 != -1 && *VAR14 == '')
    {
        *VAR4 = VAR13;
        FUN5(VAR9, VAR5);
        return;
    }
    FUN6(VAR7, VAR17, VAR12->VAR5, "");
}