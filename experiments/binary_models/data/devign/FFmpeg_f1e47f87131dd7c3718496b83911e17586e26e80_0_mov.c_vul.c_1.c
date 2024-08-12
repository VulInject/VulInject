static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    VAR13 *VAR14;
    uint64_t VAR15;
    int64_t VAR16;
    int VAR17 = 0;
    unsigned VAR18, VAR19 = VAR7->VAR20;
    int VAR20, VAR21, VAR22;
    for (VAR22 = 0; VAR22 < VAR2->VAR23->VAR24; VAR22++)
    {
        if (VAR2->VAR23->VAR25[VAR22]->VAR26 == VAR7->VAR27)
        {
            VAR10 = VAR2->VAR23->VAR25[VAR22];
            break;
        }
    }
    if (!VAR10)
    {
        FUN2(VAR2->VAR23, VAR28, "", VAR7->VAR27);
        return VAR29;
    }
    VAR12 = VAR10->VAR30;
    if (VAR12->VAR31 + 1 != VAR7->VAR32 && VAR12->VAR31 != -1)
        return 0;
    FUN3(VAR4);
    VAR20 = FUN4(VAR4);
    VAR18 = FUN5(VAR4);
    FUN2(VAR2->VAR23, VAR33, "", VAR20, VAR18);
    if (!VAR12->VAR34 && VAR12->VAR35)
    {
        VAR14 = FUN6(NULL, &VAR12->VAR36, sizeof(*VAR12->VAR14) * VAR12->VAR35);
        if (!VAR14)
            return FUN7(VAR37);
        VAR12->VAR14 = VAR14;
        for (VAR22 = 0; VAR22 < VAR12->VAR35; VAR22++)
        {
            VAR12->VAR14[VAR12->VAR34].VAR38 = 1;
            VAR12->VAR14[VAR12->VAR34].VAR39 = 0;
            VAR12->VAR34++;
        }
    }
    if ((VAR40)VAR18 + VAR12->VAR34 >= VAR41 / sizeof(*VAR12->VAR14))
        return VAR29;
    if (VAR20 & VAR42)
        VAR17 = FUN5(VAR4);
    if (VAR20 & VAR43)
        VAR19 = FUN5(VAR4);
    VAR16 = VAR12->VAR44 - VAR12->VAR45;
    VAR15 = VAR7->VAR46 + VAR17;
    VAR21 = 0;
    FUN2(VAR2->VAR23, VAR33, "", VAR19);
    for (VAR22 = 0; VAR22 < VAR18 && !VAR4->VAR47; VAR22++)
    {
        unsigned VAR48 = VAR7->VAR49;
        int VAR50 = VAR22 ? VAR7->VAR20 : VAR19;
        unsigned VAR51 = VAR7->VAR39;
        unsigned VAR52 = 0;
        int VAR53 = 0;
        int VAR54 = 0;
        int VAR55 = VAR10->VAR56;
        if (VAR20 & VAR57)
            VAR51 = FUN5(VAR4);
        if (VAR20 & VAR58)
            VAR48 = FUN5(VAR4);
        if (VAR20 & VAR59)
            VAR50 = FUN5(VAR4);
        if (VAR20 & VAR60)
            VAR52 = FUN5(VAR4);
        FUN8(VAR12, VAR52);
        if (VAR7->VAR61 != VAR62)
        {
            if (VAR2->VAR63 == VAR64)
            {
                int64_t VAR65 = VAR7->VAR61;
                FUN2(VAR2->VAR23, VAR66, "" VAR67 ""
                                            "" VAR67 "",
                       VAR65, VAR12->VAR68, VAR52, VAR12->VAR45, VAR20 & VAR60);
                VAR16 = VAR65 - VAR12->VAR68;
                if (VAR20 & VAR60)
                {
                    VAR16 -= VAR52;
                }
                else
                {
                    VAR16 -= VAR12->VAR45;
                }
                FUN2(VAR2->VAR23, VAR66, "" VAR67 "", VAR16);
            }
            else
            {
                VAR16 = VAR7->VAR61 - VAR12->VAR45;
                FUN2(VAR2->VAR23, VAR66, "" VAR67 "", VAR16);
            }
            VAR7->VAR61 = VAR62;
        }
        if (VAR10->VAR69->VAR70 == VAR71)
            VAR53 = 1;
        else
            VAR53 = !(VAR50 & (VAR72 | VAR73));
        if (VAR53)
            VAR21 = 0;
        VAR54 = FUN9(VAR10, VAR15, VAR16, VAR48, VAR21, VAR53 ? VAR74 : 0);
        if (VAR54 >= 0 && VAR55 < VAR10->VAR56)
        {
            unsigned int VAR75 = VAR10->VAR56 * sizeof(*VAR12->VAR14);
            unsigned int VAR76 = VAR75 > VAR12->VAR36 ? FUN10(VAR75, 2 * VAR12->VAR36) : VAR75;
            VAR14 = FUN6(VAR12->VAR14, &VAR12->VAR36, VAR76);
            if (!VAR14)
            {
                FUN11(&VAR12->VAR14);
                return FUN7(VAR37);
            }
            VAR12->VAR14 = VAR14;
            if (VAR54 != VAR55)
            {
                memmove(VAR12->VAR14 + VAR54 + 1, VAR12->VAR14 + VAR54, sizeof(*VAR12->VAR14) * (VAR12->VAR34 - VAR54));
                if (VAR54 <= VAR12->VAR77)
                {
                    VAR12->VAR77++;
                }
            }
            VAR12->VAR14[VAR54].VAR38 = 1;
            VAR12->VAR14[VAR54].VAR39 = VAR52;
            VAR12->VAR34++;
        }
        else
        {
            FUN2(VAR2->VAR23, VAR28, "");
        }
        FUN2(VAR2->VAR23, VAR33, "" VAR78 "" VAR67 ""
                                    "",
               VAR10->VAR79, VAR54, VAR15, VAR16, VAR48, VAR21, VAR53);
        VAR21++;
        VAR16 += VAR51;
        VAR15 += VAR48;
        VAR12->VAR80 += VAR48;
        VAR12->VAR81 += VAR51;
        VAR12->VAR82++;
    }
    if (VAR4->VAR47)
        return VAR83;
    VAR7->VAR84 = VAR15;
    VAR12->VAR44 = VAR16 + VAR12->VAR45;
    if (VAR10->VAR39 < VAR12->VAR44)
        VAR10->VAR39 = VAR12->VAR44;
    return 0;
}