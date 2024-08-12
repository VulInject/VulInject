FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR2);
    const VAR11 *VAR12;
    const char *VAR13;
    unsigned long long VAR14;
    char *VAR15;
    if (VAR9->VAR16 == VAR17)
    {
        *VAR4 = VAR9->VAR18.VAR19;
        return;
    }
    VAR12 = FUN3(VAR9, VAR5, VAR7);
    if (!VAR12)
    {
        return;
    }
    VAR13 = VAR12->VAR13;
    assert(VAR9->VAR16 == VAR20 || VAR9->VAR16 == VAR21);
    if (FUN4(VAR13, &VAR14, &VAR15, 0) == 0 && VAR14 <= VAR22)
    {
        if (*VAR15 == '')
        {
            *VAR4 = VAR14;
            FUN5(VAR9, VAR5);
            return;
        }
        if (*VAR15 == '' && VAR9->VAR16 == VAR21)
        {
            unsigned long long VAR23;
            VAR13 = VAR15 + 1;
            if (FUN6(VAR13, &VAR23, 0) == 0 && VAR23 <= VAR22 && VAR14 <= VAR23 && VAR23 - VAR14 < VAR24)
            {
                VAR9->VAR18.VAR19 = VAR14;
                VAR9->VAR25.VAR19 = VAR23;
                VAR9->VAR16 = VAR17;
                *VAR4 = VAR9->VAR18.VAR19;
                return;
            }
        }
    }
    FUN7(VAR7, VAR26, VAR12->VAR5, (VAR9->VAR16 == VAR20) ? "" : "");
}