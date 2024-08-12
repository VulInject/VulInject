FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    const VAR10 *VAR11;
    int64_t VAR12;
    int VAR13;
    VAR11 = FUN3(VAR9, VAR3, VAR7);
    if (!VAR11)
    {
        return;
    }
    VAR13 = FUN4(VAR11->VAR14 ? VAR11->VAR14 : "", NULL, &VAR12);
    if (VAR13 < 0)
    {
        FUN5(VAR7, VAR15, VAR11->VAR3, "");
        return;
    }
    *VAR5 = VAR12;
    FUN6(VAR9, VAR3);
}