int FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
    const VAR5 *VAR6 = VAR2->VAR7.VAR6;
    int VAR8;
    int VAR9, VAR10, VAR11 = 0;
    int VAR12 = VAR2->VAR7.VAR13->VAR14;
    int VAR15 = VAR6->VAR16 == 1 || VAR6->VAR16 == 2;
    const int VAR17 = VAR2->VAR17;
    VAR8 = VAR4->VAR8 = VAR4->VAR18 + VAR4->VAR19 * VAR2->VAR20;
    FUN2(VAR2->VAR21, "", VAR2->VAR22, VAR4->VAR18, VAR4->VAR19);
    if (VAR4->VAR23 != VAR24)
    {
        int VAR25;
        if (FUN3(VAR2) && (VAR4->VAR19 & 1) == 1 && VAR4->VAR26)
            VAR25 = VAR4->VAR27;
        else
            VAR25 = FUN4(VAR2, VAR4, VAR4->VAR18, VAR4->VAR19);
        if (VAR25)
        {
            if (FUN3(VAR2) && (VAR4->VAR19 & 1) == 0)
            {
                VAR2->VAR28.VAR9[VAR8] = VAR29;
                VAR4->VAR27 = FUN4(VAR2, VAR4, VAR4->VAR18, VAR4->VAR19 + 1);
                if (!VAR4->VAR27)
                    VAR4->VAR30 = VAR4->VAR31 = FUN5(VAR2, VAR4);
            }
            FUN6(VAR2, VAR4);
            VAR2->VAR32[VAR8] = 0;
            VAR2->VAR33[VAR8] = 0;
            VAR4->VAR34 = 0;
            return 0;
        }
    }
    if (FUN3(VAR2))
    {
        if ((VAR4->VAR19 & 1) == 0)
            VAR4->VAR30 = VAR4->VAR31 = FUN5(VAR2, VAR4);
    }
    VAR4->VAR26 = 0;
    FUN7(VAR2, VAR4, -(FUN8(VAR4)));
    if (VAR4->VAR23 == VAR35)
    {
        int VAR36 = 0;
        assert(VAR4->VAR23 == VAR35);
        if (!FUN9(VAR4->VAR37[VAR38] - 1))
            VAR36++;
        if (!FUN9(VAR4->VAR39 - 1))
            VAR36++;
        if (!FUN10(&VAR4->VAR40, &VAR4->VAR41[27 + VAR36]))
        {
            VAR9 = 0;
        }
        else if (!FUN10(&VAR4->VAR40, &VAR4->VAR41[27 + 3]))
        {
            VAR9 = 1 + FUN10(&VAR4->VAR40, &VAR4->VAR41[27 + 5]);
        }
        else
        {
            int VAR42;
            VAR42 = FUN10(&VAR4->VAR40, &VAR4->VAR41[27 + 4]) << 3;
            VAR42 += FUN10(&VAR4->VAR40, &VAR4->VAR41[27 + 5]) << 2;
            VAR42 += FUN10(&VAR4->VAR40, &VAR4->VAR41[27 + 5]) << 1;
            VAR42 += FUN10(&VAR4->VAR40, &VAR4->VAR41[27 + 5]);
            if (VAR42 < 8)
            {
                VAR9 = VAR42 + 3;
            }
            else if (VAR42 == 13)
            {
                VAR9 = FUN11(VAR4, 32, 0);
                goto VAR43;
            }
            else if (VAR42 == 14)
            {
                VAR9 = 11;
            }
            else if (VAR42 == 15)
            {
                VAR9 = 22;
            }
            else
            {
                VAR42 = (VAR42 << 1) + FUN10(&VAR4->VAR40, &VAR4->VAR41[27 + 5]);
                VAR9 = VAR42 - 4;
            }
        }
        VAR10 = VAR44[VAR9].VAR10;
        VAR9 = VAR44[VAR9].VAR45;
    }
    else if (VAR4->VAR23 == VAR46)
    {
        if (FUN10(&VAR4->VAR40, &VAR4->VAR41[14]) == 0)
        {
            if (FUN10(&VAR4->VAR40, &VAR4->VAR41[15]) == 0)
            {
                VAR9 = 3 * FUN10(&VAR4->VAR40, &VAR4->VAR41[16]);
            }
            else
            {
                VAR9 = 2 - FUN10(&VAR4->VAR40, &VAR4->VAR41[17]);
            }
            VAR10 = VAR47[VAR9].VAR10;
            VAR9 = VAR47[VAR9].VAR45;
        }
        else
        {
            VAR9 = FUN11(VAR4, 17, 0);
            goto VAR43;
        }
    }
    else
    {
        VAR9 = FUN11(VAR4, 3, 1);
        if (VAR4->VAR48 == VAR49 && VAR9)
            VAR9--;
        assert(VAR4->VAR23 == VAR24);
    VAR43:
        VAR10 = 0;
        VAR11 = VAR50[VAR9].VAR11;
        VAR4->VAR51 = VAR50[VAR9].VAR52;
        VAR9 = VAR50[VAR9].VAR45;
    }
    if (FUN8(VAR4))
        VAR9 |= VAR53;
    VAR2->VAR54[VAR8] = VAR4->VAR55;
    if (FUN12(VAR9))
    {
        const int VAR56 = VAR57[VAR6->VAR16] * VAR6->VAR58 >> 3;
        const VAR59 *VAR60;
        VAR60 = VAR4->VAR40.VAR61;
        if (VAR4->VAR40.VAR62 & 0x1)
            VAR60--;
        if (VAR63 == 16)
        {
            if (VAR4->VAR40.VAR62 & 0x1FF)
                VAR60--;
        }
        if ((int)(VAR4->VAR40.VAR64 - VAR60) < VAR56)
            return -1;
        VAR4->VAR65 = VAR60;
        VAR60 += VAR56;
        FUN13(&VAR4->VAR40, VAR60, VAR4->VAR40.VAR64 - VAR60);
        VAR2->VAR32[VAR8] = 0xf7ef;
        VAR2->VAR33[VAR8] = 0;
        VAR2->VAR28.VAR66[VAR8] = 0;
        memset(VAR2->VAR67[VAR8], 16, 48);
        VAR2->VAR28.VAR9[VAR8] = VAR9;
        VAR4->VAR34 = 0;
        return 0;
    }
    FUN14(VAR2, VAR4, VAR9);
    if (FUN15(VAR9))
    {
        int VAR68, VAR52;
        if (FUN16(VAR9))
        {
            if (VAR12 && FUN10(&VAR4->VAR40, &VAR4->VAR41[399 + VAR4->VAR69]))
            {
                VAR9 |= VAR70;
                for (VAR68 = 0; VAR68 < 16; VAR68 += 4)
                {
                    int VAR71 = FUN17(VAR2, VAR4, VAR68);
                    int VAR72 = FUN18(VAR4, VAR71);
                    FUN19(&VAR4->VAR73[VAR74[VAR68]], 2, 2, 8, VAR72, 1);
                }
            }
            else
            {
                for (VAR68 = 0; VAR68 < 16; VAR68++)
                {
                    int VAR71 = FUN17(VAR2, VAR4, VAR68);
                    VAR4->VAR73[VAR74[VAR68]] = FUN18(VAR4, VAR71);
                    FUN20(VAR2->VAR21, "", VAR71, VAR4->VAR73[VAR74[VAR68]]);
                }
            }
            FUN21(VAR2, VAR4);
            if (FUN22(VAR4->VAR73, VAR2->VAR21, VAR4->VAR75, VAR4->VAR76) < 0)
                return -1;
        }
        else
        {
            VAR4->VAR51 = FUN23(VAR2->VAR21, VAR4->VAR75, VAR4->VAR76, VAR4->VAR51, 0);
            if (VAR4->VAR51 < 0)
                return -1;
        }
        if (VAR15)
        {
            VAR2->VAR33[VAR8] = VAR52 = FUN24(VAR2, VAR4);
            VAR52 = FUN23(VAR2->VAR21, VAR4->VAR75, VAR4->VAR76, VAR52, 1);
            if (VAR52 < 0)
                return -1;
            VAR4->VAR77 = VAR52;
        }
        else
        {
            VAR4->VAR77 = VAR78;
        }
    }
    else if (VAR10 == 4)
    {
        int VAR68, VAR79, VAR80[4], VAR81, VAR82[2][4];
        if (VAR4->VAR23 == VAR35)
        {
            for (VAR68 = 0; VAR68 < 4; VAR68++)
            {
                VAR4->VAR83[VAR68] = FUN25(VAR4);
                VAR80[VAR68] = VAR84[VAR4->VAR83[VAR68]].VAR10;
                VAR4->VAR83[VAR68] = VAR84[VAR4->VAR83[VAR68]].VAR45;
            }
            if (FUN9(VAR4->VAR83[0] | VAR4->VAR83[1] | VAR4->VAR83[2] | VAR4->VAR83[3]))
            {
                FUN26(VAR2, VAR4, &VAR9);
                VAR4->VAR85[0][VAR74[4]] = VAR4->VAR85[1][VAR74[4]] = VAR4->VAR85[0][VAR74[12]] = VAR4->VAR85[1][VAR74[12]] = VAR86;
                for (VAR68 = 0; VAR68 < 4; VAR68++)
                    FUN19(&VAR4->VAR87[VAR74[4 * VAR68]], 2, 2, 8, (VAR4->VAR83[VAR68] >> 1) & 0xFF, 1);
            }
        }
        else
        {
            for (VAR68 = 0; VAR68 < 4; VAR68++)
            {
                VAR4->VAR83[VAR68] = FUN27(VAR4);
                VAR80[VAR68] = VAR88[VAR4->VAR83[VAR68]].VAR10;
                VAR4->VAR83[VAR68] = VAR88[VAR4->VAR83[VAR68]].VAR45;
            }
        }
        for (VAR81 = 0; VAR81 < VAR4->VAR89; VAR81++)
        {
            for (VAR68 = 0; VAR68 < 4; VAR68++)
            {
                if (FUN9(VAR4->VAR83[VAR68]))
                    continue;
                if (FUN28(VAR4->VAR83[VAR68], 0, VAR81))
                {
                    int VAR90 = VAR4->VAR91[VAR81] << FUN29(VAR4);
                    if (VAR90 > 1)
                    {
                        VAR82[VAR81][VAR68] = FUN30(VAR4, VAR81, 4 * VAR68);
                        if (VAR82[VAR81][VAR68] >= (unsigned)VAR90)
                        {
                            FUN31(VAR2->VAR21, VAR92, "", VAR82[VAR81][VAR68], VAR90);
                            return -1;
                        }
                    }
                    else
                        VAR82[VAR81][VAR68] = 0;
                }
                else
                {
                    VAR82[VAR81][VAR68] = -1;
                }
                VAR4->VAR85[VAR81][VAR74[4 * VAR68] + 1] = VAR4->VAR85[VAR81][VAR74[4 * VAR68] + 8] = VAR4->VAR85[VAR81][VAR74[4 * VAR68] + 9] = VAR82[VAR81][VAR68];
            }
        }
        if (VAR12)
            VAR12 = FUN32(VAR2, VAR4);
        for (VAR81 = 0; VAR81 < VAR4->VAR89; VAR81++)
        {
            for (VAR68 = 0; VAR68 < 4; VAR68++)
            {
                VAR4->VAR85[VAR81][VAR74[4 * VAR68]] = VAR4->VAR85[VAR81][VAR74[4 * VAR68] + 1];
                if (FUN9(VAR4->VAR83[VAR68]))
                {
                    FUN19(VAR4->VAR93[VAR81][VAR74[4 * VAR68]], 2, 2, 8, 0, 2);
                    continue;
                }
                if (FUN28(VAR4->VAR83[VAR68], 0, VAR81) && !FUN9(VAR4->VAR83[VAR68]))
                {
                    const int VAR83 = VAR4->VAR83[VAR68];
                    const int VAR94 = (VAR83 & (VAR95 | VAR96)) ? 2 : 1;
                    for (VAR79 = 0; VAR79 < VAR80[VAR68]; VAR79++)
                    {
                        int VAR97, VAR98;
                        int VAR99, VAR100;
                        const int VAR101 = 4 * VAR68 + VAR94 * VAR79;
                        FUN33(*VAR102)[2] = &VAR4->VAR102[VAR81][VAR74[VAR101]];
                        FUN34(*VAR93)[2] = &VAR4->VAR93[VAR81][VAR74[VAR101]];
                        FUN35(VAR2, VAR4, VAR101, VAR94, VAR81, VAR4->VAR85[VAR81][VAR74[VAR101]], &VAR99, &VAR100);
                        FUN36(VAR4, VAR81, VAR101)
                        FUN2(VAR2->VAR21, "", VAR99, VAR100);
                        if (FUN37(VAR83))
                        {
                            VAR102[1][0] = VAR102[8][0] = VAR102[9][0] = VAR99;
                            VAR102[1][1] = VAR102[8][1] = VAR102[9][1] = VAR100;
                            VAR93[1][0] = VAR93[8][0] = VAR93[9][0] = VAR97;
                            VAR93[1][1] = VAR93[8][1] = VAR93[9][1] = VAR98;
                        }
                        else if (FUN38(VAR83))
                        {
                            VAR102[1][0] = VAR99;
                            VAR102[1][1] = VAR100;
                            VAR93[1][0] = VAR97;
                            VAR93[1][1] = VAR98;
                        }
                        else if (FUN39(VAR83))
                        {
                            VAR102[8][0] = VAR99;
                            VAR102[8][1] = VAR100;
                            VAR93[8][0] = VAR97;
                            VAR93[8][1] = VAR98;
                        }
                        VAR102[0][0] = VAR99;
                        VAR102[0][1] = VAR100;
                        VAR93[0][0] = VAR97;
                        VAR93[0][1] = VAR98;
                    }
                }
                else
                {
                    FUN19(VAR4->VAR102[VAR81][VAR74[4 * VAR68]], 2, 2, 8, 0, 4);
                    FUN19(VAR4->VAR93[VAR81][VAR74[4 * VAR68]], 2, 2, 8, 0, 2);
                }
            }
        }
    }
    else if (FUN9(VAR9))
    {
        FUN26(VAR2, VAR4, &VAR9);
        FUN19(VAR4->VAR93[0][VAR74[0]], 4, 4, 8, 0, 2);
        FUN19(VAR4->VAR93[1][VAR74[0]], 4, 4, 8, 0, 2);
        VAR12 &= VAR6->VAR103;
    }
    else
    {
        int VAR81, VAR68;
        if (FUN40(VAR9))
        {
            for (VAR81 = 0; VAR81 < VAR4->VAR89; VAR81++)
            {
                if (FUN28(VAR9, 0, VAR81))
                {
                    int VAR82, VAR90 = VAR4->VAR91[VAR81] << FUN29(VAR4);
                    if (VAR90 > 1)
                    {
                        VAR82 = FUN30(VAR4, VAR81, 0);
                        if (VAR82 >= (unsigned)VAR90)
                        {
                            FUN31(VAR2->VAR21, VAR92, "", VAR82, VAR90);
                            return -1;
                        }
                    }
                    else
                        VAR82 = 0;
                    FUN19(&VAR4->VAR85[VAR81][VAR74[0]], 4, 4, 8, VAR82, 1);
                }
            }
            for (VAR81 = 0; VAR81 < VAR4->VAR89; VAR81++)
            {
                if (FUN28(VAR9, 0, VAR81))
                {
                    int VAR99, VAR100, VAR97, VAR98;
                    FUN35(VAR2, VAR4, 0, 4, VAR81, VAR4->VAR85[VAR81][VAR74[0]], &VAR99, &VAR100);
                    FUN36(VAR4, VAR81, 0)
                    FUN2(VAR2->VAR21, "", VAR99, VAR100);
                    FUN19(VAR4->VAR93[VAR81][VAR74[0]], 4, 4, 8, FUN41(VAR97, VAR98), 2);
                    FUN19(VAR4->VAR102[VAR81][VAR74[0]], 4, 4, 8, FUN42(VAR99, VAR100), 4);
                }
            }
        }
        else if (FUN43(VAR9))
        {
            for (VAR81 = 0; VAR81 < VAR4->VAR89; VAR81++)
            {
                for (VAR68 = 0; VAR68 < 2; VAR68++)
                {
                    if (FUN28(VAR9, VAR68, VAR81))
                    {
                        int VAR82, VAR90 = VAR4->VAR91[VAR81] << FUN29(VAR4);
                        if (VAR90 > 1)
                        {
                            VAR82 = FUN30(VAR4, VAR81, 8 * VAR68);
                            if (VAR82 >= (unsigned)VAR90)
                            {
                                FUN31(VAR2->VAR21, VAR92, "", VAR82, VAR90);
                                return -1;
                            }
                        }
                        else
                            VAR82 = 0;
                        FUN19(&VAR4->VAR85[VAR81][VAR74[0] + 16 * VAR68], 4, 2, 8, VAR82, 1);
                    }
                    else
                        FUN19(&VAR4->VAR85[VAR81][VAR74[0] + 16 * VAR68], 4, 2, 8, (VAR104 & 0xFF), 1);
                }
            }
            for (VAR81 = 0; VAR81 < VAR4->VAR89; VAR81++)
            {
                for (VAR68 = 0; VAR68 < 2; VAR68++)
                {
                    if (FUN28(VAR9, VAR68, VAR81))
                    {
                        int VAR99, VAR100, VAR97, VAR98;
                        FUN44(VAR2, VAR4, 8 * VAR68, VAR81, VAR4->VAR85[VAR81][VAR74[0] + 16 * VAR68], &VAR99, &VAR100);
                        FUN36(VAR4, VAR81, 8 * VAR68)
                        FUN2(VAR2->VAR21, "", VAR99, VAR100);
                        FUN19(VAR4->VAR93[VAR81][VAR74[0] + 16 * VAR68], 4, 2, 8, FUN41(VAR97, VAR98), 2);
                        FUN19(VAR4->VAR102[VAR81][VAR74[0] + 16 * VAR68], 4, 2, 8, FUN42(VAR99, VAR100), 4);
                    }
                    else
                    {
                        FUN19(VAR4->VAR93[VAR81][VAR74[0] + 16 * VAR68], 4, 2, 8, 0, 2);
                        FUN19(VAR4->VAR102[VAR81][VAR74[0] + 16 * VAR68], 4, 2, 8, 0, 4);
                    }
                }
            }
        }
        else
        {
            assert(FUN45(VAR9));
            for (VAR81 = 0; VAR81 < VAR4->VAR89; VAR81++)
            {
                for (VAR68 = 0; VAR68 < 2; VAR68++)
                {
                    if (FUN28(VAR9, VAR68, VAR81))
                    {
                        int VAR82, VAR90 = VAR4->VAR91[VAR81] << FUN29(VAR4);
                        if (VAR90 > 1)
                        {
                            VAR82 = FUN30(VAR4, VAR81, 4 * VAR68);
                            if (VAR82 >= (unsigned)VAR90)
                            {
                                FUN31(VAR2->VAR21, VAR92, "", VAR82, VAR90);
                                return -1;
                            }
                        }
                        else
                            VAR82 = 0;
                        FUN19(&VAR4->VAR85[VAR81][VAR74[0] + 2 * VAR68], 2, 4, 8, VAR82, 1);
                    }
                    else
                        FUN19(&VAR4->VAR85[VAR81][VAR74[0] + 2 * VAR68], 2, 4, 8, (VAR104 & 0xFF), 1);
                }
            }
            for (VAR81 = 0; VAR81 < VAR4->VAR89; VAR81++)
            {
                for (VAR68 = 0; VAR68 < 2; VAR68++)
                {
                    if (FUN28(VAR9, VAR68, VAR81))
                    {
                        int VAR99, VAR100, VAR97, VAR98;
                        FUN46(VAR2, VAR4, VAR68 * 4, VAR81, VAR4->VAR85[VAR81][VAR74[0] + 2 * VAR68], &VAR99, &VAR100);
                        FUN36(VAR4, VAR81, 4 * VAR68)
                        FUN2(VAR2->VAR21, "", VAR99, VAR100);
                        FUN19(VAR4->VAR93[VAR81][VAR74[0] + 2 * VAR68], 2, 4, 8, FUN41(VAR97, VAR98), 2);
                        FUN19(VAR4->VAR102[VAR81][VAR74[0] + 2 * VAR68], 2, 4, 8, FUN42(VAR99, VAR100), 4);
                    }
                    else
                    {
                        FUN19(VAR4->VAR93[VAR81][VAR74[0] + 2 * VAR68], 2, 4, 8, 0, 2);
                        FUN19(VAR4->VAR102[VAR81][VAR74[0] + 2 * VAR68], 2, 4, 8, 0, 4);
                    }
                }
            }
        }
    }
    if (FUN47(VAR9))
    {
        VAR2->VAR33[VAR8] = 0;
        FUN48(VAR2, VAR4, VAR9);
    }
    if (!FUN49(VAR9))
    {
        VAR11 = FUN50(VAR4);
        if (VAR15)
            VAR11 |= FUN51(VAR4) << 4;
    }
    VAR2->VAR32[VAR8] = VAR4->VAR11 = VAR11;
    if (VAR12 && (VAR11 & 15) && !FUN15(VAR9))
    {
        VAR9 |= VAR70 * FUN10(&VAR4->VAR40, &VAR4->VAR41[399 + VAR4->VAR69]);
    }
    if (FUN52(VAR2) && FUN53(VAR9))
    {
        int VAR68;
        VAR59 *VAR105 = VAR4->VAR106;
        for (VAR68 = 0; VAR68 < 2; VAR68++)
        {
            if (VAR4->VAR37[FUN54(VAR68)] && !FUN53(VAR4->VAR37[FUN54(VAR68)]))
            {
                VAR105[3 + 8 * 1 + 2 * 8 * VAR68] = VAR105[3 + 8 * 2 + 2 * 8 * VAR68] = VAR105[3 + 8 * 6 + 2 * 8 * VAR68] = VAR105[3 + 8 * 7 + 2 * 8 * VAR68] = VAR105[3 + 8 * 11 + 2 * 8 * VAR68] = VAR105[3 + 8 * 12 + 2 * 8 * VAR68] = FUN15(VAR9) ? 64 : 0;
            }
        }
        if (VAR4->VAR39 && !FUN53(VAR4->VAR39))
        {
            uint32_t VAR107 = FUN55(VAR2) && !FUN15(VAR9) ? 0 : 0x40404040;
            FUN56(&VAR105[4 + 8 * 0], VAR107);
            FUN56(&VAR105[4 + 8 * 5], VAR107);
            FUN56(&VAR105[4 + 8 * 10], VAR107);
        }
    }
    VAR2->VAR28.VAR9[VAR8] = VAR9;
    if (VAR11 || FUN49(VAR9))
    {
        const VAR59 *VAR108, *VAR109;
        const VAR110 *VAR111;
        if (FUN57(VAR9))
        {
            VAR109 = VAR4->VAR112 ? VAR2->VAR113 : VAR2->VAR114;
            VAR108 = VAR4->VAR112 ? VAR2->VAR115 : VAR2->VAR116;
        }
        else
        {
            VAR109 = VAR4->VAR112 ? VAR2->VAR117 : VAR2->VAR118;
            VAR108 = VAR4->VAR112 ? VAR2->VAR119 : VAR2->VAR120;
        }
        if (FUN10(&VAR4->VAR40, &VAR4->VAR41[60 + (VAR4->VAR34 != 0)]))
        {
            int VAR121 = 1;
            int VAR36 = 2;
            const int VAR122 = 51 + 6 * (VAR6->VAR58 - 8);
            while (FUN10(&VAR4->VAR40, &VAR4->VAR41[60 + VAR36]))
            {
                VAR36 = 3;
                VAR121++;
                if (VAR121 > 2 * VAR122)
                {
                    FUN31(VAR2->VAR21, VAR92, "", VAR4->VAR18, VAR4->VAR19);
                    return -1;
                }
            }
            if (VAR121 & 0x01)
                VAR121 = (VAR121 + 1) >> 1;
            else
                VAR121 = -((VAR121 + 1) >> 1);
            VAR4->VAR34 = VAR121;
            VAR4->VAR112 += VAR121;
            if (((unsigned)VAR4->VAR112) > VAR122)
            {
                if (VAR4->VAR112 < 0)
                    VAR4->VAR112 += VAR122 + 1;
                else
                    VAR4->VAR112 -= VAR122 + 1;
            }
            VAR4->VAR123[0] = FUN58(VAR2, 0, VAR4->VAR112);
            VAR4->VAR123[1] = FUN58(VAR2, 1, VAR4->VAR112);
        }
        else
            VAR4->VAR34 = 0;
        FUN59(VAR2, VAR4, VAR108, VAR109, VAR17, VAR9, VAR11, 0);
        if (FUN52(VAR2))
        {
            FUN59(VAR2, VAR4, VAR108, VAR109, VAR17, VAR9, VAR11, 1);
            FUN59(VAR2, VAR4, VAR108, VAR109, VAR17, VAR9, VAR11, 2);
        }
        else if (FUN60(VAR2))
        {
            if (VAR11 & 0x30)
            {
                int VAR124;
                for (VAR124 = 0; VAR124 < 2; VAR124++)
                    FUN61(VAR2, VAR4, VAR4->VAR125 + ((256 + 16 * 16 * VAR124) << VAR17), 3, VAR126 + VAR124, VAR127, 8);
            }
            if (VAR11 & 0x20)
            {
                int VAR124, VAR68, VAR128;
                for (VAR124 = 0; VAR124 < 2; VAR124++)
                {
                    VAR129 *VAR125 = VAR4->VAR125 + (16 * (16 + 16 * VAR124) << VAR17);
                    VAR111 = VAR2->VAR7.VAR13->VAR130[VAR124 + 1 + (FUN15(VAR9) ? 0 : 3)][VAR4->VAR123[VAR124]];
                    for (VAR128 = 0; VAR128 < 2; VAR128++)
                    {
                        for (VAR68 = 0; VAR68 < 4; VAR68++)
                        {
                            const int VAR101 = 16 + 16 * VAR124 + 8 * VAR128 + VAR68;
                            FUN62(VAR2, VAR4, VAR125, 4, VAR101, VAR108 + 1, VAR111, 15);
                            VAR125 += 16 << VAR17;
                        }
                    }
                }
            }
            else
            {
                FUN19(&VAR4->VAR106[VAR74[16]], 4, 4, 8, 0, 1);
                FUN19(&VAR4->VAR106[VAR74[32]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            if (VAR11 & 0x30)
            {
                int VAR124;
                for (VAR124 = 0; VAR124 < 2; VAR124++)
                    FUN63(VAR2, VAR4, VAR4->VAR125 + ((256 + 16 * 16 * VAR124) << VAR17), 3, VAR126 + VAR124, VAR131, 4);
            }
            if (VAR11 & 0x20)
            {
                int VAR124, VAR68;
                for (VAR124 = 0; VAR124 < 2; VAR124++)
                {
                    VAR111 = VAR2->VAR7.VAR13->VAR130[VAR124 + 1 + (FUN15(VAR9) ? 0 : 3)][VAR4->VAR123[VAR124]];
                    for (VAR68 = 0; VAR68 < 4; VAR68++)
                    {
                        const int VAR101 = 16 + 16 * VAR124 + VAR68;
                        FUN62(VAR2, VAR4, VAR4->VAR125 + (16 * VAR101 << VAR17), 4, VAR101, VAR108 + 1, VAR111, 15);
                    }
                }
            }
            else
            {
                FUN19(&VAR4->VAR106[VAR74[16]], 4, 4, 8, 0, 1);
                FUN19(&VAR4->VAR106[VAR74[32]], 4, 4, 8, 0, 1);
            }
        }
    }
    else
    {
        FUN19(&VAR4->VAR106[VAR74[0]], 4, 4, 8, 0, 1);
        FUN19(&VAR4->VAR106[VAR74[16]], 4, 4, 8, 0, 1);
        FUN19(&VAR4->VAR106[VAR74[32]], 4, 4, 8, 0, 1);
        VAR4->VAR34 = 0;
    }
    VAR2->VAR28.VAR66[VAR8] = VAR4->VAR112;
    FUN64(VAR2, VAR4);
    return 0;
}