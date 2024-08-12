static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    unsigned int VAR9 = VAR6->VAR10;
    const VAR7 *VAR11 = VAR8 + VAR9;
    const VAR12 *VAR13;
    VAR14 *const VAR15 = VAR2->VAR16;
    VAR17 *VAR18 = VAR3;
    VAR17 *const VAR19 = &VAR15->VAR18;
    VAR7 *VAR20;
    int VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28;
    int VAR29 = 0;
    int VAR30 = 0;
    unsigned int VAR31 = ~0;
    unsigned int VAR32 = ~0;
    unsigned int VAR33 = ~0;
    unsigned int VAR34 = ~0;
    unsigned int VAR35 = ~0;
    int VAR36;
    int VAR37, VAR38;
    int VAR39;
    unsigned long VAR40;
    unsigned long VAR41;
    unsigned int VAR42 = 0;
    VAR15->VAR43[0] = -1;
    VAR15->VAR43[1] = -1;
    VAR15->VAR43[2] = -1;
    VAR15->VAR43[3] = -1;
    VAR15->VAR44 = -1;
    VAR15->VAR45 = -1;
    if (VAR9 < 10)
    {
        FUN2(VAR2, VAR46, "");
        return VAR47;
    }
    VAR25 = FUN3(&VAR8);
    if (VAR25 != 20000630)
    {
        FUN2(VAR2, VAR46, "", VAR25);
        return VAR47;
    }
    VAR26 = FUN4(&VAR8);
    if (VAR26 != 2)
    {
        FUN2(VAR2, VAR46, "", VAR26);
        return VAR48;
    }
    VAR27 = FUN5(&VAR8);
    if (VAR27 & 0x2)
    {
        FUN2(VAR2, VAR46, "");
        return VAR48;
    }
    while (VAR8 < VAR11 && VAR8[0])
    {
        unsigned int VAR49;
        if (FUN6(VAR2, &VAR8, VAR11, "", "", 38, &VAR49) >= 0)
        {
            const VAR7 *VAR50;
            if (!VAR49)
                return VAR47;
            VAR50 = VAR8 + VAR49;
            while (VAR50 - VAR8 >= 19)
            {
                int VAR51 = -1;
                int VAR52 = -1;
                if (!strcmp(VAR8, ""))
                    VAR52 = 0;
                else if (!strcmp(VAR8, ""))
                    VAR52 = 1;
                else if (!strcmp(VAR8, ""))
                    VAR52 = 2;
                else if (!strcmp(VAR8, ""))
                    VAR52 = 3;
                else
                    FUN2(VAR2, VAR53, "", VAR8);
                while (FUN4(&VAR8) && VAR8 < VAR50)
                    continue;
                if (VAR50 - *&VAR8 < 4)
                {
                    FUN2(VAR2, VAR46, "");
                    return VAR47;
                }
                VAR51 = FUN3(&VAR8);
                if (VAR51 > 2)
                {
                    FUN2(VAR2, VAR46, "");
                    return VAR47;
                }
                if (VAR52 >= 0)
                {
                    if (VAR15->VAR44 != -1 && VAR15->VAR44 != VAR51)
                    {
                        FUN2(VAR2, VAR46, "");
                        return VAR47;
                    }
                    VAR15->VAR44 = VAR51;
                    VAR15->VAR43[VAR52] = VAR42;
                }
                VAR42 += 1 << VAR51;
                VAR8 += 12;
            }
            if (FUN7(VAR15->VAR43[0], VAR15->VAR43[1], VAR15->VAR43[2]) < 0)
            {
                if (VAR15->VAR43[0] < 0)
                    FUN2(VAR2, VAR46, "");
                if (VAR15->VAR43[1] < 0)
                    FUN2(VAR2, VAR46, "");
                if (VAR15->VAR43[2] < 0)
                    FUN2(VAR2, VAR46, "");
                return VAR47;
            }
            VAR8 = VAR50;
            continue;
        }
        else if (FUN6(VAR2, &VAR8, VAR11, "", "", 31, &VAR49) >= 0)
        {
            if (!VAR49)
                return VAR47;
            VAR31 = FUN8(VAR8);
            VAR33 = FUN8(VAR8 + 4);
            VAR32 = FUN8(VAR8 + 8);
            VAR34 = FUN8(VAR8 + 12);
            VAR35 = (VAR32 - VAR31) + 1;
            VAR8 += VAR49;
            continue;
        }
        else if (FUN6(VAR2, &VAR8, VAR11, "", "", 34, &VAR49) >= 0)
        {
            if (!VAR49)
                return VAR47;
            VAR29 = FUN8(VAR8 + 8) + 1;
            VAR30 = FUN8(VAR8 + 12) + 1;
            VAR8 += VAR49;
            continue;
        }
        else if (FUN6(VAR2, &VAR8, VAR11, "", "", 25, &VAR49) >= 0)
        {
            if (!VAR49)
                return VAR47;
            if (*VAR8)
            {
                FUN2(VAR2, VAR46, "", *VAR8);
                return VAR48;
            }
            VAR8 += VAR49;
            continue;
        }
        else if (FUN6(VAR2, &VAR8, VAR11, "", "", 31, &VAR49) >= 0)
        {
            if (!VAR49)
                return VAR47;
            VAR2->VAR54 = FUN9(FUN10(FUN8(VAR8)), 255);
            VAR8 += VAR49;
            continue;
        }
        else if (FUN6(VAR2, &VAR8, VAR11, "", "", 29, &VAR49) >= 0)
        {
            if (!VAR49)
                return VAR47;
            if (VAR15->VAR45 == -1)
                VAR15->VAR45 = *VAR8;
            else
                FUN2(VAR2, VAR53, "");
            VAR8 += VAR49;
            continue;
        }
        if (VAR11 - VAR8 <= 9)
        {
            FUN2(VAR2, VAR46, "");
            return VAR47;
        }
        for (VAR21 = 0; VAR21 < 2; VAR21++)
        {
            while (++VAR8 < VAR11)
                if (VAR8[0] == 0x0)
                    break;
        }
        VAR8++;
        if (VAR11 - VAR8 >= 5)
        {
            VAR49 = FUN11(&VAR8, VAR11);
            if (!VAR49)
            {
                FUN2(VAR2, VAR46, "");
                return VAR47;
            }
            VAR8 += VAR49;
        }
    }
    if (VAR15->VAR45 == -1)
    {
        FUN2(VAR2, VAR46, "");
        return VAR47;
    }
    if (VAR8 >= VAR11)
    {
        FUN2(VAR2, VAR46, "");
        return VAR47;
    }
    VAR8++;
    switch (VAR15->VAR44)
    {
    case 2:
    case 1:
        if (VAR15->VAR43[3] >= 0)
            VAR2->VAR55 = VAR56;
        else
            VAR2->VAR55 = VAR57;
        break;
    case 0:
        FUN12(VAR2, "", 1);
        return VAR48;
    default:
        FUN2(VAR2, VAR46, "", VAR15->VAR44);
        return VAR47;
    }
    switch (VAR15->VAR45)
    {
    case VAR58:
    case VAR59:
    case VAR60:
        VAR39 = 1;
        break;
    case VAR61:
        VAR39 = 16;
        break;
    default:
        FUN2(VAR2, VAR46, "", VAR15->VAR45);
        return VAR48;
    }
    if (VAR15->VAR18.VAR3[0])
        FUN13(VAR2, &VAR15->VAR18);
    if (FUN14(VAR29, VAR30, 0, VAR2))
        return VAR47;
    if (VAR31 > VAR32 || VAR33 > VAR34 || VAR35 != VAR32 - VAR31 + 1 || VAR32 >= VAR29 || VAR34 >= VAR30)
    {
        FUN2(VAR2, VAR46, "");
        return VAR47;
    }
    if (VAR29 != VAR2->VAR62 || VAR30 != VAR2->VAR63)
    {
        FUN15(VAR2, VAR29, VAR30);
    }
    VAR13 = FUN16(VAR2->VAR55);
    VAR37 = VAR31 * 2 * VAR13->VAR64;
    VAR38 = (VAR2->VAR62 - (VAR32 + 1)) * 2 * VAR13->VAR64;
    VAR36 = VAR2->VAR62 * 2 * VAR13->VAR64;
    VAR40 = VAR35 * VAR42;
    VAR41 = VAR40 * VAR39;
    if (VAR15->VAR45 != VAR58)
    {
        FUN17(&VAR15->VAR65, &VAR15->VAR41, VAR41);
        FUN17(&VAR15->VAR66, &VAR15->VAR67, VAR41);
        if (!VAR15->VAR65 || !VAR15->VAR66)
            return FUN18(VAR68);
    }
    if ((VAR28 = FUN19(VAR2, VAR19)) < 0)
    {
        FUN2(VAR2, VAR46, "");
        return VAR28;
    }
    VAR20 = VAR19->VAR3[0];
    VAR24 = VAR19->VAR69[0];
    for (VAR23 = 0; VAR23 < VAR33; VAR23++)
    {
        memset(VAR20, 0, VAR36);
        VAR20 += VAR24;
    }
    for (VAR23 = VAR33; VAR23 <= VAR34; VAR23 += VAR39)
    {
        VAR70 *VAR71 = (VAR70 *)VAR20;
        if (VAR11 - VAR8 > 8)
        {
            const uint64_t VAR72 = FUN20(&VAR8) + 8;
            int32_t VAR73;
            if ((VAR72 > VAR9) || (VAR15->VAR45 == VAR58 && VAR72 > VAR6->VAR10 - VAR35 * VAR42) || (VAR15->VAR45 != VAR58 && VAR72 > VAR9 - (VAR73 = FUN8(VAR6->VAR3 + VAR72 - 4))))
            {
                FUN2(VAR2, VAR53, "", VAR23);
                for (VAR21 = 0; VAR21 < VAR39 && VAR23 + VAR21 <= VAR34; VAR21++, VAR20 += VAR24)
                {
                    VAR71 = (VAR70 *)VAR20;
                    memset(VAR71, 0, VAR36);
                }
            }
            else
            {
                const VAR7 *VAR74, *VAR75, *VAR76, *VAR77 = 0;
                if (VAR39 > 1)
                    VAR41 = VAR40 * FUN21(VAR39, VAR34 - VAR23 + 1);
                if ((VAR15->VAR45 == VAR60 || VAR15->VAR45 == VAR61) && VAR73 < VAR41)
                {
                    unsigned long VAR78 = VAR41;
                    if (FUN22(VAR15->VAR66, &VAR78, VAR6->VAR3 + VAR72, VAR73) != VAR79 || VAR78 != VAR41)
                    {
                        FUN2(VAR2, VAR46, "");
                        return FUN18(VAR80);
                    }
                }
                else if (VAR15->VAR45 == VAR59 && VAR73 < VAR41)
                {
                    if (FUN23(VAR6->VAR3 + VAR72, VAR73, VAR15->VAR66, VAR41))
                    {
                        FUN2(VAR2, VAR46, "");
                        return FUN18(VAR80);
                    }
                }
                if (VAR15->VAR45 != VAR58 && VAR73 < VAR41)
                {
                    FUN24(VAR15->VAR66, VAR41);
                    FUN25(VAR15->VAR66, VAR15->VAR65, VAR41);
                    VAR74 = VAR15->VAR65 + VAR35 * VAR15->VAR43[0];
                    VAR75 = VAR15->VAR65 + VAR35 * VAR15->VAR43[1];
                    VAR76 = VAR15->VAR65 + VAR35 * VAR15->VAR43[2];
                    if (VAR15->VAR43[3] >= 0)
                        VAR77 = VAR15->VAR65 + VAR35 * VAR15->VAR43[3];
                }
                else
                {
                    VAR74 = VAR6->VAR3 + VAR72 + VAR35 * VAR15->VAR43[0];
                    VAR75 = VAR6->VAR3 + VAR72 + VAR35 * VAR15->VAR43[1];
                    VAR76 = VAR6->VAR3 + VAR72 + VAR35 * VAR15->VAR43[2];
                    if (VAR15->VAR43[3] >= 0)
                        VAR77 = VAR6->VAR3 + VAR72 + VAR35 * VAR15->VAR43[3];
                }
                for (VAR21 = 0; VAR21 < VAR39 && VAR23 + VAR21 <= VAR34; VAR21++, VAR20 += VAR24)
                {
                    const VAR7 *VAR81, *VAR82, *VAR83, *VAR84;
                    VAR81 = VAR74;
                    VAR82 = VAR75;
                    VAR83 = VAR76;
                    if (VAR77)
                        VAR84 = VAR77;
                    VAR71 = (VAR70 *)VAR20;
                    memset(VAR71, 0, VAR37);
                    VAR71 += VAR31 * VAR13->VAR64;
                    if (VAR15->VAR44 == 2)
                    {
                        for (VAR22 = 0; VAR22 < VAR35; VAR22++)
                        {
                            *VAR71++ = FUN26(FUN3(&VAR81));
                            *VAR71++ = FUN26(FUN3(&VAR82));
                            *VAR71++ = FUN26(FUN3(&VAR83));
                            if (VAR77)
                                *VAR71++ = FUN26(FUN3(&VAR84));
                        }
                    }
                    else
                    {
                        for (VAR22 = 0; VAR22 < VAR35; VAR22++)
                        {
                            *VAR71++ = FUN27(FUN28(&VAR81));
                            *VAR71++ = FUN27(FUN28(&VAR82));
                            *VAR71++ = FUN27(FUN28(&VAR83));
                            if (VAR77)
                                *VAR71++ = FUN27(FUN28(&VAR84));
                        }
                    }
                    memset(VAR71, 0, VAR38);
                    VAR74 += VAR40;
                    VAR75 += VAR40;
                    VAR76 += VAR40;
                    if (VAR77)
                        VAR77 += VAR40;
                }
            }
        }
    }
    for (VAR23 = VAR34 + 1; VAR23 < VAR2->VAR63; VAR23++)
    {
        memset(VAR20, 0, VAR36);
        VAR20 += VAR24;
    }
    *VAR18 = VAR15->VAR18;
    *VAR4 = 1;
    return VAR9;
}