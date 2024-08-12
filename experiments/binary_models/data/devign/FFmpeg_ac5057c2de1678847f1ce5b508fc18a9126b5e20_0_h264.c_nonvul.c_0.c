static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5;
    int VAR6;
    unsigned int VAR7, VAR8;
    int VAR9 = VAR2->VAR10.VAR11;
    VAR5 = VAR2->VAR5 = VAR4->VAR12 + VAR4->VAR13 * VAR4->VAR14;
    VAR4->VAR15.FUN2(VAR2->VAR16);
    FUN3(VAR4->VAR17, "", VAR2->VAR18, VAR4->VAR12, VAR4->VAR13);
    VAR8 = 0;
    if (VAR2->VAR19 != VAR20)
    {
        if (VAR4->VAR21 == -1)
            VAR4->VAR21 = FUN4(&VAR4->VAR22);
        if (VAR4->VAR21--)
        {
            if (VAR23 && (VAR4->VAR13 & 1) == 0)
            {
                if (VAR4->VAR21 == 0)
                    VAR2->VAR24 = VAR2->VAR25 = FUN5(&VAR4->VAR22);
                else
                    FUN6(VAR2);
            }
            FUN7(VAR2);
            return 0;
        }
    }
    if (VAR23)
    {
        if ((VAR4->VAR13 & 1) == 0)
            VAR2->VAR24 = VAR2->VAR25 = FUN5(&VAR4->VAR22);
    }
    else
        VAR2->VAR25 = (VAR4->VAR26 != VAR27);
    VAR2->VAR28 = 0;
    VAR7 = FUN4(&VAR4->VAR22);
    if (VAR2->VAR19 == VAR29)
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
    else if (VAR2->VAR19 == VAR33)
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
        assert(VAR2->VAR19 == VAR20);
        if (VAR2->VAR35 == VAR36 && VAR7)
            VAR7--;
    VAR32:
        if (VAR7 > 25)
        {
            FUN8(VAR2->VAR4.VAR17, VAR37, "", VAR7, FUN9(VAR2->VAR35), VAR4->VAR12, VAR4->VAR13);
            return -1;
        }
        VAR6 = 0;
        VAR8 = VAR38[VAR7].VAR8;
        VAR2->VAR39 = VAR38[VAR7].VAR40;
        VAR7 = VAR38[VAR7].VAR31;
    }
    if (VAR41)
        VAR7 |= VAR42;
    VAR2->VAR43[VAR5] = VAR2->VAR44;
    if (FUN10(VAR7))
    {
        unsigned int VAR45, VAR46;
        FUN11(&VAR4->VAR22);
        for (VAR46 = 0; VAR46 < 16; VAR46++)
        {
            const int VAR47 = 4 * (VAR46 & 3) + 32 * ((VAR46 >> 2) & 1) + 128 * (VAR46 >> 3);
            for (VAR45 = 0; VAR45 < 16; VAR45++)
            {
                FUN3(VAR4->VAR17, "", FUN12(&VAR4->VAR22, 8));
                VAR2->VAR16[VAR47 + (VAR45 & 3) + 16 * ((VAR45 >> 2) & 1) + 64 * (VAR45 >> 3)] = FUN13(&VAR4->VAR22, 8);
            }
        }
        for (VAR46 = 0; VAR46 < 8; VAR46++)
        {
            const int VAR47 = 256 + 4 * (VAR46 & 3) + 32 * (VAR46 >> 2);
            for (VAR45 = 0; VAR45 < 8; VAR45++)
            {
                FUN3(VAR4->VAR17, "", FUN12(&VAR4->VAR22, 8));
                VAR2->VAR16[VAR47 + (VAR45 & 3) + 16 * (VAR45 >> 2)] = FUN13(&VAR4->VAR22, 8);
            }
        }
        for (VAR46 = 0; VAR46 < 8; VAR46++)
        {
            const int VAR47 = 256 + 64 + 4 * (VAR46 & 3) + 32 * (VAR46 >> 2);
            for (VAR45 = 0; VAR45 < 8; VAR45++)
            {
                FUN3(VAR4->VAR17, "", FUN12(&VAR4->VAR22, 8));
                VAR2->VAR16[VAR47 + (VAR45 & 3) + 16 * (VAR45 >> 2)] = FUN13(&VAR4->VAR22, 8);
            }
        }
        VAR4->VAR48.VAR49[VAR5] = 0;
        memset(VAR2->VAR50[VAR5], 16, 16);
        VAR4->VAR48.VAR7[VAR5] = VAR7;
        return 0;
    }
    if (VAR51)
    {
        VAR2->VAR52[0] <<= 1;
        VAR2->VAR52[1] <<= 1;
    }
    FUN14(VAR2, VAR7, 0);
    if (FUN15(VAR7))
    {
        int VAR40;
        if (FUN16(VAR7))
        {
            int VAR53;
            int VAR54 = 1;
            if (VAR9 && FUN5(&VAR4->VAR22))
            {
                VAR7 |= VAR55;
                VAR54 = 4;
            }
            for (VAR53 = 0; VAR53 < 16; VAR53 += VAR54)
            {
                int VAR56 = FUN17(VAR2, VAR53);
                if (!FUN5(&VAR4->VAR22))
                {
                    const int VAR57 = FUN13(&VAR4->VAR22, 3);
                    VAR56 = VAR57 + (VAR57 >= VAR56);
                }
                if (VAR54 == 4)
                    FUN18(&VAR2->VAR58[VAR59[VAR53]], 2, 2, 8, VAR56, 1);
                else
                    VAR2->VAR58[VAR59[VAR53]] = VAR56;
            }
            FUN19(VAR2);
            if (FUN20(VAR2) < 0)
                return -1;
        }
        else
        {
            VAR2->VAR39 = FUN21(VAR2, VAR2->VAR39);
            if (VAR2->VAR39 < 0)
                return -1;
        }
        VAR40 = FUN21(VAR2, FUN4(&VAR4->VAR22));
        if (VAR40 < 0)
            return -1;
        VAR2->VAR60 = VAR40;
    }
    else if (VAR6 == 4)
    {
        int VAR53, VAR61, VAR62[4], VAR63, VAR64[2][4];
        if (VAR2->VAR19 == VAR29)
        {
            for (VAR53 = 0; VAR53 < 4; VAR53++)
            {
                VAR2->VAR65[VAR53] = FUN4(&VAR4->VAR22);
                if (VAR2->VAR65[VAR53] >= 13)
                {
                    FUN8(VAR2->VAR4.VAR17, VAR37, "", VAR2->VAR65[VAR53], VAR4->VAR12, VAR4->VAR13);
                    return -1;
                }
                VAR62[VAR53] = VAR66[VAR2->VAR65[VAR53]].VAR6;
                VAR2->VAR65[VAR53] = VAR66[VAR2->VAR65[VAR53]].VAR31;
            }
            if (FUN22(VAR2->VAR65[0]) || FUN22(VAR2->VAR65[1]) || FUN22(VAR2->VAR65[2]) || FUN22(VAR2->VAR65[3]))
            {
                FUN23(VAR2, &VAR7);
                VAR2->VAR67[0][VAR59[4]] = VAR2->VAR67[1][VAR59[4]] = VAR2->VAR67[0][VAR59[12]] = VAR2->VAR67[1][VAR59[12]] = VAR68;
            }
        }
        else
        {
            assert(VAR2->VAR19 == VAR33);
            for (VAR53 = 0; VAR53 < 4; VAR53++)
            {
                VAR2->VAR65[VAR53] = FUN4(&VAR4->VAR22);
                if (VAR2->VAR65[VAR53] >= 4)
                {
                    FUN8(VAR2->VAR4.VAR17, VAR37, "", VAR2->VAR65[VAR53], VAR4->VAR12, VAR4->VAR13);
                    return -1;
                }
                VAR62[VAR53] = VAR69[VAR2->VAR65[VAR53]].VAR6;
                VAR2->VAR65[VAR53] = VAR69[VAR2->VAR65[VAR53]].VAR31;
            }
        }
        for (VAR63 = 0; VAR63 < VAR2->VAR70; VAR63++)
        {
            int VAR52 = FUN24(VAR7) ? 1 : VAR2->VAR52[VAR63];
            for (VAR53 = 0; VAR53 < 4; VAR53++)
            {
                if (FUN22(VAR2->VAR65[VAR53]))
                    continue;
                if (FUN25(VAR2->VAR65[VAR53], 0, VAR63))
                {
                    unsigned int VAR71 = FUN26(&VAR4->VAR22, VAR52);
                    if (VAR71 >= VAR52)
                    {
                        FUN8(VAR2->VAR4.VAR17, VAR37, "", VAR71);
                        return -1;
                    }
                    VAR64[VAR63][VAR53] = VAR71;
                }
                else
                {
                    VAR64[VAR63][VAR53] = -1;
                }
            }
        }
        if (VAR9)
            VAR9 = FUN27(VAR2);
        for (VAR63 = 0; VAR63 < VAR2->VAR70; VAR63++)
        {
            for (VAR53 = 0; VAR53 < 4; VAR53++)
            {
                if (FUN22(VAR2->VAR65[VAR53]))
                {
                    VAR2->VAR67[VAR63][VAR59[4 * VAR53]] = VAR2->VAR67[VAR63][VAR59[4 * VAR53] + 1];
                    continue;
                }
                VAR2->VAR67[VAR63][VAR59[4 * VAR53]] = VAR2->VAR67[VAR63][VAR59[4 * VAR53] + 1] = VAR2->VAR67[VAR63][VAR59[4 * VAR53] + 8] = VAR2->VAR67[VAR63][VAR59[4 * VAR53] + 9] = VAR64[VAR63][VAR53];
                if (FUN25(VAR2->VAR65[VAR53], 0, VAR63))
                {
                    const int VAR65 = VAR2->VAR65[VAR53];
                    const int VAR72 = (VAR65 & (VAR73 | VAR74)) ? 2 : 1;
                    for (VAR61 = 0; VAR61 < VAR62[VAR53]; VAR61++)
                    {
                        int VAR75, VAR76;
                        const int VAR47 = 4 * VAR53 + VAR72 * VAR61;
                        FUN28(*VAR77)[2] = &VAR2->VAR77[VAR63][VAR59[VAR47]];
                        FUN29(VAR2, VAR47, VAR72, VAR63, VAR2->VAR67[VAR63][VAR59[VAR47]], &VAR75, &VAR76);
                        VAR75 += FUN30(&VAR4->VAR22);
                        VAR76 += FUN30(&VAR4->VAR22);
                        FUN3(VAR4->VAR17, "", VAR75, VAR76);
                        if (FUN31(VAR65))
                        {
                            VAR77[1][0] = VAR77[8][0] = VAR77[9][0] = VAR75;
                            VAR77[1][1] = VAR77[8][1] = VAR77[9][1] = VAR76;
                        }
                        else if (FUN32(VAR65))
                        {
                            VAR77[1][0] = VAR75;
                            VAR77[1][1] = VAR76;
                        }
                        else if (FUN33(VAR65))
                        {
                            VAR77[8][0] = VAR75;
                            VAR77[8][1] = VAR76;
                        }
                        VAR77[0][0] = VAR75;
                        VAR77[0][1] = VAR76;
                    }
                }
                else
                {
                    VAR78 *VAR79 = (VAR78 *)&VAR2->VAR77[VAR63][VAR59[4 * VAR53]][0];
                    VAR79[0] = VAR79[1] = VAR79[8] = VAR79[9] = 0;
                }
            }
        }
    }
    else if (FUN22(VAR7))
    {
        FUN23(VAR2, &VAR7);
        VAR9 &= VAR2->VAR80.VAR81;
    }
    else
    {
        int VAR63, VAR75, VAR76, VAR53;
        if (FUN34(VAR7))
        {
            for (VAR63 = 0; VAR63 < VAR2->VAR70; VAR63++)
            {
                unsigned int VAR82;
                if (FUN25(VAR7, 0, VAR63))
                {
                    VAR82 = FUN26(&VAR4->VAR22, VAR2->VAR52[VAR63]);
                    if (VAR82 >= VAR2->VAR52[VAR63])
                    {
                        FUN8(VAR2->VAR4.VAR17, VAR37, "", VAR82);
                        return -1;
                    }
                }
                else
                    VAR82 = VAR83 & 0xFF;
                FUN18(&VAR2->VAR67[VAR63][VAR59[0]], 4, 4, 8, VAR82, 1);
            }
            for (VAR63 = 0; VAR63 < VAR2->VAR70; VAR63++)
            {
                unsigned int VAR82;
                if (FUN25(VAR7, 0, VAR63))
                {
                    FUN29(VAR2, 0, 4, VAR63, VAR2->VAR67[VAR63][VAR59[0]], &VAR75, &VAR76);
                    VAR75 += FUN30(&VAR4->VAR22);
                    VAR76 += FUN30(&VAR4->VAR22);
                    FUN3(VAR4->VAR17, "", VAR75, VAR76);
                    VAR82 = FUN35(VAR75, VAR76);
                }
                else
                    VAR82 = 0;
                FUN18(VAR2->VAR77[VAR63][VAR59[0]], 4, 4, 8, VAR82, 4);
            }
        }
        else if (FUN36(VAR7))
        {
            for (VAR63 = 0; VAR63 < VAR2->VAR70; VAR63++)
            {
                for (VAR53 = 0; VAR53 < 2; VAR53++)
                {
                    unsigned int VAR82;
                    if (FUN25(VAR7, VAR53, VAR63))
                    {
                        VAR82 = FUN26(&VAR4->VAR22, VAR2->VAR52[VAR63]);
                        if (VAR82 >= VAR2->VAR52[VAR63])
                        {
                            FUN8(VAR2->VAR4.VAR17, VAR37, "", VAR82);
                            return -1;
                        }
                    }
                    else
                        VAR82 = VAR83 & 0xFF;
                    FUN18(&VAR2->VAR67[VAR63][VAR59[0] + 16 * VAR53], 4, 2, 8, VAR82, 1);
                }
            }
            for (VAR63 = 0; VAR63 < VAR2->VAR70; VAR63++)
            {
                for (VAR53 = 0; VAR53 < 2; VAR53++)
                {
                    unsigned int VAR82;
                    if (FUN25(VAR7, VAR53, VAR63))
                    {
                        FUN37(VAR2, 8 * VAR53, VAR63, VAR2->VAR67[VAR63][VAR59[0] + 16 * VAR53], &VAR75, &VAR76);
                        VAR75 += FUN30(&VAR4->VAR22);
                        VAR76 += FUN30(&VAR4->VAR22);
                        FUN3(VAR4->VAR17, "", VAR75, VAR76);
                        VAR82 = FUN35(VAR75, VAR76);
                    }
                    else
                        VAR82 = 0;
                    FUN18(VAR2->VAR77[VAR63][VAR59[0] + 16 * VAR53], 4, 2, 8, VAR82, 4);
                }
            }
        }
        else
        {
            assert(FUN38(VAR7));
            for (VAR63 = 0; VAR63 < VAR2->VAR70; VAR63++)
            {
                for (VAR53 = 0; VAR53 < 2; VAR53++)
                {
                    unsigned int VAR82;
                    if (FUN25(VAR7, VAR53, VAR63))
                    {
                        VAR82 = FUN26(&VAR4->VAR22, VAR2->VAR52[VAR63]);
                        if (VAR82 >= VAR2->VAR52[VAR63])
                        {
                            FUN8(VAR2->VAR4.VAR17, VAR37, "", VAR82);
                            return -1;
                        }
                    }
                    else
                        VAR82 = VAR83 & 0xFF;
                    FUN18(&VAR2->VAR67[VAR63][VAR59[0] + 2 * VAR53], 2, 4, 8, VAR82, 1);
                }
            }
            for (VAR63 = 0; VAR63 < VAR2->VAR70; VAR63++)
            {
                for (VAR53 = 0; VAR53 < 2; VAR53++)
                {
                    unsigned int VAR82;
                    if (FUN25(VAR7, VAR53, VAR63))
                    {
                        FUN39(VAR2, VAR53 * 4, VAR63, VAR2->VAR67[VAR63][VAR59[0] + 2 * VAR53], &VAR75, &VAR76);
                        VAR75 += FUN30(&VAR4->VAR22);
                        VAR76 += FUN30(&VAR4->VAR22);
                        FUN3(VAR4->VAR17, "", VAR75, VAR76);
                        VAR82 = FUN35(VAR75, VAR76);
                    }
                    else
                        VAR82 = 0;
                    FUN18(VAR2->VAR77[VAR63][VAR59[0] + 2 * VAR53], 2, 4, 8, VAR82, 4);
                }
            }
        }
    }
    if (FUN40(VAR7))
        FUN41(VAR2, VAR7);
    if (!FUN42(VAR7))
    {
        VAR8 = FUN4(&VAR4->VAR22);
        if (VAR8 > 47)
        {
            FUN8(VAR2->VAR4.VAR17, VAR37, "", VAR8, VAR4->VAR12, VAR4->VAR13);
            return -1;
        }
        if (FUN16(VAR7))
            VAR8 = VAR84[VAR8];
        else
            VAR8 = VAR85[VAR8];
    }
    VAR2->VAR8 = VAR8;
    if (VAR9 && (VAR8 & 15) && !FUN15(VAR7))
    {
        if (FUN5(&VAR4->VAR22))
        {
            VAR7 |= VAR55;
            VAR2->VAR86[VAR5] = VAR8;
        }
    }
    VAR4->VAR48.VAR7[VAR5] = VAR7;
    if (VAR8 || FUN42(VAR7))
    {
        int VAR87, VAR88, VAR89;
        int VAR90;
        VAR91 *VAR22 = FUN15(VAR7) ? VAR2->VAR92 : VAR2->VAR93;
        const VAR94 *VAR95, *VAR96, *VAR97;
        if (FUN43(VAR7))
        {
            VAR96 = VAR4->VAR98 ? VAR2->VAR99 : VAR2->VAR100;
            VAR95 = VAR4->VAR98 ? VAR2->VAR101 : VAR2->VAR102;
            VAR97 = VAR103;
        }
        else
        {
            VAR96 = VAR4->VAR98 ? VAR2->VAR104 : VAR2->VAR105;
            VAR95 = VAR4->VAR98 ? VAR2->VAR106 : VAR2->VAR107;
            VAR97 = VAR108;
        }
        VAR90 = FUN30(&VAR4->VAR22);
        if (VAR90 > 25 || VAR90 < -26)
        {
            FUN8(VAR2->VAR4.VAR17, VAR37, "", VAR90, VAR4->VAR12, VAR4->VAR13);
            return -1;
        }
        VAR4->VAR98 += VAR90;
        if (((unsigned)VAR4->VAR98) > 51)
        {
            if (VAR4->VAR98 < 0)
                VAR4->VAR98 += 52;
            else
                VAR4->VAR98 -= 52;
        }
        VAR2->VAR109[0] = FUN44(VAR2, 0, VAR4->VAR98);
        VAR2->VAR109[1] = FUN44(VAR2, 1, VAR4->VAR98);
        if (FUN42(VAR7))
        {
            if (FUN45(VAR2, VAR2->VAR92, VAR2->VAR16, VAR110, VAR97, VAR2->VAR111[0][VAR4->VAR98], 16) < 0)
            {
                return -1;
            }
            assert((VAR8 & 15) == 0 || (VAR8 & 15) == 15);
            if (VAR8 & 15)
            {
                for (VAR87 = 0; VAR87 < 4; VAR87++)
                {
                    for (VAR88 = 0; VAR88 < 4; VAR88++)
                    {
                        const int VAR47 = VAR88 + 4 * VAR87;
                        if (FUN45(VAR2, VAR2->VAR92, VAR2->VAR16 + 16 * VAR47, VAR47, VAR95 + 1, VAR2->VAR111[0][VAR4->VAR98], 15) < 0)
                        {
                            return -1;
                        }
                    }
                }
            }
            else
            {
                FUN18(&VAR2->VAR112[VAR59[0]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            for (VAR87 = 0; VAR87 < 4; VAR87++)
            {
                if (VAR8 & (1 << VAR87))
                {
                    if (FUN46(VAR7))
                    {
                        VAR113 *VAR114 = &VAR2->VAR16[64 * VAR87];
                        VAR94 *VAR115;
                        for (VAR88 = 0; VAR88 < 4; VAR88++)
                        {
                            if (FUN45(VAR2, VAR22, VAR114, VAR88 + 4 * VAR87, VAR96 + 16 * VAR88, VAR2->VAR116[FUN15(VAR7) ? 0 : 1][VAR4->VAR98], 16) < 0)
                                return -1;
                        }
                        VAR115 = &VAR2->VAR112[VAR59[4 * VAR87]];
                        VAR115[0] += VAR115[1] + VAR115[8] + VAR115[9];
                    }
                    else
                    {
                        for (VAR88 = 0; VAR88 < 4; VAR88++)
                        {
                            const int VAR47 = VAR88 + 4 * VAR87;
                            if (FUN45(VAR2, VAR22, VAR2->VAR16 + 16 * VAR47, VAR47, VAR95, VAR2->VAR111[FUN15(VAR7) ? 0 : 3][VAR4->VAR98], 16) < 0)
                            {
                                return -1;
                            }
                        }
                    }
                }
                else
                {
                    VAR94 *const VAR115 = &VAR2->VAR112[VAR59[4 * VAR87]];
                    VAR115[0] = VAR115[1] = VAR115[8] = VAR115[9] = 0;
                }
            }
        }
        if (VAR8 & 0x30)
        {
            for (VAR89 = 0; VAR89 < 2; VAR89++)
                if (FUN45(VAR2, VAR22, VAR2->VAR16 + 256 + 16 * 4 * VAR89, VAR117, VAR118, NULL, 4) < 0)
                {
                    return -1;
                }
        }
        if (VAR8 & 0x20)
        {
            for (VAR89 = 0; VAR89 < 2; VAR89++)
            {
                const VAR78 *VAR119 = VAR2->VAR111[VAR89 + 1 + (FUN15(VAR7) ? 0 : 3)][VAR2->VAR109[VAR89]];
                for (VAR88 = 0; VAR88 < 4; VAR88++)
                {
                    const int VAR47 = 16 + 4 * VAR89 + VAR88;
                    if (FUN45(VAR2, VAR22, VAR2->VAR16 + 16 * VAR47, VAR47, VAR95 + 1, VAR119, 15) < 0)
                    {
                        return -1;
                    }
                }
            }
        }
        else
        {
            VAR94 *const VAR115 = &VAR2->VAR112[0];
            VAR115[VAR59[16] + 0] = VAR115[VAR59[16] + 1] = VAR115[VAR59[16] + 8] = VAR115[VAR59[16] + 9] = VAR115[VAR59[20] + 0] = VAR115[VAR59[20] + 1] = VAR115[VAR59[20] + 8] = VAR115[VAR59[20] + 9] = 0;
        }
    }
    else
    {
        VAR94 *const VAR115 = &VAR2->VAR112[0];
        FUN18(&VAR115[VAR59[0]], 4, 4, 8, 0, 1);
        VAR115[VAR59[16] + 0] = VAR115[VAR59[16] + 1] = VAR115[VAR59[16] + 8] = VAR115[VAR59[16] + 9] = VAR115[VAR59[20] + 0] = VAR115[VAR59[20] + 1] = VAR115[VAR59[20] + 8] = VAR115[VAR59[20] + 9] = 0;
    }
    VAR4->VAR48.VAR49[VAR5] = VAR4->VAR98;
    FUN47(VAR2);
    if (VAR51)
    {
        VAR2->VAR52[0] >>= 1;
        VAR2->VAR52[1] >>= 1;
    }
    return 0;
}