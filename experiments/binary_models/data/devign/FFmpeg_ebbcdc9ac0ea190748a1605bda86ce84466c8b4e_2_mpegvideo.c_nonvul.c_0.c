static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6 = 0;
    int VAR7;
    int VAR8;
    MpegEncContext VAR9, VAR10;
    uint8_t VAR11[2][3000];
    uint8_t VAR12[2][3000];
    uint8_t VAR13[2][3000];
    PutBitContext VAR14[2], VAR15[2], VAR16[2];
    for (VAR7 = 0; VAR7 < 2; VAR7++)
    {
        FUN2(&VAR14[VAR7], VAR11[VAR7], 3000, NULL, NULL);
        FUN2(&VAR15[VAR7], VAR12[VAR7], 3000, NULL, NULL);
        FUN2(&VAR16[VAR7], VAR13[VAR7], 3000, NULL, NULL);
    }
    VAR2->VAR3 = VAR3;
    VAR2->VAR17[0] = VAR2->VAR17[1] = VAR2->VAR17[2] = VAR2->VAR17[3] = VAR2->VAR18 * 2 + 2;
    VAR2->VAR17[4] = VAR2->VAR17[5] = VAR2->VAR18 + 2;
    VAR2->VAR19.VAR20 = 0;
    VAR2->VAR19.VAR21 = 0;
    if (VAR2->VAR22 == VAR23 || (VAR2->VAR24 && !VAR2->VAR25))
        FUN3(VAR2, VAR2->VAR3);
    VAR2->VAR26 = 0;
    VAR2->VAR27 = (int)(VAR2->VAR28 + 0.5);
    if (VAR2->VAR29)
    {
        if (VAR2->VAR30 == VAR31)
            VAR2->VAR32 = 1;
        else if (VAR2->VAR33)
            VAR2->VAR32 ^= 1;
    }
    else if (VAR2->VAR34 == VAR35)
    {
        if (VAR2->VAR30 == VAR31)
            VAR2->VAR32 = 0;
        else if (VAR2->VAR30 != VAR36)
            VAR2->VAR32 ^= 1;
    }
    VAR2->VAR37 = 0;
    if (VAR2->VAR30 != VAR31)
    {
        if (VAR2->VAR30 != VAR36)
        {
            if ((VAR2->VAR38->VAR39 && VAR2->VAR40 == VAR31) || VAR2->VAR38->VAR39 == 2)
            {
                VAR2->VAR41.VAR42 = 1;
                VAR2->VAR41.VAR43 = VAR2->VAR38->VAR44;
                for (VAR5 = VAR2->VAR45 - 1; VAR5 >= 0; VAR5--)
                {
                    for (VAR4 = VAR2->VAR18 - 1; VAR4 >= 0; VAR4--)
                    {
                        VAR2->VAR4 = VAR4;
                        VAR2->VAR5 = VAR5;
                        FUN4(VAR2, VAR4, VAR5);
                    }
                }
                VAR2->VAR41.VAR42 = 0;
            }
        }
        VAR2->VAR41.VAR43 = VAR2->VAR38->VAR43;
        for (VAR5 = 0; VAR5 < VAR2->VAR45; VAR5++)
        {
            VAR2->VAR46[0] = VAR2->VAR17[0] * (VAR5 * 2 + 1) - 1;
            VAR2->VAR46[1] = VAR2->VAR17[0] * (VAR5 * 2 + 1);
            VAR2->VAR46[2] = VAR2->VAR17[0] * (VAR5 * 2 + 2) - 1;
            VAR2->VAR46[3] = VAR2->VAR17[0] * (VAR5 * 2 + 2);
            for (VAR4 = 0; VAR4 < VAR2->VAR18; VAR4++)
            {
                VAR2->VAR4 = VAR4;
                VAR2->VAR5 = VAR5;
                VAR2->VAR46[0] += 2;
                VAR2->VAR46[1] += 2;
                VAR2->VAR46[2] += 2;
                VAR2->VAR46[3] += 2;
                if (VAR2->VAR30 == VAR36)
                    FUN5(VAR2, VAR4, VAR5);
                else
                    FUN6(VAR2, VAR4, VAR5);
            }
        }
    }
    else
    {
        memset(VAR2->VAR47[0], 0, sizeof(VAR48) * (VAR2->VAR18 * 2 + 2) * (VAR2->VAR45 * 2 + 2) * 2);
        memset(VAR2->VAR49, 0, sizeof(VAR48) * (VAR2->VAR18 + 2) * (VAR2->VAR45 + 2) * 2);
        memset(VAR2->VAR50, VAR51, sizeof(VAR52) * VAR2->VAR18 * VAR2->VAR45);
        if (!VAR2->VAR53)
        {
            for (VAR5 = 0; VAR5 < VAR2->VAR45; VAR5++)
            {
                for (VAR4 = 0; VAR4 < VAR2->VAR18; VAR4++)
                {
                    int VAR54 = VAR4 * 16;
                    int VAR55 = VAR5 * 16;
                    VAR52 *VAR56 = VAR2->VAR57.VAR58[0] + (VAR55 * VAR2->VAR59) + VAR54;
                    int VAR60;
                    int VAR61 = VAR2->VAR62.FUN7(VAR56, VAR2->VAR59);
                    VAR60 = (VAR2->VAR62.FUN8(VAR56, VAR2->VAR59) - (((unsigned)(VAR61 * VAR61)) >> 8) + 500 + 128) >> 8;
                    VAR2->VAR19.VAR63[VAR2->VAR18 * VAR5 + VAR4] = VAR60;
                    VAR2->VAR19.VAR64[VAR2->VAR18 * VAR5 + VAR4] = (VAR61 + 128) >> 8;
                    VAR2->VAR19.VAR20 += VAR60;
                }
            }
        }
    }
    FUN9();
    if (VAR2->VAR26 > 0 && VAR2->VAR30 == VAR65)
    {
        VAR2->VAR30 = VAR31;
        memset(VAR2->VAR50, VAR51, sizeof(VAR52) * VAR2->VAR18 * VAR2->VAR45);
    }
    if (VAR2->VAR22 != VAR66)
    {
        if (VAR2->VAR30 == VAR65 || VAR2->VAR30 == VAR67)
        {
            VAR2->VAR68 = FUN10(VAR2, VAR2->VAR49, VAR69);
            FUN11(VAR2);
        }
        if (VAR2->VAR30 == VAR36)
        {
            int VAR70, VAR71;
            VAR70 = FUN10(VAR2, VAR2->VAR72, VAR73);
            VAR71 = FUN10(VAR2, VAR2->VAR74, VAR75);
            VAR2->VAR68 = FUN12(VAR70, VAR71);
            VAR70 = FUN10(VAR2, VAR2->VAR76, VAR77);
            VAR71 = FUN10(VAR2, VAR2->VAR78, VAR75);
            VAR2->VAR79 = FUN12(VAR70, VAR71);
            FUN13(VAR2, VAR2->VAR72, VAR2->VAR68, VAR73);
            FUN13(VAR2, VAR2->VAR76, VAR2->VAR79, VAR77);
            FUN13(VAR2, VAR2->VAR74, VAR2->VAR68, VAR75);
            FUN13(VAR2, VAR2->VAR78, VAR2->VAR79, VAR75);
        }
    }
    if (VAR2->VAR53)
        VAR2->VAR28 = VAR2->VAR19.VAR80;
    else
        VAR2->VAR28 = FUN14(VAR2);
    if (VAR2->VAR81)
    {
        switch (VAR2->VAR22)
        {
        case VAR82:
            FUN15(VAR2);
            break;
        case VAR83:
        case VAR66:
            FUN16(VAR2);
            break;
        }
        VAR2->VAR27 = VAR2->VAR19.VAR84[0];
    }
    else
        VAR2->VAR27 = (int)(VAR2->VAR28 + 0.5);
    if (VAR2->VAR34 == VAR85)
    {
        VAR2->VAR86[0] = VAR87[0];
        for (VAR7 = 1; VAR7 < 64; VAR7++)
        {
            int VAR88 = VAR2->VAR89[VAR7];
            VAR2->VAR86[VAR88] = FUN17((VAR87[VAR7] * VAR2->VAR27) >> 3);
        }
        FUN18(VAR2, VAR2->VAR90, VAR2->VAR91, VAR2->VAR92, VAR2->VAR86, VAR2->VAR93, 8, 8);
    }
    VAR2->VAR19.VAR94 = VAR2->VAR30 == VAR31;
    VAR2->VAR19.VAR30 = VAR2->VAR30;
    if (VAR2->VAR19.VAR94)
        VAR2->VAR95 = 0;
    VAR2->VAR96 = FUN19(&VAR2->VAR14);
    switch (VAR2->VAR34)
    {
    case VAR85:
        FUN20(VAR2);
        break;
    case VAR35:
        if (VAR2->VAR22 == VAR97)
            FUN21(VAR2, VAR3);
        else if (VAR2->VAR25)
            FUN22(VAR2, VAR3);
        else if (VAR2->VAR24)
            FUN23(VAR2, VAR3);
        else if (VAR2->VAR98)
            FUN24(VAR2, VAR3);
        else
            FUN25(VAR2, VAR3);
        break;
    case VAR99:
        FUN26(VAR2, VAR3);
        break;
    }
    VAR8 = FUN19(&VAR2->VAR14);
    VAR2->VAR100 = VAR8 - VAR2->VAR96;
    VAR2->VAR96 = VAR8;
    VAR2->VAR101 = 0;
    VAR2->VAR102 = 0;
    VAR2->VAR103 = 0;
    VAR2->VAR104 = 0;
    VAR2->VAR105 = 0;
    VAR2->VAR106 = 0;
    VAR2->VAR107 = 0;
    VAR2->VAR108 = 0;
    for (VAR7 = 0; VAR7 < 3; VAR7++)
    {
        VAR2->VAR109[VAR7] = 128;
        VAR2->VAR19.VAR110[VAR7] = 0;
    }
    VAR2->VAR111 = 1;
    VAR2->VAR112[0][0][0] = 0;
    VAR2->VAR112[0][0][1] = 0;
    VAR2->VAR112[1][0][0] = 0;
    VAR2->VAR112[1][0][1] = 0;
    VAR2->VAR113 = 0;
    if (VAR2->VAR22 == VAR83 || VAR2->VAR22 == VAR66)
        VAR2->VAR114 = FUN27(VAR2);
    if (VAR2->VAR22 == VAR82 && VAR2->VAR115)
        FUN28(VAR2);
    VAR2->VAR116 = 0;
    VAR2->VAR117 = 0;
    VAR2->VAR118 = 1;
    VAR2->VAR119 = VAR2->VAR14.VAR120;
    VAR2->VAR121 = VAR2->VAR14.VAR120;
    for (VAR5 = 0; VAR5 < VAR2->VAR45; VAR5++)
    {
        VAR2->VAR122 = VAR2->VAR123[VAR2->VAR27];
        VAR2->VAR124 = VAR2->VAR125[VAR2->VAR27];
        VAR2->VAR46[0] = VAR2->VAR17[0] * (VAR5 * 2 + 1) - 1;
        VAR2->VAR46[1] = VAR2->VAR17[0] * (VAR5 * 2 + 1);
        VAR2->VAR46[2] = VAR2->VAR17[0] * (VAR5 * 2 + 2) - 1;
        VAR2->VAR46[3] = VAR2->VAR17[0] * (VAR5 * 2 + 2);
        VAR2->VAR46[4] = VAR2->VAR17[4] * (VAR5 + 1) + VAR2->VAR17[0] * (VAR2->VAR45 * 2 + 2);
        VAR2->VAR46[5] = VAR2->VAR17[4] * (VAR5 + 1 + VAR2->VAR45 + 2) + VAR2->VAR17[0] * (VAR2->VAR45 * 2 + 2);
        for (VAR4 = 0; VAR4 < VAR2->VAR18; VAR4++)
        {
            int VAR50 = VAR2->VAR50[VAR5 * VAR2->VAR18 + VAR4];
            const int VAR126 = (VAR5 + 1) * (VAR2->VAR18 + 2) + VAR4 + 1;
            int VAR127 = 10000000;
            VAR2->VAR4 = VAR4;
            VAR2->VAR5 = VAR5;
            VAR2->VAR46[0] += 2;
            VAR2->VAR46[1] += 2;
            VAR2->VAR46[2] += 2;
            VAR2->VAR46[3] += 2;
            VAR2->VAR46[4]++;
            VAR2->VAR46[5]++;
            if (VAR2->VAR128)
            {
                int VAR129, VAR130;
                VAR129 = FUN29(&VAR2->VAR14) - VAR2->VAR119;
                VAR130 = 0;
                if (VAR2->VAR22 == VAR82)
                {
                    if (VAR129 + VAR2->VAR131 / VAR2->VAR18 >= VAR2->VAR132 && VAR2->VAR5 + VAR2->VAR4 > 0)
                    {
                        if (VAR2->VAR115)
                        {
                            FUN30(VAR2);
                            FUN28(VAR2);
                        }
                        FUN31(VAR2);
                        if (VAR2->VAR133 & VAR134)
                        {
                            int VAR8 = FUN19(&VAR2->VAR14);
                            VAR2->VAR102 += VAR8 - VAR2->VAR96;
                            VAR2->VAR96 = VAR8;
                        }
                        FUN32(VAR2);
                        VAR130 = 1;
                    }
                }
                else
                {
                    if (VAR129 + VAR2->VAR131 * VAR2->VAR114 >= VAR2->VAR132 && VAR2->VAR4 == 0 && VAR2->VAR5 > 0 && VAR2->VAR5 % VAR2->VAR114 == 0)
                    {
                        FUN33(VAR2, VAR5);
                        VAR130 = 1;
                    }
                }
                if (VAR130)
                {
                    VAR2->VAR119 = FUN29(&VAR2->VAR14);
                    VAR2->VAR118 = 1;
                    VAR2->VAR116 = VAR4;
                    VAR2->VAR117 = VAR5;
                }
            }
            if ((VAR2->VAR116 == VAR2->VAR4) && VAR2->VAR117 + 1 == VAR2->VAR5)
            {
                VAR2->VAR118 = 0;
            }
            if (VAR50 & (VAR50 - 1))
            {
                int VAR135 = 0;
                int VAR136, VAR137, VAR138;
                FUN34(&VAR10, VAR2, -1);
                VAR10.VAR14 = VAR2->VAR14;
                VAR9.VAR139 = VAR2->VAR139;
                VAR9.VAR115 = VAR2->VAR115;
                if (VAR2->VAR139)
                {
                    VAR10.VAR15 = VAR2->VAR15;
                    VAR10.VAR16 = VAR2->VAR16;
                }
                if (VAR50 & VAR69)
                {
                    VAR2->VAR140 = VAR141;
                    VAR2->VAR142 = VAR143;
                    VAR2->VAR37 = 0;
                    VAR2->VAR144[0][0][0] = VAR2->VAR49[VAR126][0];
                    VAR2->VAR144[0][0][1] = VAR2->VAR49[VAR126][1];
                    FUN35(VAR2, &VAR10, &VAR9, VAR69, VAR14, VAR15, VAR16, &VAR127, &VAR135, VAR2->VAR144[0][0][0], VAR2->VAR144[0][0][1]);
                }
                if (VAR50 & VAR145)
                {
                    VAR2->VAR140 = VAR141;
                    VAR2->VAR142 = VAR146;
                    VAR2->VAR37 = 0;
                    for (VAR7 = 0; VAR7 < 4; VAR7++)
                    {
                        VAR2->VAR144[0][VAR7][0] = VAR2->VAR47[VAR2->VAR46[VAR7]][0];
                        VAR2->VAR144[0][VAR7][1] = VAR2->VAR47[VAR2->VAR46[VAR7]][1];
                    }
                    FUN35(VAR2, &VAR10, &VAR9, VAR145, VAR14, VAR15, VAR16, &VAR127, &VAR135, 0, 0);
                }
                if (VAR50 & VAR73)
                {
                    VAR2->VAR140 = VAR141;
                    VAR2->VAR142 = VAR143;
                    VAR2->VAR37 = 0;
                    VAR2->VAR144[0][0][0] = VAR2->VAR72[VAR126][0];
                    VAR2->VAR144[0][0][1] = VAR2->VAR72[VAR126][1];
                    FUN35(VAR2, &VAR10, &VAR9, VAR73, VAR14, VAR15, VAR16, &VAR127, &VAR135, VAR2->VAR144[0][0][0], VAR2->VAR144[0][0][1]);
                }
                if (VAR50 & VAR77)
                {
                    VAR2->VAR140 = VAR147;
                    VAR2->VAR142 = VAR143;
                    VAR2->VAR37 = 0;
                    VAR2->VAR144[1][0][0] = VAR2->VAR76[VAR126][0];
                    VAR2->VAR144[1][0][1] = VAR2->VAR76[VAR126][1];
                    FUN35(VAR2, &VAR10, &VAR9, VAR77, VAR14, VAR15, VAR16, &VAR127, &VAR135, VAR2->VAR144[1][0][0], VAR2->VAR144[1][0][1]);
                }
                if (VAR50 & VAR75)
                {
                    VAR2->VAR140 = VAR141 | VAR147;
                    VAR2->VAR142 = VAR143;
                    VAR2->VAR37 = 0;
                    VAR2->VAR144[0][0][0] = VAR2->VAR74[VAR126][0];
                    VAR2->VAR144[0][0][1] = VAR2->VAR74[VAR126][1];
                    VAR2->VAR144[1][0][0] = VAR2->VAR78[VAR126][0];
                    VAR2->VAR144[1][0][1] = VAR2->VAR78[VAR126][1];
                    FUN35(VAR2, &VAR10, &VAR9, VAR75, VAR14, VAR15, VAR16, &VAR127, &VAR135, 0, 0);
                }
                if (VAR50 & VAR148)
                {
                    int VAR149 = VAR2->VAR150[VAR126][0];
                    int VAR151 = VAR2->VAR150[VAR126][1];
                    VAR2->VAR140 = VAR141 | VAR147 | VAR152;
                    VAR2->VAR37 = 0;
                    FUN36(VAR2, VAR149, VAR151);
                    FUN35(VAR2, &VAR10, &VAR9, VAR148, VAR14, VAR15, VAR16, &VAR127, &VAR135, VAR149, VAR151);
                }
                if (VAR50 & VAR51)
                {
                    VAR2->VAR140 = 0;
                    VAR2->VAR142 = VAR143;
                    VAR2->VAR37 = 1;
                    VAR2->VAR144[0][0][0] = 0;
                    VAR2->VAR144[0][0][1] = 0;
                    FUN35(VAR2, &VAR10, &VAR9, VAR51, VAR14, VAR15, VAR16, &VAR127, &VAR135, 0, 0);
                    if (VAR2->VAR24 || VAR2->VAR153)
                        VAR2->VAR154[VAR4 + VAR5 * VAR2->VAR18] = 1;
                }
                FUN37(VAR2, &VAR9, -1);
                VAR136 = FUN19(&VAR2->VAR14);
                FUN38(&VAR2->VAR14);
                FUN39(&VAR10.VAR14, VAR11[VAR135 ^ 1], VAR136);
                VAR2->VAR14 = VAR10.VAR14;
                if (VAR2->VAR139)
                {
                    VAR137 = FUN19(&VAR2->VAR15);
                    FUN38(&VAR2->VAR15);
                    FUN39(&VAR10.VAR15, VAR12[VAR135 ^ 1], VAR137);
                    VAR2->VAR15 = VAR10.VAR15;
                    VAR138 = FUN19(&VAR2->VAR16);
                    FUN38(&VAR2->VAR16);
                    FUN39(&VAR10.VAR16, VAR13[VAR135 ^ 1], VAR138);
                    VAR2->VAR16 = VAR10.VAR16;
                }
                VAR2->VAR96 = FUN19(&VAR2->VAR14);
            }
            else
            {
                int VAR155, VAR156;
                int VAR157;
                int VAR158 = VAR2->VAR19.VAR159[VAR4 + VAR5 * VAR2->VAR18];
                if (!(VAR2->VAR133 & VAR160) && VAR2->VAR30 == VAR65)
                {
                    if ((VAR2->VAR38->VAR161 & 0xFF) == VAR162)
                    {
                        VAR157 = (VAR2->VAR19.VAR63[VAR4 + VAR5 * VAR2->VAR18] << 8) - 500;
                    }
                    else
                    {
                        VAR52 *VAR163;
                        int VAR164 = VAR2->VAR19.VAR64[VAR4 + VAR5 * VAR2->VAR18];
                        VAR164 *= 0x01010101;
                        VAR163 = VAR2->VAR57.VAR58[0] + (VAR5 * 16 * VAR2->VAR59) + VAR4 * 16;
                        for (VAR7 = 0; VAR7 < 16; VAR7++)
                        {
                            *(VAR165 *)(&VAR2->VAR41.VAR166[VAR7 * VAR2->VAR59 + 0]) = VAR164;
                            *(VAR165 *)(&VAR2->VAR41.VAR166[VAR7 * VAR2->VAR59 + 4]) = VAR164;
                            *(VAR165 *)(&VAR2->VAR41.VAR166[VAR7 * VAR2->VAR59 + 8]) = VAR164;
                            *(VAR165 *)(&VAR2->VAR41.VAR166[VAR7 * VAR2->VAR59 + 12]) = VAR164;
                        }
                        VAR2->VAR37 = 1;
                        VAR157 = VAR2->VAR62.VAR161[0](VAR2, VAR2->VAR41.VAR166, VAR163, VAR2->VAR59);
                    }
                    if (VAR2->VAR38->VAR161 & VAR167)
                    {
                        int VAR7;
                        VAR2->VAR37 = 1;
                        for (VAR7 = 1; VAR7 < 3; VAR7++)
                        {
                            VAR52 *VAR168;
                            int VAR164;
                            if (VAR2->VAR34 == VAR35)
                            {
                                VAR164 = (VAR2->VAR169[VAR7][VAR4 + (VAR5 + 1) * (VAR2->VAR18 + 2)] + 4) >> 3;
                            }
                            else
                            {
                                VAR164 = (VAR2->VAR109[VAR7] + 4) >> 3;
                            }
                            VAR168 = VAR2->VAR57.VAR58[VAR7] + (VAR5 * 8 * (VAR2->VAR170)) + VAR4 * 8;
                            VAR164 *= 0x01010101;
                            for (VAR7 = 0; VAR7 < 8; VAR7++)
                            {
                                *(VAR165 *)(&VAR2->VAR41.VAR166[VAR7 * VAR2->VAR170 + 0]) = VAR164;
                                *(VAR165 *)(&VAR2->VAR41.VAR166[VAR7 * VAR2->VAR170 + 4]) = VAR164;
                            }
                            VAR157 += VAR2->VAR62.VAR161[1](VAR2, VAR2->VAR41.VAR166, VAR168, VAR2->VAR170);
                        }
                    }
                    switch (VAR2->VAR38->VAR161 & 0xFF)
                    {
                    default:
                    case VAR171:
                        VAR157 += 32 * VAR2->VAR27;
                        break;
                    case VAR162:
                        VAR157 += 24 * VAR2->VAR27 * VAR2->VAR27;
                        break;
                    case VAR172:
                        VAR157 += 96 * VAR2->VAR27;
                        break;
                    case VAR173:
                        VAR157 += 48 * VAR2->VAR27;
                        break;
                    case VAR174:
                        VAR157 += 16;
                        break;
                    case VAR175:
                    case VAR176:
                        VAR157 += (VAR2->VAR27 * VAR2->VAR27 * 109 * 8 + 64) >> 7;
                        break;
                    }
                    if (VAR157 < VAR158)
                        VAR50 = VAR51;
                }
                VAR2->VAR142 = VAR143;
                switch (VAR50)
                {
                case VAR51:
                    VAR2->VAR140 = 0;
                    VAR2->VAR37 = 1;
                    VAR155 = VAR2->VAR144[0][0][0] = 0;
                    VAR156 = VAR2->VAR144[0][0][1] = 0;
                    break;
                case VAR69:
                    VAR2->VAR140 = VAR141;
                    VAR2->VAR37 = 0;
                    VAR155 = VAR2->VAR144[0][0][0] = VAR2->VAR49[VAR126][0];
                    VAR156 = VAR2->VAR144[0][0][1] = VAR2->VAR49[VAR126][1];
                    break;
                case VAR145:
                    VAR2->VAR140 = VAR141;
                    VAR2->VAR142 = VAR146;
                    VAR2->VAR37 = 0;
                    for (VAR7 = 0; VAR7 < 4; VAR7++)
                    {
                        VAR2->VAR144[0][VAR7][0] = VAR2->VAR47[VAR2->VAR46[VAR7]][0];
                        VAR2->VAR144[0][VAR7][1] = VAR2->VAR47[VAR2->VAR46[VAR7]][1];
                    }
                    VAR155 = VAR156 = 0;
                    break;
                case VAR148:
                    VAR2->VAR140 = VAR141 | VAR147 | VAR152;
                    VAR2->VAR37 = 0;
                    VAR155 = VAR2->VAR150[VAR126][0];
                    VAR156 = VAR2->VAR150[VAR126][1];
                    FUN36(VAR2, VAR155, VAR156);
                    break;
                case VAR75:
                    VAR2->VAR140 = VAR141 | VAR147;
                    VAR2->VAR37 = 0;
                    VAR155 = 0;
                    VAR156 = 0;
                    VAR2->VAR144[0][0][0] = VAR2->VAR74[VAR126][0];
                    VAR2->VAR144[0][0][1] = VAR2->VAR74[VAR126][1];
                    VAR2->VAR144[1][0][0] = VAR2->VAR78[VAR126][0];
                    VAR2->VAR144[1][0][1] = VAR2->VAR78[VAR126][1];
                    break;
                case VAR77:
                    VAR2->VAR140 = VAR147;
                    VAR2->VAR37 = 0;
                    VAR155 = VAR2->VAR144[1][0][0] = VAR2->VAR76[VAR126][0];
                    VAR156 = VAR2->VAR144[1][0][1] = VAR2->VAR76[VAR126][1];
                    break;
                case VAR73:
                    VAR2->VAR140 = VAR141;
                    VAR2->VAR37 = 0;
                    VAR155 = VAR2->VAR144[0][0][0] = VAR2->VAR72[VAR126][0];
                    VAR156 = VAR2->VAR144[0][0][1] = VAR2->VAR72[VAR126][1];
                    break;
                default:
                    VAR155 = VAR156 = 0;
                    FUN40("");
                }
                FUN41(VAR2, VAR155, VAR156);
                VAR2->VAR113 = VAR2->VAR140;
            }
            if (VAR2->VAR37)
            {
                VAR2->VAR49[VAR126][0] = 0;
                VAR2->VAR49[VAR126][1] = 0;
            }
            FUN42(VAR2, VAR2->VAR177);
            if (VAR2->VAR133 & VAR178)
            {
                int VAR179 = 16;
                int VAR180 = 16;
                if (VAR2->VAR4 * 16 + 16 > VAR2->VAR181)
                    VAR179 = VAR2->VAR181 - VAR2->VAR4 * 16;
                if (VAR2->VAR5 * 16 + 16 > VAR2->VAR182)
                    VAR180 = VAR2->VAR182 - VAR2->VAR5 * 16;
                VAR2->VAR19.VAR110[0] += FUN43(VAR2, VAR2->VAR57.VAR58[0] + VAR2->VAR4 * 16 + VAR2->VAR5 * VAR2->VAR59 * 16, VAR2->VAR19.VAR58[0] + VAR2->VAR4 * 16 + VAR2->VAR5 * VAR2->VAR59 * 16, VAR179, VAR180, VAR2->VAR59);
                VAR2->VAR19.VAR110[1] += FUN43(VAR2, VAR2->VAR57.VAR58[1] + VAR2->VAR4 * 8 + VAR2->VAR5 * VAR2->VAR170 * 8, VAR2->VAR19.VAR58[1] + VAR2->VAR4 * 8 + VAR2->VAR5 * VAR2->VAR170 * 8, VAR179 >> 1, VAR180 >> 1, VAR2->VAR170);
                VAR2->VAR19.VAR110[2] += FUN43(VAR2, VAR2->VAR57.VAR58[2] + VAR2->VAR4 * 8 + VAR2->VAR5 * VAR2->VAR170 * 8, VAR2->VAR19.VAR58[2] + VAR2->VAR4 * 8 + VAR2->VAR5 * VAR2->VAR170 * 8, VAR179 >> 1, VAR180 >> 1, VAR2->VAR170);
            }
        }
        if (VAR2->VAR128)
        {
            if (VAR5 == 0)
                VAR2->VAR131 = FUN29(&VAR2->VAR14) - VAR2->VAR121;
            else
            {
                VAR2->VAR131 = (VAR2->VAR131 + FUN29(&VAR2->VAR14) - VAR2->VAR121) >> 1;
            }
            VAR2->VAR121 = FUN29(&VAR2->VAR14);
        }
    }
    FUN9();
    if (VAR2->VAR22 == VAR82 && VAR2->VAR115)
        FUN30(VAR2);
    if (VAR2->VAR29 && VAR2->VAR29 < 4 && VAR2->VAR30 == VAR31)
        FUN44(VAR2);
    if (VAR2->VAR22 == VAR82)
        FUN45(&VAR2->VAR14);
    if (VAR2->VAR128)
    {
        FUN38(&VAR2->VAR14);
        VAR6 = FUN29(&VAR2->VAR14) - VAR2->VAR119;
        if (VAR2->VAR183)
            VAR2->FUN46(VAR2->VAR119, VAR6, VAR2->VAR184);
        VAR2->VAR119 = FUN29(&VAR2->VAR14);
    }
}