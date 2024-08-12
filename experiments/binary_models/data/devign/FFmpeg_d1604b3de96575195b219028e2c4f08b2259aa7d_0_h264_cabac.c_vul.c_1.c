int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5;
    int VAR6, VAR7, VAR8 = 0;
    int VAR9 = VAR2->VAR10.VAR11;
    int VAR12 = VAR2->VAR13.VAR14 == 1 || VAR2->VAR13.VAR14 == 2;
    const int VAR15 = VAR2->VAR15;
    VAR5 = VAR2->VAR5 = VAR4->VAR16 + VAR4->VAR17 * VAR4->VAR18;
    FUN2(VAR4->VAR19, "", VAR2->VAR20, VAR4->VAR16, VAR4->VAR17);
    if (VAR2->VAR21 != VAR22)
    {
        int VAR23;
        if (VAR24 && (VAR4->VAR17 & 1) == 1 && VAR2->VAR25)
            VAR23 = VAR2->VAR26;
        else
            VAR23 = FUN3(VAR2, VAR4->VAR16, VAR4->VAR17);
        if (VAR23)
        {
            if (VAR24 && (VAR4->VAR17 & 1) == 0)
            {
                VAR4->VAR27.VAR28.VAR6[VAR5] = VAR29;
                VAR2->VAR26 = FUN3(VAR2, VAR4->VAR16, VAR4->VAR17 + 1);
                if (!VAR2->VAR26)
                    VAR2->VAR30 = VAR2->VAR31 = FUN4(VAR2);
            }
            FUN5(VAR2);
            VAR2->VAR32[VAR5] = 0;
            VAR2->VAR33[VAR5] = 0;
            VAR2->VAR34 = 0;
            return 0;
        }
    }
    if (VAR24)
    {
        if ((VAR4->VAR17 & 1) == 0)
            VAR2->VAR30 = VAR2->VAR31 = FUN4(VAR2);
    }
    VAR2->VAR25 = 0;
    FUN6(VAR2, -(VAR35));
    if (VAR2->VAR21 == VAR36)
    {
        int VAR37 = 0;
        assert(VAR2->VAR21 == VAR36);
        if (!FUN7(VAR2->VAR38[VAR39] - 1))
            VAR37++;
        if (!FUN7(VAR2->VAR40 - 1))
            VAR37++;
        if (!FUN8(&VAR2->VAR41, &VAR2->VAR42[27 + VAR37]))
        {
            VAR6 = 0;
        }
        else if (!FUN8(&VAR2->VAR41, &VAR2->VAR42[27 + 3]))
        {
            VAR6 = 1 + FUN8(&VAR2->VAR41, &VAR2->VAR42[27 + 5]);
        }
        else
        {
            int VAR43;
            VAR43 = FUN8(&VAR2->VAR41, &VAR2->VAR42[27 + 4]) << 3;
            VAR43 += FUN8(&VAR2->VAR41, &VAR2->VAR42[27 + 5]) << 2;
            VAR43 += FUN8(&VAR2->VAR41, &VAR2->VAR42[27 + 5]) << 1;
            VAR43 += FUN8(&VAR2->VAR41, &VAR2->VAR42[27 + 5]);
            if (VAR43 < 8)
            {
                VAR6 = VAR43 + 3;
            }
            else if (VAR43 == 13)
            {
                VAR6 = FUN9(VAR2, 32, 0);
                goto VAR44;
            }
            else if (VAR43 == 14)
            {
                VAR6 = 11;
            }
            else if (VAR43 == 15)
            {
                VAR6 = 22;
            }
            else
            {
                VAR43 = (VAR43 << 1) + FUN8(&VAR2->VAR41, &VAR2->VAR42[27 + 5]);
                VAR6 = VAR43 - 4;
            }
        }
        VAR7 = VAR45[VAR6].VAR7;
        VAR6 = VAR45[VAR6].VAR46;
    }
    else if (VAR2->VAR21 == VAR47)
    {
        if (FUN8(&VAR2->VAR41, &VAR2->VAR42[14]) == 0)
        {
            if (FUN8(&VAR2->VAR41, &VAR2->VAR42[15]) == 0)
            {
                VAR6 = 3 * FUN8(&VAR2->VAR41, &VAR2->VAR42[16]);
            }
            else
            {
                VAR6 = 2 - FUN8(&VAR2->VAR41, &VAR2->VAR42[17]);
            }
            VAR7 = VAR48[VAR6].VAR7;
            VAR6 = VAR48[VAR6].VAR46;
        }
        else
        {
            VAR6 = FUN9(VAR2, 17, 0);
            goto VAR44;
        }
    }
    else
    {
        VAR6 = FUN9(VAR2, 3, 1);
        if (VAR2->VAR49 == VAR50 && VAR6)
            VAR6--;
        assert(VAR2->VAR21 == VAR22);
    VAR44:
        VAR7 = 0;
        VAR8 = VAR51[VAR6].VAR8;
        VAR2->VAR52 = VAR51[VAR6].VAR53;
        VAR6 = VAR51[VAR6].VAR46;
    }
    if (VAR35)
        VAR6 |= VAR54;
    VAR2->VAR55[VAR5] = VAR2->VAR56;
    if (FUN10(VAR6))
    {
        static const uint16_t VAR57[4] = {256, 384, 512, 768};
        const int VAR58 = VAR57[VAR2->VAR13.VAR14] * VAR2->VAR13.VAR59 >> 3;
        const VAR60 *VAR61;
        VAR61 = VAR2->VAR41.VAR62;
        if (VAR2->VAR41.VAR63 & 0x1)
            VAR61--;
        if (VAR64 == 16)
        {
            if (VAR2->VAR41.VAR63 & 0x1FF)
                VAR61--;
        }
        memcpy(VAR2->VAR65, VAR61, VAR58);
        VAR61 += VAR58;
        FUN11(&VAR2->VAR41, VAR61, VAR2->VAR41.VAR66 - VAR61);
        VAR2->VAR32[VAR5] = 0xf7ef;
        VAR2->VAR33[VAR5] = 0;
        VAR4->VAR27.VAR28.VAR67[VAR5] = 0;
        memset(VAR2->VAR68[VAR5], 16, 48);
        VAR4->VAR27.VAR28.VAR6[VAR5] = VAR6;
        VAR2->VAR34 = 0;
        return 0;
    }
    if (VAR69)
    {
        VAR2->VAR70[0] <<= 1;
        VAR2->VAR70[1] <<= 1;
    }
    FUN12(VAR2, VAR6);
    if (FUN13(VAR6))
    {
        int VAR71, VAR53;
        if (FUN14(VAR6))
        {
            if (VAR9 && FUN8(&VAR2->VAR41, &VAR2->VAR42[399 + VAR2->VAR72]))
            {
                VAR6 |= VAR73;
                for (VAR71 = 0; VAR71 < 16; VAR71 += 4)
                {
                    int VAR74 = FUN15(VAR2, VAR71);
                    int VAR75 = FUN16(VAR2, VAR74);
                    FUN17(&VAR2->VAR76[VAR77[VAR71]], 2, 2, 8, VAR75, 1);
                }
            }
            else
            {
                for (VAR71 = 0; VAR71 < 16; VAR71++)
                {
                    int VAR74 = FUN15(VAR2, VAR71);
                    VAR2->VAR76[VAR77[VAR71]] = FUN16(VAR2, VAR74);
                }
            }
            FUN18(VAR2);
            if (FUN19(VAR2) < 0)
                return -1;
        }
        else
        {
            VAR2->VAR52 = FUN20(VAR2, VAR2->VAR52, 0);
            if (VAR2->VAR52 < 0)
                return -1;
        }
        if (VAR12)
        {
            VAR2->VAR33[VAR5] = VAR53 = FUN21(VAR2);
            VAR53 = FUN20(VAR2, VAR53, 1);
            if (VAR53 < 0)
                return -1;
            VAR2->VAR78 = VAR53;
        }
        else
        {
            VAR2->VAR78 = VAR79;
        }
    }
    else if (VAR7 == 4)
    {
        int VAR71, VAR80, VAR81[4], VAR82, VAR83[2][4];
        if (VAR2->VAR21 == VAR36)
        {
            for (VAR71 = 0; VAR71 < 4; VAR71++)
            {
                VAR2->VAR84[VAR71] = FUN22(VAR2);
                VAR81[VAR71] = VAR85[VAR2->VAR84[VAR71]].VAR7;
                VAR2->VAR84[VAR71] = VAR85[VAR2->VAR84[VAR71]].VAR46;
            }
            if (FUN7(VAR2->VAR84[0] | VAR2->VAR84[1] | VAR2->VAR84[2] | VAR2->VAR84[3]))
            {
                FUN23(VAR2, &VAR6);
                VAR2->VAR86[0][VAR77[4]] = VAR2->VAR86[1][VAR77[4]] = VAR2->VAR86[0][VAR77[12]] = VAR2->VAR86[1][VAR77[12]] = VAR87;
                for (VAR71 = 0; VAR71 < 4; VAR71++)
                    FUN17(&VAR2->VAR88[VAR77[4 * VAR71]], 2, 2, 8, (VAR2->VAR84[VAR71] >> 1) & 0xFF, 1);
            }
        }
        else
        {
            for (VAR71 = 0; VAR71 < 4; VAR71++)
            {
                VAR2->VAR84[VAR71] = FUN24(VAR2);
                VAR81[VAR71] = VAR89[VAR2->VAR84[VAR71]].VAR7;
                VAR2->VAR84[VAR71] = VAR89[VAR2->VAR84[VAR71]].VAR46;
            }
        }
        for (VAR82 = 0; VAR82 < VAR2->VAR90; VAR82++)
        {
            for (VAR71 = 0; VAR71 < 4; VAR71++)
            {
                if (FUN7(VAR2->VAR84[VAR71]))
                    continue;
                if (FUN25(VAR2->VAR84[VAR71], 0, VAR82))
                {
                    if (VAR2->VAR70[VAR82] > 1)
                    {
                        VAR83[VAR82][VAR71] = FUN26(VAR2, VAR82, 4 * VAR71);
                        if (VAR83[VAR82][VAR71] >= (unsigned)VAR2->VAR70[VAR82])
                        {
                            FUN27(VAR4->VAR19, VAR91, "", VAR83[VAR82][VAR71], VAR2->VAR70[VAR82]);
                        }
                    }
                    else
                        VAR83[VAR82][VAR71] = 0;
                }
                else
                {
                    VAR83[VAR82][VAR71] = -1;
                }
                VAR2->VAR86[VAR82][VAR77[4 * VAR71] + 1] = VAR2->VAR86[VAR82][VAR77[4 * VAR71] + 8] = VAR2->VAR86[VAR82][VAR77[4 * VAR71] + 9] = VAR83[VAR82][VAR71];
            }
        }
        if (VAR9)
            VAR9 = FUN28(VAR2);
        for (VAR82 = 0; VAR82 < VAR2->VAR90; VAR82++)
        {
            for (VAR71 = 0; VAR71 < 4; VAR71++)
            {
                VAR2->VAR86[VAR82][VAR77[4 * VAR71]] = VAR2->VAR86[VAR82][VAR77[4 * VAR71] + 1];
                if (FUN7(VAR2->VAR84[VAR71]))
                {
                    FUN17(VAR2->VAR92[VAR82][VAR77[4 * VAR71]], 2, 2, 8, 0, 2);
                    continue;
                }
                if (FUN25(VAR2->VAR84[VAR71], 0, VAR82) && !FUN7(VAR2->VAR84[VAR71]))
                {
                    const int VAR84 = VAR2->VAR84[VAR71];
                    const int VAR93 = (VAR84 & (VAR94 | VAR95)) ? 2 : 1;
                    for (VAR80 = 0; VAR80 < VAR81[VAR71]; VAR80++)
                    {
                        int VAR96, VAR97;
                        int VAR98, VAR99;
                        const int VAR100 = 4 * VAR71 + VAR93 * VAR80;
                        FUN29(*VAR101)[2] = &VAR2->VAR101[VAR82][VAR77[VAR100]];
                        FUN30(*VAR92)[2] = &VAR2->VAR92[VAR82][VAR77[VAR100]];
                        FUN31(VAR2, VAR100, VAR93, VAR82, VAR2->VAR86[VAR82][VAR77[VAR100]], &VAR98, &VAR99);
                        FUN32(VAR2, VAR82, VAR100)
                        FUN2(VAR4->VAR19, "", VAR98, VAR99);
                        if (FUN33(VAR84))
                        {
                            VAR101[1][0] = VAR101[8][0] = VAR101[9][0] = VAR98;
                            VAR101[1][1] = VAR101[8][1] = VAR101[9][1] = VAR99;
                            VAR92[1][0] = VAR92[8][0] = VAR92[9][0] = VAR96;
                            VAR92[1][1] = VAR92[8][1] = VAR92[9][1] = VAR97;
                        }
                        else if (FUN34(VAR84))
                        {
                            VAR101[1][0] = VAR98;
                            VAR101[1][1] = VAR99;
                            VAR92[1][0] = VAR96;
                            VAR92[1][1] = VAR97;
                        }
                        else if (FUN35(VAR84))
                        {
                            VAR101[8][0] = VAR98;
                            VAR101[8][1] = VAR99;
                            VAR92[8][0] = VAR96;
                            VAR92[8][1] = VAR97;
                        }
                        VAR101[0][0] = VAR98;
                        VAR101[0][1] = VAR99;
                        VAR92[0][0] = VAR96;
                        VAR92[0][1] = VAR97;
                    }
                }
                else
                {
                    FUN17(VAR2->VAR101[VAR82][VAR77[4 * VAR71]], 2, 2, 8, 0, 4);
                    FUN17(VAR2->VAR92[VAR82][VAR77[4 * VAR71]], 2, 2, 8, 0, 2);
                }
            }
        }
    }
    else if (FUN7(VAR6))
    {
        FUN23(VAR2, &VAR6);
        FUN17(VAR2->VAR92[0][VAR77[0]], 4, 4, 8, 0, 2);
        FUN17(VAR2->VAR92[1][VAR77[0]], 4, 4, 8, 0, 2);
        VAR9 &= VAR2->VAR13.VAR102;
    }
    else
    {
        int VAR82, VAR71;
        if (FUN36(VAR6))
        {
            for (VAR82 = 0; VAR82 < VAR2->VAR90; VAR82++)
            {
                if (FUN25(VAR6, 0, VAR82))
                {
                    int VAR83;
                    if (VAR2->VAR70[VAR82] > 1)
                    {
                        VAR83 = FUN26(VAR2, VAR82, 0);
                        if (VAR83 >= (unsigned)VAR2->VAR70[VAR82])
                        {
                            FUN27(VAR4->VAR19, VAR91, "", VAR83, VAR2->VAR70[VAR82]);
                        }
                    }
                    else
                        VAR83 = 0;
                    FUN17(&VAR2->VAR86[VAR82][VAR77[0]], 4, 4, 8, VAR83, 1);
                }
            }
            for (VAR82 = 0; VAR82 < VAR2->VAR90; VAR82++)
            {
                if (FUN25(VAR6, 0, VAR82))
                {
                    int VAR98, VAR99, VAR96, VAR97;
                    FUN31(VAR2, 0, 4, VAR82, VAR2->VAR86[VAR82][VAR77[0]], &VAR98, &VAR99);
                    FUN32(VAR2, VAR82, 0)
                    FUN2(VAR4->VAR19, "", VAR98, VAR99);
                    FUN17(VAR2->VAR92[VAR82][VAR77[0]], 4, 4, 8, FUN37(VAR96, VAR97), 2);
                    FUN17(VAR2->VAR101[VAR82][VAR77[0]], 4, 4, 8, FUN38(VAR98, VAR99), 4);
                }
            }
        }
        else if (FUN39(VAR6))
        {
            for (VAR82 = 0; VAR82 < VAR2->VAR90; VAR82++)
            {
                for (VAR71 = 0; VAR71 < 2; VAR71++)
                {
                    if (FUN25(VAR6, VAR71, VAR82))
                    {
                        int VAR83;
                        if (VAR2->VAR70[VAR82] > 1)
                        {
                            VAR83 = FUN26(VAR2, VAR82, 8 * VAR71);
                            if (VAR83 >= (unsigned)VAR2->VAR70[VAR82])
                            {
                                FUN27(VAR4->VAR19, VAR91, "", VAR83, VAR2->VAR70[VAR82]);
                            }
                        }
                        else
                            VAR83 = 0;
                        FUN17(&VAR2->VAR86[VAR82][VAR77[0] + 16 * VAR71], 4, 2, 8, VAR83, 1);
                    }
                    else
                        FUN17(&VAR2->VAR86[VAR82][VAR77[0] + 16 * VAR71], 4, 2, 8, (VAR103 & 0xFF), 1);
                }
            }
            for (VAR82 = 0; VAR82 < VAR2->VAR90; VAR82++)
            {
                for (VAR71 = 0; VAR71 < 2; VAR71++)
                {
                    if (FUN25(VAR6, VAR71, VAR82))
                    {
                        int VAR98, VAR99, VAR96, VAR97;
                        FUN40(VAR2, 8 * VAR71, VAR82, VAR2->VAR86[VAR82][VAR77[0] + 16 * VAR71], &VAR98, &VAR99);
                        FUN32(VAR2, VAR82, 8 * VAR71)
                        FUN2(VAR4->VAR19, "", VAR98, VAR99);
                        FUN17(VAR2->VAR92[VAR82][VAR77[0] + 16 * VAR71], 4, 2, 8, FUN37(VAR96, VAR97), 2);
                        FUN17(VAR2->VAR101[VAR82][VAR77[0] + 16 * VAR71], 4, 2, 8, FUN38(VAR98, VAR99), 4);
                    }
                    else
                    {
                        FUN17(VAR2->VAR92[VAR82][VAR77[0] + 16 * VAR71], 4, 2, 8, 0, 2);
                        FUN17(VAR2->VAR101[VAR82][VAR77[0] + 16 * VAR71], 4, 2, 8, 0, 4);
                    }
                }
            }
        }
        else
        {
            assert(FUN41(VAR6));
            for (VAR82 = 0; VAR82 < VAR2->VAR90; VAR82++)
            {
                for (VAR71 = 0; VAR71 < 2; VAR71++)
                {
                    if (FUN25(VAR6, VAR71, VAR82))
                    {
                        int VAR83;
                        if (VAR2->VAR70[VAR82] > 1)
                        {
                            VAR83 = FUN26(VAR2, VAR82, 4 * VAR71);
                            if (VAR83 >= (unsigned)VAR2->VAR70[VAR82])
                            {
                                FUN27(VAR4->VAR19, VAR91, "", VAR83, VAR2->VAR70[VAR82]);
                            }
                        }
                        else
                            VAR83 = 0;
                        FUN17(&VAR2->VAR86[VAR82][VAR77[0] + 2 * VAR71], 2, 4, 8, VAR83, 1);
                    }
                    else
                        FUN17(&VAR2->VAR86[VAR82][VAR77[0] + 2 * VAR71], 2, 4, 8, (VAR103 & 0xFF), 1);
                }
            }
            for (VAR82 = 0; VAR82 < VAR2->VAR90; VAR82++)
            {
                for (VAR71 = 0; VAR71 < 2; VAR71++)
                {
                    if (FUN25(VAR6, VAR71, VAR82))
                    {
                        int VAR98, VAR99, VAR96, VAR97;
                        FUN42(VAR2, VAR71 * 4, VAR82, VAR2->VAR86[VAR82][VAR77[0] + 2 * VAR71], &VAR98, &VAR99);
                        FUN32(VAR2, VAR82, 4 * VAR71)
                        FUN2(VAR4->VAR19, "", VAR98, VAR99);
                        FUN17(VAR2->VAR92[VAR82][VAR77[0] + 2 * VAR71], 2, 4, 8, FUN37(VAR96, VAR97), 2);
                        FUN17(VAR2->VAR101[VAR82][VAR77[0] + 2 * VAR71], 2, 4, 8, FUN38(VAR98, VAR99), 4);
                    }
                    else
                    {
                        FUN17(VAR2->VAR92[VAR82][VAR77[0] + 2 * VAR71], 2, 4, 8, 0, 2);
                        FUN17(VAR2->VAR101[VAR82][VAR77[0] + 2 * VAR71], 2, 4, 8, 0, 4);
                    }
                }
            }
        }
    }
    if (FUN43(VAR6))
    {
        VAR2->VAR33[VAR5] = 0;
        FUN44(VAR2, VAR6);
    }
    if (!FUN45(VAR6))
    {
        VAR8 = FUN46(VAR2);
        if (VAR12)
            VAR8 |= FUN47(VAR2) << 4;
    }
    VAR2->VAR32[VAR5] = VAR2->VAR8 = VAR8;
    if (VAR9 && (VAR8 & 15) && !FUN13(VAR6))
    {
        VAR6 |= VAR73 * FUN8(&VAR2->VAR41, &VAR2->VAR42[399 + VAR2->VAR72]);
    }
    if (VAR104 && FUN48(VAR6))
    {
        int VAR71;
        VAR60 *VAR105 = VAR2->VAR106;
        for (VAR71 = 0; VAR71 < 2; VAR71++)
        {
            if (VAR2->VAR38[FUN49(VAR71)] && !FUN48(VAR2->VAR38[FUN49(VAR71)]))
            {
                VAR105[3 + 8 * 1 + 2 * 8 * VAR71] = VAR105[3 + 8 * 2 + 2 * 8 * VAR71] = VAR105[3 + 8 * 6 + 2 * 8 * VAR71] = VAR105[3 + 8 * 7 + 2 * 8 * VAR71] = VAR105[3 + 8 * 11 + 2 * 8 * VAR71] = VAR105[3 + 8 * 12 + 2 * 8 * VAR71] = FUN13(VAR6) ? 64 : 0;
            }
        }
        if (VAR2->VAR40 && !FUN48(VAR2->VAR40))
        {
            uint32_t VAR107 = VAR108 && !FUN13(VAR6) ? 0 : 0x40404040;
            FUN50(&VAR105[4 + 8 * 0], VAR107);
            FUN50(&VAR105[4 + 8 * 5], VAR107);
            FUN50(&VAR105[4 + 8 * 10], VAR107);
        }
    }
    VAR4->VAR27.VAR28.VAR6[VAR5] = VAR6;
    if (VAR8 || FUN45(VAR6))
    {
        const VAR60 *VAR109, *VAR110;
        const VAR111 *VAR112;
        if (FUN51(VAR6))
        {
            VAR110 = VAR4->VAR113 ? VAR2->VAR114 : VAR2->VAR115;
            VAR109 = VAR4->VAR113 ? VAR2->VAR116 : VAR2->VAR117;
        }
        else
        {
            VAR110 = VAR4->VAR113 ? VAR2->VAR118 : VAR2->VAR119;
            VAR109 = VAR4->VAR113 ? VAR2->VAR120 : VAR2->VAR121;
        }
        if (FUN8(&VAR2->VAR41, &VAR2->VAR42[60 + (VAR2->VAR34 != 0)]))
        {
            int VAR122 = 1;
            int VAR37 = 2;
            const int VAR123 = 51 + 6 * (VAR2->VAR13.VAR59 - 8);
            while (FUN8(&VAR2->VAR41, &VAR2->VAR42[60 + VAR37]))
            {
                VAR37 = 3;
                VAR122++;
                if (VAR122 > 2 * VAR123)
                {
                    FUN27(VAR2->VAR4.VAR19, VAR91, "", VAR4->VAR16, VAR4->VAR17);
                }
            }
            if (VAR122 & 0x01)
                VAR122 = (VAR122 + 1) >> 1;
            else
                VAR122 = -((VAR122 + 1) >> 1);
            VAR2->VAR34 = VAR122;
            VAR4->VAR113 += VAR122;
            if (((unsigned)VAR4->VAR113) > VAR123)
            {
                if (VAR4->VAR113 < 0)
                    VAR4->VAR113 += VAR123 + 1;
                else
                    VAR4->VAR113 -= VAR123 + 1;
            }
            VAR2->VAR124[0] = FUN52(VAR2, 0, VAR4->VAR113);
            VAR2->VAR124[1] = FUN52(VAR2, 1, VAR4->VAR113);
        }
        else
            VAR2->VAR34 = 0;
        FUN53(VAR2, VAR109, VAR110, VAR15, VAR6, VAR8, 0);
        if (VAR104)
        {
            FUN53(VAR2, VAR109, VAR110, VAR15, VAR6, VAR8, 1);
            FUN53(VAR2, VAR109, VAR110, VAR15, VAR6, VAR8, 2);
        }
        else if (VAR125)
        {
            if (VAR8 & 0x30)
            {
                int VAR126;
                for (VAR126 = 0; VAR126 < 2; VAR126++)
                {
                    FUN54(VAR2, VAR2->VAR65 + ((256 + 16 * 16 * VAR126) << VAR15), 3, VAR127 + VAR126, VAR128, 8);
                }
            }
            if (VAR8 & 0x20)
            {
                int VAR126, VAR71, VAR129;
                for (VAR126 = 0; VAR126 < 2; VAR126++)
                {
                    VAR130 *VAR65 = VAR2->VAR65 + (16 * (16 + 16 * VAR126) << VAR15);
                    VAR112 = VAR2->VAR131[VAR126 + 1 + (FUN13(VAR6) ? 0 : 3)][VAR2->VAR124[VAR126]];
                    for (VAR129 = 0; VAR129 < 2; VAR129++)
                    {
                        for (VAR71 = 0; VAR71 < 4; VAR71++)
                        {
                            const int VAR100 = 16 + 16 * VAR126 + 8 * VAR129 + VAR71;
                            FUN55(VAR2, VAR65, 4, VAR100, VAR109 + 1, VAR112, 15);
                            VAR65 += 16 << VAR15;
                        }
                    }
                }
            }
            else
            {
                FUN17(&VAR2->VAR106[VAR77[16]], 4, 4, 8, 0, 1);
                FUN17(&VAR2->VAR106[VAR77[32]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            if (VAR8 & 0x30)
            {
                int VAR126;
                for (VAR126 = 0; VAR126 < 2; VAR126++)
                {
                    FUN56(VAR2, VAR2->VAR65 + ((256 + 16 * 16 * VAR126) << VAR15), 3, VAR127 + VAR126, VAR132, 4);
                }
            }
            if (VAR8 & 0x20)
            {
                int VAR126, VAR71;
                for (VAR126 = 0; VAR126 < 2; VAR126++)
                {
                    VAR112 = VAR2->VAR131[VAR126 + 1 + (FUN13(VAR6) ? 0 : 3)][VAR2->VAR124[VAR126]];
                    for (VAR71 = 0; VAR71 < 4; VAR71++)
                    {
                        const int VAR100 = 16 + 16 * VAR126 + VAR71;
                        FUN55(VAR2, VAR2->VAR65 + (16 * VAR100 << VAR15), 4, VAR100, VAR109 + 1, VAR112, 15);
                    }
                }
            }
            else
            {
                FUN17(&VAR2->VAR106[VAR77[16]], 4, 4, 8, 0, 1);
                FUN17(&VAR2->VAR106[VAR77[32]], 4, 4, 8, 0, 1);
            }
        }
    }
    else
    {
        FUN17(&VAR2->VAR106[VAR77[0]], 4, 4, 8, 0, 1);
        FUN17(&VAR2->VAR106[VAR77[16]], 4, 4, 8, 0, 1);
        FUN17(&VAR2->VAR106[VAR77[32]], 4, 4, 8, 0, 1);
        VAR2->VAR34 = 0;
    }
    VAR4->VAR27.VAR28.VAR67[VAR5] = VAR4->VAR113;
    FUN57(VAR2);
    if (VAR69)
    {
        VAR2->VAR70[0] >>= 1;
        VAR2->VAR70[1] >>= 1;
    }
    return 0;