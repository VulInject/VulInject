int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    int VAR8;
    const VAR9 *VAR10;
    VAR11 *VAR12;
    assert(VAR2->VAR13 == VAR14);
    VAR10 = VAR2->VAR15;
    VAR12 = FUN2(VAR10, VAR7);
    if (!VAR12)
    {
        return -1;
    }
    if (FUN3(FUN4(""), VAR16, (char *)VAR3, VAR7))
    {
        return -1;
    }
    VAR8 = VAR10->VAR17 ? VAR10->VAR8 : 1;
    return FUN5(VAR5, "", VAR3, VAR12, VAR8);
}