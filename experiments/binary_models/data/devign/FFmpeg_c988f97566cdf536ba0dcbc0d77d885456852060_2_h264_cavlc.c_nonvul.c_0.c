int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5;
    int VAR6;
    unsigned int VAR7, VAR8;
    int VAR9 = VAR2->VAR10.VAR11;
    VAR5 = VAR2->VAR5 = VAR4->VAR12 + VAR4->VAR13 * VAR4->VAR14;
    FUN2(VAR4->VAR15, "", VAR2->VAR16, VAR4->VAR12, VAR4->VAR13);
    VAR8 = 0;
    if (VAR2->VAR17 != VAR18)
    {
        if (VAR4->VAR19 == -1)
            VAR4->VAR19 = FUN3(&VAR4->VAR20);
        if (VAR4->VAR19--)
        {
            if (VAR21 && (VAR4->VAR13 & 1) == 0)
            {
                if (VAR4->VAR19 == 0)
                    VAR2->VAR22 = VAR2->VAR23 = FUN4(&VAR4->VAR20);
                else
                    FUN5(VAR2);
            }
            FUN6(VAR2);
            return 0;
        }
    }
    if (VAR21)
    {
        if ((VAR4->VAR13 & 1) == 0)
            VAR2->VAR22 = VAR2->VAR23 = FUN4(&VAR4->VAR20);
    }
    VAR2->VAR24 = 0;
    VAR7 = FUN3(&VAR4->VAR20);
    if (VAR2->VAR17 == VAR25)
    {
        if (VAR7 < 23)
        {
            VAR6 = VAR26[VAR7].VAR6;
            VAR7 = VAR26[VAR7].VAR27;
        }
        else
        {
            VAR7 -= 23;
            goto VAR28;
        }
    }
    else if (VAR2->VAR17 == VAR29)
    {
        if (VAR7 < 5)
        {
            VAR6 = VAR30[VAR7].VAR6;
            VAR7 = VAR30[VAR7].VAR27;
        }
        else
        {
            VAR7 -= 5;
            goto VAR28;
        }
    }
    else
    {
        assert(VAR2->VAR17 == VAR18);
        if (VAR2->VAR31 == VAR32 && VAR7)
            VAR7--;
    VAR28:
        if (VAR7 > 25)
        {
            FUN7(VAR2->VAR4.VAR15, VAR33, "", VAR7, FUN8(VAR2->VAR31), VAR4->VAR12, VAR4->VAR13);
            return -1;
        }
        VAR6 = 0;
        VAR8 = VAR34[VAR7].VAR8;
        VAR2->VAR35 = VAR34[VAR7].VAR36;
        VAR7 = VAR34[VAR7].VAR27;
    }
    if (VAR37)
        VAR7 |= VAR38;
    VAR2->VAR39[VAR5] = VAR2->VAR40;
    if (FUN9(VAR7))
    {
        unsigned int VAR41;
        FUN10(&VAR4->VAR20);
        for (VAR41 = 0; VAR41 < (VAR42 ? 384 : 256); VAR41++)
        {
            ((VAR43 *)VAR2->VAR44)[VAR41] = FUN11(&VAR4->VAR20, 8);
        }
        VAR4->VAR45.VAR46[VAR5] = 0;
        memset(VAR2->VAR47[VAR5], 16, 32);
        VAR4->VAR45.VAR7[VAR5] = VAR7;
        return 0;
    }
    if (VAR48)
    {
        VAR2->VAR49[0] <<= 1;
        VAR2->VAR49[1] <<= 1;
    }
    FUN12(VAR2, VAR7, 0);
    if (FUN13(VAR7))
    {
        int VAR36;
        if (FUN14(VAR7))
        {
            int VAR50;
            int VAR51 = 1;
            if (VAR9 && FUN4(&VAR4->VAR20))
            {
                VAR7 |= VAR52;
                VAR51 = 4;
            }
            for (VAR50 = 0; VAR50 < 16; VAR50 += VAR51)
            {
                int VAR53 = FUN15(VAR2, VAR50);
                if (!FUN4(&VAR4->VAR20))
                {
                    const int VAR54 = FUN11(&VAR4->VAR20, 3);
                    VAR53 = VAR54 + (VAR54 >= VAR53);
                }
                if (VAR51 == 4)
                    FUN16(&VAR2->VAR55[VAR56[VAR50]], 2, 2, 8, VAR53, 1);
                else
                    VAR2->VAR55[VAR56[VAR50]] = VAR53;
            }
            FUN17(VAR2);
            if (FUN18(VAR2) < 0)
                return -1;
        }
        else
        {
            VAR2->VAR35 = FUN19(VAR2, VAR2->VAR35);
            if (VAR2->VAR35 < 0)
                return -1;
        }
        if (VAR42)
        {
            VAR36 = FUN19(VAR2, FUN20(&VAR4->VAR20));
            if (VAR36 < 0)
                return -1;
            VAR2->VAR57 = VAR36;
        }
    }
    else if (VAR6 == 4)
    {
        int VAR50, VAR58, VAR59[4], VAR60, VAR61[2][4];
        if (VAR2->VAR17 == VAR25)
        {
            for (VAR50 = 0; VAR50 < 4; VAR50++)
            {
                VAR2->VAR62[VAR50] = FUN20(&VAR4->VAR20);
                if (VAR2->VAR62[VAR50] >= 13)
                {
                    FUN7(VAR2->VAR4.VAR15, VAR33, "", VAR2->VAR62[VAR50], VAR4->VAR12, VAR4->VAR13);
                    return -1;
                }
                VAR59[VAR50] = VAR63[VAR2->VAR62[VAR50]].VAR6;
                VAR2->VAR62[VAR50] = VAR63[VAR2->VAR62[VAR50]].VAR27;
            }
            if (FUN21(VAR2->VAR62[0]) || FUN21(VAR2->VAR62[1]) || FUN21(VAR2->VAR62[2]) || FUN21(VAR2->VAR62[3]))
            {
                FUN22(VAR2, &VAR7);
                VAR2->VAR64[0][VAR56[4]] = VAR2->VAR64[1][VAR56[4]] = VAR2->VAR64[0][VAR56[12]] = VAR2->VAR64[1][VAR56[12]] = VAR65;
            }
        }
        else
        {
            assert(VAR2->VAR17 == VAR29);
            for (VAR50 = 0; VAR50 < 4; VAR50++)
            {
                VAR2->VAR62[VAR50] = FUN20(&VAR4->VAR20);
                if (VAR2->VAR62[VAR50] >= 4)
                {
                    FUN7(VAR2->VAR4.VAR15, VAR33, "", VAR2->VAR62[VAR50], VAR4->VAR12, VAR4->VAR13);
                    return -1;
                }
                VAR59[VAR50] = VAR66[VAR2->VAR62[VAR50]].VAR6;
                VAR2->VAR62[VAR50] = VAR66[VAR2->VAR62[VAR50]].VAR27;
            }
        }
        for (VAR60 = 0; VAR60 < VAR2->VAR67; VAR60++)
        {
            int VAR49 = FUN23(VAR7) ? 1 : VAR2->VAR49[VAR60];
            for (VAR50 = 0; VAR50 < 4; VAR50++)
            {
                if (FUN21(VAR2->VAR62[VAR50]))
                    continue;
                if (FUN24(VAR2->VAR62[VAR50], 0, VAR60))
                {
                    unsigned int VAR68;
                    if (VAR49 == 1)
                    {
                        VAR68 = 0;
                    }
                    else if (VAR49 == 2)
                    {
                        VAR68 = FUN4(&VAR4->VAR20) ^ 1;
                    }
                    else
                    {
                        VAR68 = FUN20(&VAR4->VAR20);
                        if (VAR68 >= VAR49)
                        {
                            FUN7(VAR2->VAR4.VAR15, VAR33, "", VAR68);
                            return -1;
                        }
                    }
                    VAR61[VAR60][VAR50] = VAR68;
                }
                else
                {
                    VAR61[VAR60][VAR50] = -1;
                }
            }
        }
        if (VAR9)
            VAR9 = FUN25(VAR2);
        for (VAR60 = 0; VAR60 < VAR2->VAR67; VAR60++)
        {
            for (VAR50 = 0; VAR50 < 4; VAR50++)
            {
                if (FUN21(VAR2->VAR62[VAR50]))
                {
                    VAR2->VAR64[VAR60][VAR56[4 * VAR50]] = VAR2->VAR64[VAR60][VAR56[4 * VAR50] + 1];
                    continue;
                }
                VAR2->VAR64[VAR60][VAR56[4 * VAR50]] = VAR2->VAR64[VAR60][VAR56[4 * VAR50] + 1] = VAR2->VAR64[VAR60][VAR56[4 * VAR50] + 8] = VAR2->VAR64[VAR60][VAR56[4 * VAR50] + 9] = VAR61[VAR60][VAR50];
                if (FUN24(VAR2->VAR62[VAR50], 0, VAR60))
                {
                    const int VAR62 = VAR2->VAR62[VAR50];
                    const int VAR69 = (VAR62 & (VAR70 | VAR71)) ? 2 : 1;
                    for (VAR58 = 0; VAR58 < VAR59[VAR50]; VAR58++)
                    {
                        int VAR72, VAR73;
                        const int VAR74 = 4 * VAR50 + VAR69 * VAR58;
                        FUN26(*VAR75)[2] = &VAR2->VAR75[VAR60][VAR56[VAR74]];
                        FUN27(VAR2, VAR74, VAR69, VAR60, VAR2->VAR64[VAR60][VAR56[VAR74]], &VAR72, &VAR73);
                        VAR72 += FUN28(&VAR4->VAR20);
                        VAR73 += FUN28(&VAR4->VAR20);
                        FUN2(VAR4->VAR15, "", VAR72, VAR73);
                        if (FUN29(VAR62))
                        {
                            VAR75[1][0] = VAR75[8][0] = VAR75[9][0] = VAR72;
                            VAR75[1][1] = VAR75[8][1] = VAR75[9][1] = VAR73;
                        }
                        else if (FUN30(VAR62))
                        {
                            VAR75[1][0] = VAR72;
                            VAR75[1][1] = VAR73;
                        }
                        else if (FUN31(VAR62))
                        {
                            VAR75[8][0] = VAR72;
                            VAR75[8][1] = VAR73;
                        }
                        VAR75[0][0] = VAR72;
                        VAR75[0][1] = VAR73;
                    }
                }
                else
                {
                    VAR76 *VAR77 = (VAR76 *)&VAR2->VAR75[VAR60][VAR56[4 * VAR50]][0];
                    VAR77[0] = VAR77[1] = VAR77[8] = VAR77[9] = 0;
                }
            }
        }
    }
    else if (FUN21(VAR7))
    {
        FUN22(VAR2, &VAR7);
        VAR9 &= VAR2->VAR78.VAR79;
    }
    else
    {
        int VAR60, VAR72, VAR73, VAR50;
        if (FUN32(VAR7))
        {
            for (VAR60 = 0; VAR60 < VAR2->VAR67; VAR60++)
            {
                unsigned int VAR80;
                if (FUN24(VAR7, 0, VAR60))
                {
                    if (VAR2->VAR49[VAR60] == 1)
                    {
                        VAR80 = 0;
                    }
                    else if (VAR2->VAR49[VAR60] == 2)
                    {
                        VAR80 = FUN4(&VAR4->VAR20) ^ 1;
                    }
                    else
                    {
                        VAR80 = FUN20(&VAR4->VAR20);
                        if (VAR80 >= VAR2->VAR49[VAR60])
                        {
                            FUN7(VAR2->VAR4.VAR15, VAR33, "", VAR80);
                            return -1;
                        }
                    }
                }
                else
                    VAR80 = VAR81 & 0xFF;
                FUN16(&VAR2->VAR64[VAR60][VAR56[0]], 4, 4, 8, VAR80, 1);
            }
            for (VAR60 = 0; VAR60 < VAR2->VAR67; VAR60++)
            {
                unsigned int VAR80;
                if (FUN24(VAR7, 0, VAR60))
                {
                    FUN27(VAR2, 0, 4, VAR60, VAR2->VAR64[VAR60][VAR56[0]], &VAR72, &VAR73);
                    VAR72 += FUN28(&VAR4->VAR20);
                    VAR73 += FUN28(&VAR4->VAR20);
                    FUN2(VAR4->VAR15, "", VAR72, VAR73);
                    VAR80 = FUN33(VAR72, VAR73);
                }
                else
                    VAR80 = 0;
                FUN16(VAR2->VAR75[VAR60][VAR56[0]], 4, 4, 8, VAR80, 4);
            }
        }
        else if (FUN34(VAR7))
        {
            for (VAR60 = 0; VAR60 < VAR2->VAR67; VAR60++)
            {
                for (VAR50 = 0; VAR50 < 2; VAR50++)
                {
                    unsigned int VAR80;
                    if (FUN24(VAR7, VAR50, VAR60))
                    {
                        if (VAR2->VAR49[VAR60] == 1)
                        {
                            VAR80 = 0;
                        }
                        else if (VAR2->VAR49[VAR60] == 2)
                        {
                            VAR80 = FUN4(&VAR4->VAR20) ^ 1;
                        }
                        else
                        {
                            VAR80 = FUN20(&VAR4->VAR20);
                            if (VAR80 >= VAR2->VAR49[VAR60])
                            {
                                FUN7(VAR2->VAR4.VAR15, VAR33, "", VAR80);
                                return -1;
                            }
                        }
                    }
                    else
                        VAR80 = VAR81 & 0xFF;
                    FUN16(&VAR2->VAR64[VAR60][VAR56[0] + 16 * VAR50], 4, 2, 8, VAR80, 1);
                }
            }
            for (VAR60 = 0; VAR60 < VAR2->VAR67; VAR60++)
            {
                for (VAR50 = 0; VAR50 < 2; VAR50++)
                {
                    unsigned int VAR80;
                    if (FUN24(VAR7, VAR50, VAR60))
                    {
                        FUN35(VAR2, 8 * VAR50, VAR60, VAR2->VAR64[VAR60][VAR56[0] + 16 * VAR50], &VAR72, &VAR73);
                        VAR72 += FUN28(&VAR4->VAR20);
                        VAR73 += FUN28(&VAR4->VAR20);
                        FUN2(VAR4->VAR15, "", VAR72, VAR73);
                        VAR80 = FUN33(VAR72, VAR73);
                    }
                    else
                        VAR80 = 0;
                    FUN16(VAR2->VAR75[VAR60][VAR56[0] + 16 * VAR50], 4, 2, 8, VAR80, 4);
                }
            }
        }
        else
        {
            assert(FUN36(VAR7));
            for (VAR60 = 0; VAR60 < VAR2->VAR67; VAR60++)
            {
                for (VAR50 = 0; VAR50 < 2; VAR50++)
                {
                    unsigned int VAR80;
                    if (FUN24(VAR7, VAR50, VAR60))
                    {
                        if (VAR2->VAR49[VAR60] == 1)
                        {
                            VAR80 = 0;
                        }
                        else if (VAR2->VAR49[VAR60] == 2)
                        {
                            VAR80 = FUN4(&VAR4->VAR20) ^ 1;
                        }
                        else
                        {
                            VAR80 = FUN20(&VAR4->VAR20);
                            if (VAR80 >= VAR2->VAR49[VAR60])
                            {
                                FUN7(VAR2->VAR4.VAR15, VAR33, "", VAR80);
                                return -1;
                            }
                        }
                    }
                    else
                        VAR80 = VAR81 & 0xFF;
                    FUN16(&VAR2->VAR64[VAR60][VAR56[0] + 2 * VAR50], 2, 4, 8, VAR80, 1);
                }
            }
            for (VAR60 = 0; VAR60 < VAR2->VAR67; VAR60++)
            {
                for (VAR50 = 0; VAR50 < 2; VAR50++)
                {
                    unsigned int VAR80;
                    if (FUN24(VAR7, VAR50, VAR60))
                    {
                        FUN37(VAR2, VAR50 * 4, VAR60, VAR2->VAR64[VAR60][VAR56[0] + 2 * VAR50], &VAR72, &VAR73);
                        VAR72 += FUN28(&VAR4->VAR20);
                        VAR73 += FUN28(&VAR4->VAR20);
                        FUN2(VAR4->VAR15, "", VAR72, VAR73);
                        VAR80 = FUN33(VAR72, VAR73);
                    }
                    else
                        VAR80 = 0;
                    FUN16(VAR2->VAR75[VAR60][VAR56[0] + 2 * VAR50], 2, 4, 8, VAR80, 4);
                }
            }
        }
    }
    if (FUN38(VAR7))
        FUN39(VAR2, VAR7);
    if (!FUN40(VAR7))
    {
        VAR8 = FUN3(&VAR4->VAR20);
        if (VAR8 > 47)
        {
            FUN7(VAR2->VAR4.VAR15, VAR33, "", VAR8, VAR4->VAR12, VAR4->VAR13);
            return -1;
        }
        if (VAR42)
        {
            if (FUN14(VAR7))
                VAR8 = VAR82[VAR8];
            else
                VAR8 = VAR83[VAR8];
        }
        else
        {
            if (FUN14(VAR7))
                VAR8 = VAR84[VAR8];
            else
                VAR8 = VAR85[VAR8];
        }
    }
    VAR2->VAR8 = VAR8;
    if (VAR9 && (VAR8 & 15) && !FUN13(VAR7))
    {
        if (FUN4(&VAR4->VAR20))
        {
            VAR7 |= VAR52;
            VAR2->VAR86[VAR5] = VAR8;
        }
    }
    VAR4->VAR45.VAR7[VAR5] = VAR7;
    if (VAR8 || FUN40(VAR7))
    {
        int VAR87, VAR88, VAR89;
        int VAR90;
        VAR91 *VAR20 = FUN13(VAR7) ? VAR2->VAR92 : VAR2->VAR93;
        const VAR43 *VAR94, *VAR95, *VAR96;
        if (FUN41(VAR7))
        {
            VAR95 = VAR4->VAR97 ? VAR2->VAR98 : VAR2->VAR99;
            VAR94 = VAR4->VAR97 ? VAR2->VAR100 : VAR2->VAR101;
            VAR96 = VAR102;
        }
        else
        {
            VAR95 = VAR4->VAR97 ? VAR2->VAR103 : VAR2->VAR104;
            VAR94 = VAR4->VAR97 ? VAR2->VAR105 : VAR2->VAR106;
            VAR96 = VAR107;
        }
        VAR90 = FUN28(&VAR4->VAR20);
        if (VAR90 > 25 || VAR90 < -26)
        {
            FUN7(VAR2->VAR4.VAR15, VAR33, "", VAR90, VAR4->VAR12, VAR4->VAR13);
            return -1;
        }
        VAR4->VAR97 += VAR90;
        if (((unsigned)VAR4->VAR97) > 51)
        {
            if (VAR4->VAR97 < 0)
                VAR4->VAR97 += 52;
            else
                VAR4->VAR97 -= 52;
        }
        VAR2->VAR108[0] = FUN42(VAR2, 0, VAR4->VAR97);
        VAR2->VAR108[1] = FUN42(VAR2, 1, VAR4->VAR97);
        if (FUN40(VAR7))
        {
            if (FUN43(VAR2, VAR2->VAR92, VAR2->VAR44, VAR109, VAR96, VAR2->VAR110[0][VAR4->VAR97], 16) < 0)
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
                        const int VAR74 = VAR88 + 4 * VAR87;
                        if (FUN43(VAR2, VAR2->VAR92, VAR2->VAR44 + 16 * VAR74, VAR74, VAR94 + 1, VAR2->VAR110[0][VAR4->VAR97], 15) < 0)
                        {
                            return -1;
                        }
                    }
                }
            }
            else
            {
                FUN16(&VAR2->VAR111[VAR56[0]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            for (VAR87 = 0; VAR87 < 4; VAR87++)
            {
                if (VAR8 & (1 << VAR87))
                {
                    if (FUN44(VAR7))
                    {
                        VAR112 *VAR113 = &VAR2->VAR44[64 * VAR87];
                        VAR43 *VAR114;
                        for (VAR88 = 0; VAR88 < 4; VAR88++)
                        {
                            if (FUN43(VAR2, VAR20, VAR113, VAR88 + 4 * VAR87, VAR95 + 16 * VAR88, VAR2->VAR115[FUN13(VAR7) ? 0 : 1][VAR4->VAR97], 16) < 0)
                                return -1;
                        }
                        VAR114 = &VAR2->VAR111[VAR56[4 * VAR87]];
                        VAR114[0] += VAR114[1] + VAR114[8] + VAR114[9];
                    }
                    else
                    {
                        for (VAR88 = 0; VAR88 < 4; VAR88++)
                        {
                            const int VAR74 = VAR88 + 4 * VAR87;
                            if (FUN43(VAR2, VAR20, VAR2->VAR44 + 16 * VAR74, VAR74, VAR94, VAR2->VAR110[FUN13(VAR7) ? 0 : 3][VAR4->VAR97], 16) < 0)
                            {
                                return -1;
                            }
                        }
                    }
                }
                else
                {
                    VAR43 *const VAR114 = &VAR2->VAR111[VAR56[4 * VAR87]];
                    VAR114[0] = VAR114[1] = VAR114[8] = VAR114[9] = 0;
                }
            }
        }
        if (VAR8 & 0x30)
        {
            for (VAR89 = 0; VAR89 < 2; VAR89++)
                if (FUN43(VAR2, VAR20, VAR2->VAR44 + 256 + 16 * 4 * VAR89, VAR116, VAR117, NULL, 4) < 0)
                {
                    return -1;
                }
        }
        if (VAR8 & 0x20)
        {
            for (VAR89 = 0; VAR89 < 2; VAR89++)
            {
                const VAR76 *VAR118 = VAR2->VAR110[VAR89 + 1 + (FUN13(VAR7) ? 0 : 3)][VAR2->VAR108[VAR89]];
                for (VAR88 = 0; VAR88 < 4; VAR88++)
                {
                    const int VAR74 = 16 + 4 * VAR89 + VAR88;
                    if (FUN43(VAR2, VAR20, VAR2->VAR44 + 16 * VAR74, VAR74, VAR94 + 1, VAR118, 15) < 0)
                    {
                        return -1;
                    }
                }
            }
        }
        else
        {
            VAR43 *const VAR114 = &VAR2->VAR111[0];
            VAR114[VAR56[16] + 0] = VAR114[VAR56[16] + 1] = VAR114[VAR56[16] + 8] = VAR114[VAR56[16] + 9] = VAR114[VAR56[20] + 0] = VAR114[VAR56[20] + 1] = VAR114[VAR56[20] + 8] = VAR114[VAR56[20] + 9] = 0;
        }
    }
    else
    {
        VAR43 *const VAR114 = &VAR2->VAR111[0];
        FUN16(&VAR114[VAR56[0]], 4, 4, 8, 0, 1);
        VAR114[VAR56[16] + 0] = VAR114[VAR56[16] + 1] = VAR114[VAR56[16] + 8] = VAR114[VAR56[16] + 9] = VAR114[VAR56[20] + 0] = VAR114[VAR56[20] + 1] = VAR114[VAR56[20] + 8] = VAR114[VAR56[20] + 9] = 0;
    }
    VAR4->VAR45.VAR46[VAR5] = VAR4->VAR97;
    FUN45(VAR2);
    if (VAR48)
    {
        VAR2->VAR49[0] >>= 1;
        VAR2->VAR49[1] >>= 1;
    }
    return 0;
}