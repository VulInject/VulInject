static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    GetBitContext VAR10;
    int VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    VAR18 *VAR19, *VAR20, *VAR21, *VAR22, *VAR23;
    int VAR24, VAR25[2];
    const VAR18 *VAR26;
    int VAR27, VAR28;
    FUN2(VAR29, VAR30[64]);
    FUN2(VAR18, VAR31[64]);
    int VAR32[64];
    if (VAR8->VAR33.VAR3[0])
        VAR2->FUN3(VAR2, &VAR8->VAR33);
    if (VAR2->FUN4(VAR2, &VAR8->VAR33) < 0)
    {
        FUN5(VAR2, VAR34, "");
        return -1;
    }
    FUN6(&VAR10, VAR6->VAR3, VAR6->VAR35 * 8);
    if (VAR8->VAR36 >= '')
        FUN7(&VAR10, 32);
    for (VAR14 = 0; VAR14 < 3; VAR14++)
    {
        const int VAR37 = VAR8->VAR33.VAR38[VAR14];
        int VAR39 = VAR14 ? (VAR2->VAR40 + 15) >> 4 : (VAR2->VAR40 + 7) >> 3;
        int VAR41 = VAR14 ? (VAR2->VAR42 + 15) >> 4 : (VAR2->VAR42 + 7) >> 3;
        int VAR40 = VAR2->VAR40 >> !!VAR14;
        FUN8(VAR8, FUN9(VAR40, 8), VAR39);
        for (VAR12 = 0; VAR12 < VAR43; VAR12++)
            FUN10(&VAR10, VAR8, VAR12);
        VAR15 = (!VAR14 || !VAR8->VAR44) ? VAR14 : (VAR14 ^ 3);
        VAR22 = VAR8->VAR45.VAR3[VAR15];
        VAR23 = VAR8->VAR45.VAR3[VAR15] + (VAR39 - 1 + VAR8->VAR45.VAR38[VAR15] * (VAR41 - 1)) * 8;
        for (VAR12 = 0; VAR12 < 64; VAR12++)
            VAR32[VAR12] = (VAR12 & 7) + (VAR12 >> 3) * VAR37;
        for (VAR17 = 0; VAR17 < VAR41; VAR17++)
        {
            if (FUN11(VAR2, &VAR10, &VAR8->VAR46[VAR47]) < 0)
                return -1;
            if (FUN11(VAR2, &VAR10, &VAR8->VAR46[VAR48]) < 0)
                return -1;
            if (FUN12(&VAR10, &VAR8->VAR46[VAR49], VAR8) < 0)
                return -1;
            if (FUN13(VAR2, &VAR10, &VAR8->VAR46[VAR50]) < 0)
                return -1;
            if (FUN14(VAR2, &VAR10, &VAR8->VAR46[VAR51]) < 0)
                return -1;
            if (FUN14(VAR2, &VAR10, &VAR8->VAR46[VAR52]) < 0)
                return -1;
            if (FUN15(VAR2, &VAR10, &VAR8->VAR46[VAR53], VAR54, 0) < 0)
                return -1;
            if (FUN15(VAR2, &VAR10, &VAR8->VAR46[VAR55], VAR54, 1) < 0)
                return -1;
            if (FUN16(VAR2, &VAR10, &VAR8->VAR46[VAR56]) < 0)
                return -1;
            if (VAR17 == VAR41)
                break;
            VAR19 = VAR8->VAR33.VAR3[VAR15] + 8 * VAR17 * VAR37;
            VAR20 = VAR8->VAR45.VAR3[VAR15] + 8 * VAR17 * VAR37;
            for (VAR16 = 0; VAR16 < VAR39; VAR16++, VAR19 += 8, VAR20 += 8)
            {
                VAR11 = FUN17(VAR8, VAR47);
                if ((VAR17 & 1) && VAR11 == VAR57)
                {
                    VAR16++;
                    VAR19 += 8;
                    VAR20 += 8;
                    continue;
                }
                switch (VAR11)
                {
                case VAR58:
                    VAR8->VAR59.VAR60[1][0](VAR19, VAR20, VAR37, 8);
                    break;
                case VAR57:
                    VAR11 = FUN17(VAR8, VAR48);
                    switch (VAR11)
                    {
                    case VAR61:
                        VAR26 = VAR62[FUN18(&VAR10, 4)];
                        VAR12 = 0;
                        do
                        {
                            int VAR63 = FUN17(VAR8, VAR56) + 1;
                            VAR12 += VAR63;
                            if (VAR12 > 64)
                            {
                                FUN5(VAR2, VAR34, "");
                                return -1;
                            }
                            if (FUN19(&VAR10))
                            {
                                VAR24 = FUN17(VAR8, VAR49);
                                for (VAR13 = 0; VAR13 < VAR63; VAR13++)
                                    VAR31[*VAR26++] = VAR24;
                            }
                            else
                            {
                                for (VAR13 = 0; VAR13 < VAR63; VAR13++)
                                    VAR31[*VAR26++] = FUN17(VAR8, VAR49);
                            }
                        } while (VAR12 < 63);
                        if (VAR12 == 63)
                            VAR31[*VAR26++] = FUN17(VAR8, VAR49);
                        break;
                    case VAR64:
                        VAR8->VAR59.FUN20(VAR30);
                        VAR30[0] = FUN17(VAR8, VAR53);
                        FUN21(&VAR10, VAR30, VAR8->VAR65.VAR66, 1);
                        VAR8->VAR59.FUN22(VAR30);
                        VAR8->VAR59.FUN23(VAR30, VAR31, 8);
                        break;
                    case VAR67:
                        VAR24 = FUN17(VAR8, VAR49);
                        VAR8->VAR59.VAR68[0](VAR19, VAR24, VAR37, 16);
                        break;
                    case VAR69:
                        for (VAR12 = 0; VAR12 < 2; VAR12++)
                            VAR25[VAR12] = FUN17(VAR8, VAR49);
                        for (VAR13 = 0; VAR13 < 8; VAR13++)
                        {
                            VAR24 = FUN17(VAR8, VAR50);
                            for (VAR12 = 0; VAR12 < 8; VAR12++, VAR24 >>= 1)
                                VAR31[VAR12 + VAR13 * 8] = VAR25[VAR24 & 1];
                        }
                        break;
                    case VAR70:
                        for (VAR13 = 0; VAR13 < 8; VAR13++)
                            for (VAR12 = 0; VAR12 < 8; VAR12++)
                                VAR31[VAR12 + VAR13 * 8] = FUN17(VAR8, VAR49);
                        break;
                    default:
                        FUN5(VAR2, VAR34, "", VAR11);
                        return -1;
                    }
                    if (VAR11 != VAR67)
                        VAR8->VAR59.FUN24(VAR31, VAR19, VAR37);
                    VAR16++;
                    VAR19 += 8;
                    VAR20 += 8;
                    break;
                case VAR71:
                    VAR27 = FUN17(VAR8, VAR51);
                    VAR28 = FUN17(VAR8, VAR52);
                    VAR21 = VAR20 + VAR27 + VAR28 * VAR37;
                    if (VAR21 < VAR22 || VAR21 > VAR23)
                    {
                        FUN5(VAR2, VAR34, "", VAR16 * 8 + VAR27, VAR17 * 8 + VAR28);
                        return -1;
                    }
                    VAR8->VAR59.VAR60[1][0](VAR19, VAR21, VAR37, 8);
                    break;
                case VAR61:
                    VAR26 = VAR62[FUN18(&VAR10, 4)];
                    VAR12 = 0;
                    do
                    {
                        int VAR63 = FUN17(VAR8, VAR56) + 1;
                        VAR12 += VAR63;
                        if (VAR12 > 64)
                        {
                            FUN5(VAR2, VAR34, "");
                            return -1;
                        }
                        if (FUN19(&VAR10))
                        {
                            VAR24 = FUN17(VAR8, VAR49);
                            for (VAR13 = 0; VAR13 < VAR63; VAR13++)
                                VAR19[VAR32[*VAR26++]] = VAR24;
                        }
                        else
                        {
                            for (VAR13 = 0; VAR13 < VAR63; VAR13++)
                                VAR19[VAR32[*VAR26++]] = FUN17(VAR8, VAR49);
                        }
                    } while (VAR12 < 63);
                    if (VAR12 == 63)
                        VAR19[VAR32[*VAR26++]] = FUN17(VAR8, VAR49);
                    break;
                case VAR72:
                    VAR27 = FUN17(VAR8, VAR51);
                    VAR28 = FUN17(VAR8, VAR52);
                    VAR21 = VAR20 + VAR27 + VAR28 * VAR37;
                    if (VAR21 < VAR22 || VAR21 > VAR23)
                    {
                        FUN5(VAR2, VAR34, "", VAR16 * 8 + VAR27, VAR17 * 8 + VAR28);
                        return -1;
                    }
                    VAR8->VAR59.VAR60[1][0](VAR19, VAR21, VAR37, 8);
                    VAR8->VAR59.FUN20(VAR30);
                    VAR24 = FUN18(&VAR10, 7);
                    FUN25(&VAR10, VAR30, VAR24);
                    VAR8->VAR59.FUN26(VAR19, VAR30, VAR37);
                    break;
                case VAR64:
                    VAR8->VAR59.FUN20(VAR30);
                    VAR30[0] = FUN17(VAR8, VAR53);
                    FUN21(&VAR10, VAR30, VAR8->VAR65.VAR66, 1);
                    VAR8->VAR59.FUN27(VAR19, VAR37, VAR30);
                    break;
                case VAR67:
                    VAR24 = FUN17(VAR8, VAR49);
                    VAR8->VAR59.VAR68[1](VAR19, VAR24, VAR37, 8);
                    break;
                case VAR73:
                    VAR27 = FUN17(VAR8, VAR51);
                    VAR28 = FUN17(VAR8, VAR52);
                    VAR21 = VAR20 + VAR27 + VAR28 * VAR37;
                    VAR8->VAR59.VAR60[1][0](VAR19, VAR21, VAR37, 8);
                    VAR8->VAR59.FUN20(VAR30);
                    VAR30[0] = FUN17(VAR8, VAR55);
                    FUN21(&VAR10, VAR30, VAR8->VAR65.VAR66, 0);
                    VAR8->VAR59.FUN28(VAR19, VAR37, VAR30);
                    break;
                case VAR69:
                    for (VAR12 = 0; VAR12 < 2; VAR12++)
                        VAR25[VAR12] = FUN17(VAR8, VAR49);
                    for (VAR12 = 0; VAR12 < 8; VAR12++)
                    {
                        VAR24 = FUN17(VAR8, VAR50);
                        for (VAR13 = 0; VAR13 < 8; VAR13++, VAR24 >>= 1)
                            VAR19[VAR12 * VAR37 + VAR13] = VAR25[VAR24 & 1];
                    }
                    break;
                case VAR70:
                    for (VAR12 = 0; VAR12 < 8; VAR12++)
                        memcpy(VAR19 + VAR12 * VAR37, VAR8->VAR46[VAR49].VAR74 + VAR12 * 8, 8);
                    VAR8->VAR46[VAR49].VAR74 += 64;
                    break;
                default:
                    FUN5(VAR2, VAR34, "", VAR11);
                    return -1;
                }
            }
        }
        if (FUN29(&VAR10) & 0x1F)
            FUN7(&VAR10, 32 - (FUN29(&VAR10) & 0x1F));
    }
    FUN30();
    *VAR4 = sizeof(VAR75);
    *(VAR75 *)VAR3 = VAR8->VAR33;
    FUN31(VAR75, VAR8->VAR33, VAR8->VAR45);
    return VAR6->VAR35;
}