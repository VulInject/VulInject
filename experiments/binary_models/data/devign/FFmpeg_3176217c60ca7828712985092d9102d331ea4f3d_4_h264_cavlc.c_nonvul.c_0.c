int FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    unsigned int VAR7, VAR8;
    int VAR9 = VAR2->VAR10.VAR11->VAR12;
    int VAR13 = VAR2->VAR10.VAR14->VAR15 == 1 || VAR2->VAR10.VAR14->VAR15 == 2;
    const int VAR16 = VAR2->VAR16;
    VAR5 = VAR4->VAR5 = VAR4->VAR17 + VAR4->VAR18 * VAR2->VAR19;
    FUN2(VAR2->VAR20, "", VAR2->VAR21, VAR4->VAR17, VAR4->VAR18);
    VAR8 = 0;
    if (VAR4->VAR22 != VAR23)
    {
        if (VAR4->VAR24 == -1)
            VAR4->VAR24 = FUN3(&VAR4->VAR25);
        if (VAR4->VAR24--)
        {
            if (FUN4(VAR2) && (VAR4->VAR18 & 1) == 0)
            {
                if (VAR4->VAR24 == 0)
                    VAR4->VAR26 = VAR4->VAR27 = FUN5(&VAR4->VAR25);
            }
            FUN6(VAR2, VAR4);
            return 0;
        }
    }
    if (FUN4(VAR2))
    {
        if ((VAR4->VAR18 & 1) == 0)
            VAR4->VAR26 = VAR4->VAR27 = FUN5(&VAR4->VAR25);
    }
    VAR4->VAR28 = 0;
    VAR7 = FUN3(&VAR4->VAR25);
    if (VAR4->VAR22 == VAR29)
    {
        if (VAR7 < 23)
        {
            VAR6 = VAR30[VAR7].VAR6;
            VAR7 = VAR30[VAR7].VAR31;
        }
        else
        {
            VAR7 -= 23;
            goto VAR32;
        }
    }
    else if (VAR4->VAR22 == VAR33)
    {
        if (VAR7 < 5)
        {
            VAR6 = VAR34[VAR7].VAR6;
            VAR7 = VAR34[VAR7].VAR31;
        }
        else
        {
            VAR7 -= 5;
            goto VAR32;
        }
    }
    else
    {
        assert(VAR4->VAR22 == VAR23);
        if (VAR4->VAR35 == VAR36 && VAR7)
            VAR7--;
    VAR32:
        if (VAR7 > 25)
        {
            FUN7(VAR2->VAR20, VAR37, "", VAR7, FUN8(VAR4->VAR35), VAR4->VAR17, VAR4->VAR18);
            return -1;
        }
        VAR6 = 0;
        VAR8 = VAR38[VAR7].VAR8;
        VAR4->VAR39 = VAR38[VAR7].VAR40;
        VAR7 = VAR38[VAR7].VAR31;
    }
    if (FUN9(VAR4))
        VAR7 |= VAR41;
    VAR2->VAR42[VAR5] = VAR4->VAR43;
    if (FUN10(VAR7))
    {
        const int VAR44 = VAR45[VAR2->VAR10.VAR14->VAR15] * VAR2->VAR10.VAR14->VAR46;
        VAR4->VAR47 = FUN11(&VAR4->VAR25);
        if (FUN12(&VAR4->VAR25) < VAR44)
        {
            FUN7(VAR2->VAR20, VAR37, "");
            return VAR48;
        }
        FUN13(&VAR4->VAR25, VAR44);
        VAR2->VAR49.VAR50[VAR5] = 0;
        memset(VAR2->VAR51[VAR5], 16, 48);
        VAR2->VAR49.VAR7[VAR5] = VAR7;
        return 0;
    }
    FUN14(VAR2, VAR4, VAR7);
    FUN15(VAR2, VAR4, VAR7);
    if (FUN16(VAR7))
    {
        int VAR40;
        if (FUN17(VAR7))
        {
            int VAR52;
            int VAR53 = 1;
            if (VAR9 && FUN5(&VAR4->VAR25))
            {
                VAR7 |= VAR54;
                VAR53 = 4;
            }
            for (VAR52 = 0; VAR52 < 16; VAR52 += VAR53)
            {
                int VAR55 = FUN18(VAR2, VAR4, VAR52);
                if (!FUN5(&VAR4->VAR25))
                {
                    const int VAR56 = FUN19(&VAR4->VAR25, 3);
                    VAR55 = VAR56 + (VAR56 >= VAR55);
                }
                if (VAR53 == 4)
                    FUN20(&VAR4->VAR57[VAR58[VAR52]], 2, 2, 8, VAR55, 1);
                else
                    VAR4->VAR57[VAR58[VAR52]] = VAR55;
            }
            FUN21(VAR2, VAR4);
            if (FUN22(VAR4->VAR57, VAR2->VAR20, VAR4->VAR59, VAR4->VAR60) < 0)
                return -1;
        }
        else
        {
            VAR4->VAR39 = FUN23(VAR2->VAR20, VAR4->VAR59, VAR4->VAR60, VAR4->VAR39, 0);
            if (VAR4->VAR39 < 0)
                return -1;
        }
        if (VAR13)
        {
            VAR40 = FUN23(VAR2->VAR20, VAR4->VAR59, VAR4->VAR60, FUN24(&VAR4->VAR25), 1);
            if (VAR40 < 0)
                return -1;
            VAR4->VAR61 = VAR40;
        }
        else
        {
            VAR4->VAR61 = VAR62;
        }
    }
    else if (VAR6 == 4)
    {
        int VAR52, VAR63, VAR64[4], VAR65, VAR66[2][4];
        if (VAR4->VAR22 == VAR29)
        {
            for (VAR52 = 0; VAR52 < 4; VAR52++)
            {
                VAR4->VAR67[VAR52] = FUN24(&VAR4->VAR25);
                if (VAR4->VAR67[VAR52] >= 13)
                {
                    FUN7(VAR2->VAR20, VAR37, "", VAR4->VAR67[VAR52], VAR4->VAR17, VAR4->VAR18);
                    return -1;
                }
                VAR64[VAR52] = VAR68[VAR4->VAR67[VAR52]].VAR6;
                VAR4->VAR67[VAR52] = VAR68[VAR4->VAR67[VAR52]].VAR31;
            }
            if (FUN25(VAR4->VAR67[0] | VAR4->VAR67[1] | VAR4->VAR67[2] | VAR4->VAR67[3]))
            {
                FUN26(VAR2, VAR4, &VAR7);
                VAR4->VAR69[0][VAR58[4]] = VAR4->VAR69[1][VAR58[4]] = VAR4->VAR69[0][VAR58[12]] = VAR4->VAR69[1][VAR58[12]] = VAR70;
            }
        }
        else
        {
            assert(VAR4->VAR22 == VAR33);
            for (VAR52 = 0; VAR52 < 4; VAR52++)
            {
                VAR4->VAR67[VAR52] = FUN24(&VAR4->VAR25);
                if (VAR4->VAR67[VAR52] >= 4)
                {
                    FUN7(VAR2->VAR20, VAR37, "", VAR4->VAR67[VAR52], VAR4->VAR17, VAR4->VAR18);
                    return -1;
                }
                VAR64[VAR52] = VAR71[VAR4->VAR67[VAR52]].VAR6;
                VAR4->VAR67[VAR52] = VAR71[VAR4->VAR67[VAR52]].VAR31;
            }
        }
        for (VAR65 = 0; VAR65 < VAR4->VAR72; VAR65++)
        {
            int VAR73 = FUN27(VAR7) ? 1 : VAR4->VAR73[VAR65] << FUN28(VAR4);
            for (VAR52 = 0; VAR52 < 4; VAR52++)
            {
                if (FUN25(VAR4->VAR67[VAR52]))
                    continue;
                if (FUN29(VAR4->VAR67[VAR52], 0, VAR65))
                {
                    unsigned int VAR74;
                    if (VAR73 == 1)
                    {
                        VAR74 = 0;
                    }
                    else if (VAR73 == 2)
                    {
                        VAR74 = FUN5(&VAR4->VAR25) ^ 1;
                    }
                    else
                    {
                        VAR74 = FUN24(&VAR4->VAR25);
                        if (VAR74 >= VAR73)
                        {
                            FUN7(VAR2->VAR20, VAR37, "", VAR74);
                            return -1;
                        }
                    }
                    VAR66[VAR65][VAR52] = VAR74;
                }
                else
                {
                    VAR66[VAR65][VAR52] = -1;
                }
            }
        }
        if (VAR9)
            VAR9 = FUN30(VAR2, VAR4);
        for (VAR65 = 0; VAR65 < VAR4->VAR72; VAR65++)
        {
            for (VAR52 = 0; VAR52 < 4; VAR52++)
            {
                if (FUN25(VAR4->VAR67[VAR52]))
                {
                    VAR4->VAR69[VAR65][VAR58[4 * VAR52]] = VAR4->VAR69[VAR65][VAR58[4 * VAR52] + 1];
                    continue;
                }
                VAR4->VAR69[VAR65][VAR58[4 * VAR52]] = VAR4->VAR69[VAR65][VAR58[4 * VAR52] + 1] = VAR4->VAR69[VAR65][VAR58[4 * VAR52] + 8] = VAR4->VAR69[VAR65][VAR58[4 * VAR52] + 9] = VAR66[VAR65][VAR52];
                if (FUN29(VAR4->VAR67[VAR52], 0, VAR65))
                {
                    const int VAR67 = VAR4->VAR67[VAR52];
                    const int VAR75 = (VAR67 & (VAR76 | VAR77)) ? 2 : 1;
                    for (VAR63 = 0; VAR63 < VAR64[VAR52]; VAR63++)
                    {
                        int VAR78, VAR79;
                        const int VAR80 = 4 * VAR52 + VAR75 * VAR63;
                        FUN31(*VAR81)[2] = &VAR4->VAR81[VAR65][VAR58[VAR80]];
                        FUN32(VAR2, VAR4, VAR80, VAR75, VAR65, VAR4->VAR69[VAR65][VAR58[VAR80]], &VAR78, &VAR79);
                        VAR78 += FUN33(&VAR4->VAR25);
                        VAR79 += FUN33(&VAR4->VAR25);
                        FUN2(VAR2->VAR20, "", VAR78, VAR79);
                        if (FUN34(VAR67))
                        {
                            VAR81[1][0] = VAR81[8][0] = VAR81[9][0] = VAR78;
                            VAR81[1][1] = VAR81[8][1] = VAR81[9][1] = VAR79;
                        }
                        else if (FUN35(VAR67))
                        {
                            VAR81[1][0] = VAR78;
                            VAR81[1][1] = VAR79;
                        }
                        else if (FUN36(VAR67))
                        {
                            VAR81[8][0] = VAR78;
                            VAR81[8][1] = VAR79;
                        }
                        VAR81[0][0] = VAR78;
                        VAR81[0][1] = VAR79;
                    }
                }
                else
                {
                    VAR82 *VAR83 = (VAR82 *)&VAR4->VAR81[VAR65][VAR58[4 * VAR52]][0];
                    VAR83[0] = VAR83[1] = VAR83[8] = VAR83[9] = 0;
                }
            }
        }
    }
    else if (FUN25(VAR7))
    {
        FUN26(VAR2, VAR4, &VAR7);
        VAR9 &= VAR2->VAR10.VAR14->VAR84;
    }
    else
    {
        int VAR65, VAR78, VAR79, VAR52;
        if (FUN37(VAR7))
        {
            for (VAR65 = 0; VAR65 < VAR4->VAR72; VAR65++)
            {
                unsigned int VAR85;
                if (FUN29(VAR7, 0, VAR65))
                {
                    int VAR86 = VAR4->VAR73[VAR65] << FUN28(VAR4);
                    if (VAR86 == 1)
                    {
                        VAR85 = 0;
                    }
                    else if (VAR86 == 2)
                    {
                        VAR85 = FUN5(&VAR4->VAR25) ^ 1;
                    }
                    else
                    {
                        VAR85 = FUN24(&VAR4->VAR25);
                        if (VAR85 >= VAR86)
                        {
                            FUN7(VAR2->VAR20, VAR37, "", VAR85);
                            return -1;
                        }
                    }
                    FUN20(&VAR4->VAR69[VAR65][VAR58[0]], 4, 4, 8, VAR85, 1);
                }
            }
            for (VAR65 = 0; VAR65 < VAR4->VAR72; VAR65++)
            {
                if (FUN29(VAR7, 0, VAR65))
                {
                    FUN32(VAR2, VAR4, 0, 4, VAR65, VAR4->VAR69[VAR65][VAR58[0]], &VAR78, &VAR79);
                    VAR78 += FUN33(&VAR4->VAR25);
                    VAR79 += FUN33(&VAR4->VAR25);
                    FUN2(VAR2->VAR20, "", VAR78, VAR79);
                    FUN20(VAR4->VAR81[VAR65][VAR58[0]], 4, 4, 8, FUN38(VAR78, VAR79), 4);
                }
            }
        }
        else if (FUN39(VAR7))
        {
            for (VAR65 = 0; VAR65 < VAR4->VAR72; VAR65++)
            {
                for (VAR52 = 0; VAR52 < 2; VAR52++)
                {
                    unsigned int VAR85;
                    if (FUN29(VAR7, VAR52, VAR65))
                    {
                        int VAR86 = VAR4->VAR73[VAR65] << FUN28(VAR4);
                        if (VAR86 == 1)
                        {
                            VAR85 = 0;
                        }
                        else if (VAR86 == 2)
                        {
                            VAR85 = FUN5(&VAR4->VAR25) ^ 1;
                        }
                        else
                        {
                            VAR85 = FUN24(&VAR4->VAR25);
                            if (VAR85 >= VAR86)
                            {
                                FUN7(VAR2->VAR20, VAR37, "", VAR85);
                                return -1;
                            }
                        }
                    }
                    else
                        VAR85 = VAR87 & 0xFF;
                    FUN20(&VAR4->VAR69[VAR65][VAR58[0] + 16 * VAR52], 4, 2, 8, VAR85, 1);
                }
            }
            for (VAR65 = 0; VAR65 < VAR4->VAR72; VAR65++)
            {
                for (VAR52 = 0; VAR52 < 2; VAR52++)
                {
                    unsigned int VAR85;
                    if (FUN29(VAR7, VAR52, VAR65))
                    {
                        FUN40(VAR2, VAR4, 8 * VAR52, VAR65, VAR4->VAR69[VAR65][VAR58[0] + 16 * VAR52], &VAR78, &VAR79);
                        VAR78 += FUN33(&VAR4->VAR25);
                        VAR79 += FUN33(&VAR4->VAR25);
                        FUN2(VAR2->VAR20, "", VAR78, VAR79);
                        VAR85 = FUN38(VAR78, VAR79);
                    }
                    else
                        VAR85 = 0;
                    FUN20(VAR4->VAR81[VAR65][VAR58[0] + 16 * VAR52], 4, 2, 8, VAR85, 4);
                }
            }
        }
        else
        {
            assert(FUN41(VAR7));
            for (VAR65 = 0; VAR65 < VAR4->VAR72; VAR65++)
            {
                for (VAR52 = 0; VAR52 < 2; VAR52++)
                {
                    unsigned int VAR85;
                    if (FUN29(VAR7, VAR52, VAR65))
                    {
                        int VAR86 = VAR4->VAR73[VAR65] << FUN28(VAR4);
                        if (VAR86 == 1)
                        {
                            VAR85 = 0;
                        }
                        else if (VAR86 == 2)
                        {
                            VAR85 = FUN5(&VAR4->VAR25) ^ 1;
                        }
                        else
                        {
                            VAR85 = FUN24(&VAR4->VAR25);
                            if (VAR85 >= VAR86)
                            {
                                FUN7(VAR2->VAR20, VAR37, "", VAR85);
                                return -1;
                            }
                        }
                    }
                    else
                        VAR85 = VAR87 & 0xFF;
                    FUN20(&VAR4->VAR69[VAR65][VAR58[0] + 2 * VAR52], 2, 4, 8, VAR85, 1);
                }
            }
            for (VAR65 = 0; VAR65 < VAR4->VAR72; VAR65++)
            {
                for (VAR52 = 0; VAR52 < 2; VAR52++)
                {
                    unsigned int VAR85;
                    if (FUN29(VAR7, VAR52, VAR65))
                    {
                        FUN42(VAR2, VAR4, VAR52 * 4, VAR65, VAR4->VAR69[VAR65][VAR58[0] + 2 * VAR52], &VAR78, &VAR79);
                        VAR78 += FUN33(&VAR4->VAR25);
                        VAR79 += FUN33(&VAR4->VAR25);
                        FUN2(VAR2->VAR20, "", VAR78, VAR79);
                        VAR85 = FUN38(VAR78, VAR79);
                    }
                    else
                        VAR85 = 0;
                    FUN20(VAR4->VAR81[VAR65][VAR58[0] + 2 * VAR52], 2, 4, 8, VAR85, 4);
                }
            }
        }
    }
    if (FUN43(VAR7))
        FUN44(VAR2, VAR4, VAR7);
    if (!FUN45(VAR7))
    {
        VAR8 = FUN3(&VAR4->VAR25);
        if (VAR13)
        {
            if (VAR8 > 47)
            {
                FUN7(VAR2->VAR20, VAR37, "", VAR8, VAR4->VAR17, VAR4->VAR18);
                return -1;
            }
            if (FUN17(VAR7))
                VAR8 = VAR88[VAR8];
            else
                VAR8 = VAR89[VAR8];
        }
        else
        {
            if (VAR8 > 15)
            {
                FUN7(VAR2->VAR20, VAR37, "", VAR8, VAR4->VAR17, VAR4->VAR18);
                return -1;
            }
            if (FUN17(VAR7))
                VAR8 = VAR90[VAR8];
            else
                VAR8 = VAR91[VAR8];
        }
    }
    if (VAR9 && (VAR8 & 15) && !FUN16(VAR7))
    {
        VAR7 |= VAR54 * FUN5(&VAR4->VAR25);
    }
    VAR4->VAR8 = VAR2->VAR92[VAR5] = VAR8;
    VAR2->VAR49.VAR7[VAR5] = VAR7;
    if (VAR8 || FUN45(VAR7))
    {
        int VAR93, VAR94, VAR95;
        int VAR96;
        int VAR97;
        VAR98 *VAR25 = &VAR4->VAR25;
        const VAR99 *VAR100, *VAR101;
        const int VAR102 = 51 + 6 * (VAR2->VAR10.VAR14->VAR46 - 8);
        if (FUN46(VAR7))
        {
            VAR101 = VAR4->VAR103 ? VAR2->VAR104 : VAR2->VAR105;
            VAR100 = VAR4->VAR103 ? VAR2->VAR106 : VAR2->VAR107;
        }
        else
        {
            VAR101 = VAR4->VAR103 ? VAR2->VAR108 : VAR2->VAR109;
            VAR100 = VAR4->VAR103 ? VAR2->VAR110 : VAR2->VAR111;
        }
        VAR96 = FUN33(&VAR4->VAR25);
        VAR4->VAR103 += VAR96;
        if (((unsigned)VAR4->VAR103) > VAR102)
        {
            if (VAR4->VAR103 < 0)
                VAR4->VAR103 += VAR102 + 1;
            else
                VAR4->VAR103 -= VAR102 + 1;
            if (((unsigned)VAR4->VAR103) > VAR102)
            {
                FUN7(VAR2->VAR20, VAR37, "", VAR96, VAR4->VAR17, VAR4->VAR18);
                return -1;
            }
        }
        VAR4->VAR112[0] = FUN47(VAR2, 0, VAR4->VAR103);
        VAR4->VAR112[1] = FUN47(VAR2, 1, VAR4->VAR103);
        if ((VAR97 = FUN48(VAR2, VAR4, VAR25, VAR100, VAR101, VAR16, VAR7, VAR8, 0)) < 0)
        {
            return -1;
        }
        VAR2->VAR92[VAR5] |= VAR97 << 12;
        if (FUN49(VAR2))
        {
            if (FUN48(VAR2, VAR4, VAR25, VAR100, VAR101, VAR16, VAR7, VAR8, 1) < 0)
            {
                return -1;
            }
            if (FUN48(VAR2, VAR4, VAR25, VAR100, VAR101, VAR16, VAR7, VAR8, 2) < 0)
            {
                return -1;
            }
        }
        else if (FUN50(VAR2))
        {
            if (VAR8 & 0x30)
            {
                for (VAR95 = 0; VAR95 < 2; VAR95++)
                    if (FUN51(VAR2, VAR4, VAR25, VAR4->VAR113 + ((256 + 16 * 16 * VAR95) << VAR16), VAR114 + VAR95, VAR115, NULL, 8) < 0)
                    {
                        return -1;
                    }
            }
            if (VAR8 & 0x20)
            {
                for (VAR95 = 0; VAR95 < 2; VAR95++)
                {
                    const VAR82 *VAR116 = VAR2->VAR10.VAR11->VAR117[VAR95 + 1 + (FUN16(VAR7) ? 0 : 3)][VAR4->VAR112[VAR95]];
                    VAR118 *VAR113 = VAR4->VAR113 + (16 * (16 + 16 * VAR95) << VAR16);
                    for (VAR94 = 0; VAR94 < 2; VAR94++)
                    {
                        for (VAR93 = 0; VAR93 < 4; VAR93++)
                        {
                            const int VAR80 = 16 + 16 * VAR95 + 8 * VAR94 + VAR93;
                            if (FUN51(VAR2, VAR4, VAR25, VAR113, VAR80, VAR100 + 1, VAR116, 15) < 0)
                                return -1;
                            VAR113 += 16 << VAR16;
                        }
                    }
                }
            }
            else
            {
                FUN20(&VAR4->VAR119[VAR58[16]], 4, 4, 8, 0, 1);
                FUN20(&VAR4->VAR119[VAR58[32]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            if (VAR8 & 0x30)
            {
                for (VAR95 = 0; VAR95 < 2; VAR95++)
                    if (FUN51(VAR2, VAR4, VAR25, VAR4->VAR113 + ((256 + 16 * 16 * VAR95) << VAR16), VAR114 + VAR95, VAR120, NULL, 4) < 0)
                    {
                        return -1;
                    }
            }
            if (VAR8 & 0x20)
            {
                for (VAR95 = 0; VAR95 < 2; VAR95++)
                {
                    const VAR82 *VAR116 = VAR2->VAR10.VAR11->VAR117[VAR95 + 1 + (FUN16(VAR7) ? 0 : 3)][VAR4->VAR112[VAR95]];
                    for (VAR93 = 0; VAR93 < 4; VAR93++)
                    {
                        const int VAR80 = 16 + 16 * VAR95 + VAR93;
                        if (FUN51(VAR2, VAR4, VAR25, VAR4->VAR113 + (16 * VAR80 << VAR16), VAR80, VAR100 + 1, VAR116, 15) < 0)
                        {
                            return -1;
                        }
                    }
                }
            }
            else
            {
                FUN20(&VAR4->VAR119[VAR58[16]], 4, 4, 8, 0, 1);
                FUN20(&VAR4->VAR119[VAR58[32]], 4, 4, 8, 0, 1);
            }
        }
    }
    else
    {
        FUN20(&VAR4->VAR119[VAR58[0]], 4, 4, 8, 0, 1);
        FUN20(&VAR4->VAR119[VAR58[16]], 4, 4, 8, 0, 1);
        FUN20(&VAR4->VAR119[VAR58[32]], 4, 4, 8, 0, 1);
    }
    VAR2->VAR49.VAR50[VAR5] = VAR4->VAR103;
    FUN52(VAR2, VAR4);
    return 0;
}