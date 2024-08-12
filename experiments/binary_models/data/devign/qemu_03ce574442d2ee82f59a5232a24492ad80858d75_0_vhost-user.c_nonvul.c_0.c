int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    const VAR6 *VAR7;
    VAR8 *VAR9;
    bool VAR10;
    assert(VAR2->VAR11 == VAR12);
    VAR7 = VAR2->VAR13;
    VAR9 = FUN2(VAR7);
    if (!VAR9)
    {
        FUN3("");
        return -1;
    }
    if (FUN4(FUN5(""), VAR14, (char *)VAR3, true) == -1)
    {
        return -1;
    }
    if (VAR7->VAR15)
    {
        VAR10 = VAR7->VAR10;
    }
    else
    {
        VAR10 = false;
    }
    return FUN6(VAR5, "", VAR3, VAR9, VAR10);
}