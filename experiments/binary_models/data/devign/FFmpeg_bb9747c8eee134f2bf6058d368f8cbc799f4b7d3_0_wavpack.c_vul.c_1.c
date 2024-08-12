static int FUN1(VAR1 *VAR2, int VAR3, void *VAR4, int *VAR5, const VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    void *VAR14 = VAR4;
    int VAR15;
    int VAR16 = 0, VAR17 = 0, VAR18 = 0, VAR19 = 0, VAR20 = 0, VAR21 = 0;
    int VAR22 = 0;
    const VAR6 *VAR23 = VAR7;
    const VAR6 *VAR24 = VAR7 + VAR8;
    int VAR25, VAR26, VAR27, VAR28, VAR29, VAR30, VAR31;
    int VAR32, VAR33, VAR34;
    if (VAR8 == 0)
    {
        *VAR5 = 0;
        return 0;
    }
    if (VAR3 >= VAR10->VAR35 && FUN2(VAR10) < 0)
    {
        FUN3(VAR2, VAR36, "");
        return -1;
    }
    VAR13 = VAR10->VAR37[VAR3];
    if (!VAR13)
    {
        FUN3(VAR2, VAR36, "", VAR3);
        return -1;
    }
    memset(VAR13->VAR38, 0, VAR39 * sizeof(VAR40));
    memset(VAR13->VAR41, 0, sizeof(VAR13->VAR41));
    VAR13->VAR42 = 0;
    VAR13->and = VAR13->or = VAR13->VAR43 = 0;
    VAR13->VAR44 = 0;
    if (!VAR10->VAR45)
    {
        VAR13->VAR14 = FUN4(VAR7);
        VAR7 += 4;
        if (!VAR13->VAR14)
        {
            *VAR5 = 0;
            return 0;
        }
    }
    else
    {
        VAR13->VAR14 = VAR10->VAR14;
    }
    VAR13->VAR46 = FUN4(VAR7);
    VAR7 += 4;
    if (VAR13->VAR46 & 0x80)
    {
        VAR2->VAR47 = VAR48;
    }
    else if ((VAR13->VAR46 & 0x03) <= 1)
    {
        VAR2->VAR47 = VAR49;
    }
    else
    {
        VAR2->VAR47 = VAR50;
    }
    VAR32 = FUN5(VAR2->VAR47);
    VAR14 = (VAR6 *)VAR14 + VAR32 * VAR10->VAR51;
    VAR13->VAR52 = !(VAR13->VAR46 & VAR53);
    VAR13->VAR54 = (VAR13->VAR46 & VAR55) ? 0 : VAR13->VAR52;
    VAR13->VAR56 = VAR13->VAR46 & VAR57;
    VAR13->VAR58 = VAR13->VAR46 & VAR59;
    VAR13->VAR60 = VAR13->VAR46 & VAR61;
    VAR13->VAR62 = 1 << ((((VAR13->VAR46 & 0x03) + 1) << 3) - 1);
    VAR13->VAR63 = 8 * (VAR32 - 1 - (VAR13->VAR46 & 0x03)) + ((VAR13->VAR46 >> 13) & 0x1f);
    VAR13->VAR64 = FUN4(VAR7);
    VAR7 += 4;
    if (VAR10->VAR45)
        VAR7 += 4;
    VAR10->VAR51 += 1 + VAR13->VAR52;
    while (VAR7 < VAR24)
    {
        VAR27 = *VAR7++;
        VAR28 = *VAR7++;
        if (VAR27 & VAR65)
        {
            VAR28 |= (*VAR7++) << 8;
            VAR28 |= (*VAR7++) << 16;
        }
        VAR28 <<= 1;
        VAR29 = VAR28;
        if (VAR27 & VAR66)
            VAR28--;
        if (VAR28 < 0)
        {
            FUN3(VAR2, VAR36, "", VAR27, VAR28);
            break;
        }
        if (VAR7 + VAR29 > VAR24)
        {
            FUN3(VAR2, VAR36, "", VAR28);
            break;
        }
        if (VAR27 & VAR67)
        {
            VAR7 += VAR29;
            continue;
        }
        switch (VAR27 & VAR68)
        {
        case VAR69:
            if (VAR28 > VAR39)
            {
                FUN3(VAR2, VAR36, "");
                VAR13->VAR70 = 0;
                VAR7 += VAR29;
                continue;
            }
            VAR13->VAR70 = VAR28;
            for (VAR25 = 0; VAR25 < VAR13->VAR70; VAR25++)
            {
                VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR71 = (*VAR7 & 0x1F) - 5;
                VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR72 = *VAR7 >> 5;
                VAR7++;
            }
            VAR16 = 1;
            break;
        case VAR73:
            if (!VAR16)
            {
                FUN3(VAR2, VAR36, "");
                continue;
            }
            VAR30 = VAR28 >> VAR13->VAR54;
            if (VAR30 > VAR39 || VAR30 > VAR13->VAR70)
            {
                FUN3(VAR2, VAR36, "");
                VAR7 += VAR29;
                continue;
            }
            for (VAR25 = 0; VAR25 < VAR30; VAR25++)
            {
                VAR31 = (VAR74)(*VAR7++);
                VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR75 = VAR31 << 3;
                if (VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR75 > 0)
                    VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR75 += (VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR75 + 64) >> 7;
                if (VAR13->VAR54)
                {
                    VAR31 = (VAR74)(*VAR7++);
                    VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR76 = VAR31 << 3;
                    if (VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR76 > 0)
                        VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR76 += (VAR13->VAR38[VAR13->VAR70 - VAR25 - 1].VAR76 + 64) >> 7;
                }
            }
            VAR17 = 1;
            break;
        case VAR77:
            if (!VAR16)
            {
                FUN3(VAR2, VAR36, "");
                continue;
            }
            VAR31 = 0;
            for (VAR25 = VAR13->VAR70 - 1; (VAR25 >= 0) && (VAR31 < VAR28); VAR25--)
            {
                if (VAR13->VAR38[VAR25].VAR71 > 8)
                {
                    VAR13->VAR38[VAR25].VAR78[0] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    VAR13->VAR38[VAR25].VAR78[1] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    if (VAR13->VAR54)
                    {
                        VAR13->VAR38[VAR25].VAR79[0] = FUN6(FUN7(VAR7));
                        VAR7 += 2;
                        VAR13->VAR38[VAR25].VAR79[1] = FUN6(FUN7(VAR7));
                        VAR7 += 2;
                        VAR31 += 4;
                    }
                    VAR31 += 4;
                }
                else if (VAR13->VAR38[VAR25].VAR71 < 0)
                {
                    VAR13->VAR38[VAR25].VAR78[0] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    VAR13->VAR38[VAR25].VAR79[0] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    VAR31 += 4;
                }
                else
                {
                    for (VAR26 = 0; VAR26 < VAR13->VAR38[VAR25].VAR71; VAR26++)
                    {
                        VAR13->VAR38[VAR25].VAR78[VAR26] = FUN6(FUN7(VAR7));
                        VAR7 += 2;
                        if (VAR13->VAR54)
                        {
                            VAR13->VAR38[VAR25].VAR79[VAR26] = FUN6(FUN7(VAR7));
                            VAR7 += 2;
                        }
                    }
                    VAR31 += VAR13->VAR38[VAR25].VAR71 * 2 * (VAR13->VAR54 + 1);
                }
            }
            VAR18 = 1;
            break;
        case VAR80:
            if (VAR28 != 6 * (VAR13->VAR54 + 1))
            {
                FUN3(VAR2, VAR36, "", 6 * (VAR13->VAR54 + 1), VAR28);
                VAR7 += VAR29;
                continue;
            }
            for (VAR26 = 0; VAR26 <= VAR13->VAR54; VAR26++)
            {
                for (VAR25 = 0; VAR25 < 3; VAR25++)
                {
                    VAR13->VAR41[VAR26].VAR81[VAR25] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                }
            }
            VAR19 = 1;
            break;
        case VAR82:
            if (VAR13->VAR60)
            {
                for (VAR25 = 0; VAR25 <= VAR13->VAR54; VAR25++)
                {
                    VAR13->VAR41[VAR25].VAR83 = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    VAR28 -= 2;
                }
            }
            for (VAR25 = 0; VAR25 < (VAR13->VAR54 + 1); VAR25++)
            {
                VAR13->VAR41[VAR25].VAR84 = FUN7(VAR7) << 16;
                VAR7 += 2;
                VAR28 -= 2;
            }
            if (VAR28 > 0)
            {
                for (VAR25 = 0; VAR25 < (VAR13->VAR54 + 1); VAR25++)
                {
                    VAR13->VAR41[VAR25].VAR85 = FUN6((VAR86)FUN7(VAR7));
                    VAR7 += 2;
                }
            }
            else
            {
                for (VAR25 = 0; VAR25 < (VAR13->VAR54 + 1); VAR25++)
                    VAR13->VAR41[VAR25].VAR85 = 0;
            }
            VAR22 = 1;
            break;
        case VAR87:
            if (VAR28 != 4)
            {
                FUN3(VAR2, VAR36, "", VAR28, *VAR7);
                VAR7 += VAR29;
                continue;
            }
            if (VAR7[0])
                VAR13->VAR42 = VAR7[0];
            else if (VAR7[1])
                VAR13->VAR43 = VAR7[1];
            else if (VAR7[2])
            {
                VAR13->and = VAR13->or = 1;
                VAR13->VAR43 = VAR7[2];
            }
            else if (VAR7[3])
            {
                VAR13->and = 1;
                VAR13->VAR43 = VAR7[3];
            }
            VAR7 += 4;
            break;
        case VAR88:
            if (VAR28 != 4)
            {
                FUN3(VAR2, VAR36, "", VAR28);
                VAR7 += VAR29;
                continue;
            }
            VAR13->VAR89 = VAR7[0];
            VAR13->VAR90 = VAR7[1];
            VAR13->VAR91 = VAR7[2];
            VAR7 += 4;
            VAR21 = 1;
            break;
        case VAR92:
            VAR13->VAR93.VAR94 = VAR7 - VAR23;
            VAR13->VAR93.VAR28 = VAR28 * 8;
            FUN8(&VAR13->VAR95, VAR7, VAR28 * 8);
            VAR13->VAR96 = VAR28 * 8;
            VAR7 += VAR28;
            VAR20 = 1;
            break;
        case VAR97:
            if (VAR28 <= 4)
            {
                FUN3(VAR2, VAR36, "", VAR28);
                VAR7 += VAR28;
                continue;
            }
            VAR13->VAR98.VAR94 = VAR7 - VAR23;
            VAR13->VAR98.VAR28 = VAR28 * 8;
            FUN8(&VAR13->VAR99, VAR7, VAR28 * 8);
            VAR13->VAR100 = FUN9(&VAR13->VAR99, 32);
            VAR7 += VAR28;
            VAR13->VAR44 = 1;
            break;
        case VAR101:
            if (VAR28 <= 1)
            {
                FUN3(VAR2, VAR36, "");
                return -1;
            }
            VAR33 = *VAR7++;
            switch (VAR28 - 2)
            {
            case 0:
                VAR34 = *VAR7;
                break;
            case 1:
                VAR34 = FUN7(VAR7);
                break;
            case 2:
                VAR34 = FUN10(VAR7);
                break;
            case 3:
                VAR34 = FUN4(VAR7);
                break;
            case 5:
                VAR33 |= (VAR7[1] & 0xF) << 8;
                VAR34 = FUN10(VAR7 + 2);
                break;
            default:
                FUN3(VAR2, VAR36, "", VAR28);
                VAR33 = VAR2->VAR102;
                VAR34 = VAR2->VAR103;
            }
            if (VAR33 != VAR2->VAR102)
            {
                FUN3(VAR2, VAR36, "", VAR33, VAR2->VAR102);
                return -1;
            }
            if (!VAR2->VAR103)
                VAR2->VAR103 = VAR34;
            VAR7 += VAR28 - 1;
            break;
        default:
            VAR7 += VAR28;
        }
        if (VAR27 & VAR66)
            VAR7++;
    }
    if (!VAR16)
    {
        FUN3(VAR2, VAR36, "");
        return -1;
    }
    if (!VAR17)
    {
        FUN3(VAR2, VAR36, "");
        return -1;
    }
    if (!VAR18)
    {
        FUN3(VAR2, VAR36, "");
        return -1;
    }
    if (!VAR19)
    {
        FUN3(VAR2, VAR36, "");
        return -1;
    }
    if (VAR13->VAR58 && !VAR22)
    {
        FUN3(VAR2, VAR36, "");
        return -1;
    }
    if (!VAR20)
    {
        FUN3(VAR2, VAR36, "");
        return -1;
    }
    if (!VAR21 && VAR2->VAR47 == VAR48)
    {
        FUN3(VAR2, VAR36, "");
        return -1;
    }
    if (VAR13->VAR44 && VAR2->VAR47 != VAR48)
    {
        const int VAR28 = FUN11(&VAR13->VAR99);
        const int VAR104 = VAR13->VAR14 * VAR13->VAR42 << VAR13->VAR54;
        if (VAR28 < VAR104)
        {
            FUN3(VAR2, VAR36, "");
            VAR13->VAR44 = 0;
        }
    }
    if (VAR13->VAR54)
    {
        if (VAR2->VAR47 == VAR49)
            VAR15 = FUN12(VAR13, &VAR13->VAR95, VAR14, VAR49);
        else if (VAR2->VAR47 == VAR50)
            VAR15 = FUN12(VAR13, &VAR13->VAR95, VAR14, VAR50);
        else
            VAR15 = FUN12(VAR13, &VAR13->VAR95, VAR14, VAR48);
        if (VAR15 < 0)
            return -1;
        VAR15 >>= 1;
    }
    else
    {
        const int VAR105 = VAR2->VAR102;
        if (VAR2->VAR47 == VAR49)
            VAR15 = FUN13(VAR13, &VAR13->VAR95, VAR14, VAR49);
        else if (VAR2->VAR47 == VAR50)
            VAR15 = FUN13(VAR13, &VAR13->VAR95, VAR14, VAR50);
        else
            VAR15 = FUN13(VAR13, &VAR13->VAR95, VAR14, VAR48);
        if (VAR15 < 0)
            return -1;
        if (VAR13->VAR52 && VAR2->VAR47 == VAR49)
        {
            VAR86 *VAR106 = (VAR86 *)VAR14 + 1;
            VAR86 *VAR107 = (VAR86 *)VAR14;
            int VAR108 = VAR15;
            while (VAR108--)
            {
                *VAR106 = *VAR107;
                VAR107 += VAR105;
                VAR106 += VAR105;
            }
        }
        else if (VAR13->VAR52 && VAR2->VAR47 == VAR50)
        {
            VAR109 *VAR106 = (VAR109 *)VAR14 + 1;
            VAR109 *VAR107 = (VAR109 *)VAR14;
            int VAR108 = VAR15;
            while (VAR108--)
            {
                *VAR106 = *VAR107;
                VAR107 += VAR105;
                VAR106 += VAR105;
            }
        }
        else if (VAR13->VAR52)
        {
            float *VAR106 = (float *)VAR14 + 1;
            float *VAR107 = (float *)VAR14;
            int VAR108 = VAR15;
            while (VAR108--)
            {
                *VAR106 = *VAR107;
                VAR107 += VAR105;
                VAR106 += VAR105;
            }
        }
    }
    *VAR5 = 1;
    return VAR15 * VAR32;
}