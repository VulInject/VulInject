static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, const VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = &VAR10->VAR14;
    const VAR6 *VAR15 = VAR7;
    const VAR6 *VAR16 = VAR7 + VAR8;
    int VAR17, VAR18;
    int VAR19 = 0;
    for (;;)
    {
        uint32_t VAR20 = -1;
        VAR15 = FUN2(VAR15, VAR16, &VAR20);
        if (VAR20 > 0x1ff)
        {
            if (VAR13->VAR21 != VAR22 || VAR2->VAR23 <= VAR24)
            {
                if (VAR25 && (VAR2->VAR26 & VAR27))
                {
                    int VAR28;
                    VAR2->FUN3(VAR2, VAR29, &VAR13->VAR30[0], NULL, VAR10->VAR31, sizeof(void *));
                    for (VAR28 = 0; VAR28 < VAR10->VAR31; VAR28++)
                        VAR13->VAR32 += VAR13->VAR30[VAR28]->VAR32;
                }
                if (VAR33 && VAR2->VAR34->VAR35 & VAR36)
                    FUN4(VAR13, VAR7, VAR8, VAR10->VAR31);
                if (FUN5(VAR2, VAR4))
                {
                    if (VAR13->VAR37 || VAR13->VAR38)
                        *VAR5 = 1;
                }
            }
            VAR13->VAR21 = 0;
            return FUN6(0, VAR15 - VAR7 - VAR13->VAR39.VAR40);
        }
        VAR18 = VAR16 - VAR15;
        if (VAR2->VAR41 & VAR42)
        {
            FUN7(VAR2, VAR43, "", VAR20, VAR15 - VAR7, VAR18);
        }
        switch (VAR20)
        {
        case VAR44:
            if (VAR19 == 0)
            {
                FUN8(VAR2, VAR15, VAR18);
                VAR10->VAR45 = 1;
            }
            else
            {
                FUN7(VAR2, VAR46, "", VAR19);
                if (VAR2->VAR47 & VAR48)
                    return VAR49;
            }
            break;
        case VAR50:
            if (VAR25 && (VAR2->VAR26 & VAR27) && VAR10->VAR31)
            {
                int VAR28;
                VAR2->FUN3(VAR2, VAR29, VAR13->VAR30, NULL, VAR10->VAR31, sizeof(void *));
                for (VAR28 = 0; VAR28 < VAR10->VAR31; VAR28++)
                    VAR13->VAR32 += VAR13->VAR30[VAR28]->VAR32;
                VAR10->VAR31 = 0;
            }
            if (VAR19 == 0 || VAR19 == VAR51)
            {
                VAR17 = FUN9(VAR2);
                if (VAR17 < 0)
                {
                    FUN7(VAR2, VAR46, "");
                    return VAR17;
                }
                if (FUN10(VAR2, VAR15, VAR18) < 0)
                    VAR13->VAR21 = 0;
                VAR13->VAR52 = 1;
                VAR19 = VAR50;
            }
            else
            {
                FUN7(VAR2, VAR46, "", VAR19);
                if (VAR2->VAR47 & VAR48)
                    return VAR49;
            }
            break;
        case VAR53:
            FUN11(&VAR13->VAR54, VAR15, VAR18 * 8);
            switch (FUN12(&VAR13->VAR54, 4))
            {
            case 0x1:
                if (VAR19 == 0)
                {
                    FUN13(VAR10);
                }
                else
                {
                    FUN7(VAR2, VAR46, "", VAR19);
                    if (VAR2->VAR47 & VAR48)
                        return VAR49;
                }
                break;
            case 0x2:
                FUN14(VAR10);
                break;
            case 0x3:
                FUN15(VAR13);
                break;
            case 0x7:
                FUN16(VAR10);
                break;
            case 0x8:
                if (VAR19 == VAR50)
                {
                    FUN17(VAR10);
                }
                else
                {
                    FUN7(VAR2, VAR46, "", VAR19);
                    if (VAR2->VAR47 & VAR48)
                        return VAR49;
                }
                break;
            }
            break;
        case VAR55:
            FUN18(VAR2, VAR15, VAR18);
            break;
        case VAR56:
            if (VAR19 == 0)
            {
                VAR13->VAR57 = 0;
                FUN19(VAR2, VAR15, VAR18);
                VAR10->VAR45 = 1;
            }
            else
            {
                FUN7(VAR2, VAR46, "", VAR19);
                if (VAR2->VAR47 & VAR48)
                    return VAR49;
            }
            break;
        default:
            if (VAR20 >= VAR51 && VAR20 <= VAR58 && VAR19 != 0)
            {
                const int VAR59 = VAR13->VAR60 != VAR61;
                int VAR62 = (VAR20 - VAR51) << VAR59;
                VAR19 = VAR51;
                if (VAR13->VAR60 == VAR63)
                    VAR62++;
                if (VAR62 >= VAR13->VAR64)
                {
                    FUN7(VAR13->VAR2, VAR46, "", VAR62, VAR13->VAR64);
                    return -1;
                }
                if (VAR13->VAR37 == NULL)
                {
                    if (VAR13->VAR21 == VAR22)
                    {
                        if (!VAR10->VAR65)
                            break;
                    }
                }
                if (VAR13->VAR21 == VAR66)
                    VAR10->VAR45 = 1;
                if (VAR13->VAR67 == NULL)
                {
                    if (VAR13->VAR21 == VAR68 && !VAR10->VAR45)
                        break;
                }
                if ((VAR2->VAR23 >= VAR69 && VAR13->VAR21 == VAR22) || (VAR2->VAR23 >= VAR70 && VAR13->VAR21 != VAR66) || VAR2->VAR23 >= VAR71)
                    break;
                if (!VAR10->VAR72)
                    break;
                if (VAR13->VAR73 == VAR74)
                {
                    if (VAR62 < VAR2->VAR75 || VAR62 >= VAR13->VAR64 - VAR2->VAR76)
                        break;
                }
                if (!VAR13->VAR21)
                {
                    FUN7(VAR2, VAR46, "");
                    if (VAR2->VAR47 & VAR48)
                        return VAR49;
                    break;
                }
                if (VAR13->VAR52)
                {
                    VAR13->VAR52 = 0;
                    if (FUN20(VAR13, VAR7, VAR8) < 0)
                        return -1;
                }
                if (!VAR13->VAR77)
                {
                    FUN7(VAR2, VAR46, "");
                    return VAR49;
                }
                if (VAR2->VAR34->VAR35 & VAR36)
                {
                    VAR10->VAR31++;
                    break;
                }
                if (VAR25 && (VAR2->VAR26 & VAR27))
                {
                    int VAR78 = (VAR13->VAR64 * VAR10->VAR31 + VAR13->VAR79 / 2) / VAR13->VAR79;
                    if (VAR78 <= VAR62)
                    {
                        VAR12 *VAR30 = VAR13->VAR30[VAR10->VAR31];
                        VAR30->VAR80 = VAR62;
                        VAR30->VAR81 = VAR13->VAR64;
                        if (VAR10->VAR31)
                        {
                            VAR13->VAR30[VAR10->VAR31 - 1]->VAR81 = VAR62;
                            FUN21(VAR30, VAR13);
                        }
                        FUN11(&VAR30->VAR54, VAR15, VAR18 * 8);
                        VAR10->VAR31++;
                    }
                    VAR15 += 2;
                }
                else
                {
                    VAR17 = FUN22(VAR13, VAR62, &VAR15, VAR18);
                    FUN23();
                    if (VAR17 < 0)
                    {
                        if (VAR2->VAR47 & VAR48)
                            return VAR17;
                        if (VAR13->VAR82 >= 0 && VAR13->VAR83 >= 0)
                            FUN24(VAR13, VAR13->VAR82, VAR13->VAR83, VAR13->VAR84, VAR13->VAR62, VAR85 | VAR86 | VAR87);
                    }
                    else
                    {
                        FUN24(VAR13, VAR13->VAR82, VAR13->VAR83, VAR13->VAR84 - 1, VAR13->VAR62, VAR88 | VAR89 | VAR90);
                    }
                }
            }
            break;
        }
    }
}