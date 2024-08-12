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
    int VAR20, VAR21, VAR22, VAR23 = 0, VAR24;
    for (VAR22 = 0; VAR22 < VAR2->VAR25->VAR26; VAR22++)
    {
        if (VAR2->VAR25->VAR27[VAR22]->VAR28 == VAR7->VAR29)
        {
            VAR10 = VAR2->VAR25->VAR27[VAR22];
            break;
        }
    }
    if (!VAR10)
    {
        FUN2(VAR2->VAR25, VAR30, "", VAR7->VAR29);
        return VAR31;
    }
    VAR12 = VAR10->VAR32;
    if (VAR12->VAR33 + 1 != VAR7->VAR34 && VAR12->VAR33 != -1)
        return 0;
    FUN3(VAR4);
    VAR20 = FUN4(VAR4);
    VAR18 = FUN5(VAR4);
    FUN6(VAR2->VAR25, "", VAR20, VAR18);
    if (!VAR12->VAR35 && VAR12->VAR36)
    {
        VAR14 = FUN7(NULL, sizeof(*VAR12->VAR14));
        if (!VAR14)
            return FUN8(VAR37);
        VAR12->VAR14 = VAR14;
        VAR12->VAR14[VAR12->VAR35].VAR38 = VAR12->VAR36;
        VAR12->VAR14[VAR12->VAR35].VAR39 = 0;
        VAR12->VAR35++;
    }
    if ((VAR40)VAR18 + VAR12->VAR35 >= VAR41 / sizeof(*VAR12->VAR14))
        return VAR31;
    if ((VAR24 = FUN9(&VAR12->VAR14, VAR18 + VAR12->VAR35, sizeof(*VAR12->VAR14))) < 0)
    {
        VAR12->VAR35 = 0;
        return VAR24;
    }
    if (VAR20 & VAR42)
        VAR17 = FUN5(VAR4);
    if (VAR20 & VAR43)
        VAR19 = FUN5(VAR4);
    VAR16 = VAR12->VAR44 - VAR12->VAR45;
    VAR15 = VAR7->VAR46 + VAR17;
    VAR21 = 0;
    FUN6(VAR2->VAR25, "", VAR19);
    for (VAR22 = 0; VAR22 < VAR18 && !VAR4->VAR47; VAR22++)
    {
        unsigned VAR48 = VAR7->VAR49;
        int VAR50 = VAR22 ? VAR7->VAR20 : VAR19;
        unsigned VAR51 = VAR7->VAR39;
        int VAR52 = 0;
        int VAR53 = 0;
        int64_t VAR54;
        if (VAR20 & VAR55)
            VAR51 = FUN5(VAR4);
        if (VAR20 & VAR56)
            VAR48 = FUN5(VAR4);
        if (VAR20 & VAR57)
            VAR50 = FUN5(VAR4);
        if (VAR20 & VAR58)
            VAR53 = FUN5(VAR4);
        VAR12->VAR14[VAR12->VAR35].VAR38 = 1;
        VAR12->VAR14[VAR12->VAR35].VAR39 = VAR53;
        FUN10(VAR12, VAR12->VAR14[VAR12->VAR35].VAR39);
        if (VAR7->VAR59 != VAR60)
        {
            if (VAR2->VAR61 == VAR62)
            {
                int64_t VAR63 = VAR7->VAR59;
                FUN2(VAR2->VAR25, VAR64, "" VAR65 ""
                                            "" VAR65 "",
                       VAR63, VAR12->VAR66, VAR12->VAR14[VAR12->VAR35].VAR39, VAR12->VAR45, VAR20 & VAR58);
                VAR16 = VAR63 - VAR12->VAR66;
                if (VAR20 & VAR58)
                {
                    VAR16 -= VAR12->VAR14[VAR12->VAR35].VAR39;
                }
                else
                {
                    VAR16 -= VAR12->VAR45;
                }
                FUN2(VAR2->VAR25, VAR64, "" VAR65 "", VAR16);
            }
            else
            {
                VAR16 = VAR7->VAR59;
                FUN2(VAR2->VAR25, VAR64, "" VAR65 "", VAR16);
            }
            VAR7->VAR59 = VAR60;
        }
        VAR54 = VAR16 + VAR53;
        VAR12->VAR35++;
        if (VAR10->VAR67->VAR68 == VAR69)
            VAR52 = 1;
        else if (!VAR23)
            VAR52 = VAR23 = !(VAR50 & (VAR70 | VAR71));
        if (VAR52)
            VAR21 = 0;
        VAR24 = FUN11(VAR10, VAR15, VAR54, VAR48, VAR21, VAR52 ? VAR72 : 0);
        if (VAR24 < 0)
        {
            FUN2(VAR2->VAR25, VAR30, "");
        }
        FUN6(VAR2->VAR25, "" VAR73 "" VAR65 ""
                       "",
                VAR10->VAR74, VAR12->VAR36 + VAR22, VAR15, VAR54, VAR48, VAR21, VAR52);
        VAR21++;
        VAR16 += VAR51;
        VAR15 += VAR48;
        VAR12->VAR75 += VAR48;
        VAR12->VAR76 += VAR51;
        VAR12->VAR77++;
    }
    if (VAR4->VAR47)
        return VAR78;
    VAR7->VAR79 = VAR15;
    VAR10->VAR39 = VAR12->VAR44 = VAR16 + VAR12->VAR45;
    return 0;
}