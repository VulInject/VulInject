static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, VAR6 *VAR7)
{
    int VAR8;
    size_t VAR9 = VAR4->VAR10 > 8 ? 2 : 1;
    if (!(VAR4->VAR11 & VAR12))
    {
        FUN2(VAR2, VAR13, "");
        return VAR14;
    }
    if (!(VAR4->VAR11 & VAR15))
    {
        VAR2->VAR16 = VAR4->VAR16;
        VAR2->VAR17 = VAR4->VAR17;
        VAR4->VAR18 = FUN3(VAR4->VAR19);
        VAR4->VAR20 = VAR4->VAR10 * VAR4->VAR18;
        VAR4->VAR21 = (VAR4->VAR20 + 7) >> 3;
        VAR4->VAR22 = (VAR4->VAR23 * VAR4->VAR20 + 7) >> 3;
        if ((VAR4->VAR10 == 2 || VAR4->VAR10 == 4 || VAR4->VAR10 == 8) && VAR4->VAR19 == VAR24)
        {
            VAR2->VAR25 = VAR26;
        }
        else if ((VAR4->VAR10 == 2 || VAR4->VAR10 == 4 || VAR4->VAR10 == 8) && VAR4->VAR19 == VAR27)
        {
            VAR2->VAR25 = VAR28;
        }
        else if ((VAR4->VAR10 == 2 || VAR4->VAR10 == 4 || VAR4->VAR10 == 8) && VAR4->VAR19 == VAR29)
        {
            VAR2->VAR25 = VAR30;
        }
        else if (VAR4->VAR10 == 16 && VAR4->VAR19 == VAR29)
        {
            VAR2->VAR25 = VAR31;
        }
        else if (VAR4->VAR10 == 16 && VAR4->VAR19 == VAR24)
        {
            VAR2->VAR25 = VAR32;
        }
        else if (VAR4->VAR10 == 16 && VAR4->VAR19 == VAR27)
        {
            VAR2->VAR25 = VAR33;
        }
        else if ((VAR4->VAR20 == 1 || VAR4->VAR20 == 2 || VAR4->VAR20 == 4 || VAR4->VAR20 == 8) && VAR4->VAR19 == VAR34)
        {
            VAR2->VAR25 = VAR35;
        }
        else if (VAR4->VAR10 == 1 && VAR4->VAR20 == 1 && VAR2->VAR36 != VAR37)
        {
            VAR2->VAR25 = VAR38;
        }
        else if (VAR4->VAR10 == 8 && VAR4->VAR19 == VAR39)
        {
            VAR2->VAR25 = VAR40;
        }
        else if (VAR4->VAR10 == 16 && VAR4->VAR19 == VAR39)
        {
            VAR2->VAR25 = VAR41;
        }
        else
        {
            FUN2(VAR2, VAR13, ""
                                        "",
                   VAR4->VAR10, VAR4->VAR19);
            return VAR14;
        }
        if (VAR4->VAR42 && VAR4->VAR19 != VAR34)
        {
            switch (VAR2->VAR25)
            {
            case VAR26:
                VAR2->VAR25 = VAR28;
                break;
            case VAR32:
                VAR2->VAR25 = VAR33;
                break;
            case VAR30:
                VAR2->VAR25 = VAR40;
                break;
            case VAR31:
                VAR2->VAR25 = VAR41;
                break;
            default:
                FUN4(VAR2, ""
                                             "",
                                      VAR4->VAR10, VAR4->VAR19);
                return VAR14;
            }
            VAR4->VAR21 += VAR9;
        }
        if ((VAR8 = FUN5(VAR2, &VAR4->VAR43, VAR44)) < 0)
            return VAR8;
        if (VAR2->VAR36 == VAR37 && VAR4->VAR45 != VAR46)
        {
            FUN6(VAR2, &VAR4->VAR47);
            if ((VAR8 = FUN5(VAR2, &VAR4->VAR47, VAR44)) < 0)
                return VAR8;
        }
        FUN7(VAR2);
        VAR7->VAR48 = VAR49;
        VAR7->VAR50 = 1;
        VAR7->VAR51 = !!VAR4->VAR52;
        if (!VAR4->VAR52)
        {
            VAR4->VAR53 = VAR4->VAR22 + 1;
        }
        else
        {
            VAR4->VAR54 = 0;
            VAR4->VAR55 = FUN8(VAR4->VAR54, VAR4->VAR20, VAR4->VAR23);
            VAR4->VAR53 = VAR4->VAR55 + 1;
        }
        FUN9(VAR2, "", VAR4->VAR22, VAR4->VAR53);
        VAR4->VAR56 = VAR7->VAR57[0];
        VAR4->VAR58 = VAR7->VAR59[0];
        if (VAR2->VAR25 == VAR35)
            memcpy(VAR7->VAR57[1], VAR4->VAR60, 256 * sizeof(VAR61));
        FUN10(&VAR4->VAR62, &VAR4->VAR63, VAR4->VAR22);
        if (!VAR4->VAR62)
            return VAR14;
        if (VAR4->VAR52 || VAR4->VAR19 == VAR27)
        {
            FUN11(&VAR4->VAR64, &VAR4->VAR65, VAR4->VAR22);
            if (!VAR4->VAR64)
                return VAR14;
        }
        FUN11(&VAR4->VAR66, &VAR4->VAR67, VAR4->VAR22 + 16);
        if (!VAR4->VAR66)
            return FUN12(VAR68);
        VAR4->VAR69 = VAR4->VAR66 + 15;
        VAR4->VAR70.VAR71 = VAR4->VAR53;
        VAR4->VAR70.VAR72 = VAR4->VAR69;
    }
    VAR4->VAR11 |= VAR15;
    if (VAR4->VAR42 && VAR4->VAR19 != VAR34)
        VAR4->VAR21 -= VAR9;
    VAR8 = FUN13(VAR4, VAR5);
    if (VAR4->VAR42 && VAR4->VAR19 != VAR34)
        VAR4->VAR21 += VAR9;
    if (VAR8 < 0)
        return VAR8;
    FUN14(&VAR4->VAR73, 4);
    return 0;
}