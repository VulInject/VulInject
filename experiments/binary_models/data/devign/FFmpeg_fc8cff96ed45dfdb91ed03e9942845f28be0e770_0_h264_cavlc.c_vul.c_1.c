int FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    unsigned int VAR7, VAR8;
    int VAR9 = VAR2->VAR10.VAR11->VAR12;
    int VAR13 = VAR2->VAR10.VAR14->VAR15 == 1 || VAR2->VAR10.VAR14->VAR15 == 2;
    const int VAR16 = VAR2->VAR16;
    VAR5 = VAR4->VAR5 = VAR4->VAR17 + VAR4->VAR18 * VAR2->VAR19;
    FUN2(VAR2->VAR20, "", VAR2->VAR21.VAR22, VAR4->VAR17, VAR4->VAR18);
    VAR8 = 0;
    if (VAR4->VAR23 != VAR24)
    {
        if (VAR4->VAR25 == -1)
            VAR4->VAR25 = FUN3(&VAR4->VAR26);
        if (VAR4->VAR25--)
        {
            if (FUN4(VAR2) && (VAR4->VAR18 & 1) == 0)
            {
                if (VAR4->VAR25 == 0)
                    VAR4->VAR27 = VAR4->VAR28 = FUN5(&VAR4->VAR26);
            }
            FUN6(VAR2, VAR4);
            return 0;
        }
    }
    if (FUN4(VAR2))
    {
        if ((VAR4->VAR18 & 1) == 0)
            VAR4->VAR27 = VAR4->VAR28 = FUN5(&VAR4->VAR26);
    }
    VAR4->VAR29 = 0;
    VAR7 = FUN7(&VAR4->VAR26);
    if (VAR4->VAR23 == VAR30)
    {
        if (VAR7 < 23)
        {
            VAR6 = VAR31[VAR7].VAR6;
            VAR7 = VAR31[VAR7].VAR32;
        }
        else
        {
            VAR7 -= 23;
            goto VAR33;
        }
    }
    else if (VAR4->VAR23 == VAR34)
    {
        if (VAR7 < 5)
        {
            VAR6 = VAR35[VAR7].VAR6;
            VAR7 = VAR35[VAR7].VAR32;
        }
        else
        {
            VAR7 -= 5;
            goto VAR33;
        }
    }
    else
    {
        FUN8(VAR4->VAR23 == VAR24);
        if (VAR4->VAR36 == VAR37 && VAR7)
            VAR7--;
    VAR33:
        if (VAR7 > 25)
        {
            FUN9(VAR2->VAR20, VAR38, "", VAR7, FUN10(VAR4->VAR36), VAR4->VAR17, VAR4->VAR18);
            return -1;
        }
        VAR6 = 0;
        VAR8 = VAR39[VAR7].VAR8;
        VAR4->VAR40 = VAR39[VAR7].VAR41;
        VAR7 = VAR39[VAR7].VAR32;
    }
    if (FUN11(VAR4))
        VAR7 |= VAR42;
    VAR2->VAR43[VAR5] = VAR4->VAR44;
    if (FUN12(VAR7))
    {
        const int VAR45 = VAR46[VAR2->VAR10.VAR14->VAR15] * VAR2->VAR10.VAR14->VAR47;
        VAR4->VAR48 = FUN13(&VAR4->VAR26);
        if (FUN14(&VAR4->VAR26) < VAR45)
        {
            FUN9(VAR2->VAR20, VAR38, "");
            return VAR49;
        }
        FUN15(&VAR4->VAR26, VAR45);
        VAR2->VAR50.VAR51[VAR5] = 0;
        memset(VAR2->VAR52[VAR5], 16, 48);
        VAR2->VAR50.VAR7[VAR5] = VAR7;
        return 0;
    }
    FUN16(VAR2, VAR4, VAR7);
    FUN17(VAR2, VAR4, VAR7);
    if (FUN18(VAR7))
    {
        int VAR41;
        if (FUN19(VAR7))
        {
            int VAR53;
            int VAR54 = 1;
            if (VAR9 && FUN5(&VAR4->VAR26))
            {
                VAR7 |= VAR55;
                VAR54 = 4;
            }
            for (VAR53 = 0; VAR53 < 16; VAR53 += VAR54)
            {
                int VAR56 = FUN20(VAR2, VAR4, VAR53);
                if (!FUN5(&VAR4->VAR26))
                {
                    const int VAR57 = FUN21(&VAR4->VAR26, 3);
                    VAR56 = VAR57 + (VAR57 >= VAR56);
                }
                if (VAR54 == 4)
                    FUN22(&VAR4->VAR58[VAR59[VAR53]], 2, 2, 8, VAR56, 1);
                else
                    VAR4->VAR58[VAR59[VAR53]] = VAR56;
            }
            FUN23(VAR2, VAR4);
            if (FUN24(VAR4->VAR58, VAR2->VAR20, VAR4->VAR60, VAR4->VAR61) < 0)
                return -1;
        }
        else
        {
            VAR4->VAR40 = FUN25(VAR2->VAR20, VAR4->VAR60, VAR4->VAR61, VAR4->VAR40, 0);
            if (VAR4->VAR40 < 0)
                return -1;
        }
        if (VAR13)
        {
            VAR41 = FUN25(VAR2->VAR20, VAR4->VAR60, VAR4->VAR61, FUN26(&VAR4->VAR26), 1);
            if (VAR41 < 0)
                return -1;
            VAR4->VAR62 = VAR41;
        }
        else
        {
            VAR4->VAR62 = VAR63;
        }
    }
    else if (VAR6 == 4)
    {
        int VAR53, VAR64, VAR65[4], VAR66, VAR67[2][4];
        if (VAR4->VAR23 == VAR30)
        {
            for (VAR53 = 0; VAR53 < 4; VAR53++)
            {
                VAR4->VAR68[VAR53] = FUN26(&VAR4->VAR26);
                if (VAR4->VAR68[VAR53] >= 13)
                {
                    FUN9(VAR2->VAR20, VAR38, "", VAR4->VAR68[VAR53], VAR4->VAR17, VAR4->VAR18);
                    return -1;
                }
                VAR65[VAR53] = VAR69[VAR4->VAR68[VAR53]].VAR6;
                VAR4->VAR68[VAR53] = VAR69[VAR4->VAR68[VAR53]].VAR32;
            }
            if (FUN27(VAR4->VAR68[0] | VAR4->VAR68[1] | VAR4->VAR68[2] | VAR4->VAR68[3]))
            {
                FUN28(VAR2, VAR4, &VAR7);
                VAR4->VAR70[0][VAR59[4]] = VAR4->VAR70[1][VAR59[4]] = VAR4->VAR70[0][VAR59[12]] = VAR4->VAR70[1][VAR59[12]] = VAR71;
            }
        }
        else
        {
            FUN8(VAR4->VAR23 == VAR34);
            for (VAR53 = 0; VAR53 < 4; VAR53++)
            {
                VAR4->VAR68[VAR53] = FUN26(&VAR4->VAR26);
                if (VAR4->VAR68[VAR53] >= 4)
                {
                    FUN9(VAR2->VAR20, VAR38, "", VAR4->VAR68[VAR53], VAR4->VAR17, VAR4->VAR18);
                    return -1;
                }
                VAR65[VAR53] = VAR72[VAR4->VAR68[VAR53]].VAR6;
                VAR4->VAR68[VAR53] = VAR72[VAR4->VAR68[VAR53]].VAR32;
            }
        }
        for (VAR66 = 0; VAR66 < VAR4->VAR73; VAR66++)
        {
            int VAR74 = FUN29(VAR7) ? 1 : VAR4->VAR74[VAR66] << FUN30(VAR4);
            for (VAR53 = 0; VAR53 < 4; VAR53++)
            {
                if (FUN27(VAR4->VAR68[VAR53]))
                    continue;
                if (FUN31(VAR4->VAR68[VAR53], 0, VAR66))
                {
                    unsigned int VAR75;
                    if (VAR74 == 1)
                    {
                        VAR75 = 0;
                    }
                    else if (VAR74 == 2)
                    {
                        VAR75 = FUN5(&VAR4->VAR26) ^ 1;
                    }
                    else
                    {
                        VAR75 = FUN26(&VAR4->VAR26);
                        if (VAR75 >= VAR74)
                        {
                            FUN9(VAR2->VAR20, VAR38, "", VAR75);
                            return -1;
                        }
                    }
                    VAR67[VAR66][VAR53] = VAR75;
                }
                else
                {
                    VAR67[VAR66][VAR53] = -1;
                }
            }
        }
        if (VAR9)
            VAR9 = FUN32(VAR2, VAR4);
        for (VAR66 = 0; VAR66 < VAR4->VAR73; VAR66++)
        {
            for (VAR53 = 0; VAR53 < 4; VAR53++)
            {
                if (FUN27(VAR4->VAR68[VAR53]))
                {
                    VAR4->VAR70[VAR66][VAR59[4 * VAR53]] = VAR4->VAR70[VAR66][VAR59[4 * VAR53] + 1];
                    continue;
                }
                VAR4->VAR70[VAR66][VAR59[4 * VAR53]] = VAR4->VAR70[VAR66][VAR59[4 * VAR53] + 1] = VAR4->VAR70[VAR66][VAR59[4 * VAR53] + 8] = VAR4->VAR70[VAR66][VAR59[4 * VAR53] + 9] = VAR67[VAR66][VAR53];
                if (FUN31(VAR4->VAR68[VAR53], 0, VAR66))
                {
                    const int VAR68 = VAR4->VAR68[VAR53];
                    const int VAR76 = (VAR68 & (VAR77 | VAR78)) ? 2 : 1;
                    for (VAR64 = 0; VAR64 < VAR65[VAR53]; VAR64++)
                    {
                        int VAR79, VAR80;
                        const int VAR81 = 4 * VAR53 + VAR76 * VAR64;
                        FUN33(*VAR82)[2] = &VAR4->VAR82[VAR66][VAR59[VAR81]];
                        FUN34(VAR2, VAR4, VAR81, VAR76, VAR66, VAR4->VAR70[VAR66][VAR59[VAR81]], &VAR79, &VAR80);
                        VAR79 += FUN35(&VAR4->VAR26);
                        VAR80 += FUN35(&VAR4->VAR26);
                        FUN2(VAR2->VAR20, "", VAR79, VAR80);
                        if (FUN36(VAR68))
                        {
                            VAR82[1][0] = VAR82[8][0] = VAR82[9][0] = VAR79;
                            VAR82[1][1] = VAR82[8][1] = VAR82[9][1] = VAR80;
                        }
                        else if (FUN37(VAR68))
                        {
                            VAR82[1][0] = VAR79;
                            VAR82[1][1] = VAR80;
                        }
                        else if (FUN38(VAR68))
                        {
                            VAR82[8][0] = VAR79;
                            VAR82[8][1] = VAR80;
                        }
                        VAR82[0][0] = VAR79;
                        VAR82[0][1] = VAR80;
                    }
                }
                else
                {
                    VAR83 *VAR84 = (VAR83 *)&VAR4->VAR82[VAR66][VAR59[4 * VAR53]][0];
                    VAR84[0] = VAR84[1] = VAR84[8] = VAR84[9] = 0;
                }
            }
        }
    }
    else if (FUN27(VAR7))
    {
        FUN28(VAR2, VAR4, &VAR7);
        VAR9 &= VAR2->VAR10.VAR14->VAR85;
    }
    else
    {
        int VAR66, VAR79, VAR80, VAR53;
        if (FUN39(VAR7))
        {
            for (VAR66 = 0; VAR66 < VAR4->VAR73; VAR66++)
            {
                unsigned int VAR86;
                if (FUN31(VAR7, 0, VAR66))
                {
                    unsigned VAR87 = VAR4->VAR74[VAR66] << FUN30(VAR4);
                    if (VAR87 == 1)
                    {
                        VAR86 = 0;
                    }
                    else if (VAR87 == 2)
                    {
                        VAR86 = FUN5(&VAR4->VAR26) ^ 1;
                    }
                    else
                    {
                        VAR86 = FUN26(&VAR4->VAR26);
                        if (VAR86 >= VAR87)
                        {
                            FUN9(VAR2->VAR20, VAR38, "", VAR86);
                            return -1;
                        }
                    }
                    FUN22(&VAR4->VAR70[VAR66][VAR59[0]], 4, 4, 8, VAR86, 1);
                }
            }
            for (VAR66 = 0; VAR66 < VAR4->VAR73; VAR66++)
            {
                if (FUN31(VAR7, 0, VAR66))
                {
                    FUN34(VAR2, VAR4, 0, 4, VAR66, VAR4->VAR70[VAR66][VAR59[0]], &VAR79, &VAR80);
                    VAR79 += FUN35(&VAR4->VAR26);
                    VAR80 += FUN35(&VAR4->VAR26);
                    FUN2(VAR2->VAR20, "", VAR79, VAR80);
                    FUN22(VAR4->VAR82[VAR66][VAR59[0]], 4, 4, 8, FUN40(VAR79, VAR80), 4);
                }
            }
        }
        else if (FUN41(VAR7))
        {
            for (VAR66 = 0; VAR66 < VAR4->VAR73; VAR66++)
            {
                for (VAR53 = 0; VAR53 < 2; VAR53++)
                {
                    unsigned int VAR86;
                    if (FUN31(VAR7, VAR53, VAR66))
                    {
                        unsigned VAR87 = VAR4->VAR74[VAR66] << FUN30(VAR4);
                        if (VAR87 == 1)
                        {
                            VAR86 = 0;
                        }
                        else if (VAR87 == 2)
                        {
                            VAR86 = FUN5(&VAR4->VAR26) ^ 1;
                        }
                        else
                        {
                            VAR86 = FUN26(&VAR4->VAR26);
                            if (VAR86 >= VAR87)
                            {
                                FUN9(VAR2->VAR20, VAR38, "", VAR86);
                                return -1;
                            }
                        }
                    }
                    else
                        VAR86 = VAR88 & 0xFF;
                    FUN22(&VAR4->VAR70[VAR66][VAR59[0] + 16 * VAR53], 4, 2, 8, VAR86, 1);
                }
            }
            for (VAR66 = 0; VAR66 < VAR4->VAR73; VAR66++)
            {
                for (VAR53 = 0; VAR53 < 2; VAR53++)
                {
                    unsigned int VAR86;
                    if (FUN31(VAR7, VAR53, VAR66))
                    {
                        FUN42(VAR2, VAR4, 8 * VAR53, VAR66, VAR4->VAR70[VAR66][VAR59[0] + 16 * VAR53], &VAR79, &VAR80);
                        VAR79 += FUN35(&VAR4->VAR26);
                        VAR80 += FUN35(&VAR4->VAR26);
                        FUN2(VAR2->VAR20, "", VAR79, VAR80);
                        VAR86 = FUN40(VAR79, VAR80);
                    }
                    else
                        VAR86 = 0;
                    FUN22(VAR4->VAR82[VAR66][VAR59[0] + 16 * VAR53], 4, 2, 8, VAR86, 4);
                }
            }
        }
        else
        {
            FUN8(FUN43(VAR7));
            for (VAR66 = 0; VAR66 < VAR4->VAR73; VAR66++)
            {
                for (VAR53 = 0; VAR53 < 2; VAR53++)
                {
                    unsigned int VAR86;
                    if (FUN31(VAR7, VAR53, VAR66))
                    {
                        unsigned VAR87 = VAR4->VAR74[VAR66] << FUN30(VAR4);
                        if (VAR87 == 1)
                        {
                            VAR86 = 0;
                        }
                        else if (VAR87 == 2)
                        {
                            VAR86 = FUN5(&VAR4->VAR26) ^ 1;
                        }
                        else
                        {
                            VAR86 = FUN26(&VAR4->VAR26);
                            if (VAR86 >= VAR87)
                            {
                                FUN9(VAR2->VAR20, VAR38, "", VAR86);
                                return -1;
                            }
                        }
                    }
                    else
                        VAR86 = VAR88 & 0xFF;
                    FUN22(&VAR4->VAR70[VAR66][VAR59[0] + 2 * VAR53], 2, 4, 8, VAR86, 1);
                }
            }
            for (VAR66 = 0; VAR66 < VAR4->VAR73; VAR66++)
            {
                for (VAR53 = 0; VAR53 < 2; VAR53++)
                {
                    unsigned int VAR86;
                    if (FUN31(VAR7, VAR53, VAR66))
                    {
                        FUN44(VAR2, VAR4, VAR53 * 4, VAR66, VAR4->VAR70[VAR66][VAR59[0] + 2 * VAR53], &VAR79, &VAR80);
                        VAR79 += FUN35(&VAR4->VAR26);
                        VAR80 += FUN35(&VAR4->VAR26);
                        FUN2(VAR2->VAR20, "", VAR79, VAR80);
                        VAR86 = FUN40(VAR79, VAR80);
                    }
                    else
                        VAR86 = 0;
                    FUN22(VAR4->VAR82[VAR66][VAR59[0] + 2 * VAR53], 2, 4, 8, VAR86, 4);
                }
            }
        }
    }
    if (FUN45(VAR7))
        FUN46(VAR2, VAR4, VAR7);
    if (!FUN47(VAR7))
    {
        VAR8 = FUN7(&VAR4->VAR26);
        if (VAR13)
        {
            if (VAR8 > 47)
            {
                FUN9(VAR2->VAR20, VAR38, "", VAR8, VAR4->VAR17, VAR4->VAR18);
                return -1;
            }
            if (FUN19(VAR7))
                VAR8 = VAR89[VAR8];
            else
                VAR8 = VAR90[VAR8];
        }
        else
        {
            if (VAR8 > 15)
            {
                FUN9(VAR2->VAR20, VAR38, "", VAR8, VAR4->VAR17, VAR4->VAR18);
                return -1;
            }
            if (FUN19(VAR7))
                VAR8 = VAR91[VAR8];
            else
                VAR8 = VAR92[VAR8];
        }
    }
    else
    {
        if (!VAR13 && VAR8 > 15)
        {
            FUN9(VAR2->VAR20, VAR38, "");
            return VAR49;
        }
    }
    if (VAR9 && (VAR8 & 15) && !FUN18(VAR7))
    {
        VAR7 |= VAR55 * FUN5(&VAR4->VAR26);
    }
    VAR4->VAR8 = VAR2->VAR93[VAR5] = VAR8;
    VAR2->VAR50.VAR7[VAR5] = VAR7;
    if (VAR8 || FUN47(VAR7))
    {
        int VAR94, VAR95, VAR96;
        int VAR97;
        int VAR98;
        VAR99 *VAR26 = &VAR4->VAR26;
        const VAR100 *VAR101, *VAR102;
        const int VAR103 = 51 + 6 * (VAR2->VAR10.VAR14->VAR47 - 8);
        if (FUN48(VAR7))
        {
            VAR102 = VAR4->VAR104 ? VAR2->VAR105 : VAR2->VAR106;
            VAR101 = VAR4->VAR104 ? VAR2->VAR107 : VAR2->VAR108;
        }
        else
        {
            VAR102 = VAR4->VAR104 ? VAR2->VAR109 : VAR2->VAR110;
            VAR101 = VAR4->VAR104 ? VAR2->VAR111 : VAR2->VAR112;
        }
        VAR97 = FUN35(&VAR4->VAR26);
        VAR4->VAR104 += VAR97;
        if (((unsigned)VAR4->VAR104) > VAR103)
        {
            if (VAR4->VAR104 < 0)
                VAR4->VAR104 += VAR103 + 1;
            else
                VAR4->VAR104 -= VAR103 + 1;
            if (((unsigned)VAR4->VAR104) > VAR103)
            {
                FUN9(VAR2->VAR20, VAR38, "", VAR97, VAR4->VAR17, VAR4->VAR18);
                return -1;
            }
        }
        VAR4->VAR113[0] = FUN49(VAR2->VAR10.VAR11, 0, VAR4->VAR104);
        VAR4->VAR113[1] = FUN49(VAR2->VAR10.VAR11, 1, VAR4->VAR104);
        if ((VAR98 = FUN50(VAR2, VAR4, VAR26, VAR101, VAR102, VAR16, VAR7, VAR8, 0)) < 0)
        {
            return -1;
        }
        VAR2->VAR93[VAR5] |= VAR98 << 12;
        if (FUN51(VAR2))
        {
            if (FUN50(VAR2, VAR4, VAR26, VAR101, VAR102, VAR16, VAR7, VAR8, 1) < 0)
            {
                return -1;
            }
            if (FUN50(VAR2, VAR4, VAR26, VAR101, VAR102, VAR16, VAR7, VAR8, 2) < 0)
            {
                return -1;
            }
        }
        else
        {
            const int VAR114 = VAR2->VAR10.VAR14->VAR15;
            if (VAR8 & 0x30)
            {
                for (VAR96 = 0; VAR96 < 2; VAR96++)
                    if (FUN52(VAR2, VAR4, VAR26, VAR4->VAR115 + ((256 + 16 * 16 * VAR96) << VAR16), VAR116 + VAR96, FUN53(VAR2) ? VAR117 : VAR118, NULL, 4 * VAR114) < 0)
                    {
                        return -1;
                    }
            }
            if (VAR8 & 0x20)
            {
                for (VAR96 = 0; VAR96 < 2; VAR96++)
                {
                    const VAR83 *VAR119 = VAR2->VAR10.VAR11->VAR120[VAR96 + 1 + (FUN18(VAR7) ? 0 : 3)][VAR4->VAR113[VAR96]];
                    VAR121 *VAR115 = VAR4->VAR115 + (16 * (16 + 16 * VAR96) << VAR16);
                    for (VAR95 = 0; VAR95 < VAR114; VAR95++)
                    {
                        for (VAR94 = 0; VAR94 < 4; VAR94++)
                        {
                            const int VAR81 = 16 + 16 * VAR96 + 8 * VAR95 + VAR94;
                            if (FUN52(VAR2, VAR4, VAR26, VAR115, VAR81, VAR101 + 1, VAR119, 15) < 0)
                                return -1;
                            VAR115 += 16 << VAR16;
                        }
                    }
                }
            }
            else
            {
                FUN22(&VAR4->VAR122[VAR59[16]], 4, 4, 8, 0, 1);
                FUN22(&VAR4->VAR122[VAR59[32]], 4, 4, 8, 0, 1);
            }
        }
    }
    else
    {
        FUN22(&VAR4->VAR122[VAR59[0]], 4, 4, 8, 0, 1);
        FUN22(&VAR4->VAR122[VAR59[16]], 4, 4, 8, 0, 1);
        FUN22(&VAR4->VAR122[VAR59[32]], 4, 4, 8, 0, 1);
    }
    VAR2->VAR50.VAR51[VAR5] = VAR4->VAR104;
    FUN54(VAR2, VAR4);
    return 0;
}