static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    VAR15 *VAR16, *VAR17, *VAR18, *VAR19;
    int VAR20, VAR21[2];
    const VAR15 *VAR22;
    FUN2(VAR23, VAR24, [64]);
    FUN2(VAR15, VAR25, [64]);
    FUN2(VAR26, VAR27, [64]);
    int VAR28[64], VAR29, VAR30, VAR31[64];
    const int VAR32 = VAR4->VAR33[VAR7];
    int VAR34 = VAR8 ? (VAR2->VAR35->VAR36 + 15) >> 4 : (VAR2->VAR35->VAR36 + 7) >> 3;
    int VAR37 = VAR8 ? (VAR2->VAR35->VAR38 + 15) >> 4 : (VAR2->VAR35->VAR38 + 7) >> 3;
    int VAR36 = VAR2->VAR35->VAR36 >> VAR8;
    FUN3(VAR2, FUN4(VAR36, 8), VAR34);
    for (VAR11 = 0; VAR11 < VAR39; VAR11++)
        FUN5(VAR6, VAR2, VAR11);
    VAR18 = VAR2->VAR40->VAR41[VAR7] ? VAR2->VAR40->VAR41[VAR7] : VAR4->VAR41[VAR7];
    VAR19 = VAR18 + (VAR34 - 1 + VAR2->VAR40->VAR33[VAR7] * (VAR37 - 1)) * 8;
    for (VAR11 = 0; VAR11 < 64; VAR11++)
        VAR28[VAR11] = (VAR11 & 7) + (VAR11 >> 3) * VAR32;
    for (VAR14 = 0; VAR14 < VAR37; VAR14++)
    {
        if ((VAR10 = FUN6(VAR2->VAR35, VAR6, &VAR2->VAR42[VAR43])) < 0)
            return VAR10;
        if ((VAR10 = FUN6(VAR2->VAR35, VAR6, &VAR2->VAR42[VAR44])) < 0)
            return VAR10;
        if ((VAR10 = FUN7(VAR6, &VAR2->VAR42[VAR45], VAR2)) < 0)
            return VAR10;
        if ((VAR10 = FUN8(VAR2->VAR35, VAR6, &VAR2->VAR42[VAR46])) < 0)
            return VAR10;
        if ((VAR10 = FUN9(VAR2->VAR35, VAR6, &VAR2->VAR42[VAR47])) < 0)
            return VAR10;
        if ((VAR10 = FUN9(VAR2->VAR35, VAR6, &VAR2->VAR42[VAR48])) < 0)
            return VAR10;
        if ((VAR10 = FUN10(VAR2->VAR35, VAR6, &VAR2->VAR42[VAR49], VAR50, 0)) < 0)
            return VAR10;
        if ((VAR10 = FUN10(VAR2->VAR35, VAR6, &VAR2->VAR42[VAR51], VAR50, 1)) < 0)
            return VAR10;
        if ((VAR10 = FUN11(VAR2->VAR35, VAR6, &VAR2->VAR42[VAR52])) < 0)
            return VAR10;
        if (VAR14 == VAR37)
            break;
        VAR16 = VAR4->VAR41[VAR7] + 8 * VAR14 * VAR32;
        VAR17 = (VAR2->VAR40->VAR41[VAR7] ? VAR2->VAR40->VAR41[VAR7] : VAR4->VAR41[VAR7]) + 8 * VAR14 * VAR32;
        for (VAR13 = 0; VAR13 < VAR34; VAR13++, VAR16 += 8, VAR17 += 8)
        {
            VAR9 = FUN12(VAR2, VAR43);
            if ((VAR14 & 1) && VAR9 == VAR53)
            {
                VAR13++;
                VAR16 += 8;
                VAR17 += 8;
                continue;
            }
            switch (VAR9)
            {
            case VAR54:
                VAR2->VAR55.VAR56[1][0](VAR16, VAR17, VAR32, 8);
                break;
            case VAR53:
                VAR9 = FUN12(VAR2, VAR44);
                switch (VAR9)
                {
                case VAR57:
                    VAR22 = VAR58[FUN13(VAR6, 4)];
                    VAR11 = 0;
                    do
                    {
                        int VAR59 = FUN12(VAR2, VAR52) + 1;
                        VAR11 += VAR59;
                        if (VAR11 > 64)
                        {
                            FUN14(VAR2->VAR35, VAR60, "");
                            return VAR61;
                        }
                        if (FUN15(VAR6))
                        {
                            VAR20 = FUN12(VAR2, VAR45);
                            for (VAR12 = 0; VAR12 < VAR59; VAR12++)
                                VAR25[*VAR22++] = VAR20;
                        }
                        else
                        {
                            for (VAR12 = 0; VAR12 < VAR59; VAR12++)
                                VAR25[*VAR22++] = FUN12(VAR2, VAR45);
                        }
                    } while (VAR11 < 63);
                    if (VAR11 == 63)
                        VAR25[*VAR22++] = FUN12(VAR2, VAR45);
                    break;
                case VAR62:
                    memset(VAR27, 0, sizeof(*VAR27) * 64);
                    VAR27[0] = FUN12(VAR2, VAR49);
                    if ((VAR29 = FUN16(VAR6, VAR27, VAR63, &VAR30, VAR31, -1)) < 0)
                        return VAR29;
                    FUN17(VAR27, VAR64[VAR29], VAR30, VAR31, VAR63);
                    VAR2->VAR65.FUN18(VAR25, 8, VAR27);
                    break;
                case VAR66:
                    VAR20 = FUN12(VAR2, VAR45);
                    VAR2->VAR67.VAR68[0](VAR16, VAR20, VAR32, 16);
                    break;
                case VAR69:
                    for (VAR11 = 0; VAR11 < 2; VAR11++)
                        VAR21[VAR11] = FUN12(VAR2, VAR45);
                    for (VAR12 = 0; VAR12 < 8; VAR12++)
                    {
                        VAR20 = FUN12(VAR2, VAR46);
                        for (VAR11 = 0; VAR11 < 8; VAR11++, VAR20 >>= 1)
                            VAR25[VAR11 + VAR12 * 8] = VAR21[VAR20 & 1];
                    }
                    break;
                case VAR70:
                    for (VAR12 = 0; VAR12 < 8; VAR12++)
                        for (VAR11 = 0; VAR11 < 8; VAR11++)
                            VAR25[VAR11 + VAR12 * 8] = FUN12(VAR2, VAR45);
                    break;
                default:
                    FUN14(VAR2->VAR35, VAR60, "", VAR9);
                    return VAR61;
                }
                if (VAR9 != VAR66)
                    VAR2->VAR65.FUN19(VAR25, VAR16, VAR32);
                VAR13++;
                VAR16 += 8;
                VAR17 += 8;
                break;
            case VAR71:
                VAR10 = FUN20(VAR2, VAR16, VAR17, VAR32, VAR18, VAR19);
                if (VAR10 < 0)
                    return VAR10;
                break;
            case VAR57:
                VAR22 = VAR58[FUN13(VAR6, 4)];
                VAR11 = 0;
                do
                {
                    int VAR59 = FUN12(VAR2, VAR52) + 1;
                    VAR11 += VAR59;
                    if (VAR11 > 64)
                    {
                        FUN14(VAR2->VAR35, VAR60, "");
                        return VAR61;
                    }
                    if (FUN15(VAR6))
                    {
                        VAR20 = FUN12(VAR2, VAR45);
                        for (VAR12 = 0; VAR12 < VAR59; VAR12++)
                            VAR16[VAR28[*VAR22++]] = VAR20;
                    }
                    else
                    {
                        for (VAR12 = 0; VAR12 < VAR59; VAR12++)
                            VAR16[VAR28[*VAR22++]] = FUN12(VAR2, VAR45);
                    }
                } while (VAR11 < 63);
                if (VAR11 == 63)
                    VAR16[VAR28[*VAR22++]] = FUN12(VAR2, VAR45);
                break;
            case VAR72:
                VAR10 = FUN20(VAR2, VAR16, VAR17, VAR32, VAR18, VAR19);
                if (VAR10 < 0)
                    return VAR10;
                VAR2->VAR67.FUN21(VAR24);
                VAR20 = FUN13(VAR6, 7);
                FUN22(VAR6, VAR24, VAR20);
                VAR2->VAR65.FUN23(VAR16, VAR24, VAR32);
                break;
            case VAR62:
                memset(VAR27, 0, sizeof(*VAR27) * 64);
                VAR27[0] = FUN12(VAR2, VAR49);
                if ((VAR29 = FUN16(VAR6, VAR27, VAR63, &VAR30, VAR31, -1)) < 0)
                    return VAR29;
                FUN17(VAR27, VAR64[VAR29], VAR30, VAR31, VAR63);
                VAR2->VAR65.FUN18(VAR16, VAR32, VAR27);
                break;
            case VAR66:
                VAR20 = FUN12(VAR2, VAR45);
                VAR2->VAR67.VAR68[1](VAR16, VAR20, VAR32, 8);
                break;
            case VAR73:
                VAR10 = FUN20(VAR2, VAR16, VAR17, VAR32, VAR18, VAR19);
                if (VAR10 < 0)
                    return VAR10;
                memset(VAR27, 0, sizeof(*VAR27) * 64);
                VAR27[0] = FUN12(VAR2, VAR51);
                if ((VAR29 = FUN16(VAR6, VAR27, VAR63, &VAR30, VAR31, -1)) < 0)
                    return VAR29;
                FUN17(VAR27, VAR74[VAR29], VAR30, VAR31, VAR63);
                VAR2->VAR65.FUN24(VAR16, VAR32, VAR27);
                break;
            case VAR69:
                for (VAR11 = 0; VAR11 < 2; VAR11++)
                    VAR21[VAR11] = FUN12(VAR2, VAR45);
                for (VAR11 = 0; VAR11 < 8; VAR11++)
                {
                    VAR20 = FUN12(VAR2, VAR46);
                    for (VAR12 = 0; VAR12 < 8; VAR12++, VAR20 >>= 1)
                        VAR16[VAR11 * VAR32 + VAR12] = VAR21[VAR20 & 1];
                }
                break;
            case VAR70:
                for (VAR11 = 0; VAR11 < 8; VAR11++)
                    memcpy(VAR16 + VAR11 * VAR32, VAR2->VAR42[VAR45].VAR75 + VAR11 * 8, 8);
                VAR2->VAR42[VAR45].VAR75 += 64;
                break;
            default:
                FUN14(VAR2->VAR35, VAR60, "", VAR9);
                return VAR61;
            }
        }
    }
    if (FUN25(VAR6) & 0x1F)
        FUN26(VAR6, 32 - (FUN25(VAR6) & 0x1F));
    return 0;
}