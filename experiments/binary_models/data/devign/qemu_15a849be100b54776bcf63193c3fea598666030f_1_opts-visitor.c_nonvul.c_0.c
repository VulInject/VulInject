FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR8, VAR10, VAR2);
    const VAR11 *VAR12;
    const char *VAR13;
    long long VAR14;
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
    VAR13 = VAR12->VAR13 ? VAR12->VAR13 : "";
    assert(VAR9->VAR16 == VAR20 || VAR9->VAR16 == VAR21);
    VAR22 = 0;
    VAR14 = FUN4(VAR13, &VAR15, 0);
    if (VAR22 == 0 && VAR15 > VAR13 && VAR23 <= VAR14 && VAR14 <= VAR24)
    {
        if (*VAR15 == '')
        {
            *VAR4 = VAR14;
            FUN5(VAR9, VAR5);
            return;
        }
        if (*VAR15 == '' && VAR9->VAR16 == VAR21)
        {
            long long VAR25;
            VAR13 = VAR15 + 1;
            VAR25 = FUN4(VAR13, &VAR15, 0);
            if (VAR22 == 0 && VAR15 > VAR13 && *VAR15 == '' && VAR23 <= VAR25 && VAR25 <= VAR24 && VAR14 <= VAR25 && (VAR14 > VAR24 - VAR26 || VAR25 < VAR14 + VAR26))
            {
                VAR9->VAR18.VAR19 = VAR14;
                VAR9->VAR27.VAR19 = VAR25;
                VAR9->VAR16 = VAR17;
                *VAR4 = VAR9->VAR18.VAR19;
                return;
            }
        }
    }
    FUN6(VAR7, VAR28, VAR12->VAR5, (VAR9->VAR16 == VAR20) ? "" : "");
}