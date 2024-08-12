static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = VAR4->VAR6 + VAR4->VAR7 * VAR4->VAR8;
    int VAR9, VAR10, VAR11 = 0;
    int VAR12 = VAR2->VAR13.VAR14;
    VAR4->VAR15.FUN2(VAR2->VAR16);
    FUN3(VAR4->VAR17, "", VAR2->VAR18, VAR4->VAR6, VAR4->VAR7);
    if (VAR2->VAR19 != VAR20 && VAR2->VAR19 != VAR21)
    {
        int VAR22;
        if (VAR23 && VAR4->VAR6 == 0 && (VAR4->VAR7 & 1) == 0)
            FUN4(VAR2);
        if (VAR23 && (VAR4->VAR7 & 1) == 1 && VAR2->VAR24)
            VAR22 = VAR2->VAR25;
        else
            VAR22 = FUN5(VAR2, VAR4->VAR6, VAR4->VAR7);
        if (VAR22)
        {
            if (VAR23 && (VAR4->VAR7 & 1) == 0)
            {
                VAR4->VAR26.VAR9[VAR5] = VAR27;
                VAR2->VAR25 = FUN5(VAR2, VAR4->VAR6, VAR4->VAR7 + 1);
                if (VAR2->VAR25)
                    FUN4(VAR2);
                else
                    VAR2->VAR28 = VAR2->VAR29 = FUN6(VAR2);
            }
            FUN7(VAR2);
            VAR2->VAR30[VAR5] = 0;
            VAR2->VAR31[VAR5] = 0;
            VAR2->VAR32 = 0;
            return 0;
        }
    }
    if (VAR23)
    {
        if ((VAR4->VAR7 & 1) == 0)
            VAR2->VAR28 = VAR2->VAR29 = FUN6(VAR2);
    }
    else
        VAR2->VAR29 = (VAR4->VAR33 != VAR34);
    VAR2->VAR24 = 0;
    FUN8(VAR2);
    if ((VAR9 = FUN9(VAR2)) < 0)
    {
        FUN10(VAR2->VAR4.VAR17, VAR35, "");
        return -1;
    }
    if (VAR2->VAR19 == VAR36)
    {
        if (VAR9 < 23)
        {
            VAR10 = VAR37[VAR9].VAR10;
            VAR9 = VAR37[VAR9].VAR38;
        }
        else
        {
            VAR9 -= 23;
            goto VAR39;
        }
    }
    else if (VAR2->VAR19 == VAR40)
    {
        if (VAR9 < 5)
        {
            VAR10 = VAR41[VAR9].VAR10;
            VAR9 = VAR41[VAR9].VAR38;
        }
        else
        {
            VAR9 -= 5;
            goto VAR39;
        }
    }
    else
    {
        assert(VAR2->VAR19 == VAR20);
    VAR39:
        VAR10 = 0;
        VAR11 = VAR42[VAR9].VAR11;
        VAR2->VAR43 = VAR42[VAR9].VAR44;
        VAR9 = VAR42[VAR9].VAR38;
    }
    if (VAR45)
        VAR9 |= VAR46;
    VAR2->VAR47[VAR5] = VAR2->VAR48;
    if (FUN11(VAR9))
    {
        const VAR49 *VAR50;
        unsigned int VAR51, VAR52;
        VAR50 = VAR2->VAR53.VAR54;
        if (VAR2->VAR53.VAR55 & 0x1)
            VAR50--;
        if (VAR56 == 16)
        {
            if (VAR2->VAR53.VAR55 & 0x1FF)
                VAR50--;
        }
        for (VAR52 = 0; VAR52 < 16; VAR52++)
        {
            const int VAR57 = 4 * (VAR52 & 3) + 32 * ((VAR52 >> 2) & 1) + 128 * (VAR52 >> 3);
            for (VAR51 = 0; VAR51 < 16; VAR51++)
            {
                FUN3(VAR4->VAR17, "", *VAR50);
                VAR2->VAR16[VAR57 + (VAR51 & 3) + 16 * ((VAR51 >> 2) & 1) + 64 * (VAR51 >> 3)] = *VAR50++;
            }
        }
        for (VAR52 = 0; VAR52 < 8; VAR52++)
        {
            const int VAR57 = 256 + 4 * (VAR52 & 3) + 32 * (VAR52 >> 2);
            for (VAR51 = 0; VAR51 < 8; VAR51++)
            {
                FUN3(VAR4->VAR17, "", *VAR50);
                VAR2->VAR16[VAR57 + (VAR51 & 3) + 16 * (VAR51 >> 2)] = *VAR50++;
            }
        }
        for (VAR52 = 0; VAR52 < 8; VAR52++)
        {
            const int VAR57 = 256 + 64 + 4 * (VAR52 & 3) + 32 * (VAR52 >> 2);
            for (VAR51 = 0; VAR51 < 8; VAR51++)
            {
                FUN3(VAR4->VAR17, "", *VAR50);
                VAR2->VAR16[VAR57 + (VAR51 & 3) + 16 * (VAR51 >> 2)] = *VAR50++;
            }
        }
        FUN12(&VAR2->VAR53, VAR50, VAR2->VAR53.VAR58 - VAR50);
        VAR2->VAR30[VAR5] = 0x1ef;
        VAR2->VAR31[VAR5] = 0;
        VAR4->VAR26.VAR59[VAR5] = 0;
        VAR2->VAR60 = FUN13(VAR2->VAR13.VAR61, 0);
        memset(VAR2->VAR62[VAR5], 16, 16);
        VAR4->VAR26.VAR9[VAR5] = VAR9;
        return 0;
    }
    if (VAR63)
    {
        VAR2->VAR64[0] <<= 1;
        VAR2->VAR64[1] <<= 1;
    }
    FUN14(VAR2, VAR9, 0);
    if (FUN15(VAR9))
    {
        int VAR65, VAR44;
        if (FUN16(VAR9))
        {
            if (VAR12 && FUN17(VAR2))
            {
                VAR9 |= VAR66;
                for (VAR65 = 0; VAR65 < 16; VAR65 += 4)
                {
                    int VAR67 = FUN18(VAR2, VAR65);
                    int VAR68 = FUN19(VAR2, VAR67);
                    FUN20(&VAR2->VAR69[VAR70[VAR65]], 2, 2, 8, VAR68, 1);
                }
            }
            else
            {
                for (VAR65 = 0; VAR65 < 16; VAR65++)
                {
                    int VAR67 = FUN18(VAR2, VAR65);
                    VAR2->VAR69[VAR70[VAR65]] = FUN19(VAR2, VAR67);
                }
            }
            FUN21(VAR2);
            if (FUN22(VAR2) < 0)
                return -1;
        }
        else
        {
            VAR2->VAR43 = FUN23(VAR2, VAR2->VAR43);
            if (VAR2->VAR43 < 0)
                return -1;
        }
        VAR2->VAR31[VAR5] = VAR44 = FUN24(VAR2);
        VAR44 = FUN23(VAR2, VAR44);
        if (VAR44 < 0)
            return -1;
        VAR2->VAR71 = VAR44;
    }
    else if (VAR10 == 4)
    {
        int VAR65, VAR72, VAR73[4], VAR74, VAR75[2][4];
        if (VAR2->VAR19 == VAR36)
        {
            for (VAR65 = 0; VAR65 < 4; VAR65++)
            {
                VAR2->VAR76[VAR65] = FUN25(VAR2);
                VAR73[VAR65] = VAR77[VAR2->VAR76[VAR65]].VAR10;
                VAR2->VAR76[VAR65] = VAR77[VAR2->VAR76[VAR65]].VAR38;
            }
            if (FUN26(VAR2->VAR76[0] | VAR2->VAR76[1] | VAR2->VAR76[2] | VAR2->VAR76[3]))
            {
                FUN27(VAR2, &VAR9);
                if (VAR2->VAR64[0] > 1 || VAR2->VAR64[1] > 1)
                {
                    for (VAR65 = 0; VAR65 < 4; VAR65++)
                        if (FUN26(VAR2->VAR76[VAR65]))
                            FUN20(&VAR2->VAR78[VAR70[4 * VAR65]], 2, 2, 8, 1, 1);
                }
            }
        }
        else
        {
            for (VAR65 = 0; VAR65 < 4; VAR65++)
            {
                VAR2->VAR76[VAR65] = FUN28(VAR2);
                VAR73[VAR65] = VAR79[VAR2->VAR76[VAR65]].VAR10;
                VAR2->VAR76[VAR65] = VAR79[VAR2->VAR76[VAR65]].VAR38;
            }
        }
        for (VAR74 = 0; VAR74 < VAR2->VAR80; VAR74++)
        {
            for (VAR65 = 0; VAR65 < 4; VAR65++)
            {
                if (FUN26(VAR2->VAR76[VAR65]))
                    continue;
                if (FUN29(VAR2->VAR76[VAR65], 0, VAR74))
                {
                    if (VAR2->VAR64[VAR74] > 1)
                        VAR75[VAR74][VAR65] = FUN30(VAR2, VAR74, 4 * VAR65);
                    else
                        VAR75[VAR74][VAR65] = 0;
                }
                else
                {
                    VAR75[VAR74][VAR65] = -1;
                }
                VAR2->VAR81[VAR74][VAR70[4 * VAR65] + 1] = VAR2->VAR81[VAR74][VAR70[4 * VAR65] + 8] = VAR2->VAR81[VAR74][VAR70[4 * VAR65] + 9] = VAR75[VAR74][VAR65];
            }
        }
        if (VAR12)
            VAR12 = FUN31(VAR2);
        for (VAR74 = 0; VAR74 < VAR2->VAR80; VAR74++)
        {
            for (VAR65 = 0; VAR65 < 4; VAR65++)
            {
                if (FUN26(VAR2->VAR76[VAR65]))
                {
                    FUN20(VAR2->VAR82[VAR74][VAR70[4 * VAR65]], 2, 2, 8, 0, 4);
                    continue;
                }
                VAR2->VAR81[VAR74][VAR70[4 * VAR65]] = VAR2->VAR81[VAR74][VAR70[4 * VAR65] + 1];
                if (FUN29(VAR2->VAR76[VAR65], 0, VAR74) && !FUN26(VAR2->VAR76[VAR65]))
                {
                    const int VAR76 = VAR2->VAR76[VAR65];
                    const int VAR83 = (VAR76 & (VAR84 | VAR85)) ? 2 : 1;
                    for (VAR72 = 0; VAR72 < VAR73[VAR65]; VAR72++)
                    {
                        int VAR86, VAR87;
                        int VAR88, VAR89;
                        const int VAR57 = 4 * VAR65 + VAR83 * VAR72;
                        FUN32(*VAR90)[2] = &VAR2->VAR90[VAR74][VAR70[VAR57]];
                        FUN32(*VAR82)[2] = &VAR2->VAR82[VAR74][VAR70[VAR57]];
                        FUN33(VAR2, VAR57, VAR83, VAR74, VAR2->VAR81[VAR74][VAR70[VAR57]], &VAR86, &VAR87);
                        VAR88 = VAR86 + FUN34(VAR2, VAR74, VAR57, 0);
                        VAR89 = VAR87 + FUN34(VAR2, VAR74, VAR57, 1);
                        FUN3(VAR4->VAR17, "", VAR88, VAR89);
                        if (FUN35(VAR76))
                        {
                            VAR90[1][0] = VAR90[8][0] = VAR90[9][0] = VAR88;
                            VAR90[1][1] = VAR90[8][1] = VAR90[9][1] = VAR89;
                            VAR82[1][0] = VAR82[8][0] = VAR82[9][0] = VAR88 - VAR86;
                            VAR82[1][1] = VAR82[8][1] = VAR82[9][1] = VAR89 - VAR87;
                        }
                        else if (FUN36(VAR76))
                        {
                            VAR90[1][0] = VAR88;
                            VAR90[1][1] = VAR89;
                            VAR82[1][0] = VAR88 - VAR86;
                            VAR82[1][1] = VAR89 - VAR87;
                        }
                        else if (FUN37(VAR76))
                        {
                            VAR90[8][0] = VAR88;
                            VAR90[8][1] = VAR89;
                            VAR82[8][0] = VAR88 - VAR86;
                            VAR82[8][1] = VAR89 - VAR87;
                        }
                        VAR90[0][0] = VAR88;
                        VAR90[0][1] = VAR89;
                        VAR82[0][0] = VAR88 - VAR86;
                        VAR82[0][1] = VAR89 - VAR87;
                    }
                }
                else
                {
                    VAR91 *VAR92 = (VAR91 *)&VAR2->VAR90[VAR74][VAR70[4 * VAR65]][0];
                    VAR91 *VAR93 = (VAR91 *)&VAR2->VAR82[VAR74][VAR70[4 * VAR65]][0];
                    VAR92[0] = VAR92[1] = VAR92[8] = VAR92[9] = 0;
                    VAR93[0] = VAR93[1] = VAR93[8] = VAR93[9] = 0;
                }
            }
        }
    }
    else if (FUN26(VAR9))
    {
        FUN27(VAR2, &VAR9);
        FUN20(VAR2->VAR82[0][VAR70[0]], 4, 4, 8, 0, 4);
        FUN20(VAR2->VAR82[1][VAR70[0]], 4, 4, 8, 0, 4);
        VAR12 &= VAR2->VAR94.VAR95;
    }
    else
    {
        int VAR74, VAR88, VAR89, VAR65, VAR86, VAR87;
        if (FUN38(VAR9))
        {
            for (VAR74 = 0; VAR74 < VAR2->VAR80; VAR74++)
            {
                if (FUN29(VAR9, 0, VAR74))
                {
                    const int VAR75 = VAR2->VAR64[VAR74] > 1 ? FUN30(VAR2, VAR74, 0) : 0;
                    FUN20(&VAR2->VAR81[VAR74][VAR70[0]], 4, 4, 8, VAR75, 1);
                }
                else
                    FUN20(&VAR2->VAR81[VAR74][VAR70[0]], 4, 4, 8, (VAR49)VAR96, 1);
            }
            for (VAR74 = 0; VAR74 < VAR2->VAR80; VAR74++)
            {
                if (FUN29(VAR9, 0, VAR74))
                {
                    FUN33(VAR2, 0, 4, VAR74, VAR2->VAR81[VAR74][VAR70[0]], &VAR86, &VAR87);
                    VAR88 = VAR86 + FUN34(VAR2, VAR74, 0, 0);
                    VAR89 = VAR87 + FUN34(VAR2, VAR74, 0, 1);
                    FUN3(VAR4->VAR17, "", VAR88, VAR89);
                    FUN20(VAR2->VAR82[VAR74][VAR70[0]], 4, 4, 8, FUN39(VAR88 - VAR86, VAR89 - VAR87), 4);
                    FUN20(VAR2->VAR90[VAR74][VAR70[0]], 4, 4, 8, FUN39(VAR88, VAR89), 4);
                }
                else
                    FUN20(VAR2->VAR90[VAR74][VAR70[0]], 4, 4, 8, 0, 4);
            }
        }
        else if (FUN40(VAR9))
        {
            for (VAR74 = 0; VAR74 < VAR2->VAR80; VAR74++)
            {
                for (VAR65 = 0; VAR65 < 2; VAR65++)
                {
                    if (FUN29(VAR9, VAR65, VAR74))
                    {
                        const int VAR75 = VAR2->VAR64[VAR74] > 1 ? FUN30(VAR2, VAR74, 8 * VAR65) : 0;
                        FUN20(&VAR2->VAR81[VAR74][VAR70[0] + 16 * VAR65], 4, 2, 8, VAR75, 1);
                    }
                    else
                        FUN20(&VAR2->VAR81[VAR74][VAR70[0] + 16 * VAR65], 4, 2, 8, (VAR96 & 0xFF), 1);
                }
            }
            for (VAR74 = 0; VAR74 < VAR2->VAR80; VAR74++)
            {
                for (VAR65 = 0; VAR65 < 2; VAR65++)
                {
                    if (FUN29(VAR9, VAR65, VAR74))
                    {
                        FUN41(VAR2, 8 * VAR65, VAR74, VAR2->VAR81[VAR74][VAR70[0] + 16 * VAR65], &VAR86, &VAR87);
                        VAR88 = VAR86 + FUN34(VAR2, VAR74, 8 * VAR65, 0);
                        VAR89 = VAR87 + FUN34(VAR2, VAR74, 8 * VAR65, 1);
                        FUN3(VAR4->VAR17, "", VAR88, VAR89);
                        FUN20(VAR2->VAR82[VAR74][VAR70[0] + 16 * VAR65], 4, 2, 8, FUN39(VAR88 - VAR86, VAR89 - VAR87), 4);
                        FUN20(VAR2->VAR90[VAR74][VAR70[0] + 16 * VAR65], 4, 2, 8, FUN39(VAR88, VAR89), 4);
                    }
                    else
                    {
                        FUN20(VAR2->VAR82[VAR74][VAR70[0] + 16 * VAR65], 4, 2, 8, 0, 4);
                        FUN20(VAR2->VAR90[VAR74][VAR70[0] + 16 * VAR65], 4, 2, 8, 0, 4);
                    }
                }
            }
        }
        else
        {
            assert(FUN42(VAR9));
            for (VAR74 = 0; VAR74 < VAR2->VAR80; VAR74++)
            {
                for (VAR65 = 0; VAR65 < 2; VAR65++)
                {
                    if (FUN29(VAR9, VAR65, VAR74))
                    {
                        const int VAR75 = VAR2->VAR64[VAR74] > 1 ? FUN30(VAR2, VAR74, 4 * VAR65) : 0;
                        FUN20(&VAR2->VAR81[VAR74][VAR70[0] + 2 * VAR65], 2, 4, 8, VAR75, 1);
                    }
                    else
                        FUN20(&VAR2->VAR81[VAR74][VAR70[0] + 2 * VAR65], 2, 4, 8, (VAR96 & 0xFF), 1);
                }
            }
            for (VAR74 = 0; VAR74 < VAR2->VAR80; VAR74++)
            {
                for (VAR65 = 0; VAR65 < 2; VAR65++)
                {
                    if (FUN29(VAR9, VAR65, VAR74))
                    {
                        FUN43(VAR2, VAR65 * 4, VAR74, VAR2->VAR81[VAR74][VAR70[0] + 2 * VAR65], &VAR86, &VAR87);
                        VAR88 = VAR86 + FUN34(VAR2, VAR74, 4 * VAR65, 0);
                        VAR89 = VAR87 + FUN34(VAR2, VAR74, 4 * VAR65, 1);
                        FUN3(VAR4->VAR17, "", VAR88, VAR89);
                        FUN20(VAR2->VAR82[VAR74][VAR70[0] + 2 * VAR65], 2, 4, 8, FUN39(VAR88 - VAR86, VAR89 - VAR87), 4);
                        FUN20(VAR2->VAR90[VAR74][VAR70[0] + 2 * VAR65], 2, 4, 8, FUN39(VAR88, VAR89), 4);
                    }
                    else
                    {
                        FUN20(VAR2->VAR82[VAR74][VAR70[0] + 2 * VAR65], 2, 4, 8, 0, 4);
                        FUN20(VAR2->VAR90[VAR74][VAR70[0] + 2 * VAR65], 2, 4, 8, 0, 4);
                    }
                }
            }
        }
    }
    if (FUN44(VAR9))
    {
        VAR2->VAR31[VAR5] = 0;
        FUN45(VAR2, VAR9);
    }
    if (!FUN46(VAR9))
    {
        VAR11 = FUN47(VAR2);
        VAR11 |= FUN48(VAR2) << 4;
    }
    VAR2->VAR30[VAR5] = VAR2->VAR11 = VAR11;
    if (VAR12 && (VAR11 & 15) && !FUN15(VAR9))
    {
        if (FUN17(VAR2))
            VAR9 |= VAR66;
    }
    VAR4->VAR26.VAR9[VAR5] = VAR9;
    if (VAR11 || FUN46(VAR9))
    {
        const VAR49 *VAR97, *VAR98, *VAR99;
        int VAR100;
        if (FUN49(VAR9))
        {
            VAR98 = VAR4->VAR101 ? VAR2->VAR102 : VAR2->VAR103;
            VAR97 = VAR4->VAR101 ? VAR2->VAR104 : VAR2->VAR105;
            VAR99 = VAR106;
        }
        else
        {
            VAR98 = VAR4->VAR101 ? VAR2->VAR107 : VAR2->VAR108;
            VAR97 = VAR4->VAR101 ? VAR2->VAR109 : VAR2->VAR110;
            VAR99 = VAR111;
        }
        VAR2->VAR32 = VAR100 = FUN50(VAR2);
        if (VAR100 == VAR112)
        {
            FUN10(VAR2->VAR4.VAR17, VAR35, "", VAR4->VAR6, VAR4->VAR7);
            return -1;
        }
        VAR4->VAR101 += VAR100;
        if (((unsigned)VAR4->VAR101) > 51)
        {
            if (VAR4->VAR101 < 0)
                VAR4->VAR101 += 52;
            else
                VAR4->VAR101 -= 52;
        }
        VAR2->VAR60 = FUN13(VAR2->VAR13.VAR61, VAR4->VAR101);
        if (FUN46(VAR9))
        {
            int VAR65;
            if (FUN51(VAR2, VAR2->VAR16, 0, 0, VAR99, NULL, 16) < 0)
                return -1;
            if (VAR11 & 15)
            {
                for (VAR65 = 0; VAR65 < 16; VAR65++)
                {
                    if (FUN51(VAR2, VAR2->VAR16 + 16 * VAR65, 1, VAR65, VAR97 + 1, VAR2->VAR113[0][VAR4->VAR101], 15) < 0)
                        return -1;
                }
            }
            else
            {
                FUN20(&VAR2->VAR114[VAR70[0]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            int VAR115, VAR116;
            for (VAR115 = 0; VAR115 < 4; VAR115++)
            {
                if (VAR11 & (1 << VAR115))
                {
                    if (FUN52(VAR9))
                    {
                        if (FUN51(VAR2, VAR2->VAR16 + 64 * VAR115, 5, 4 * VAR115, VAR98, VAR2->VAR117[FUN15(VAR9) ? 0 : 1][VAR4->VAR101], 64) < 0)
                            return -1;
                    }
                    else
                        for (VAR116 = 0; VAR116 < 4; VAR116++)
                        {
                            const int VAR57 = 4 * VAR115 + VAR116;
                            if (FUN51(VAR2, VAR2->VAR16 + 16 * VAR57, 2, VAR57, VAR97, VAR2->VAR113[FUN15(VAR9) ? 0 : 3][VAR4->VAR101], 16) < 0)
                                return -1;
                        }
                }
                else
                {
                    VAR49 *const VAR118 = &VAR2->VAR114[VAR70[4 * VAR115]];
                    VAR118[0] = VAR118[1] = VAR118[8] = VAR118[9] = 0;
                }
            }
        }
        if (VAR11 & 0x30)
        {
            int VAR119;
            for (VAR119 = 0; VAR119 < 2; VAR119++)
            {
                if (FUN51(VAR2, VAR2->VAR16 + 256 + 16 * 4 * VAR119, 3, VAR119, VAR120, NULL, 4) < 0)
                    return -1;
            }
        }
        if (VAR11 & 0x20)
        {
            int VAR119, VAR65;
            for (VAR119 = 0; VAR119 < 2; VAR119++)
            {
                const VAR91 *VAR121 = VAR2->VAR113[VAR119 + 1 + (FUN15(VAR9) ? 0 : 3)][VAR2->VAR60];
                for (VAR65 = 0; VAR65 < 4; VAR65++)
                {
                    const int VAR57 = 16 + 4 * VAR119 + VAR65;
                    if (FUN51(VAR2, VAR2->VAR16 + 16 * VAR57, 4, VAR57 - 16, VAR97 + 1, VAR121, 15) < 0)
                        return -1;
                }
            }
        }
        else
        {
            VAR49 *const VAR118 = &VAR2->VAR114[0];
            VAR118[VAR70[16] + 0] = VAR118[VAR70[16] + 1] = VAR118[VAR70[16] + 8] = VAR118[VAR70[16] + 9] = VAR118[VAR70[20] + 0] = VAR118[VAR70[20] + 1] = VAR118[VAR70[20] + 8] = VAR118[VAR70[20] + 9] = 0;
        }
    }
    else
    {
        VAR49 *const VAR118 = &VAR2->VAR114[0];
        FUN20(&VAR118[VAR70[0]], 4, 4, 8, 0, 1);
        VAR118[VAR70[16] + 0] = VAR118[VAR70[16] + 1] = VAR118[VAR70[16] + 8] = VAR118[VAR70[16] + 9] = VAR118[VAR70[20] + 0] = VAR118[VAR70[20] + 1] = VAR118[VAR70[20] + 8] = VAR118[VAR70[20] + 9] = 0;
        VAR2->VAR32 = 0;
    }
    VAR4->VAR26.VAR59[VAR5] = VAR4->VAR101;
    FUN53(VAR2);
    if (VAR63)
    {
        VAR2->VAR64[0] >>= 1;
        VAR2->VAR64[1] >>= 1;
    }
    return 0;
}