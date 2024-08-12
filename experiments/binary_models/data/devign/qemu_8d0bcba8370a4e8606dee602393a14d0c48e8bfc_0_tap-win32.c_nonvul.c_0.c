int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    const VAR8 *VAR9;
    assert(VAR2->VAR10 == VAR11);
    VAR9 = VAR2->VAR12.VAR9;
    if (!VAR9->VAR13)
    {
        FUN2("");
        return -1;
    }
    if (FUN3(VAR5, "", VAR3, VAR9->VAR14) == -1)
    {
        return -1;
    }
    return 0;
}