int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    int VAR8;
    const char *VAR9;
    char VAR10[128];
    const VAR11 *VAR12;
    assert(VAR2->VAR13 == VAR14);
    VAR12 = VAR2->VAR12;
    assert(VAR5);
    if (VAR12->VAR15)
    {
        VAR9 = VAR12->VAR9;
    }
    else
    {
        int VAR16;
        int VAR17;
        VAR17 = FUN2(VAR5, &VAR16);
        assert(VAR17 == 0);
        snprintf(VAR10, sizeof(VAR10), "", VAR16);
        VAR9 = VAR10;
    }
    if (VAR12->VAR18)
    {
        if (VAR12->VAR8 > VAR19)
        {
            FUN3("" VAR20, VAR12->VAR8);
            return -1;
        }
        VAR8 = VAR12->VAR8;
    }
    else
    {
        VAR8 = 65536;
    }
    return FUN4(VAR5, "", VAR3, VAR9, VAR8);
}