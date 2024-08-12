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
    int VAR28[64];
    const int VAR29 = VAR4->VAR30[VAR7];
    int VAR31 = VAR8 ? (VAR2->VAR32->VAR33 + 15) >> 4 : (VAR2->VAR32->VAR33 + 7) >> 3;
    int VAR34 = VAR8 ? (VAR2->VAR32->VAR35 + 15) >> 4 : (VAR2->VAR32->VAR35 + 7) >> 3;
    int VAR33 = VAR2->VAR32->VAR33 >> VAR8;
    FUN3(VAR2, FUN4(VAR33, 8), VAR31);
    for (VAR11 = 0; VAR11 < VAR36; VAR11++)
        FUN5(VAR6, VAR2, VAR11);
    VAR18 = VAR2->VAR37->VAR38[VAR7] ? VAR2->VAR37->VAR38[VAR7] : VAR4->VAR38[VAR7];
    VAR19 = VAR18 + (VAR31 - 1 + VAR2->VAR37->VAR30[VAR7] * (VAR34 - 1)) * 8;
    for (VAR11 = 0; VAR11 < 64; VAR11++)
        VAR28[VAR11] = (VAR11 & 7) + (VAR11 >> 3) * VAR29;
    for (VAR14 = 0; VAR14 < VAR34; VAR14++)
    {
        if ((VAR10 = FUN6(VAR2->VAR32, VAR6, &VAR2->VAR39[VAR40])) < 0)
            return VAR10;
        if ((VAR10 = FUN6(VAR2->VAR32, VAR6, &VAR2->VAR39[VAR41])) < 0)
            return VAR10;
        if ((VAR10 = FUN7(VAR6, &VAR2->VAR39[VAR42], VAR2)) < 0)
            return VAR10;
        if ((VAR10 = FUN8(VAR2->VAR32, VAR6, &VAR2->VAR39[VAR43])) < 0)
            return VAR10;
        if ((VAR10 = FUN9(VAR2->VAR32, VAR6, &VAR2->VAR39[VAR44])) < 0)
            return VAR10;
        if ((VAR10 = FUN9(VAR2->VAR32, VAR6, &VAR2->VAR39[VAR45])) < 0)
            return VAR10;
        if ((VAR10 = FUN10(VAR2->VAR32, VAR6, &VAR2->VAR39[VAR46], VAR47, 0)) < 0)
            return VAR10;
        if ((VAR10 = FUN10(VAR2->VAR32, VAR6, &VAR2->VAR39[VAR48], VAR47, 1)) < 0)
            return VAR10;
        if ((VAR10 = FUN11(VAR2->VAR32, VAR6, &VAR2->VAR39[VAR49])) < 0)
            return VAR10;
        if (VAR14 == VAR34)
            break;
        VAR16 = VAR4->VAR38[VAR7] + 8 * VAR14 * VAR29;
        VAR17 = (VAR2->VAR37->VAR38[VAR7] ? VAR2->VAR37->VAR38[VAR7] : VAR4->VAR38[VAR7]) + 8 * VAR14 * VAR29;
        for (VAR13 = 0; VAR13 < VAR31; VAR13++, VAR16 += 8, VAR17 += 8)
        {
            VAR9 = FUN12(VAR2, VAR40);
            if ((VAR14 & 1) && VAR9 == VAR50)
            {
                VAR13++;
                VAR16 += 8;
                VAR17 += 8;
                continue;
            }
            switch (VAR9)
            {
            case VAR51:
                VAR2->VAR52.VAR53[1][0](VAR16, VAR17, VAR29, 8);
                break;
            case VAR50:
                VAR9 = FUN12(VAR2, VAR41);
                switch (VAR9)
                {
                case VAR54:
                    VAR22 = VAR55[FUN13(VAR6, 4)];
                    VAR11 = 0;
                    do
                    {
                        int VAR56 = FUN12(VAR2, VAR49) + 1;
                        VAR11 += VAR56;
                        if (VAR11 > 64)
                        {
                            FUN14(VAR2->VAR32, VAR57, "");
                            return VAR58;
                        }
                        if (FUN15(VAR6))
                        {
                            VAR20 = FUN12(VAR2, VAR42);
                            for (VAR12 = 0; VAR12 < VAR56; VAR12++)
                                VAR25[*VAR22++] = VAR20;
                        }
                        else
                        {
                            for (VAR12 = 0; VAR12 < VAR56; VAR12++)
                                VAR25[*VAR22++] = FUN12(VAR2, VAR42);
                        }
                    } while (VAR11 < 63);
                    if (VAR11 == 63)
                        VAR25[*VAR22++] = FUN12(VAR2, VAR42);
                    break;
                case VAR59:
                    memset(VAR27, 0, sizeof(*VAR27) * 64);
                    VAR27[0] = FUN12(VAR2, VAR46);
                    FUN16(VAR6, VAR27, VAR60, VAR61, -1);
                    VAR2->VAR62.FUN17(VAR25, 8, VAR27);
                    break;
                case VAR63:
                    VAR20 = FUN12(VAR2, VAR42);
                    VAR2->VAR64.VAR65[0](VAR16, VAR20, VAR29, 16);
                    break;
                case VAR66:
                    for (VAR11 = 0; VAR11 < 2; VAR11++)
                        VAR21[VAR11] = FUN12(VAR2, VAR42);
                    for (VAR12 = 0; VAR12 < 8; VAR12++)
                    {
                        VAR20 = FUN12(VAR2, VAR43);
                        for (VAR11 = 0; VAR11 < 8; VAR11++, VAR20 >>= 1)
                            VAR25[VAR11 + VAR12 * 8] = VAR21[VAR20 & 1];
                    }
                    break;
                case VAR67:
                    for (VAR12 = 0; VAR12 < 8; VAR12++)
                        for (VAR11 = 0; VAR11 < 8; VAR11++)
                            VAR25[VAR11 + VAR12 * 8] = FUN12(VAR2, VAR42);
                    break;
                default:
                    FUN14(VAR2->VAR32, VAR57, "", VAR9);
                    return VAR58;
                }
                if (VAR9 != VAR63)
                    VAR2->VAR62.FUN18(VAR25, VAR16, VAR29);
                VAR13++;
                VAR16 += 8;
                VAR17 += 8;
                break;
            case VAR68:
                VAR10 = FUN19(VAR2, VAR16, VAR17, VAR29, VAR18, VAR19);
                if (VAR10 < 0)
                    return VAR10;
                break;
            case VAR54:
                VAR22 = VAR55[FUN13(VAR6, 4)];
                VAR11 = 0;
                do
                {
                    int VAR56 = FUN12(VAR2, VAR49) + 1;
                    VAR11 += VAR56;
                    if (VAR11 > 64)
                    {
                        FUN14(VAR2->VAR32, VAR57, "");
                        return VAR58;
                    }
                    if (FUN15(VAR6))
                    {
                        VAR20 = FUN12(VAR2, VAR42);
                        for (VAR12 = 0; VAR12 < VAR56; VAR12++)
                            VAR16[VAR28[*VAR22++]] = VAR20;
                    }
                    else
                    {
                        for (VAR12 = 0; VAR12 < VAR56; VAR12++)
                            VAR16[VAR28[*VAR22++]] = FUN12(VAR2, VAR42);
                    }
                } while (VAR11 < 63);
                if (VAR11 == 63)
                    VAR16[VAR28[*VAR22++]] = FUN12(VAR2, VAR42);
                break;
            case VAR69:
                VAR10 = FUN19(VAR2, VAR16, VAR17, VAR29, VAR18, VAR19);
                if (VAR10 < 0)
                    return VAR10;
                VAR2->VAR64.FUN20(VAR24);
                VAR20 = FUN13(VAR6, 7);
                FUN21(VAR6, VAR24, VAR20);
                VAR2->VAR62.FUN22(VAR16, VAR24, VAR29);
                break;
            case VAR59:
                memset(VAR27, 0, sizeof(*VAR27) * 64);
                VAR27[0] = FUN12(VAR2, VAR46);
                FUN16(VAR6, VAR27, VAR60, VAR61, -1);
                VAR2->VAR62.FUN17(VAR16, VAR29, VAR27);
                break;
            case VAR63:
                VAR20 = FUN12(VAR2, VAR42);
                VAR2->VAR64.VAR65[1](VAR16, VAR20, VAR29, 8);
                break;
            case VAR70:
                VAR10 = FUN19(VAR2, VAR16, VAR17, VAR29, VAR18, VAR19);
                if (VAR10 < 0)
                    return VAR10;
                memset(VAR27, 0, sizeof(*VAR27) * 64);
                VAR27[0] = FUN12(VAR2, VAR48);
                FUN16(VAR6, VAR27, VAR60, VAR71, -1);
                VAR2->VAR62.FUN23(VAR16, VAR29, VAR27);
                break;
            case VAR66:
                for (VAR11 = 0; VAR11 < 2; VAR11++)
                    VAR21[VAR11] = FUN12(VAR2, VAR42);
                for (VAR11 = 0; VAR11 < 8; VAR11++)
                {
                    VAR20 = FUN12(VAR2, VAR43);
                    for (VAR12 = 0; VAR12 < 8; VAR12++, VAR20 >>= 1)
                        VAR16[VAR11 * VAR29 + VAR12] = VAR21[VAR20 & 1];
                }
                break;
            case VAR67:
                for (VAR11 = 0; VAR11 < 8; VAR11++)
                    memcpy(VAR16 + VAR11 * VAR29, VAR2->VAR39[VAR42].VAR72 + VAR11 * 8, 8);
                VAR2->VAR39[VAR42].VAR72 += 64;
                break;
            default:
                FUN14(VAR2->VAR32, VAR57, "", VAR9);
                return VAR58;
            }
        }
    }
    if (FUN24(VAR6) & 0x1F)
        FUN25(VAR6, 32 - (FUN24(VAR6) & 0x1F));
    return 0;
}