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
    if (!VAR13->VAR38)
    {
        memset(VAR13->VAR39, 0, VAR40 * sizeof(VAR41));
        memset(VAR13->VAR42, 0, sizeof(VAR13->VAR42));
        VAR13->VAR43 = 0;
        VAR13->and = VAR13->or = VAR13->VAR44 = 0;
        VAR13->VAR45 = 0;
    }
    if (!VAR10->VAR46)
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
    VAR13->VAR47 = FUN4(VAR7);
    VAR7 += 4;
    if (VAR13->VAR47 & 0x80)
    {
        VAR32 = sizeof(float);
        VAR2->VAR48 = VAR49;
    }
    else if ((VAR13->VAR47 & 0x03) <= 1)
    {
        VAR32 = 2;
        VAR2->VAR48 = VAR50;
    }
    else
    {
        VAR32 = 4;
        VAR2->VAR48 = VAR51;
    }
    VAR14 = (VAR6 *)VAR14 + VAR32 * VAR10->VAR52;
    VAR13->VAR53 = !(VAR13->VAR47 & VAR54);
    VAR13->VAR55 = (VAR13->VAR47 & VAR56) ? 0 : VAR13->VAR53;
    VAR13->VAR57 = VAR13->VAR47 & VAR58;
    VAR13->VAR59 = VAR13->VAR47 & VAR60;
    VAR13->VAR61 = VAR13->VAR47 & VAR62;
    VAR13->VAR63 = 8 * (VAR32 - 1 - (VAR13->VAR47 & 0x03)) + ((VAR13->VAR47 >> 13) & 0x1f);
    VAR13->VAR64 = FUN4(VAR7);
    VAR7 += 4;
    if (VAR10->VAR46)
        VAR7 += 4;
    VAR10->VAR52 += 1 + VAR13->VAR53;
    VAR13->VAR65 = *VAR5 / (VAR32 * VAR2->VAR66);
    VAR13->VAR65 = FUN5(VAR13->VAR65, VAR13->VAR14);
    if (VAR13->VAR38 > 0)
    {
        VAR13->VAR65 = FUN5(VAR13->VAR65, VAR13->VAR38);
        VAR7 = VAR24;
    }
    while (VAR7 < VAR24)
    {
        VAR27 = *VAR7++;
        VAR28 = *VAR7++;
        if (VAR27 & VAR67)
        {
            VAR28 |= (*VAR7++) << 8;
            VAR28 |= (*VAR7++) << 16;
        }
        VAR28 <<= 1;
        VAR29 = VAR28;
        if (VAR27 & VAR68)
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
        if (VAR27 & VAR69)
        {
            VAR7 += VAR29;
            continue;
        }
        switch (VAR27 & VAR70)
        {
        case VAR71:
            VAR13->VAR72 = VAR28;
            if (VAR13->VAR72 > VAR40)
            {
                FUN3(VAR2, VAR36, "");
                VAR7 += VAR29;
                continue;
            }
            for (VAR25 = 0; VAR25 < VAR13->VAR72; VAR25++)
            {
                VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR73 = (*VAR7 & 0x1F) - 5;
                VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR74 = *VAR7 >> 5;
                VAR7++;
            }
            VAR16 = 1;
            break;
        case VAR75:
            if (!VAR16)
            {
                FUN3(VAR2, VAR36, "");
                continue;
            }
            VAR30 = VAR28 >> VAR13->VAR55;
            if (VAR30 > VAR40 || VAR30 > VAR13->VAR72)
            {
                FUN3(VAR2, VAR36, "");
                VAR7 += VAR29;
                continue;
            }
            for (VAR25 = 0; VAR25 < VAR30; VAR25++)
            {
                VAR31 = (VAR76)(*VAR7++);
                VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR77 = VAR31 << 3;
                if (VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR77 > 0)
                    VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR77 += (VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR77 + 64) >> 7;
                if (VAR13->VAR55)
                {
                    VAR31 = (VAR76)(*VAR7++);
                    VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR78 = VAR31 << 3;
                    if (VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR78 > 0)
                        VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR78 += (VAR13->VAR39[VAR13->VAR72 - VAR25 - 1].VAR78 + 64) >> 7;
                }
            }
            VAR17 = 1;
            break;
        case VAR79:
            if (!VAR16)
            {
                FUN3(VAR2, VAR36, "");
                continue;
            }
            VAR31 = 0;
            for (VAR25 = VAR13->VAR72 - 1; (VAR25 >= 0) && (VAR31 < VAR28); VAR25--)
            {
                if (VAR13->VAR39[VAR25].VAR73 > 8)
                {
                    VAR13->VAR39[VAR25].VAR80[0] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    VAR13->VAR39[VAR25].VAR80[1] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    if (VAR13->VAR55)
                    {
                        VAR13->VAR39[VAR25].VAR81[0] = FUN6(FUN7(VAR7));
                        VAR7 += 2;
                        VAR13->VAR39[VAR25].VAR81[1] = FUN6(FUN7(VAR7));
                        VAR7 += 2;
                        VAR31 += 4;
                    }
                    VAR31 += 4;
                }
                else if (VAR13->VAR39[VAR25].VAR73 < 0)
                {
                    VAR13->VAR39[VAR25].VAR80[0] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    VAR13->VAR39[VAR25].VAR81[0] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    VAR31 += 4;
                }
                else
                {
                    for (VAR26 = 0; VAR26 < VAR13->VAR39[VAR25].VAR73; VAR26++)
                    {
                        VAR13->VAR39[VAR25].VAR80[VAR26] = FUN6(FUN7(VAR7));
                        VAR7 += 2;
                        if (VAR13->VAR55)
                        {
                            VAR13->VAR39[VAR25].VAR81[VAR26] = FUN6(FUN7(VAR7));
                            VAR7 += 2;
                        }
                    }
                    VAR31 += VAR13->VAR39[VAR25].VAR73 * 2 * (VAR13->VAR55 + 1);
                }
            }
            VAR18 = 1;
            break;
        case VAR82:
            if (VAR28 != 6 * (VAR13->VAR55 + 1))
            {
                FUN3(VAR2, VAR36, "", 6 * (VAR13->VAR55 + 1), VAR28);
                VAR7 += VAR29;
                continue;
            }
            for (VAR26 = 0; VAR26 <= VAR13->VAR55; VAR26++)
            {
                for (VAR25 = 0; VAR25 < 3; VAR25++)
                {
                    VAR13->VAR42[VAR26].VAR83[VAR25] = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                }
            }
            VAR19 = 1;
            break;
        case VAR84:
            if (VAR13->VAR61)
            {
                for (VAR25 = 0; VAR25 <= VAR13->VAR55; VAR25++)
                {
                    VAR13->VAR42[VAR25].VAR85 = FUN6(FUN7(VAR7));
                    VAR7 += 2;
                    VAR28 -= 2;
                }
            }
            for (VAR25 = 0; VAR25 < (VAR13->VAR55 + 1); VAR25++)
            {
                VAR13->VAR42[VAR25].VAR86 = FUN7(VAR7) << 16;
                VAR7 += 2;
                VAR28 -= 2;
            }
            if (VAR28 > 0)
            {
                for (VAR25 = 0; VAR25 < (VAR13->VAR55 + 1); VAR25++)
                {
                    VAR13->VAR42[VAR25].VAR87 = FUN6((VAR88)FUN7(VAR7));
                    VAR7 += 2;
                }
            }
            else
            {
                for (VAR25 = 0; VAR25 < (VAR13->VAR55 + 1); VAR25++)
                    VAR13->VAR42[VAR25].VAR87 = 0;
            }
            VAR22 = 1;
            break;
        case VAR89:
            if (VAR28 != 4)
            {
                FUN3(VAR2, VAR36, "", VAR28, *VAR7);
                VAR7 += VAR29;
                continue;
            }
            if (VAR7[0])
                VAR13->VAR43 = VAR7[0];
            else if (VAR7[1])
                VAR13->VAR44 = VAR7[1];
            else if (VAR7[2])
            {
                VAR13->and = VAR13->or = 1;
                VAR13->VAR44 = VAR7[2];
            }
            else if (VAR7[3])
            {
                VAR13->and = 1;
                VAR13->VAR44 = VAR7[3];
            }
            VAR7 += 4;
            break;
        case VAR90:
            if (VAR28 != 4)
            {
                FUN3(VAR2, VAR36, "", VAR28);
                VAR7 += VAR29;
                continue;
            }
            VAR13->VAR91 = VAR7[0];
            VAR13->VAR92 = VAR7[1];
            VAR13->VAR93 = VAR7[2];
            VAR7 += 4;
            VAR21 = 1;
            break;
        case VAR94:
            VAR13->VAR95.VAR96 = VAR7 - VAR23;
            VAR13->VAR95.VAR28 = VAR28 * 8;
            FUN8(&VAR13->VAR97, VAR7, VAR28 * 8);
            VAR13->VAR5 = VAR28 * 8;
            VAR7 += VAR28;
            VAR20 = 1;
            break;
        case VAR98:
            if (VAR28 <= 4)
            {
                FUN3(VAR2, VAR36, "", VAR28);
                VAR7 += VAR28;
                continue;
            }
            VAR13->VAR99.VAR96 = VAR7 - VAR23;
            VAR13->VAR99.VAR28 = VAR28 * 8;
            FUN8(&VAR13->VAR100, VAR7, VAR28 * 8);
            VAR13->VAR101 = FUN9(&VAR13->VAR100, 32);
            VAR7 += VAR28;
            VAR13->VAR45 = 1;
            break;
        case VAR102:
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
                VAR33 = VAR2->VAR66;
                VAR34 = VAR2->VAR103;
            }
            if (VAR33 != VAR2->VAR66)
            {
                FUN3(VAR2, VAR36, "", VAR33, VAR2->VAR66);
                return -1;
            }
            if (!VAR2->VAR103)
                VAR2->VAR103 = VAR34;
            VAR7 += VAR28 - 1;
            break;
        default:
            VAR7 += VAR28;
        }
        if (VAR27 & VAR68)
            VAR7++;
    }
    if (!VAR13->VAR38)
    {
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
        if (VAR13->VAR59 && !VAR22)
        {
            FUN3(VAR2, VAR36, "");
            return -1;
        }
        if (!VAR20)
        {
            FUN3(VAR2, VAR36, "");
            return -1;
        }
        if (!VAR21 && VAR2->VAR48 == VAR49)
        {
            FUN3(VAR2, VAR36, "");
            return -1;
        }
        if (VAR13->VAR45 && VAR2->VAR48 != VAR49)
        {
            const int VAR28 = FUN11(&VAR13->VAR100);
            const int VAR104 = VAR13->VAR14 * VAR13->VAR43 << VAR13->VAR55;
            if (VAR28 < VAR104)
            {
                FUN3(VAR2, VAR36, "");
                VAR13->VAR45 = 0;
            }
        }
        VAR13->VAR38 = VAR13->VAR14;
    }
    else
    {
        FUN8(&VAR13->VAR97, VAR23 + VAR13->VAR95.VAR96, VAR13->VAR95.VAR28);
        FUN12(&VAR13->VAR97, VAR13->VAR95.VAR105);
        if (VAR13->VAR45)
        {
            FUN8(&VAR13->VAR100, VAR23 + VAR13->VAR99.VAR96, VAR13->VAR99.VAR28);
            FUN12(&VAR13->VAR100, VAR13->VAR99.VAR105);
        }
    }
    if (VAR13->VAR55)
    {
        if (VAR2->VAR48 == VAR50)
            VAR15 = FUN13(VAR13, &VAR13->VAR97, VAR14, VAR50);
        else if (VAR2->VAR48 == VAR51)
            VAR15 = FUN13(VAR13, &VAR13->VAR97, VAR14, VAR51);
        else
            VAR15 = FUN13(VAR13, &VAR13->VAR97, VAR14, VAR49);
        VAR15 >>= 1;
    }
    else
    {
        const int VAR106 = VAR2->VAR66;
        if (VAR2->VAR48 == VAR50)
            VAR15 = FUN14(VAR13, &VAR13->VAR97, VAR14, VAR50);
        else if (VAR2->VAR48 == VAR51)
            VAR15 = FUN14(VAR13, &VAR13->VAR97, VAR14, VAR51);
        else
            VAR15 = FUN14(VAR13, &VAR13->VAR97, VAR14, VAR49);
        if (VAR13->VAR53 && VAR2->VAR48 == VAR50)
        {
            VAR88 *VAR107 = (VAR88 *)VAR14 + 1;
            VAR88 *VAR108 = (VAR88 *)VAR14;
            int VAR109 = VAR15;
            while (VAR109--)
            {
                *VAR107 = *VAR108;
                VAR108 += VAR106;
                VAR107 += VAR106;
            }
        }
        else if (VAR13->VAR53 && VAR2->VAR48 == VAR51)
        {
            VAR110 *VAR107 = (VAR110 *)VAR14 + 1;
            VAR110 *VAR108 = (VAR110 *)VAR14;
            int VAR109 = VAR15;
            while (VAR109--)
            {
                *VAR107 = *VAR108;
                VAR108 += VAR106;
                VAR107 += VAR106;
            }
        }
        else if (VAR13->VAR53)
        {
            float *VAR107 = (float *)VAR14 + 1;
            float *VAR108 = (float *)VAR14;
            int VAR109 = VAR15;
            while (VAR109--)
            {
                *VAR107 = *VAR108;
                VAR108 += VAR106;
                VAR107 += VAR106;
            }
        }
    }
    VAR10->VAR38 = VAR13->VAR38;
    return VAR15 * VAR32;
}