static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, const VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = &VAR10->VAR14;
    const VAR6 *VAR15 = VAR7;
    const VAR6 *VAR16 = VAR7 + VAR8;
    int VAR17, VAR18;
    int VAR19 = 0, VAR20 = 0;
    for (;;)
    {
        uint32_t VAR21 = -1;
        VAR15 = FUN2(VAR15, VAR16, &VAR21);
        if (VAR21 > 0x1ff)
        {
            if (!VAR20)
            {
                if (VAR22 && (VAR2->VAR23 & VAR24) && !VAR2->VAR25)
                {
                    int VAR26;
                    VAR2->FUN3(VAR2, VAR27, &VAR13->VAR28[0], NULL, VAR10->VAR29, sizeof(void *));
                    for (VAR26 = 0; VAR26 < VAR10->VAR29; VAR26++)
                        VAR13->VAR30.VAR31 += VAR13->VAR28[VAR26]->VAR30.VAR31;
                }
                VAR17 = FUN4(VAR2, VAR4);
                if (VAR17 < 0)
                    return VAR17;
                else if (VAR17)
                {
                    if (VAR13->VAR32 || VAR13->VAR33)
                        *VAR5 = 1;
                }
            }
            VAR13->VAR34 = 0;
            return FUN5(0, VAR15 - VAR7 - VAR13->VAR35.VAR36);
        }
        VAR18 = VAR16 - VAR15;
        if (VAR2->VAR37 & VAR38)
            FUN6(VAR2, VAR39, "" VAR40 "", VAR21, VAR15 - VAR7, VAR18);
        switch (VAR21)
        {
        case VAR41:
            if (VAR19 == 0)
            {
                FUN7(VAR2, VAR15, VAR18);
                VAR10->VAR42 = 1;
            }
            else
            {
                FUN6(VAR2, VAR43, "", VAR19);
                if (VAR2->VAR44 & VAR45)
                    return VAR46;
            }
            break;
        case VAR47:
            if (VAR13->VAR48 <= 0 || VAR13->VAR49 <= 0)
            {
                FUN6(VAR2, VAR43, "", VAR13->VAR48, VAR13->VAR49);
                return VAR46;
            }
            if (VAR22 && (VAR2->VAR23 & VAR24) && !VAR2->VAR25 && VAR10->VAR29)
            {
                int VAR26;
                VAR2->FUN3(VAR2, VAR27, VAR13->VAR28, NULL, VAR10->VAR29, sizeof(void *));
                for (VAR26 = 0; VAR26 < VAR10->VAR29; VAR26++)
                    VAR13->VAR30.VAR31 += VAR13->VAR28[VAR26]->VAR30.VAR31;
                VAR10->VAR29 = 0;
            }
            if (VAR19 == 0 || VAR19 == VAR50)
            {
                VAR17 = FUN8(VAR2);
                if (VAR17 < 0)
                {
                    FUN6(VAR2, VAR43, "");
                    return VAR17;
                }
                if (FUN9(VAR2, VAR15, VAR18) < 0)
                    VAR13->VAR34 = 0;
                VAR10->VAR51 = 1;
                VAR19 = VAR47;
            }
            else
            {
                FUN6(VAR2, VAR43, "", VAR19);
                if (VAR2->VAR44 & VAR45)
                    return VAR46;
            }
            break;
        case VAR52:
            FUN10(&VAR13->VAR53, VAR15, VAR18 * 8);
            switch (FUN11(&VAR13->VAR53, 4))
            {
            case 0x1:
                if (VAR19 == 0)
                {
                    FUN12(VAR10);
                }
                else
                {
                    FUN6(VAR2, VAR43, "", VAR19);
                    if (VAR2->VAR44 & VAR45)
                        return VAR46;
                }
                break;
            case 0x2:
                FUN13(VAR10);
                break;
            case 0x3:
                FUN14(VAR13);
                break;
            case 0x7:
                FUN15(VAR10);
                break;
            case 0x8:
                if (VAR19 == VAR47)
                {
                    FUN16(VAR10);
                }
                else
                {
                    FUN6(VAR2, VAR43, "", VAR19);
                    if (VAR2->VAR44 & VAR45)
                        return VAR46;
                }
                break;
            }
            break;
        case VAR54:
            FUN17(VAR2, VAR15, VAR18);
            break;
        case VAR55:
            if (VAR19 == 0)
            {
                VAR13->VAR56 = 0;
                FUN18(VAR2, VAR15, VAR18);
                VAR10->VAR42 = 1;
            }
            else
            {
                FUN6(VAR2, VAR43, "", VAR19);
                if (VAR2->VAR44 & VAR45)
                    return VAR46;
            }
            break;
        default:
            if (VAR21 >= VAR50 && VAR21 <= VAR57 && VAR19 != 0)
            {
                const int VAR58 = VAR13->VAR59 != VAR60;
                int VAR61 = (VAR21 - VAR50) << VAR58;
                VAR19 = VAR50;
                if (VAR13->VAR59 == VAR62)
                    VAR61++;
                if (VAR61 >= VAR13->VAR63)
                {
                    FUN6(VAR13->VAR2, VAR43, "", VAR61, VAR13->VAR63);
                    return -1;
                }
                if (!VAR13->VAR32)
                {
                    if (VAR13->VAR34 == VAR64)
                    {
                        if (!VAR10->VAR65)
                        {
                            VAR20 = 1;
                            break;
                        }
                    }
                }
                if (VAR13->VAR34 == VAR66)
                    VAR10->VAR42 = 1;
                if (!VAR13->VAR67)
                {
                    if (VAR13->VAR34 == VAR68 && !VAR10->VAR42)
                    {
                        VAR20 = 1;
                        break;
                    }
                }
                if ((VAR2->VAR20 >= VAR69 && VAR13->VAR34 == VAR64) || (VAR2->VAR20 >= VAR70 && VAR13->VAR34 != VAR66) || VAR2->VAR20 >= VAR71)
                {
                    VAR20 = 1;
                    break;
                }
                if (!VAR10->VAR72)
                    break;
                if (VAR13->VAR73 == VAR74)
                {
                    if (VAR61 < VAR2->VAR75 || VAR61 >= VAR13->VAR63 - VAR2->VAR76)
                        break;
                }
                if (!VAR13->VAR34)
                {
                    FUN6(VAR2, VAR43, "");
                    if (VAR2->VAR44 & VAR45)
                        return VAR46;
                    break;
                }
                if (VAR10->VAR51)
                {
                    VAR20 = 0;
                    VAR10->VAR51 = 0;
                    if (FUN19(VAR13, VAR7, VAR8) < 0)
                        return -1;
                }
                if (!VAR13->VAR77)
                {
                    FUN6(VAR2, VAR43, "");
                    return VAR46;
                }
                if (VAR22 && (VAR2->VAR23 & VAR24) && !VAR2->VAR25)
                {
                    int VAR78 = (VAR13->VAR63 * VAR10->VAR29 + VAR13->VAR79 / 2) / VAR13->VAR79;
                    if (VAR78 <= VAR61)
                    {
                        VAR12 *VAR28 = VAR13->VAR28[VAR10->VAR29];
                        VAR28->VAR80 = VAR61;
                        VAR28->VAR81 = VAR13->VAR63;
                        if (VAR10->VAR29)
                        {
                            VAR13->VAR28[VAR10->VAR29 - 1]->VAR81 = VAR61;
                            VAR17 = FUN20(VAR28, VAR13);
                            if (VAR17 < 0)
                                return VAR17;
                        }
                        FUN10(&VAR28->VAR53, VAR15, VAR18 * 8);
                        VAR10->VAR29++;
                    }
                    VAR15 += 2;
                }
                else
                {
                    VAR17 = FUN21(VAR13, VAR61, &VAR15, VAR18);
                    FUN22();
                    if (VAR17 < 0)
                    {
                        if (VAR2->VAR44 & VAR45)
                            return VAR17;
                        if (VAR13->VAR82 >= 0 && VAR13->VAR83 >= 0)
                            FUN23(&VAR13->VAR30, VAR13->VAR82, VAR13->VAR83, VAR13->VAR84, VAR13->VAR61, VAR85 | VAR86 | VAR87);
                    }
                    else
                    {
                        FUN23(&VAR13->VAR30, VAR13->VAR82, VAR13->VAR83, VAR13->VAR84 - 1, VAR13->VAR61, VAR88 | VAR89 | VAR90);
                    }
                }
            }
            break;
        }
    }
}