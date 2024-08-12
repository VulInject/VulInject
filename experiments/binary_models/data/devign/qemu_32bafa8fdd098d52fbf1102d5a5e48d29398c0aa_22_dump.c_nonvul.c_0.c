int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    int VAR8, VAR9;
    const char *VAR10;
    char VAR11[128];
    const VAR12 *VAR13;
    VAR4 *VAR14;
    VAR15 *VAR16;
    assert(VAR2->VAR17 == VAR18);
    VAR13 = VAR2->VAR19.VAR13.VAR20;
    assert(VAR5);
    if (VAR13->VAR21)
    {
        VAR10 = VAR13->VAR10;
    }
    else
    {
        int VAR22;
        int VAR23;
        VAR23 = FUN2(VAR5, &VAR22);
        assert(VAR23 == 0);
        snprintf(VAR11, sizeof(VAR11), "", VAR22);
        VAR10 = VAR11;
    }
    if (VAR13->VAR24)
    {
        if (VAR13->VAR8 > VAR25)
        {
            FUN3(VAR7, "" VAR26, VAR13->VAR8);
            return -1;
        }
        VAR8 = VAR13->VAR8;
    }
    else
    {
        VAR8 = 65536;
    }
    VAR14 = FUN4(&VAR27, VAR5, "", VAR3);
    snprintf(VAR14->VAR28, sizeof(VAR14->VAR28), "", VAR10, VAR8);
    VAR16 = FUN5(VAR15, VAR14, VAR14);
    VAR9 = FUN6(&VAR16->VAR29, VAR10, VAR8, VAR7);
    if (VAR9)
    {
        FUN7(VAR14);
    }
    return VAR9;
}