int FUN1(VAR1 *VAR2, enum AVMediaType VAR3, int VAR4, int VAR5, VAR6 **VAR7, int VAR8)
{
    int VAR9, VAR10 = VAR2->VAR10;
    int VAR11 = VAR12, VAR13 = -1;
    unsigned *VAR14 = NULL;
    VAR6 *VAR15 = NULL, *VAR16 = NULL;
    if (VAR5 >= 0 && VAR4 < 0)
    {
        VAR17 *VAR18 = FUN2(VAR2, VAR5);
        if (VAR18)
        {
            VAR14 = VAR18->VAR19;
            VAR10 = VAR18->VAR20;
        }
    }
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        int VAR21 = VAR14 ? VAR14[VAR9] : VAR9;
        VAR22 *VAR23 = VAR2->VAR24[VAR21];
        VAR25 *VAR26 = VAR23->VAR27;
        if (VAR26->VAR28 != VAR3)
            continue;
        if (VAR4 >= 0 && VAR21 != VAR4)
            continue;
        if (VAR23->VAR29 & (VAR30 | VAR31))
            continue;
        if (VAR7)
        {
            VAR15 = FUN3(VAR23->VAR27->VAR32);
            if (!VAR15)
            {
                if (VAR11 < 0)
                    VAR11 = VAR33;
                continue;
            }
        }
        if (VAR13 >= VAR23->VAR34)
            continue;
        VAR13 = VAR23->VAR34;
        VAR11 = VAR21;
        VAR16 = VAR15;
        if (VAR14 && VAR9 == VAR10 - 1 && VAR11 < 0)
        {
            VAR14 = NULL;
            VAR10 = VAR2->VAR10;
            VAR9 = 0;
        }
    }
    if (VAR7)
        *VAR7 = VAR16;
    return VAR11;
}