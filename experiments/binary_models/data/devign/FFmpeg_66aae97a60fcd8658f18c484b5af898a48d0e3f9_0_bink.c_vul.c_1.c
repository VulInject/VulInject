static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    VAR12 *VAR13, *VAR14, *VAR15, *VAR16, *VAR17;
    int VAR18, VAR19[2];
    const VAR12 *VAR20;
    int VAR21, VAR22;
    FUN2(VAR23, VAR24, [64]);
    FUN2(VAR12, VAR25, [64]);
    FUN2(VAR26, VAR27, [64]);
    int VAR28[64];
    const int VAR29 = VAR2->VAR30.VAR31[VAR5];
    int VAR32 = VAR6 ? (VAR2->VAR33->VAR34 + 15) >> 4 : (VAR2->VAR33->VAR34 + 7) >> 3;
    int VAR35 = VAR6 ? (VAR2->VAR33->VAR36 + 15) >> 4 : (VAR2->VAR33->VAR36 + 7) >> 3;
    int VAR34 = VAR2->VAR33->VAR34 >> VAR6;
    FUN3(VAR2, FUN4(VAR34, 8), VAR32);
    for (VAR8 = 0; VAR8 < VAR37; VAR8++)
        FUN5(VAR4, VAR2, VAR8);
    VAR16 = VAR2->VAR38.VAR39[VAR5];
    VAR17 = VAR2->VAR38.VAR39[VAR5] + (VAR32 - 1 + VAR2->VAR38.VAR31[VAR5] * (VAR35 - 1)) * 8;
    for (VAR8 = 0; VAR8 < 64; VAR8++)
        VAR28[VAR8] = (VAR8 & 7) + (VAR8 >> 3) * VAR29;
    for (VAR11 = 0; VAR11 < VAR35; VAR11++)
    {
        if (FUN6(VAR2->VAR33, VAR4, &VAR2->VAR40[VAR41]) < 0)
            return -1;
        if (FUN6(VAR2->VAR33, VAR4, &VAR2->VAR40[VAR42]) < 0)
            return -1;
        if (FUN7(VAR4, &VAR2->VAR40[VAR43], VAR2) < 0)
            return -1;
        if (FUN8(VAR2->VAR33, VAR4, &VAR2->VAR40[VAR44]) < 0)
            return -1;
        if (FUN9(VAR2->VAR33, VAR4, &VAR2->VAR40[VAR45]) < 0)
            return -1;
        if (FUN9(VAR2->VAR33, VAR4, &VAR2->VAR40[VAR46]) < 0)
            return -1;
        if (FUN10(VAR2->VAR33, VAR4, &VAR2->VAR40[VAR47], VAR48, 0) < 0)
            return -1;
        if (FUN10(VAR2->VAR33, VAR4, &VAR2->VAR40[VAR49], VAR48, 1) < 0)
            return -1;
        if (FUN11(VAR2->VAR33, VAR4, &VAR2->VAR40[VAR50]) < 0)
            return -1;
        if (VAR11 == VAR35)
            break;
        VAR13 = VAR2->VAR30.VAR39[VAR5] + 8 * VAR11 * VAR29;
        VAR14 = VAR2->VAR38.VAR39[VAR5] + 8 * VAR11 * VAR29;
        for (VAR10 = 0; VAR10 < VAR32; VAR10++, VAR13 += 8, VAR14 += 8)
        {
            VAR7 = FUN12(VAR2, VAR41);
            if ((VAR11 & 1) && VAR7 == VAR51)
            {
                VAR10++;
                VAR13 += 8;
                VAR14 += 8;
                continue;
            }
            switch (VAR7)
            {
            case VAR52:
                VAR2->VAR53.VAR54[1][0](VAR13, VAR14, VAR29, 8);
                break;
            case VAR51:
                VAR7 = FUN12(VAR2, VAR42);
                switch (VAR7)
                {
                case VAR55:
                    VAR20 = VAR56[FUN13(VAR4, 4)];
                    VAR8 = 0;
                    do
                    {
                        int VAR57 = FUN12(VAR2, VAR50) + 1;
                        VAR8 += VAR57;
                        if (VAR8 > 64)
                        {
                            FUN14(VAR2->VAR33, VAR58, "");
                            return -1;
                        }
                        if (FUN15(VAR4))
                        {
                            VAR18 = FUN12(VAR2, VAR43);
                            for (VAR9 = 0; VAR9 < VAR57; VAR9++)
                                VAR25[*VAR20++] = VAR18;
                        }
                        else
                        {
                            for (VAR9 = 0; VAR9 < VAR57; VAR9++)
                                VAR25[*VAR20++] = FUN12(VAR2, VAR43);
                        }
                    } while (VAR8 < 63);
                    if (VAR8 == 63)
                        VAR25[*VAR20++] = FUN12(VAR2, VAR43);
                    break;
                case VAR59:
                    memset(VAR27, 0, sizeof(*VAR27) * 64);
                    VAR27[0] = FUN12(VAR2, VAR47);
                    FUN16(VAR4, VAR27, VAR60, VAR61, -1);
                    VAR2->VAR62.FUN17(VAR25, 8, VAR27);
                    break;
                case VAR63:
                    VAR18 = FUN12(VAR2, VAR43);
                    VAR2->VAR53.VAR64[0](VAR13, VAR18, VAR29, 16);
                    break;
                case VAR65:
                    for (VAR8 = 0; VAR8 < 2; VAR8++)
                        VAR19[VAR8] = FUN12(VAR2, VAR43);
                    for (VAR9 = 0; VAR9 < 8; VAR9++)
                    {
                        VAR18 = FUN12(VAR2, VAR44);
                        for (VAR8 = 0; VAR8 < 8; VAR8++, VAR18 >>= 1)
                            VAR25[VAR8 + VAR9 * 8] = VAR19[VAR18 & 1];
                    }
                    break;
                case VAR66:
                    for (VAR9 = 0; VAR9 < 8; VAR9++)
                        for (VAR8 = 0; VAR8 < 8; VAR8++)
                            VAR25[VAR8 + VAR9 * 8] = FUN12(VAR2, VAR43);
                    break;
                default:
                    FUN14(VAR2->VAR33, VAR58, "", VAR7);
                    return -1;
                }
                if (VAR7 != VAR63)
                    VAR2->VAR62.FUN18(VAR25, VAR13, VAR29);
                VAR10++;
                VAR13 += 8;
                VAR14 += 8;
                break;
            case VAR67:
                VAR21 = FUN12(VAR2, VAR45);
                VAR22 = FUN12(VAR2, VAR46);
                VAR15 = VAR14 + VAR21 + VAR22 * VAR29;
                if (VAR15 < VAR16 || VAR15 > VAR17)
                {
                    FUN14(VAR2->VAR33, VAR58, "", VAR10 * 8 + VAR21, VAR11 * 8 + VAR22);
                    return -1;
                }
                VAR2->VAR53.VAR54[1][0](VAR13, VAR15, VAR29, 8);
                break;
            case VAR55:
                VAR20 = VAR56[FUN13(VAR4, 4)];
                VAR8 = 0;
                do
                {
                    int VAR57 = FUN12(VAR2, VAR50) + 1;
                    VAR8 += VAR57;
                    if (VAR8 > 64)
                    {
                        FUN14(VAR2->VAR33, VAR58, "");
                        return -1;
                    }
                    if (FUN15(VAR4))
                    {
                        VAR18 = FUN12(VAR2, VAR43);
                        for (VAR9 = 0; VAR9 < VAR57; VAR9++)
                            VAR13[VAR28[*VAR20++]] = VAR18;
                    }
                    else
                    {
                        for (VAR9 = 0; VAR9 < VAR57; VAR9++)
                            VAR13[VAR28[*VAR20++]] = FUN12(VAR2, VAR43);
                    }
                } while (VAR8 < 63);
                if (VAR8 == 63)
                    VAR13[VAR28[*VAR20++]] = FUN12(VAR2, VAR43);
                break;
            case VAR68:
                VAR21 = FUN12(VAR2, VAR45);
                VAR22 = FUN12(VAR2, VAR46);
                VAR15 = VAR14 + VAR21 + VAR22 * VAR29;
                if (VAR15 < VAR16 || VAR15 > VAR17)
                {
                    FUN14(VAR2->VAR33, VAR58, "", VAR10 * 8 + VAR21, VAR11 * 8 + VAR22);
                    return -1;
                }
                VAR2->VAR53.VAR54[1][0](VAR13, VAR15, VAR29, 8);
                VAR2->VAR53.FUN19(VAR24);
                VAR18 = FUN13(VAR4, 7);
                FUN20(VAR4, VAR24, VAR18);
                VAR2->VAR53.FUN21(VAR13, VAR24, VAR29);
                break;
            case VAR59:
                memset(VAR27, 0, sizeof(*VAR27) * 64);
                VAR27[0] = FUN12(VAR2, VAR47);
                FUN16(VAR4, VAR27, VAR60, VAR61, -1);
                VAR2->VAR62.FUN17(VAR13, VAR29, VAR27);
                break;
            case VAR63:
                VAR18 = FUN12(VAR2, VAR43);
                VAR2->VAR53.VAR64[1](VAR13, VAR18, VAR29, 8);
                break;
            case VAR69:
                VAR21 = FUN12(VAR2, VAR45);
                VAR22 = FUN12(VAR2, VAR46);
                VAR15 = VAR14 + VAR21 + VAR22 * VAR29;
                VAR2->VAR53.VAR54[1][0](VAR13, VAR15, VAR29, 8);
                memset(VAR27, 0, sizeof(*VAR27) * 64);
                VAR27[0] = FUN12(VAR2, VAR49);
                FUN16(VAR4, VAR27, VAR60, VAR70, -1);
                VAR2->VAR62.FUN22(VAR13, VAR29, VAR27);
                break;
            case VAR65:
                for (VAR8 = 0; VAR8 < 2; VAR8++)
                    VAR19[VAR8] = FUN12(VAR2, VAR43);
                for (VAR8 = 0; VAR8 < 8; VAR8++)
                {
                    VAR18 = FUN12(VAR2, VAR44);
                    for (VAR9 = 0; VAR9 < 8; VAR9++, VAR18 >>= 1)
                        VAR13[VAR8 * VAR29 + VAR9] = VAR19[VAR18 & 1];
                }
                break;
            case VAR66:
                for (VAR8 = 0; VAR8 < 8; VAR8++)
                    memcpy(VAR13 + VAR8 * VAR29, VAR2->VAR40[VAR43].VAR71 + VAR8 * 8, 8);
                VAR2->VAR40[VAR43].VAR71 += 64;
                break;
            default:
                FUN14(VAR2->VAR33, VAR58, "", VAR7);
                return -1;
            }
        }
    }
    if (FUN23(VAR4) & 0x1F)
        FUN24(VAR4, 32 - (FUN23(VAR4) & 0x1F));
    return 0;
}