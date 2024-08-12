int FUN1(VAR1 *VAR2, enum AVMediaType VAR3, int VAR4, int VAR5, VAR6 **VAR7, int VAR8)
{
    int VAR9, VAR10 = VAR2->VAR10;
    int VAR11 = VAR12, VAR13 = -1, VAR14 = -1, VAR15 = -1, VAR16, VAR17, VAR18;
    unsigned *VAR19 = NULL;
    const VAR6 *VAR20 = NULL, *VAR21 = NULL;
    if (VAR5 >= 0 && VAR4 < 0)
    {
        VAR22 *VAR23 = FUN2(VAR2, NULL, VAR5);
        if (VAR23)
        {
            VAR19 = VAR23->VAR24;
            VAR10 = VAR23->VAR25;
        }
    }
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        int VAR26 = VAR19 ? VAR19[VAR9] : VAR9;
        VAR27 *VAR28 = VAR2->VAR29[VAR26];
        VAR30 *VAR31 = VAR28->VAR32;
        if (VAR31->VAR33 != VAR3)
            continue;
        if (VAR4 >= 0 && VAR26 != VAR4)
            continue;
        if (VAR4 != VAR26 && VAR28->VAR34 & (VAR35 | VAR36))
            continue;
        if (VAR3 == VAR37 && !(VAR31->VAR38 && VAR31->VAR39))
            continue;
        if (VAR7)
        {
            VAR20 = FUN3(VAR2, VAR28, VAR28->VAR32->VAR40);
            if (!VAR20)
            {
                if (VAR11 < 0)
                    VAR11 = VAR41;
                continue;
            }
        }
        VAR16 = VAR28->VAR42;
        VAR17 = VAR31->VAR43;
        if (!VAR17)
            VAR17 = VAR31->VAR44;
        VAR18 = FUN4(5, VAR16);
        if ((VAR15 > VAR18) || (VAR15 == VAR18 && VAR14 > VAR17) || (VAR15 == VAR18 && VAR14 == VAR17 && VAR13 >= VAR16))
            continue;
        VAR13 = VAR16;
        VAR14 = VAR17;
        VAR15 = VAR18;
        VAR11 = VAR26;
        VAR21 = VAR20;
        if (VAR19 && VAR9 == VAR10 - 1 && VAR11 < 0)
        {
            VAR19 = NULL;
            VAR10 = VAR2->VAR10;
            VAR9 = 0;
        }
    }
    if (VAR7)
        *VAR7 = (VAR6 *)VAR21;
    return VAR11;
}