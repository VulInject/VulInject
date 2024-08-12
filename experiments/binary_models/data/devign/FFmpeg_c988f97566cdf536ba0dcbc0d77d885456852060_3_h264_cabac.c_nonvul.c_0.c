int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5;
    int VAR6, VAR7, VAR8 = 0;
    int VAR9 = VAR2->VAR10.VAR11;
    VAR5 = VAR2->VAR5 = VAR4->VAR12 + VAR4->VAR13 * VAR4->VAR14;
    FUN2(VAR4->VAR15, "", VAR2->VAR16, VAR4->VAR12, VAR4->VAR13);
    if (VAR2->VAR17 != VAR18)
    {
        int VAR19;
        if (VAR20 && VAR4->VAR12 == 0 && (VAR4->VAR13 & 1) == 0)
            FUN3(VAR2);
        if (VAR20 && (VAR4->VAR13 & 1) == 1 && VAR2->VAR21)
            VAR19 = VAR2->VAR22;
        else
            VAR19 = FUN4(VAR2, VAR4->VAR12, VAR4->VAR13);
        if (VAR19)
        {
            if (VAR20 && (VAR4->VAR13 & 1) == 0)
            {
                VAR4->VAR23.VAR6[VAR5] = VAR24;
                VAR2->VAR22 = FUN4(VAR2, VAR4->VAR12, VAR4->VAR13 + 1);
                if (!VAR2->VAR22)
                    VAR2->VAR25 = VAR2->VAR26 = FUN5(VAR2);
            }
            FUN6(VAR2);
            VAR2->VAR27[VAR5] = 0;
            VAR2->VAR28[VAR5] = 0;
            VAR2->VAR29 = 0;
            return 0;
        }
    }
    if (VAR20)
    {
        if ((VAR4->VAR13 & 1) == 0)
            VAR2->VAR25 = VAR2->VAR26 = FUN5(VAR2);
    }
    VAR2->VAR21 = 0;
    FUN7(VAR2);
    if (VAR2->VAR17 == VAR30)
    {
        VAR6 = FUN8(VAR2);
        if (VAR6 < 23)
        {
            VAR7 = VAR31[VAR6].VAR7;
            VAR6 = VAR31[VAR6].VAR32;
        }
        else
        {
            VAR6 -= 23;
            goto VAR33;
        }
    }
    else if (VAR2->VAR17 == VAR34)
    {
        if (FUN9(&VAR2->VAR35, &VAR2->VAR36[14]) == 0)
        {
            if (FUN9(&VAR2->VAR35, &VAR2->VAR36[15]) == 0)
            {
                VAR6 = 3 * FUN9(&VAR2->VAR35, &VAR2->VAR36[16]);
            }
            else
            {
                VAR6 = 2 - FUN9(&VAR2->VAR35, &VAR2->VAR36[17]);
            }
            VAR7 = VAR37[VAR6].VAR7;
            VAR6 = VAR37[VAR6].VAR32;
        }
        else
        {
            VAR6 = FUN10(VAR2, 17, 0);
            goto VAR33;
        }
    }
    else
    {
        VAR6 = FUN10(VAR2, 3, 1);
        if (VAR2->VAR38 == VAR39 && VAR6)
            VAR6--;
        assert(VAR2->VAR17 == VAR18);
    VAR33:
        VAR7 = 0;
        VAR8 = VAR40[VAR6].VAR8;
        VAR2->VAR41 = VAR40[VAR6].VAR42;
        VAR6 = VAR40[VAR6].VAR32;
    }
    if (VAR43)
        VAR6 |= VAR44;
    VAR2->VAR45[VAR5] = VAR2->VAR46;
    if (FUN11(VAR6))
    {
        const VAR47 *VAR48;
        VAR48 = VAR2->VAR35.VAR49;
        if (VAR2->VAR35.VAR50 & 0x1)
            VAR48--;
        if (VAR51 == 16)
        {
            if (VAR2->VAR35.VAR50 & 0x1FF)
                VAR48--;
        }
        memcpy(VAR2->VAR52, VAR48, 256);
        VAR48 += 256;
        if (VAR53)
        {
            memcpy(VAR2->VAR52 + 128, VAR48, 128);
            VAR48 += 128;
        }
        FUN12(&VAR2->VAR35, VAR48, VAR2->VAR35.VAR54 - VAR48);
        VAR2->VAR27[VAR5] = 0x1ef;
        VAR2->VAR28[VAR5] = 0;
        VAR4->VAR23.VAR55[VAR5] = 0;
        memset(VAR2->VAR56[VAR5], 16, 32);
        VAR4->VAR23.VAR6[VAR5] = VAR6;
        VAR2->VAR29 = 0;
        return 0;
    }
    if (VAR57)
    {
        VAR2->VAR58[0] <<= 1;
        VAR2->VAR58[1] <<= 1;
    }
    FUN13(VAR2, VAR6, 0);
    if (FUN14(VAR6))
    {
        int VAR59, VAR42;
        if (FUN15(VAR6))
        {
            if (VAR9 && FUN16(VAR2))
            {
                VAR6 |= VAR60;
                for (VAR59 = 0; VAR59 < 16; VAR59 += 4)
                {
                    int VAR61 = FUN17(VAR2, VAR59);
                    int VAR62 = FUN18(VAR2, VAR61);
                    FUN19(&VAR2->VAR63[VAR64[VAR59]], 2, 2, 8, VAR62, 1);
                }
            }
            else
            {
                for (VAR59 = 0; VAR59 < 16; VAR59++)
                {
                    int VAR61 = FUN17(VAR2, VAR59);
                    VAR2->VAR63[VAR64[VAR59]] = FUN18(VAR2, VAR61);
                }
            }
            FUN20(VAR2);
            if (FUN21(VAR2) < 0)
                return -1;
        }
        else
        {
            VAR2->VAR41 = FUN22(VAR2, VAR2->VAR41);
            if (VAR2->VAR41 < 0)
                return -1;
        }
        if (VAR53)
        {
            VAR2->VAR28[VAR5] = VAR42 = FUN23(VAR2);
            VAR42 = FUN22(VAR2, VAR42);
            if (VAR42 < 0)
                return -1;
            VAR2->VAR65 = VAR42;
        }
    }
    else if (VAR7 == 4)
    {
        int VAR59, VAR66, VAR67[4], VAR68, VAR69[2][4];
        if (VAR2->VAR17 == VAR30)
        {
            for (VAR59 = 0; VAR59 < 4; VAR59++)
            {
                VAR2->VAR70[VAR59] = FUN24(VAR2);
                VAR67[VAR59] = VAR71[VAR2->VAR70[VAR59]].VAR7;
                VAR2->VAR70[VAR59] = VAR71[VAR2->VAR70[VAR59]].VAR32;
            }
            if (FUN25(VAR2->VAR70[0] | VAR2->VAR70[1] | VAR2->VAR70[2] | VAR2->VAR70[3]))
            {
                FUN26(VAR2, &VAR6);
                VAR2->VAR72[0][VAR64[4]] = VAR2->VAR72[1][VAR64[4]] = VAR2->VAR72[0][VAR64[12]] = VAR2->VAR72[1][VAR64[12]] = VAR73;
                if (VAR2->VAR58[0] > 1 || VAR2->VAR58[1] > 1)
                {
                    for (VAR59 = 0; VAR59 < 4; VAR59++)
                        if (FUN25(VAR2->VAR70[VAR59]))
                            FUN19(&VAR2->VAR74[VAR64[4 * VAR59]], 2, 2, 8, 1, 1);
                }
            }
        }
        else
        {
            for (VAR59 = 0; VAR59 < 4; VAR59++)
            {
                VAR2->VAR70[VAR59] = FUN27(VAR2);
                VAR67[VAR59] = VAR75[VAR2->VAR70[VAR59]].VAR7;
                VAR2->VAR70[VAR59] = VAR75[VAR2->VAR70[VAR59]].VAR32;
            }
        }
        for (VAR68 = 0; VAR68 < VAR2->VAR76; VAR68++)
        {
            for (VAR59 = 0; VAR59 < 4; VAR59++)
            {
                if (FUN25(VAR2->VAR70[VAR59]))
                    continue;
                if (FUN28(VAR2->VAR70[VAR59], 0, VAR68))
                {
                    if (VAR2->VAR58[VAR68] > 1)
                    {
                        VAR69[VAR68][VAR59] = FUN29(VAR2, VAR68, 4 * VAR59);
                        if (VAR69[VAR68][VAR59] >= (unsigned)VAR2->VAR58[VAR68])
                        {
                            FUN30(VAR4->VAR15, VAR77, "", VAR69[VAR68][VAR59], VAR2->VAR58[VAR68]);
                            return -1;
                        }
                    }
                    else
                        VAR69[VAR68][VAR59] = 0;
                }
                else
                {
                    VAR69[VAR68][VAR59] = -1;
                }
                VAR2->VAR72[VAR68][VAR64[4 * VAR59] + 1] = VAR2->VAR72[VAR68][VAR64[4 * VAR59] + 8] = VAR2->VAR72[VAR68][VAR64[4 * VAR59] + 9] = VAR69[VAR68][VAR59];
            }
        }
        if (VAR9)
            VAR9 = FUN31(VAR2);
        for (VAR68 = 0; VAR68 < VAR2->VAR76; VAR68++)
        {
            for (VAR59 = 0; VAR59 < 4; VAR59++)
            {
                VAR2->VAR72[VAR68][VAR64[4 * VAR59]] = VAR2->VAR72[VAR68][VAR64[4 * VAR59] + 1];
                if (FUN25(VAR2->VAR70[VAR59]))
                {
                    FUN19(VAR2->VAR78[VAR68][VAR64[4 * VAR59]], 2, 2, 8, 0, 4);
                    continue;
                }
                if (FUN28(VAR2->VAR70[VAR59], 0, VAR68) && !FUN25(VAR2->VAR70[VAR59]))
                {
                    const int VAR70 = VAR2->VAR70[VAR59];
                    const int VAR79 = (VAR70 & (VAR80 | VAR81)) ? 2 : 1;
                    for (VAR66 = 0; VAR66 < VAR67[VAR59]; VAR66++)
                    {
                        int VAR82, VAR83;
                        int VAR84, VAR85;
                        const int VAR86 = 4 * VAR59 + VAR79 * VAR66;
                        FUN32(*VAR87)[2] = &VAR2->VAR87[VAR68][VAR64[VAR86]];
                        FUN32(*VAR78)[2] = &VAR2->VAR78[VAR68][VAR64[VAR86]];
                        FUN33(VAR2, VAR86, VAR79, VAR68, VAR2->VAR72[VAR68][VAR64[VAR86]], &VAR82, &VAR83);
                        VAR84 = VAR82 + FUN34(VAR2, VAR68, VAR86, 0);
                        VAR85 = VAR83 + FUN34(VAR2, VAR68, VAR86, 1);
                        FUN2(VAR4->VAR15, "", VAR84, VAR85);
                        if (FUN35(VAR70))
                        {
                            VAR87[1][0] = VAR87[8][0] = VAR87[9][0] = VAR84;
                            VAR87[1][1] = VAR87[8][1] = VAR87[9][1] = VAR85;
                            VAR78[1][0] = VAR78[8][0] = VAR78[9][0] = VAR84 - VAR82;
                            VAR78[1][1] = VAR78[8][1] = VAR78[9][1] = VAR85 - VAR83;
                        }
                        else if (FUN36(VAR70))
                        {
                            VAR87[1][0] = VAR84;
                            VAR87[1][1] = VAR85;
                            VAR78[1][0] = VAR84 - VAR82;
                            VAR78[1][1] = VAR85 - VAR83;
                        }
                        else if (FUN37(VAR70))
                        {
                            VAR87[8][0] = VAR84;
                            VAR87[8][1] = VAR85;
                            VAR78[8][0] = VAR84 - VAR82;
                            VAR78[8][1] = VAR85 - VAR83;
                        }
                        VAR87[0][0] = VAR84;
                        VAR87[0][1] = VAR85;
                        VAR78[0][0] = VAR84 - VAR82;
                        VAR78[0][1] = VAR85 - VAR83;
                    }
                }
                else
                {
                    VAR88 *VAR89 = (VAR88 *)&VAR2->VAR87[VAR68][VAR64[4 * VAR59]][0];
                    VAR88 *VAR90 = (VAR88 *)&VAR2->VAR78[VAR68][VAR64[4 * VAR59]][0];
                    VAR89[0] = VAR89[1] = VAR89[8] = VAR89[9] = 0;
                    VAR90[0] = VAR90[1] = VAR90[8] = VAR90[9] = 0;
                }
            }
        }
    }
    else if (FUN25(VAR6))
    {
        FUN26(VAR2, &VAR6);
        FUN19(VAR2->VAR78[0][VAR64[0]], 4, 4, 8, 0, 4);
        FUN19(VAR2->VAR78[1][VAR64[0]], 4, 4, 8, 0, 4);
        VAR9 &= VAR2->VAR91.VAR92;
    }
    else
    {
        int VAR68, VAR84, VAR85, VAR59, VAR82, VAR83;
        if (FUN38(VAR6))
        {
            for (VAR68 = 0; VAR68 < VAR2->VAR76; VAR68++)
            {
                if (FUN28(VAR6, 0, VAR68))
                {
                    int VAR69;
                    if (VAR2->VAR58[VAR68] > 1)
                    {
                        VAR69 = FUN29(VAR2, VAR68, 0);
                        if (VAR69 >= (unsigned)VAR2->VAR58[VAR68])
                        {
                            FUN30(VAR4->VAR15, VAR77, "", VAR69, VAR2->VAR58[VAR68]);
                            return -1;
                        }
                    }
                    else
                        VAR69 = 0;
                    FUN19(&VAR2->VAR72[VAR68][VAR64[0]], 4, 4, 8, VAR69, 1);
                }
                else
                    FUN19(&VAR2->VAR72[VAR68][VAR64[0]], 4, 4, 8, (VAR47)VAR93, 1);
            }
            for (VAR68 = 0; VAR68 < VAR2->VAR76; VAR68++)
            {
                if (FUN28(VAR6, 0, VAR68))
                {
                    FUN33(VAR2, 0, 4, VAR68, VAR2->VAR72[VAR68][VAR64[0]], &VAR82, &VAR83);
                    VAR84 = VAR82 + FUN34(VAR2, VAR68, 0, 0);
                    VAR85 = VAR83 + FUN34(VAR2, VAR68, 0, 1);
                    FUN2(VAR4->VAR15, "", VAR84, VAR85);
                    FUN19(VAR2->VAR78[VAR68][VAR64[0]], 4, 4, 8, FUN39(VAR84 - VAR82, VAR85 - VAR83), 4);
                    FUN19(VAR2->VAR87[VAR68][VAR64[0]], 4, 4, 8, FUN39(VAR84, VAR85), 4);
                }
                else
                    FUN19(VAR2->VAR87[VAR68][VAR64[0]], 4, 4, 8, 0, 4);
            }
        }
        else if (FUN40(VAR6))
        {
            for (VAR68 = 0; VAR68 < VAR2->VAR76; VAR68++)
            {
                for (VAR59 = 0; VAR59 < 2; VAR59++)
                {
                    if (FUN28(VAR6, VAR59, VAR68))
                    {
                        int VAR69;
                        if (VAR2->VAR58[VAR68] > 1)
                        {
                            VAR69 = FUN29(VAR2, VAR68, 8 * VAR59);
                            if (VAR69 >= (unsigned)VAR2->VAR58[VAR68])
                            {
                                FUN30(VAR4->VAR15, VAR77, "", VAR69, VAR2->VAR58[VAR68]);
                                return -1;
                            }
                        }
                        else
                            VAR69 = 0;
                        FUN19(&VAR2->VAR72[VAR68][VAR64[0] + 16 * VAR59], 4, 2, 8, VAR69, 1);
                    }
                    else
                        FUN19(&VAR2->VAR72[VAR68][VAR64[0] + 16 * VAR59], 4, 2, 8, (VAR93 & 0xFF), 1);
                }
            }
            for (VAR68 = 0; VAR68 < VAR2->VAR76; VAR68++)
            {
                for (VAR59 = 0; VAR59 < 2; VAR59++)
                {
                    if (FUN28(VAR6, VAR59, VAR68))
                    {
                        FUN41(VAR2, 8 * VAR59, VAR68, VAR2->VAR72[VAR68][VAR64[0] + 16 * VAR59], &VAR82, &VAR83);
                        VAR84 = VAR82 + FUN34(VAR2, VAR68, 8 * VAR59, 0);
                        VAR85 = VAR83 + FUN34(VAR2, VAR68, 8 * VAR59, 1);
                        FUN2(VAR4->VAR15, "", VAR84, VAR85);
                        FUN19(VAR2->VAR78[VAR68][VAR64[0] + 16 * VAR59], 4, 2, 8, FUN39(VAR84 - VAR82, VAR85 - VAR83), 4);
                        FUN19(VAR2->VAR87[VAR68][VAR64[0] + 16 * VAR59], 4, 2, 8, FUN39(VAR84, VAR85), 4);
                    }
                    else
                    {
                        FUN19(VAR2->VAR78[VAR68][VAR64[0] + 16 * VAR59], 4, 2, 8, 0, 4);
                        FUN19(VAR2->VAR87[VAR68][VAR64[0] + 16 * VAR59], 4, 2, 8, 0, 4);
                    }
                }
            }
        }
        else
        {
            assert(FUN42(VAR6));
            for (VAR68 = 0; VAR68 < VAR2->VAR76; VAR68++)
            {
                for (VAR59 = 0; VAR59 < 2; VAR59++)
                {
                    if (FUN28(VAR6, VAR59, VAR68))
                    {
                        int VAR69;
                        if (VAR2->VAR58[VAR68] > 1)
                        {
                            VAR69 = FUN29(VAR2, VAR68, 4 * VAR59);
                            if (VAR69 >= (unsigned)VAR2->VAR58[VAR68])
                            {
                                FUN30(VAR4->VAR15, VAR77, "", VAR69, VAR2->VAR58[VAR68]);
                                return -1;
                            }
                        }
                        else
                            VAR69 = 0;
                        FUN19(&VAR2->VAR72[VAR68][VAR64[0] + 2 * VAR59], 2, 4, 8, VAR69, 1);
                    }
                    else
                        FUN19(&VAR2->VAR72[VAR68][VAR64[0] + 2 * VAR59], 2, 4, 8, (VAR93 & 0xFF), 1);
                }
            }
            for (VAR68 = 0; VAR68 < VAR2->VAR76; VAR68++)
            {
                for (VAR59 = 0; VAR59 < 2; VAR59++)
                {
                    if (FUN28(VAR6, VAR59, VAR68))
                    {
                        FUN43(VAR2, VAR59 * 4, VAR68, VAR2->VAR72[VAR68][VAR64[0] + 2 * VAR59], &VAR82, &VAR83);
                        VAR84 = VAR82 + FUN34(VAR2, VAR68, 4 * VAR59, 0);
                        VAR85 = VAR83 + FUN34(VAR2, VAR68, 4 * VAR59, 1);
                        FUN2(VAR4->VAR15, "", VAR84, VAR85);
                        FUN19(VAR2->VAR78[VAR68][VAR64[0] + 2 * VAR59], 2, 4, 8, FUN39(VAR84 - VAR82, VAR85 - VAR83), 4);
                        FUN19(VAR2->VAR87[VAR68][VAR64[0] + 2 * VAR59], 2, 4, 8, FUN39(VAR84, VAR85), 4);
                    }
                    else
                    {
                        FUN19(VAR2->VAR78[VAR68][VAR64[0] + 2 * VAR59], 2, 4, 8, 0, 4);
                        FUN19(VAR2->VAR87[VAR68][VAR64[0] + 2 * VAR59], 2, 4, 8, 0, 4);
                    }
                }
            }
        }
    }
    if (FUN44(VAR6))
    {
        VAR2->VAR28[VAR5] = 0;
        FUN45(VAR2, VAR6);
    }
    if (!FUN46(VAR6))
    {
        VAR8 = FUN47(VAR2);
        if (VAR53)
            VAR8 |= FUN48(VAR2) << 4;
    }
    VAR2->VAR27[VAR5] = VAR2->VAR8 = VAR8;
    if (VAR9 && (VAR8 & 15) && !FUN14(VAR6))
    {
        if (FUN16(VAR2))
            VAR6 |= VAR60;
    }
    VAR4->VAR23.VAR6[VAR5] = VAR6;
    if (VAR8 || FUN46(VAR6))
    {
        const VAR47 *VAR94, *VAR95, *VAR96;
        const VAR88 *VAR97;
        int VAR98;
        if (FUN49(VAR6))
        {
            VAR95 = VAR4->VAR99 ? VAR2->VAR100 : VAR2->VAR101;
            VAR94 = VAR4->VAR99 ? VAR2->VAR102 : VAR2->VAR103;
            VAR96 = VAR104;
        }
        else
        {
            VAR95 = VAR4->VAR99 ? VAR2->VAR105 : VAR2->VAR106;
            VAR94 = VAR4->VAR99 ? VAR2->VAR107 : VAR2->VAR108;
            VAR96 = VAR109;
        }
        VAR2->VAR29 = VAR98 = FUN50(VAR2);
        if (VAR98 == VAR110)
        {
            FUN30(VAR2->VAR4.VAR15, VAR77, "", VAR4->VAR12, VAR4->VAR13);
            return -1;
        }
        VAR4->VAR99 += VAR98;
        if (((unsigned)VAR4->VAR99) > 51)
        {
            if (VAR4->VAR99 < 0)
                VAR4->VAR99 += 52;
            else
                VAR4->VAR99 -= 52;
        }
        VAR2->VAR111[0] = FUN51(VAR2, 0, VAR4->VAR99);
        VAR2->VAR111[1] = FUN51(VAR2, 1, VAR4->VAR99);
        if (FUN46(VAR6))
        {
            int VAR59;
            FUN52(VAR2, VAR2->VAR52, 0, 0, VAR96, NULL, 16);
            if (VAR8 & 15)
            {
                VAR97 = VAR2->VAR112[0][VAR4->VAR99];
                for (VAR59 = 0; VAR59 < 16; VAR59++)
                {
                    FUN52(VAR2, VAR2->VAR52 + 16 * VAR59, 1, VAR59, VAR94 + 1, VAR97, 15);
                }
            }
            else
            {
                FUN19(&VAR2->VAR113[VAR64[0]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            int VAR114, VAR115;
            for (VAR114 = 0; VAR114 < 4; VAR114++)
            {
                if (VAR8 & (1 << VAR114))
                {
                    if (FUN53(VAR6))
                    {
                        FUN52(VAR2, VAR2->VAR52 + 64 * VAR114, 5, 4 * VAR114, VAR95, VAR2->VAR116[FUN14(VAR6) ? 0 : 1][VAR4->VAR99], 64);
                    }
                    else
                    {
                        VAR97 = VAR2->VAR112[FUN14(VAR6) ? 0 : 3][VAR4->VAR99];
                        for (VAR115 = 0; VAR115 < 4; VAR115++)
                        {
                            const int VAR86 = 4 * VAR114 + VAR115;
                            FUN52(VAR2, VAR2->VAR52 + 16 * VAR86, 2, VAR86, VAR94, VAR97, 16);
                        }
                    }
                }
                else
                {
                    VAR47 *const VAR117 = &VAR2->VAR113[VAR64[4 * VAR114]];
                    VAR117[0] = VAR117[1] = VAR117[8] = VAR117[9] = 0;
                }
            }
        }
        if (VAR8 & 0x30)
        {
            int VAR118;
            for (VAR118 = 0; VAR118 < 2; VAR118++)
            {
                FUN52(VAR2, VAR2->VAR52 + 256 + 16 * 4 * VAR118, 3, VAR118, VAR119, NULL, 4);
            }
        }
        if (VAR8 & 0x20)
        {
            int VAR118, VAR59;
            for (VAR118 = 0; VAR118 < 2; VAR118++)
            {
                VAR97 = VAR2->VAR112[VAR118 + 1 + (FUN14(VAR6) ? 0 : 3)][VAR2->VAR111[VAR118]];
                for (VAR59 = 0; VAR59 < 4; VAR59++)
                {
                    const int VAR86 = 16 + 4 * VAR118 + VAR59;
                    FUN52(VAR2, VAR2->VAR52 + 16 * VAR86, 4, VAR86, VAR94 + 1, VAR97, 15);
                }
            }
        }
        else
        {
            VAR47 *const VAR117 = &VAR2->VAR113[0];
            VAR117[VAR64[16] + 0] = VAR117[VAR64[16] + 1] = VAR117[VAR64[16] + 8] = VAR117[VAR64[16] + 9] = VAR117[VAR64[20] + 0] = VAR117[VAR64[20] + 1] = VAR117[VAR64[20] + 8] = VAR117[VAR64[20] + 9] = 0;
        }
    }
    else
    {
        VAR47 *const VAR117 = &VAR2->VAR113[0];
        FUN19(&VAR117[VAR64[0]], 4, 4, 8, 0, 1);
        VAR117[VAR64[16] + 0] = VAR117[VAR64[16] + 1] = VAR117[VAR64[16] + 8] = VAR117[VAR64[16] + 9] = VAR117[VAR64[20] + 0] = VAR117[VAR64[20] + 1] = VAR117[VAR64[20] + 8] = VAR117[VAR64[20] + 9] = 0;
        VAR2->VAR29 = 0;
    }
    VAR4->VAR23.VAR55[VAR5] = VAR4->VAR99;
    FUN54(VAR2);
    if (VAR57)
    {
        VAR2->VAR58[0] >>= 1;
        VAR2->VAR58[1] >>= 1;
    }
    return 0;
}