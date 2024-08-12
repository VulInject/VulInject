FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, uint64_t VAR7, uint64_t VAR8, int VAR9, int VAR10)
{
    int VAR11 = 0;
    int VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR3 *VAR17 = VAR4;
    int16_t VAR18;
    VAR19 *VAR20 = NULL;
    int VAR21, VAR22, VAR23 = 0;
    uint64_t VAR24;
    int VAR25;
    if ((VAR21 = FUN2(VAR4, VAR5, &VAR24)) < 0)
    {
        FUN3(VAR2->VAR26, VAR27, "");
        FUN4(VAR17);
        return VAR11;
    }
    VAR4 += VAR21;
    VAR5 -= VAR21;
    VAR12 = FUN5(VAR2, VAR24);
    if (VAR5 <= 3 || VAR12 < 0 || VAR12 >= VAR2->VAR28)
    {
        FUN3(VAR2->VAR26, VAR29, "", VAR12, VAR5);
        FUN4(VAR17);
        return VAR11;
    }
    VAR25 = VAR2->VAR30[VAR12]->VAR25;
    if (VAR25 < 0 || VAR25 >= VAR2->VAR26->VAR31)
    {
        FUN4(VAR17);
        return VAR11;
    }
    VAR14 = VAR2->VAR26->VAR32[VAR25];
    if (VAR14->VAR33 >= VAR34)
    {
        FUN4(VAR17);
        return VAR11;
    }
    if (VAR8 == VAR35)
        VAR8 = VAR2->VAR30[VAR12]->VAR36 / VAR2->VAR37;
    VAR18 = FUN6(VAR4);
    VAR4 += 2;
    VAR22 = *VAR4++;
    VAR5 -= 3;
    if (VAR9 == -1)
        VAR9 = VAR22 & 0x80 ? VAR38 : 0;
    if (VAR2->VAR39)
    {
        if (!VAR9 || VAR14 != VAR2->VAR40)
        {
            FUN4(VAR17);
            return VAR11;
        }
        VAR2->VAR39 = 0;
    }
    switch ((VAR22 & 0x06) >> 1)
    {
    case 0x0:
        VAR23 = 1;
        VAR20 = FUN7(sizeof(int));
        VAR20[0] = VAR5;
        break;
    case 0x1:
    case 0x2:
    case 0x3:
        assert(VAR5 > 0);
        VAR23 = (*VAR4) + 1;
        VAR4 += 1;
        VAR5 -= 1;
        VAR20 = FUN7(VAR23 * sizeof(int));
        switch ((VAR22 & 0x06) >> 1)
        {
        case 0x1:
        {
            uint8_t VAR41;
            uint32_t VAR42 = 0;
            for (VAR21 = 0; VAR11 == 0 && VAR21 < VAR23 - 1; VAR21++)
            {
                while (1)
                {
                    if (VAR5 == 0)
                    {
                        VAR11 = -1;
                        break;
                    }
                    VAR41 = *VAR4;
                    VAR20[VAR21] += VAR41;
                    VAR4 += 1;
                    VAR5 -= 1;
                    if (VAR41 != 0xff)
                        break;
                }
                VAR42 += VAR20[VAR21];
            }
            VAR20[VAR21] = VAR5 - VAR42;
            break;
        }
        case 0x2:
            for (VAR21 = 0; VAR21 < VAR23; VAR21++)
                VAR20[VAR21] = VAR5 / VAR23;
            break;
        case 0x3:
        {
            uint32_t VAR42;
            VAR21 = FUN2(VAR4, VAR5, &VAR24);
            if (VAR21 < 0)
            {
                FUN3(VAR2->VAR26, VAR29, "");
                break;
            }
            VAR4 += VAR21;
            VAR5 -= VAR21;
            VAR42 = VAR20[0] = VAR24;
            for (VAR21 = 1; VAR11 == 0 && VAR21 < VAR23 - 1; VAR21++)
            {
                int64_t VAR43;
                int VAR44;
                VAR44 = FUN8(VAR4, VAR5, &VAR43);
                if (VAR44 < 0)
                {
                    FUN3(VAR2->VAR26, VAR29, "");
                    break;
                }
                VAR4 += VAR44;
                VAR5 -= VAR44;
                VAR20[VAR21] = VAR20[VAR21 - 1] + VAR43;
                VAR42 += VAR20[VAR21];
            }
            VAR20[VAR21] = VAR5 - VAR42;
            break;
        }
        }
        break;
    }
    if (VAR11 == 0)
    {
        uint64_t VAR45 = VAR35;
        if (VAR7 != (VAR46)-1 && (VAR18 >= 0 || VAR7 >= -VAR18))
            VAR45 = VAR7 + VAR18;
        for (VAR21 = 0; VAR21 < VAR23; VAR21++)
        {
            if (VAR14->VAR47->VAR48 == VAR49 || VAR14->VAR47->VAR48 == VAR50 || VAR14->VAR47->VAR48 == VAR51)
            {
                VAR52 *VAR53 = (VAR52 *)VAR2->VAR30[VAR12];
                int VAR54 = VAR14->VAR47->VAR55;
                int VAR56 = VAR53->VAR57;
                int VAR58 = VAR53->VAR59;
                int VAR60 = VAR53->VAR61;
                int VAR62 = VAR53->VAR63;
                int VAR64 = VAR53->VAR65;
                int VAR66;
                if (!VAR53->VAR67)
                {
                    if (VAR14->VAR47->VAR48 == VAR49)
                        for (VAR66 = 0; VAR66 < VAR60 / 2; VAR66++)
                            memcpy(VAR53->VAR68 + VAR66 * 2 * VAR64 + VAR62 * VAR58, VAR4 + VAR66 * VAR58, VAR58);
                    else
                        for (VAR66 = 0; VAR66 < VAR64 / VAR56; VAR66++)
                            memcpy(VAR53->VAR68 + VAR56 * (VAR60 * VAR66 + ((VAR60 + 1) / 2) * (VAR62 & 1) + (VAR62 >> 1)), VAR4 + VAR66 * VAR56, VAR56);
                    if (++VAR53->VAR63 >= VAR60)
                    {
                        VAR53->VAR63 = 0;
                        VAR53->VAR67 = VAR60 * VAR64 / VAR54;
                    }
                }
                while (VAR53->VAR67)
                {
                    VAR16 = FUN7(sizeof(VAR15));
                    FUN9(VAR16, VAR54);
                    memcpy(VAR16->VAR4, VAR53->VAR68 + VAR54 * (VAR60 * VAR64 / VAR54 - VAR53->VAR67--), VAR54);
                    VAR16->VAR6 = VAR6;
                    VAR16->VAR25 = VAR25;
                    FUN10(VAR2, VAR16);
                }
            }
            else
            {
                int VAR69, VAR70 = 0, VAR71, VAR72, VAR73 = VAR20[VAR21];
                VAR3 *VAR74 = VAR4;
                if (VAR2->VAR30[VAR12]->VAR75 & 1)
                {
                    switch (VAR2->VAR30[VAR12]->VAR76)
                    {
                    case VAR77:
                        VAR70 = VAR2->VAR30[VAR12]->VAR78;
                        break;
                    case VAR79:
                        VAR74 = NULL;
                        do
                        {
                            VAR71 = VAR20[VAR21];
                            VAR72 = VAR73 *= 3;
                            VAR74 = FUN11(VAR74, VAR73 + VAR80);
                            VAR69 = FUN12(VAR74, &VAR72, VAR4, &VAR71);
                        } while (VAR69 == VAR81 && VAR73 < 10000000);
                        if (VAR69)
                        {
                            FUN4(VAR74);
                            continue;
                        }
                        VAR73 -= VAR72;
                        break;
                    case VAR82:
                    {
                        z_stream VAR83 = {0};
                        VAR74 = NULL;
                        if (FUN13(&VAR83) != VAR84)
                            continue;
                        VAR83.VAR85 = VAR4;
                        VAR83.VAR86 = VAR20[VAR21];
                        do
                        {
                            VAR73 *= 3;
                            VAR74 = FUN11(VAR74, VAR73);
                            VAR83.VAR87 = VAR73 - VAR83.VAR88;
                            VAR83.VAR89 = VAR74 + VAR83.VAR88;
                            VAR69 = FUN14(&VAR83, VAR90);
                        } while (VAR69 == VAR84 && VAR73 < 10000000);
                        VAR73 = VAR83.VAR88;
                        FUN15(&VAR83);
                        if (VAR69 != VAR91)
                        {
                            FUN4(VAR74);
                            continue;
                        }
                        break;
                    }
                    case VAR92:
                    {
                        bz_stream VAR93 = {0};
                        VAR74 = NULL;
                        if (FUN16(&VAR93, 0, 0) != VAR94)
                            continue;
                        VAR93.VAR85 = VAR4;
                        VAR93.VAR86 = VAR20[VAR21];
                        do
                        {
                            VAR73 *= 3;
                            VAR74 = FUN11(VAR74, VAR73);
                            VAR93.VAR87 = VAR73 - VAR93.VAR95;
                            VAR93.VAR89 = VAR74 + VAR93.VAR95;
                            VAR69 = FUN17(&VAR93);
                        } while (VAR69 == VAR94 && VAR73 < 10000000);
                        VAR73 = VAR93.VAR95;
                        FUN18(&VAR93);
                        if (VAR69 != VAR96)
                        {
                            FUN4(VAR74);
                            continue;
                        }
                        break;
                    }
                    }
                }
                VAR16 = FUN7(sizeof(VAR15));
                if (FUN9(VAR16, VAR73 + VAR70) < 0)
                {
                    VAR11 = FUN19(VAR97);
                    VAR21 = VAR23 - 1;
                    break;
                }
                if (VAR70)
                    memcpy(VAR16->VAR4, VAR2->VAR30[VAR12]->VAR98, VAR70);
                memcpy(VAR16->VAR4 + VAR70, VAR74, VAR73);
                if (VAR21 == 0)
                    VAR16->VAR22 = VAR9;
                VAR16->VAR25 = VAR25;
                VAR16->VAR99 = VAR45;
                VAR16->VAR6 = VAR6;
                VAR16->VAR8 = VAR8;
                FUN10(VAR2, VAR16);
            }
            if (VAR45 != VAR35)
                VAR45 = VAR8 ? VAR45 + VAR8 : VAR35;
            VAR4 += VAR20[VAR21];
        }
    }
    FUN4(VAR20);
    FUN4(VAR17);
    return VAR11;