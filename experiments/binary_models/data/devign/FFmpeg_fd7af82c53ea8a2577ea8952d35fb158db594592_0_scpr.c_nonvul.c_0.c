static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR3 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19 = 0, VAR20 = 0;
    int VAR21 = VAR5 - VAR2->VAR22;
    const int VAR23 = VAR9->VAR23;
    if (FUN2(VAR12) == 0)
        return 0;
    FUN3(VAR12, 1);
    FUN4(&VAR9->VAR24, VAR12);
    VAR13 = FUN5(VAR9, VAR9->VAR25, 256, 1, &VAR15);
    VAR13 |= FUN5(VAR9, VAR9->VAR25, 256, 1, &VAR14);
    VAR15 += VAR14 << 8;
    VAR13 |= FUN5(VAR9, VAR9->VAR25, 256, 1, &VAR16);
    VAR13 |= FUN5(VAR9, VAR9->VAR25, 256, 1, &VAR14);
    if (VAR13 < 0)
        return VAR13;
    VAR16 += VAR14 << 8;
    memset(VAR9->VAR26, 0, sizeof(*VAR9->VAR26) * VAR9->VAR27);
    while (VAR15 <= VAR16)
    {
        int VAR28, VAR29;
        VAR13 = FUN5(VAR9, VAR9->VAR30, 5, 10, &VAR28);
        VAR13 |= FUN5(VAR9, VAR9->VAR31, 256, 20, &VAR29);
        if (VAR13 < 0)
            return VAR13;
        while (VAR15 < VAR9->VAR27 && VAR29-- > 0)
        {
            VAR9->VAR26[VAR15++] = VAR28;
        }
    }
    for (VAR18 = 0; VAR18 < VAR9->VAR32; VAR18++)
    {
        for (VAR17 = 0; VAR17 < VAR9->VAR33; VAR17++)
        {
            int VAR34 = 0, VAR35 = 16, VAR36 = 0, VAR37 = 16;
            if (VAR9->VAR26[VAR18 * VAR9->VAR33 + VAR17] == 0)
                continue;
            if (((VAR9->VAR26[VAR18 * VAR9->VAR33 + VAR17] - 1) & 1) > 0)
            {
                VAR13 = FUN5(VAR9, VAR9->VAR38[0], 16, 100, &VAR36);
                VAR13 |= FUN5(VAR9, VAR9->VAR38[1], 16, 100, &VAR34);
                VAR13 |= FUN5(VAR9, VAR9->VAR38[2], 16, 100, &VAR37);
                VAR13 |= FUN5(VAR9, VAR9->VAR38[3], 16, 100, &VAR35);
                if (VAR13 < 0)
                    return VAR13;
                VAR37++;
                VAR35++;
            }
            if (((VAR9->VAR26[VAR18 * VAR9->VAR33 + VAR17] - 1) & 2) > 0)
            {
                int VAR39, VAR40, VAR41 = VAR18 * 16, VAR42 = VAR17 * 16;
                int VAR43, VAR44;
                VAR13 = FUN5(VAR9, VAR9->VAR45[0], 512, 100, &VAR43);
                VAR13 |= FUN5(VAR9, VAR9->VAR45[1], 512, 100, &VAR44);
                if (VAR13 < 0)
                    return VAR13;
                VAR43 -= 256;
                VAR44 -= 256;
                if (VAR41 + VAR44 + VAR34 < 0 || VAR42 + VAR43 + VAR36 < 0)
                    return VAR46;
                for (VAR39 = 0; VAR39 < VAR35 - VAR34 && (VAR41 + VAR34 + VAR39) < VAR2->VAR47; VAR39++)
                {
                    for (VAR40 = 0; VAR40 < VAR37 - VAR36 && (VAR42 + VAR36 + VAR40) < VAR2->VAR22; VAR40++)
                    {
                        VAR4[(VAR41 + VAR39 + VAR34) * VAR5 + VAR42 + VAR36 + VAR40] = VAR6[(VAR41 + VAR44 + VAR34 + VAR39) * VAR7 + VAR42 + VAR36 + VAR43 + VAR40];
                    }
                }
            }
            else
            {
                int VAR48, VAR49, VAR50, VAR51, VAR52, VAR42 = VAR17 * 16 + VAR36, VAR41 = VAR18 * 16 + VAR34;
                unsigned VAR53, VAR54 = 0;
                for (; VAR41 < VAR18 * 16 + VAR35 && VAR41 < VAR2->VAR47;)
                {
                    VAR13 = FUN5(VAR9, VAR9->VAR55[VAR54], 6, 1000, &VAR54);
                    if (VAR54 == 0)
                    {
                        VAR13 = FUN6(VAR9, &VAR9->VAR56[0][VAR19 + VAR20], 400, &VAR49);
                        if (VAR13 < 0)
                            return VAR13;
                        VAR20 = (VAR19 << 6) & 0xFC0;
                        VAR19 = VAR49 >> VAR23;
                        VAR13 = FUN6(VAR9, &VAR9->VAR56[1][VAR19 + VAR20], 400, &VAR50);
                        if (VAR13 < 0)
                            return VAR13;
                        VAR20 = (VAR19 << 6) & 0xFC0;
                        VAR19 = VAR50 >> VAR23;
                        VAR13 = FUN6(VAR9, &VAR9->VAR56[2][VAR19 + VAR20], 400, &VAR51);
                        if (VAR13 < 0)
                            return VAR13;
                        VAR20 = (VAR19 << 6) & 0xFC0;
                        VAR19 = VAR51 >> VAR23;
                        VAR53 = (VAR51 << 16) + (VAR50 << 8) + VAR49;
                    }
                    if (VAR54 > 5)
                        return VAR46;
                    VAR13 = FUN5(VAR9, VAR9->VAR57[VAR54], 256, 400, &VAR48);
                    if (VAR13 < 0)
                        return VAR13;
                    switch (VAR54)
                    {
                    case 0:
                        while (VAR48-- > 0)
                        {
                            if (VAR41 >= VAR2->VAR47)
                                return VAR46;
                            VAR4[VAR41 * VAR5 + VAR42] = VAR53;
                            VAR42++;
                            if (VAR42 >= VAR17 * 16 + VAR37 || VAR42 >= VAR2->VAR22)
                            {
                                VAR42 = VAR17 * 16 + VAR36;
                                VAR41++;
                            }
                        }
                        break;
                    case 1:
                        while (VAR48-- > 0)
                        {
                            if (VAR42 == 0)
                            {
                                if (VAR41 < 1)
                                    return VAR46;
                                VAR52 = VAR21;
                            }
                            else
                            {
                                VAR52 = 0;
                            }
                            if (VAR41 >= VAR2->VAR47)
                                return VAR46;
                            VAR53 = VAR4[VAR41 * VAR5 + VAR42 - 1 - VAR52];
                            VAR4[VAR41 * VAR5 + VAR42] = VAR53;
                            VAR42++;
                            if (VAR42 >= VAR17 * 16 + VAR37 || VAR42 >= VAR2->VAR22)
                            {
                                VAR42 = VAR17 * 16 + VAR36;
                                VAR41++;
                            }
                        }
                        break;
                    case 2:
                        while (VAR48-- > 0)
                        {
                            if (VAR41 < 1 || VAR41 >= VAR2->VAR47)
                                return VAR46;
                            VAR53 = VAR4[(VAR41 - 1) * VAR5 + VAR42];
                            VAR4[VAR41 * VAR5 + VAR42] = VAR53;
                            VAR42++;
                            if (VAR42 >= VAR17 * 16 + VAR37 || VAR42 >= VAR2->VAR22)
                            {
                                VAR42 = VAR17 * 16 + VAR36;
                                VAR41++;
                            }
                        }
                        break;
                    case 3:
                        while (VAR48-- > 0)
                        {
                            if (VAR41 >= VAR2->VAR47)
                                return VAR46;
                            VAR53 = VAR6[VAR41 * VAR5 + VAR42];
                            VAR4[VAR41 * VAR5 + VAR42] = VAR53;
                            VAR42++;
                            if (VAR42 >= VAR17 * 16 + VAR37 || VAR42 >= VAR2->VAR22)
                            {
                                VAR42 = VAR17 * 16 + VAR36;
                                VAR41++;
                            }
                        }
                        break;
                    case 4:
                        while (VAR48-- > 0)
                        {
                            VAR58 *VAR59 = (VAR58 *)VAR4;
                            if (VAR41 < 1 || VAR41 >= VAR2->VAR47)
                                return VAR46;
                            if (VAR42 == 0)
                            {
                                VAR52 = VAR21;
                            }
                            else
                            {
                                VAR52 = 0;
                            }
                            VAR49 = VAR59[((VAR41 - 1) * VAR5 + VAR42) * 4] + VAR59[(VAR41 * VAR5 + VAR42 - 1 - VAR52) * 4] - VAR59[((VAR41 - 1) * VAR5 + VAR42 - 1 - VAR52) * 4];
                            VAR50 = VAR59[((VAR41 - 1) * VAR5 + VAR42) * 4 + 1] + VAR59[(VAR41 * VAR5 + VAR42 - 1 - VAR52) * 4 + 1] - VAR59[((VAR41 - 1) * VAR5 + VAR42 - 1 - VAR52) * 4 + 1];
                            VAR51 = VAR59[((VAR41 - 1) * VAR5 + VAR42) * 4 + 2] + VAR59[(VAR41 * VAR5 + VAR42 - 1 - VAR52) * 4 + 2] - VAR59[((VAR41 - 1) * VAR5 + VAR42 - 1 - VAR52) * 4 + 2];
                            VAR53 = ((VAR51 & 0xFF) << 16) + ((VAR50 & 0xFF) << 8) + (VAR49 & 0xFF);
                            VAR4[VAR41 * VAR5 + VAR42] = VAR53;
                            VAR42++;
                            if (VAR42 >= VAR17 * 16 + VAR37 || VAR42 >= VAR2->VAR22)
                            {
                                VAR42 = VAR17 * 16 + VAR36;
                                VAR41++;
                            }
                        }
                        break;
                    case 5:
                        while (VAR48-- > 0)
                        {
                            if (VAR41 < 1 || VAR41 >= VAR2->VAR47)
                                return VAR46;
                            if (VAR42 == 0)
                            {
                                VAR52 = VAR21;
                            }
                            else
                            {
                                VAR52 = 0;
                            }
                            VAR53 = VAR4[(VAR41 - 1) * VAR5 + VAR42 - 1 - VAR52];
                            VAR4[VAR41 * VAR5 + VAR42] = VAR53;
                            VAR42++;
                            if (VAR42 >= VAR17 * 16 + VAR37 || VAR42 >= VAR2->VAR22)
                            {
                                VAR42 = VAR17 * 16 + VAR36;
                                VAR41++;
                            }
                        }
                        break;
                    }
                    if (VAR2->VAR60 == 16)
                    {
                        VAR20 = (VAR53 & 0x3F00) >> 2;
                        VAR19 = (VAR53 & 0xFFFFFF) >> 16;
                    }
                    else
                    {
                        VAR20 = (VAR53 & 0xFC00) >> 4;
                        VAR19 = (VAR53 & 0xFFFFFF) >> 18;
                    }
                }
            }
        }
    }
    return 0;
}