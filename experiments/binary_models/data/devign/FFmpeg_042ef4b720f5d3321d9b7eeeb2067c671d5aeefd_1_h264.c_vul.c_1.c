static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = VAR4->VAR6 + VAR4->VAR7 * VAR4->VAR8;
    int VAR9;
    unsigned int VAR10, VAR11;
    int VAR12 = VAR2->VAR13.VAR14;
    VAR4->VAR15.FUN2(VAR2->VAR16);
    FUN3(VAR4->VAR17, "", VAR2->VAR18, VAR4->VAR6, VAR4->VAR7);
    VAR11 = 0;
    if (VAR2->VAR19 != VAR20 && VAR2->VAR19 != VAR21)
    {
        if (VAR4->VAR22 == -1)
            VAR4->VAR22 = FUN4(&VAR4->VAR23);
        if (VAR4->VAR22--)
        {
            if (VAR24 && (VAR4->VAR7 & 1) == 0)
            {
                if (VAR4->VAR22 == 0)
                    VAR2->VAR25 = VAR2->VAR26 = FUN5(&VAR4->VAR23);
                else
                    FUN6(VAR2);
            }
            FUN7(VAR2);
            return 0;
        }
    }
    if (VAR24)
    {
        if ((VAR4->VAR7 & 1) == 0)
            VAR2->VAR25 = VAR2->VAR26 = FUN5(&VAR4->VAR23);
    }
    else
        VAR2->VAR26 = (VAR4->VAR27 != VAR28);
    VAR2->VAR29 = 0;
    VAR10 = FUN4(&VAR4->VAR23);
    if (VAR2->VAR19 == VAR30)
    {
        if (VAR10 < 23)
        {
            VAR9 = VAR31[VAR10].VAR9;
            VAR10 = VAR31[VAR10].VAR32;
        }
        else
        {
            VAR10 -= 23;
            goto VAR33;
        }
    }
    else if (VAR2->VAR19 == VAR34)
    {
        if (VAR10 < 5)
        {
            VAR9 = VAR35[VAR10].VAR9;
            VAR10 = VAR35[VAR10].VAR32;
        }
        else
        {
            VAR10 -= 5;
            goto VAR33;
        }
    }
    else
    {
        assert(VAR2->VAR19 == VAR20);
    VAR33:
        if (VAR10 > 25)
        {
            FUN8(VAR2->VAR4.VAR17, VAR36, "", VAR10, FUN9(VAR2->VAR19), VAR4->VAR6, VAR4->VAR7);
            return -1;
        }
        VAR9 = 0;
        VAR11 = VAR37[VAR10].VAR11;
        VAR2->VAR38 = VAR37[VAR10].VAR39;
        VAR10 = VAR37[VAR10].VAR32;
    }
    if (VAR40)
        VAR10 |= VAR41;
    VAR2->VAR42[VAR5] = VAR2->VAR43;
    if (FUN10(VAR10))
    {
        unsigned int VAR44, VAR45;
        FUN11(&VAR4->VAR23);
        for (VAR45 = 0; VAR45 < 16; VAR45++)
        {
            const int VAR46 = 4 * (VAR45 & 3) + 32 * ((VAR45 >> 2) & 1) + 128 * (VAR45 >> 3);
            for (VAR44 = 0; VAR44 < 16; VAR44++)
            {
                FUN3(VAR4->VAR17, "", FUN12(&VAR4->VAR23, 8));
                VAR2->VAR16[VAR46 + (VAR44 & 3) + 16 * ((VAR44 >> 2) & 1) + 64 * (VAR44 >> 3)] = FUN13(&VAR4->VAR23, 8);
            }
        }
        for (VAR45 = 0; VAR45 < 8; VAR45++)
        {
            const int VAR46 = 256 + 4 * (VAR45 & 3) + 32 * (VAR45 >> 2);
            for (VAR44 = 0; VAR44 < 8; VAR44++)
            {
                FUN3(VAR4->VAR17, "", FUN12(&VAR4->VAR23, 8));
                VAR2->VAR16[VAR46 + (VAR44 & 3) + 16 * (VAR44 >> 2)] = FUN13(&VAR4->VAR23, 8);
            }
        }
        for (VAR45 = 0; VAR45 < 8; VAR45++)
        {
            const int VAR46 = 256 + 64 + 4 * (VAR45 & 3) + 32 * (VAR45 >> 2);
            for (VAR44 = 0; VAR44 < 8; VAR44++)
            {
                FUN3(VAR4->VAR17, "", FUN12(&VAR4->VAR23, 8));
                VAR2->VAR16[VAR46 + (VAR44 & 3) + 16 * (VAR44 >> 2)] = FUN13(&VAR4->VAR23, 8);
            }
        }
        VAR4->VAR47.VAR48[VAR5] = 0;
        VAR2->VAR49 = FUN14(VAR2->VAR13.VAR50, 0);
        memset(VAR2->VAR51[VAR5], 16, 16);
        VAR4->VAR47.VAR10[VAR5] = VAR10;
        return 0;
    }
    if (VAR52)
    {
        VAR2->VAR53[0] <<= 1;
        VAR2->VAR53[1] <<= 1;
    }
    FUN15(VAR2, VAR10, 0);
    if (FUN16(VAR10))
    {
        int VAR39;
        if (FUN17(VAR10))
        {
            int VAR54;
            int VAR55 = 1;
            if (VAR12 && FUN5(&VAR4->VAR23))
            {
                VAR10 |= VAR56;
                VAR55 = 4;
            }
            for (VAR54 = 0; VAR54 < 16; VAR54 += VAR55)
            {
                int VAR57 = FUN18(VAR2, VAR54);
                if (!FUN5(&VAR4->VAR23))
                {
                    const int VAR58 = FUN13(&VAR4->VAR23, 3);
                    VAR57 = VAR58 + (VAR58 >= VAR57);
                }
                if (VAR55 == 4)
                    FUN19(&VAR2->VAR59[VAR60[VAR54]], 2, 2, 8, VAR57, 1);
                else
                    VAR2->VAR59[VAR60[VAR54]] = VAR57;
            }
            FUN20(VAR2);
            if (FUN21(VAR2) < 0)
                return -1;
        }
        else
        {
            VAR2->VAR38 = FUN22(VAR2, VAR2->VAR38);
            if (VAR2->VAR38 < 0)
                return -1;
        }
        VAR39 = FUN22(VAR2, FUN4(&VAR4->VAR23));
        if (VAR39 < 0)
            return -1;
        VAR2->VAR61 = VAR39;
    }
    else if (VAR9 == 4)
    {
        int VAR54, VAR62, VAR63[4], VAR64, VAR65[2][4];
        if (VAR2->VAR19 == VAR30)
        {
            for (VAR54 = 0; VAR54 < 4; VAR54++)
            {
                VAR2->VAR66[VAR54] = FUN4(&VAR4->VAR23);
                if (VAR2->VAR66[VAR54] >= 13)
                {
                    FUN8(VAR2->VAR4.VAR17, VAR36, "", VAR2->VAR66[VAR54], VAR4->VAR6, VAR4->VAR7);
                    return -1;
                }
                VAR63[VAR54] = VAR67[VAR2->VAR66[VAR54]].VAR9;
                VAR2->VAR66[VAR54] = VAR67[VAR2->VAR66[VAR54]].VAR32;
            }
            if (FUN23(VAR2->VAR66[0]) || FUN23(VAR2->VAR66[1]) || FUN23(VAR2->VAR66[2]) || FUN23(VAR2->VAR66[3]))
            {
                FUN24(VAR2, &VAR10);
                VAR2->VAR68[0][VAR60[4]] = VAR2->VAR68[1][VAR60[4]] = VAR2->VAR68[0][VAR60[12]] = VAR2->VAR68[1][VAR60[12]] = VAR69;
            }
        }
        else
        {
            assert(VAR2->VAR19 == VAR34 || VAR2->VAR19 == VAR70);
            for (VAR54 = 0; VAR54 < 4; VAR54++)
            {
                VAR2->VAR66[VAR54] = FUN4(&VAR4->VAR23);
                if (VAR2->VAR66[VAR54] >= 4)
                {
                    FUN8(VAR2->VAR4.VAR17, VAR36, "", VAR2->VAR66[VAR54], VAR4->VAR6, VAR4->VAR7);
                    return -1;
                }
                VAR63[VAR54] = VAR71[VAR2->VAR66[VAR54]].VAR9;
                VAR2->VAR66[VAR54] = VAR71[VAR2->VAR66[VAR54]].VAR32;
            }
        }
        for (VAR64 = 0; VAR64 < VAR2->VAR72; VAR64++)
        {
            int VAR53 = FUN25(VAR10) ? 1 : VAR2->VAR53[VAR64];
            for (VAR54 = 0; VAR54 < 4; VAR54++)
            {
                if (FUN23(VAR2->VAR66[VAR54]))
                    continue;
                if (FUN26(VAR2->VAR66[VAR54], 0, VAR64))
                {
                    unsigned int VAR73 = FUN27(&VAR4->VAR23, VAR53);
                    if (VAR73 >= VAR53)
                    {
                        FUN8(VAR2->VAR4.VAR17, VAR36, "", VAR73);
                        return -1;
                    }
                    VAR65[VAR64][VAR54] = VAR73;
                }
                else
                {
                    VAR65[VAR64][VAR54] = -1;
                }
            }
        }
        if (VAR12)
            VAR12 = FUN28(VAR2);
        for (VAR64 = 0; VAR64 < VAR2->VAR72; VAR64++)
        {
            for (VAR54 = 0; VAR54 < 4; VAR54++)
            {
                if (FUN23(VAR2->VAR66[VAR54]))
                {
                    VAR2->VAR68[VAR64][VAR60[4 * VAR54]] = VAR2->VAR68[VAR64][VAR60[4 * VAR54] + 1];
                    continue;
                }
                VAR2->VAR68[VAR64][VAR60[4 * VAR54]] = VAR2->VAR68[VAR64][VAR60[4 * VAR54] + 1] = VAR2->VAR68[VAR64][VAR60[4 * VAR54] + 8] = VAR2->VAR68[VAR64][VAR60[4 * VAR54] + 9] = VAR65[VAR64][VAR54];
                if (FUN26(VAR2->VAR66[VAR54], 0, VAR64))
                {
                    const int VAR66 = VAR2->VAR66[VAR54];
                    const int VAR74 = (VAR66 & (VAR75 | VAR76)) ? 2 : 1;
                    for (VAR62 = 0; VAR62 < VAR63[VAR54]; VAR62++)
                    {
                        int VAR77, VAR78;
                        const int VAR46 = 4 * VAR54 + VAR74 * VAR62;
                        FUN29(*VAR79)[2] = &VAR2->VAR79[VAR64][VAR60[VAR46]];
                        FUN30(VAR2, VAR46, VAR74, VAR64, VAR2->VAR68[VAR64][VAR60[VAR46]], &VAR77, &VAR78);
                        VAR77 += FUN31(&VAR4->VAR23);
                        VAR78 += FUN31(&VAR4->VAR23);
                        FUN3(VAR4->VAR17, "", VAR77, VAR78);
                        if (FUN32(VAR66))
                        {
                            VAR79[1][0] = VAR79[8][0] = VAR79[9][0] = VAR77;
                            VAR79[1][1] = VAR79[8][1] = VAR79[9][1] = VAR78;
                        }
                        else if (FUN33(VAR66))
                        {
                            VAR79[1][0] = VAR77;
                            VAR79[1][1] = VAR78;
                        }
                        else if (FUN34(VAR66))
                        {
                            VAR79[8][0] = VAR77;
                            VAR79[8][1] = VAR78;
                        }
                        VAR79[0][0] = VAR77;
                        VAR79[0][1] = VAR78;
                    }
                }
                else
                {
                    VAR80 *VAR81 = (VAR80 *)&VAR2->VAR79[VAR64][VAR60[4 * VAR54]][0];
                    VAR81[0] = VAR81[1] = VAR81[8] = VAR81[9] = 0;
                }
            }
        }
    }
    else if (FUN23(VAR10))
    {
        FUN24(VAR2, &VAR10);
        VAR12 &= VAR2->VAR82.VAR83;
    }
    else
    {
        int VAR64, VAR77, VAR78, VAR54;
        if (FUN35(VAR10))
        {
            for (VAR64 = 0; VAR64 < VAR2->VAR72; VAR64++)
            {
                unsigned int VAR84;
                if (FUN26(VAR10, 0, VAR64))
                {
                    VAR84 = FUN27(&VAR4->VAR23, VAR2->VAR53[VAR64]);
                    if (VAR84 >= VAR2->VAR53[VAR64])
                    {
                        FUN8(VAR2->VAR4.VAR17, VAR36, "", VAR84);
                        return -1;
                    }
                }
                else
                    VAR84 = VAR85 & 0xFF;
                FUN19(&VAR2->VAR68[VAR64][VAR60[0]], 4, 4, 8, VAR84, 1);
            }
            for (VAR64 = 0; VAR64 < VAR2->VAR72; VAR64++)
            {
                unsigned int VAR84;
                if (FUN26(VAR10, 0, VAR64))
                {
                    FUN30(VAR2, 0, 4, VAR64, VAR2->VAR68[VAR64][VAR60[0]], &VAR77, &VAR78);
                    VAR77 += FUN31(&VAR4->VAR23);
                    VAR78 += FUN31(&VAR4->VAR23);
                    FUN3(VAR4->VAR17, "", VAR77, VAR78);
                    VAR84 = FUN36(VAR77, VAR78);
                }
                else
                    VAR84 = 0;
                FUN19(VAR2->VAR79[VAR64][VAR60[0]], 4, 4, 8, VAR84, 4);
            }
        }
        else if (FUN37(VAR10))
        {
            for (VAR64 = 0; VAR64 < VAR2->VAR72; VAR64++)
            {
                for (VAR54 = 0; VAR54 < 2; VAR54++)
                {
                    unsigned int VAR84;
                    if (FUN26(VAR10, VAR54, VAR64))
                    {
                        VAR84 = FUN27(&VAR4->VAR23, VAR2->VAR53[VAR64]);
                        if (VAR84 >= VAR2->VAR53[VAR64])
                        {
                            FUN8(VAR2->VAR4.VAR17, VAR36, "", VAR84);
                            return -1;
                        }
                    }
                    else
                        VAR84 = VAR85 & 0xFF;
                    FUN19(&VAR2->VAR68[VAR64][VAR60[0] + 16 * VAR54], 4, 2, 8, VAR84, 1);
                }
            }
            for (VAR64 = 0; VAR64 < VAR2->VAR72; VAR64++)
            {
                for (VAR54 = 0; VAR54 < 2; VAR54++)
                {
                    unsigned int VAR84;
                    if (FUN26(VAR10, VAR54, VAR64))
                    {
                        FUN38(VAR2, 8 * VAR54, VAR64, VAR2->VAR68[VAR64][VAR60[0] + 16 * VAR54], &VAR77, &VAR78);
                        VAR77 += FUN31(&VAR4->VAR23);
                        VAR78 += FUN31(&VAR4->VAR23);
                        FUN3(VAR4->VAR17, "", VAR77, VAR78);
                        VAR84 = FUN36(VAR77, VAR78);
                    }
                    else
                        VAR84 = 0;
                    FUN19(VAR2->VAR79[VAR64][VAR60[0] + 16 * VAR54], 4, 2, 8, VAR84, 4);
                }
            }
        }
        else
        {
            assert(FUN39(VAR10));
            for (VAR64 = 0; VAR64 < VAR2->VAR72; VAR64++)
            {
                for (VAR54 = 0; VAR54 < 2; VAR54++)
                {
                    unsigned int VAR84;
                    if (FUN26(VAR10, VAR54, VAR64))
                    {
                        VAR84 = FUN27(&VAR4->VAR23, VAR2->VAR53[VAR64]);
                        if (VAR84 >= VAR2->VAR53[VAR64])
                        {
                            FUN8(VAR2->VAR4.VAR17, VAR36, "", VAR84);
                            return -1;
                        }
                    }
                    else
                        VAR84 = VAR85 & 0xFF;
                    FUN19(&VAR2->VAR68[VAR64][VAR60[0] + 2 * VAR54], 2, 4, 8, VAR84, 1);
                }
            }
            for (VAR64 = 0; VAR64 < VAR2->VAR72; VAR64++)
            {
                for (VAR54 = 0; VAR54 < 2; VAR54++)
                {
                    unsigned int VAR84;
                    if (FUN26(VAR10, VAR54, VAR64))
                    {
                        FUN40(VAR2, VAR54 * 4, VAR64, VAR2->VAR68[VAR64][VAR60[0] + 2 * VAR54], &VAR77, &VAR78);
                        VAR77 += FUN31(&VAR4->VAR23);
                        VAR78 += FUN31(&VAR4->VAR23);
                        FUN3(VAR4->VAR17, "", VAR77, VAR78);
                        VAR84 = FUN36(VAR77, VAR78);
                    }
                    else
                        VAR84 = 0;
                    FUN19(VAR2->VAR79[VAR64][VAR60[0] + 2 * VAR54], 2, 4, 8, VAR84, 4);
                }
            }
        }
    }
    if (FUN41(VAR10))
        FUN42(VAR2, VAR10);
    if (!FUN43(VAR10))
    {
        VAR11 = FUN4(&VAR4->VAR23);
        if (VAR11 > 47)
        {
            FUN8(VAR2->VAR4.VAR17, VAR36, "", VAR11, VAR4->VAR6, VAR4->VAR7);
            return -1;
        }
        if (FUN17(VAR10))
            VAR11 = VAR86[VAR11];
        else
            VAR11 = VAR87[VAR11];
    }
    VAR2->VAR11 = VAR11;
    if (VAR12 && (VAR11 & 15) && !FUN16(VAR10))
    {
        if (FUN5(&VAR4->VAR23))
            VAR10 |= VAR56;
    }
    VAR4->VAR47.VAR10[VAR5] = VAR10;
    if (VAR11 || FUN43(VAR10))
    {
        int VAR88, VAR89, VAR90;
        int VAR49, VAR91;
        VAR92 *VAR23 = FUN16(VAR10) ? VAR2->VAR93 : VAR2->VAR94;
        const VAR95 *VAR96, *VAR97, *VAR98;
        if (FUN44(VAR10))
        {
            VAR97 = VAR4->VAR99 ? VAR2->VAR100 : VAR2->VAR101;
            VAR96 = VAR4->VAR99 ? VAR2->VAR102 : VAR2->VAR103;
            VAR98 = VAR104;
        }
        else
        {
            VAR97 = VAR4->VAR99 ? VAR2->VAR105 : VAR2->VAR106;
            VAR96 = VAR4->VAR99 ? VAR2->VAR107 : VAR2->VAR108;
            VAR98 = VAR109;
        }
        VAR91 = FUN31(&VAR4->VAR23);
        if (VAR91 > 25 || VAR91 < -26)
        {
            FUN8(VAR2->VAR4.VAR17, VAR36, "", VAR91, VAR4->VAR6, VAR4->VAR7);
            return -1;
        }
        VAR4->VAR99 += VAR91;
        if (((unsigned)VAR4->VAR99) > 51)
        {
            if (VAR4->VAR99 < 0)
                VAR4->VAR99 += 52;
            else
                VAR4->VAR99 -= 52;
        }
        VAR2->VAR49 = VAR49 = FUN14(VAR2->VAR13.VAR50, VAR4->VAR99);
        if (FUN43(VAR10))
        {
            if (FUN45(VAR2, VAR2->VAR93, VAR2->VAR16, VAR110, VAR98, VAR2->VAR111[0][VAR4->VAR99], 16) < 0)
            {
                return -1;
            }
            assert((VAR11 & 15) == 0 || (VAR11 & 15) == 15);
            if (VAR11 & 15)
            {
                for (VAR88 = 0; VAR88 < 4; VAR88++)
                {
                    for (VAR89 = 0; VAR89 < 4; VAR89++)
                    {
                        const int VAR46 = VAR89 + 4 * VAR88;
                        if (FUN45(VAR2, VAR2->VAR93, VAR2->VAR16 + 16 * VAR46, VAR46, VAR96 + 1, VAR2->VAR111[0][VAR4->VAR99], 15) < 0)
                        {
                            return -1;
                        }
                    }
                }
            }
            else
            {
                FUN19(&VAR2->VAR112[VAR60[0]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            for (VAR88 = 0; VAR88 < 4; VAR88++)
            {
                if (VAR11 & (1 << VAR88))
                {
                    if (FUN46(VAR10))
                    {
                        VAR113 *VAR114 = &VAR2->VAR16[64 * VAR88];
                        VAR95 *VAR115;
                        for (VAR89 = 0; VAR89 < 4; VAR89++)
                        {
                            if (FUN45(VAR2, VAR23, VAR114, VAR89 + 4 * VAR88, VAR97 + 16 * VAR89, VAR2->VAR116[FUN16(VAR10) ? 0 : 1][VAR4->VAR99], 16) < 0)
                                return -1;
                        }
                        VAR115 = &VAR2->VAR112[VAR60[4 * VAR88]];
                        VAR115[0] += VAR115[1] + VAR115[8] + VAR115[9];
                    }
                    else
                    {
                        for (VAR89 = 0; VAR89 < 4; VAR89++)
                        {
                            const int VAR46 = VAR89 + 4 * VAR88;
                            if (FUN45(VAR2, VAR23, VAR2->VAR16 + 16 * VAR46, VAR46, VAR96, VAR2->VAR111[FUN16(VAR10) ? 0 : 3][VAR4->VAR99], 16) < 0)
                            {
                                return -1;
                            }
                        }
                    }
                }
                else
                {
                    VAR95 *const VAR115 = &VAR2->VAR112[VAR60[4 * VAR88]];
                    VAR115[0] = VAR115[1] = VAR115[8] = VAR115[9] = 0;
                }
            }
        }
        if (VAR11 & 0x30)
        {
            for (VAR90 = 0; VAR90 < 2; VAR90++)
                if (FUN45(VAR2, VAR23, VAR2->VAR16 + 256 + 16 * 4 * VAR90, VAR117, VAR118, NULL, 4) < 0)
                {
                    return -1;
                }
        }
        if (VAR11 & 0x20)
        {
            for (VAR90 = 0; VAR90 < 2; VAR90++)
            {
                const VAR80 *VAR119 = VAR2->VAR111[VAR90 + 1 + (FUN16(VAR10) ? 0 : 3)][VAR49];
                for (VAR89 = 0; VAR89 < 4; VAR89++)
                {
                    const int VAR46 = 16 + 4 * VAR90 + VAR89;
                    if (FUN45(VAR2, VAR23, VAR2->VAR16 + 16 * VAR46, VAR46, VAR96 + 1, VAR119, 15) < 0)
                    {
                        return -1;
                    }
                }
            }
        }
        else
        {
            VAR95 *const VAR115 = &VAR2->VAR112[0];
            VAR115[VAR60[16] + 0] = VAR115[VAR60[16] + 1] = VAR115[VAR60[16] + 8] = VAR115[VAR60[16] + 9] = VAR115[VAR60[20] + 0] = VAR115[VAR60[20] + 1] = VAR115[VAR60[20] + 8] = VAR115[VAR60[20] + 9] = 0;
        }
    }
    else
    {
        VAR95 *const VAR115 = &VAR2->VAR112[0];
        FUN19(&VAR115[VAR60[0]], 4, 4, 8, 0, 1);
        VAR115[VAR60[16] + 0] = VAR115[VAR60[16] + 1] = VAR115[VAR60[16] + 8] = VAR115[VAR60[16] + 9] = VAR115[VAR60[20] + 0] = VAR115[VAR60[20] + 1] = VAR115[VAR60[20] + 8] = VAR115[VAR60[20] + 9] = 0;
    }
    VAR4->VAR47.VAR48[VAR5] = VAR4->VAR99;
    FUN47(VAR2);
    if (VAR52)
    {
        VAR2->VAR53[0] >>= 1;
        VAR2->VAR53[1] >>= 1;
    }
    return 0;
}