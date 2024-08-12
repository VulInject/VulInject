int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5;
    int VAR6;
    unsigned int VAR7, VAR8;
    int VAR9 = VAR2->VAR10.VAR11;
    int VAR12 = VAR2->VAR13.VAR14 == 1 || VAR2->VAR13.VAR14 == 2;
    const int VAR15 = VAR2->VAR15;
    VAR5 = VAR2->VAR5 = VAR4->VAR16 + VAR4->VAR17 * VAR4->VAR18;
    FUN2(VAR4->VAR19, "", VAR2->VAR20, VAR4->VAR16, VAR4->VAR17);
    VAR8 = 0;
    if (VAR2->VAR21 != VAR22)
    {
        if (VAR4->VAR23 == -1)
            VAR4->VAR23 = FUN3(&VAR4->VAR24);
        if (VAR4->VAR23--)
        {
            if (VAR25 && (VAR4->VAR17 & 1) == 0)
            {
                if (VAR4->VAR23 == 0)
                    VAR2->VAR26 = VAR2->VAR27 = FUN4(&VAR4->VAR24);
            }
            FUN5(VAR2);
            return 0;
        }
    }
    if (VAR25)
    {
        if ((VAR4->VAR17 & 1) == 0)
            VAR2->VAR26 = VAR2->VAR27 = FUN4(&VAR4->VAR24);
    }
    VAR2->VAR28 = 0;
    VAR7 = FUN3(&VAR4->VAR24);
    if (VAR2->VAR21 == VAR29)
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
    else if (VAR2->VAR21 == VAR33)
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
        assert(VAR2->VAR21 == VAR22);
        if (VAR2->VAR35 == VAR36 && VAR7)
            VAR7--;
    VAR32:
        if (VAR7 > 25)
        {
            FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR7, FUN7(VAR2->VAR35), VAR4->VAR16, VAR4->VAR17);
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
    if (FUN8(VAR7))
    {
        unsigned int VAR45;
        static const uint16_t VAR46[4] = {256, 384, 512, 768};
        const int VAR47 = VAR46[VAR2->VAR13.VAR14] * VAR2->VAR13.VAR48 >> 3;
        FUN9(&VAR4->VAR24);
        for (VAR45 = 0; VAR45 < VAR47; VAR45++)
        {
            ((VAR49 *)VAR2->VAR50)[VAR45] = FUN10(&VAR4->VAR24, 8);
        }
        VAR4->VAR51.VAR52.VAR53[VAR5] = 0;
        memset(VAR2->VAR54[VAR5], 16, 48);
        VAR4->VAR51.VAR52.VAR7[VAR5] = VAR7;
        return 0;
    }
    if (VAR55)
    {
        VAR2->VAR56[0] <<= 1;
        VAR2->VAR56[1] <<= 1;
    }
    FUN11(VAR2, VAR7);
    FUN12(VAR2, VAR7);
    if (FUN13(VAR7))
    {
        int VAR40;
        if (FUN14(VAR7))
        {
            int VAR57;
            int VAR58 = 1;
            if (VAR9 && FUN4(&VAR4->VAR24))
            {
                VAR7 |= VAR59;
                VAR58 = 4;
            }
            for (VAR57 = 0; VAR57 < 16; VAR57 += VAR58)
            {
                int VAR60 = FUN15(VAR2, VAR57);
                if (!FUN4(&VAR4->VAR24))
                {
                    const int VAR61 = FUN10(&VAR4->VAR24, 3);
                    VAR60 = VAR61 + (VAR61 >= VAR60);
                }
                if (VAR58 == 4)
                    FUN16(&VAR2->VAR62[VAR63[VAR57]], 2, 2, 8, VAR60, 1);
                else
                    VAR2->VAR62[VAR63[VAR57]] = VAR60;
            }
            FUN17(VAR2);
            if (FUN18(VAR2) < 0)
                return -1;
        }
        else
        {
            VAR2->VAR39 = FUN19(VAR2, VAR2->VAR39);
            if (VAR2->VAR39 < 0)
                return -1;
        }
        if (VAR12)
        {
            VAR40 = FUN19(VAR2, FUN20(&VAR4->VAR24));
            if (VAR40 < 0)
                return -1;
            VAR2->VAR64 = VAR40;
        }
        else
        {
            VAR2->VAR64 = VAR65;
        }
    }
    else if (VAR6 == 4)
    {
        int VAR57, VAR66, VAR67[4], VAR68, VAR69[2][4];
        if (VAR2->VAR21 == VAR29)
        {
            for (VAR57 = 0; VAR57 < 4; VAR57++)
            {
                VAR2->VAR70[VAR57] = FUN20(&VAR4->VAR24);
                if (VAR2->VAR70[VAR57] >= 13)
                {
                    FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR2->VAR70[VAR57], VAR4->VAR16, VAR4->VAR17);
                    return -1;
                }
                VAR67[VAR57] = VAR71[VAR2->VAR70[VAR57]].VAR6;
                VAR2->VAR70[VAR57] = VAR71[VAR2->VAR70[VAR57]].VAR31;
            }
            if (FUN21(VAR2->VAR70[0] | VAR2->VAR70[1] | VAR2->VAR70[2] | VAR2->VAR70[3]))
            {
                FUN22(VAR2, &VAR7);
                VAR2->VAR72[0][VAR63[4]] = VAR2->VAR72[1][VAR63[4]] = VAR2->VAR72[0][VAR63[12]] = VAR2->VAR72[1][VAR63[12]] = VAR73;
            }
        }
        else
        {
            assert(VAR2->VAR21 == VAR33);
            for (VAR57 = 0; VAR57 < 4; VAR57++)
            {
                VAR2->VAR70[VAR57] = FUN20(&VAR4->VAR24);
                if (VAR2->VAR70[VAR57] >= 4)
                {
                    FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR2->VAR70[VAR57], VAR4->VAR16, VAR4->VAR17);
                    return -1;
                }
                VAR67[VAR57] = VAR74[VAR2->VAR70[VAR57]].VAR6;
                VAR2->VAR70[VAR57] = VAR74[VAR2->VAR70[VAR57]].VAR31;
            }
        }
        for (VAR68 = 0; VAR68 < VAR2->VAR75; VAR68++)
        {
            int VAR56 = FUN23(VAR7) ? 1 : VAR2->VAR56[VAR68];
            for (VAR57 = 0; VAR57 < 4; VAR57++)
            {
                if (FUN21(VAR2->VAR70[VAR57]))
                    continue;
                if (FUN24(VAR2->VAR70[VAR57], 0, VAR68))
                {
                    unsigned int VAR76;
                    if (VAR56 == 1)
                    {
                        VAR76 = 0;
                    }
                    else if (VAR56 == 2)
                    {
                        VAR76 = FUN4(&VAR4->VAR24) ^ 1;
                    }
                    else
                    {
                        VAR76 = FUN20(&VAR4->VAR24);
                        if (VAR76 >= VAR56)
                        {
                            FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR76);
                            return -1;
                        }
                    }
                    VAR69[VAR68][VAR57] = VAR76;
                }
                else
                {
                    VAR69[VAR68][VAR57] = -1;
                }
            }
        }
        if (VAR9)
            VAR9 = FUN25(VAR2);
        for (VAR68 = 0; VAR68 < VAR2->VAR75; VAR68++)
        {
            for (VAR57 = 0; VAR57 < 4; VAR57++)
            {
                if (FUN21(VAR2->VAR70[VAR57]))
                {
                    VAR2->VAR72[VAR68][VAR63[4 * VAR57]] = VAR2->VAR72[VAR68][VAR63[4 * VAR57] + 1];
                    continue;
                }
                VAR2->VAR72[VAR68][VAR63[4 * VAR57]] = VAR2->VAR72[VAR68][VAR63[4 * VAR57] + 1] = VAR2->VAR72[VAR68][VAR63[4 * VAR57] + 8] = VAR2->VAR72[VAR68][VAR63[4 * VAR57] + 9] = VAR69[VAR68][VAR57];
                if (FUN24(VAR2->VAR70[VAR57], 0, VAR68))
                {
                    const int VAR70 = VAR2->VAR70[VAR57];
                    const int VAR77 = (VAR70 & (VAR78 | VAR79)) ? 2 : 1;
                    for (VAR66 = 0; VAR66 < VAR67[VAR57]; VAR66++)
                    {
                        int VAR80, VAR81;
                        const int VAR82 = 4 * VAR57 + VAR77 * VAR66;
                        FUN26(*VAR83)[2] = &VAR2->VAR83[VAR68][VAR63[VAR82]];
                        FUN27(VAR2, VAR82, VAR77, VAR68, VAR2->VAR72[VAR68][VAR63[VAR82]], &VAR80, &VAR81);
                        VAR80 += FUN28(&VAR4->VAR24);
                        VAR81 += FUN28(&VAR4->VAR24);
                        FUN2(VAR4->VAR19, "", VAR80, VAR81);
                        if (FUN29(VAR70))
                        {
                            VAR83[1][0] = VAR83[8][0] = VAR83[9][0] = VAR80;
                            VAR83[1][1] = VAR83[8][1] = VAR83[9][1] = VAR81;
                        }
                        else if (FUN30(VAR70))
                        {
                            VAR83[1][0] = VAR80;
                            VAR83[1][1] = VAR81;
                        }
                        else if (FUN31(VAR70))
                        {
                            VAR83[8][0] = VAR80;
                            VAR83[8][1] = VAR81;
                        }
                        VAR83[0][0] = VAR80;
                        VAR83[0][1] = VAR81;
                    }
                }
                else
                {
                    VAR84 *VAR85 = (VAR84 *)&VAR2->VAR83[VAR68][VAR63[4 * VAR57]][0];
                    VAR85[0] = VAR85[1] = VAR85[8] = VAR85[9] = 0;
                }
            }
        }
    }
    else if (FUN21(VAR7))
    {
        FUN22(VAR2, &VAR7);
        VAR9 &= VAR2->VAR13.VAR86;
    }
    else
    {
        int VAR68, VAR80, VAR81, VAR57;
        if (FUN32(VAR7))
        {
            for (VAR68 = 0; VAR68 < VAR2->VAR75; VAR68++)
            {
                unsigned int VAR87;
                if (FUN24(VAR7, 0, VAR68))
                {
                    if (VAR2->VAR56[VAR68] == 1)
                    {
                        VAR87 = 0;
                    }
                    else if (VAR2->VAR56[VAR68] == 2)
                    {
                        VAR87 = FUN4(&VAR4->VAR24) ^ 1;
                    }
                    else
                    {
                        VAR87 = FUN20(&VAR4->VAR24);
                        if (VAR87 >= VAR2->VAR56[VAR68])
                        {
                            FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR87);
                            return -1;
                        }
                    }
                    FUN16(&VAR2->VAR72[VAR68][VAR63[0]], 4, 4, 8, VAR87, 1);
                }
            }
            for (VAR68 = 0; VAR68 < VAR2->VAR75; VAR68++)
            {
                if (FUN24(VAR7, 0, VAR68))
                {
                    FUN27(VAR2, 0, 4, VAR68, VAR2->VAR72[VAR68][VAR63[0]], &VAR80, &VAR81);
                    VAR80 += FUN28(&VAR4->VAR24);
                    VAR81 += FUN28(&VAR4->VAR24);
                    FUN2(VAR4->VAR19, "", VAR80, VAR81);
                    FUN16(VAR2->VAR83[VAR68][VAR63[0]], 4, 4, 8, FUN33(VAR80, VAR81), 4);
                }
            }
        }
        else if (FUN34(VAR7))
        {
            for (VAR68 = 0; VAR68 < VAR2->VAR75; VAR68++)
            {
                for (VAR57 = 0; VAR57 < 2; VAR57++)
                {
                    unsigned int VAR87;
                    if (FUN24(VAR7, VAR57, VAR68))
                    {
                        if (VAR2->VAR56[VAR68] == 1)
                        {
                            VAR87 = 0;
                        }
                        else if (VAR2->VAR56[VAR68] == 2)
                        {
                            VAR87 = FUN4(&VAR4->VAR24) ^ 1;
                        }
                        else
                        {
                            VAR87 = FUN20(&VAR4->VAR24);
                            if (VAR87 >= VAR2->VAR56[VAR68])
                            {
                                FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR87);
                                return -1;
                            }
                        }
                    }
                    else
                        VAR87 = VAR88 & 0xFF;
                    FUN16(&VAR2->VAR72[VAR68][VAR63[0] + 16 * VAR57], 4, 2, 8, VAR87, 1);
                }
            }
            for (VAR68 = 0; VAR68 < VAR2->VAR75; VAR68++)
            {
                for (VAR57 = 0; VAR57 < 2; VAR57++)
                {
                    unsigned int VAR87;
                    if (FUN24(VAR7, VAR57, VAR68))
                    {
                        FUN35(VAR2, 8 * VAR57, VAR68, VAR2->VAR72[VAR68][VAR63[0] + 16 * VAR57], &VAR80, &VAR81);
                        VAR80 += FUN28(&VAR4->VAR24);
                        VAR81 += FUN28(&VAR4->VAR24);
                        FUN2(VAR4->VAR19, "", VAR80, VAR81);
                        VAR87 = FUN33(VAR80, VAR81);
                    }
                    else
                        VAR87 = 0;
                    FUN16(VAR2->VAR83[VAR68][VAR63[0] + 16 * VAR57], 4, 2, 8, VAR87, 4);
                }
            }
        }
        else
        {
            assert(FUN36(VAR7));
            for (VAR68 = 0; VAR68 < VAR2->VAR75; VAR68++)
            {
                for (VAR57 = 0; VAR57 < 2; VAR57++)
                {
                    unsigned int VAR87;
                    if (FUN24(VAR7, VAR57, VAR68))
                    {
                        if (VAR2->VAR56[VAR68] == 1)
                        {
                            VAR87 = 0;
                        }
                        else if (VAR2->VAR56[VAR68] == 2)
                        {
                            VAR87 = FUN4(&VAR4->VAR24) ^ 1;
                        }
                        else
                        {
                            VAR87 = FUN20(&VAR4->VAR24);
                            if (VAR87 >= VAR2->VAR56[VAR68])
                            {
                                FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR87);
                                return -1;
                            }
                        }
                    }
                    else
                        VAR87 = VAR88 & 0xFF;
                    FUN16(&VAR2->VAR72[VAR68][VAR63[0] + 2 * VAR57], 2, 4, 8, VAR87, 1);
                }
            }
            for (VAR68 = 0; VAR68 < VAR2->VAR75; VAR68++)
            {
                for (VAR57 = 0; VAR57 < 2; VAR57++)
                {
                    unsigned int VAR87;
                    if (FUN24(VAR7, VAR57, VAR68))
                    {
                        FUN37(VAR2, VAR57 * 4, VAR68, VAR2->VAR72[VAR68][VAR63[0] + 2 * VAR57], &VAR80, &VAR81);
                        VAR80 += FUN28(&VAR4->VAR24);
                        VAR81 += FUN28(&VAR4->VAR24);
                        FUN2(VAR4->VAR19, "", VAR80, VAR81);
                        VAR87 = FUN33(VAR80, VAR81);
                    }
                    else
                        VAR87 = 0;
                    FUN16(VAR2->VAR83[VAR68][VAR63[0] + 2 * VAR57], 2, 4, 8, VAR87, 4);
                }
            }
        }
    }
    if (FUN38(VAR7))
        FUN39(VAR2, VAR7);
    if (!FUN40(VAR7))
    {
        VAR8 = FUN3(&VAR4->VAR24);
        if (VAR12)
        {
            if (VAR8 > 47)
            {
                FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR8, VAR4->VAR16, VAR4->VAR17);
                return -1;
            }
            if (FUN14(VAR7))
                VAR8 = VAR89[VAR8];
            else
                VAR8 = VAR90[VAR8];
        }
        else
        {
            if (VAR8 > 15)
            {
                FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR8, VAR4->VAR16, VAR4->VAR17);
                return -1;
            }
            if (FUN14(VAR7))
                VAR8 = VAR91[VAR8];
            else
                VAR8 = VAR92[VAR8];
        }
    }
    if (VAR9 && (VAR8 & 15) && !FUN13(VAR7))
    {
        VAR7 |= VAR59 * FUN4(&VAR4->VAR24);
    }
    VAR2->VAR8 = VAR2->VAR93[VAR5] = VAR8;
    VAR4->VAR51.VAR52.VAR7[VAR5] = VAR7;
    if (VAR8 || FUN40(VAR7))
    {
        int VAR94, VAR95, VAR96;
        int VAR97;
        int VAR98;
        VAR99 *VAR24 = FUN13(VAR7) ? VAR2->VAR100 : VAR2->VAR101;
        const VAR49 *VAR102, *VAR103;
        const int VAR104 = 51 + 6 * (VAR2->VAR13.VAR48 - 8);
        if (FUN41(VAR7))
        {
            VAR103 = VAR4->VAR105 ? VAR2->VAR106 : VAR2->VAR107;
            VAR102 = VAR4->VAR105 ? VAR2->VAR108 : VAR2->VAR109;
        }
        else
        {
            VAR103 = VAR4->VAR105 ? VAR2->VAR110 : VAR2->VAR111;
            VAR102 = VAR4->VAR105 ? VAR2->VAR112 : VAR2->VAR113;
        }
        VAR97 = FUN28(&VAR4->VAR24);
        VAR4->VAR105 += VAR97;
        if (((unsigned)VAR4->VAR105) > VAR104)
        {
            if (VAR4->VAR105 < 0)
                VAR4->VAR105 += VAR104 + 1;
            else
                VAR4->VAR105 -= VAR104 + 1;
            if (((unsigned)VAR4->VAR105) > VAR104)
            {
                FUN6(VAR2->VAR4.VAR19, VAR37, "", VAR97, VAR4->VAR16, VAR4->VAR17);
                return -1;
            }
        }
        VAR2->VAR114[0] = FUN42(VAR2, 0, VAR4->VAR105);
        VAR2->VAR114[1] = FUN42(VAR2, 1, VAR4->VAR105);
        if ((VAR98 = FUN43(VAR2, VAR24, VAR102, VAR103, VAR15, VAR7, VAR8, 0)) < 0)
        {
            return -1;
        }
        VAR2->VAR93[VAR5] |= VAR98 << 12;
        if (VAR115)
        {
            if (FUN43(VAR2, VAR24, VAR102, VAR103, VAR15, VAR7, VAR8, 1) < 0)
            {
                return -1;
            }
            if (FUN43(VAR2, VAR24, VAR102, VAR103, VAR15, VAR7, VAR8, 2) < 0)
            {
                return -1;
            }
        }
        else if (VAR116)
        {
            if (VAR8 & 0x30)
            {
                for (VAR96 = 0; VAR96 < 2; VAR96++)
                    if (FUN44(VAR2, VAR24, VAR2->VAR50 + ((256 + 16 * 16 * VAR96) << VAR15), VAR117 + VAR96, VAR118, NULL, 8) < 0)
                    {
                        return -1;
                    }
            }
            if (VAR8 & 0x20)
            {
                for (VAR96 = 0; VAR96 < 2; VAR96++)
                {
                    const VAR84 *VAR119 = VAR2->VAR120[VAR96 + 1 + (FUN13(VAR7) ? 0 : 3)][VAR2->VAR114[VAR96]];
                    VAR121 *VAR50 = VAR2->VAR50 + (16 * (16 + 16 * VAR96) << VAR15);
                    for (VAR95 = 0; VAR95 < 2; VAR95++)
                    {
                        for (VAR94 = 0; VAR94 < 4; VAR94++)
                        {
                            const int VAR82 = 16 + 16 * VAR96 + 8 * VAR95 + VAR94;
                            if (FUN44(VAR2, VAR24, VAR50, VAR82, VAR102 + 1, VAR119, 15) < 0)
                                return -1;
                            VAR50 += 16 << VAR15;
                        }
                    }
                }
            }
            else
            {
                FUN16(&VAR2->VAR122[VAR63[16]], 4, 4, 8, 0, 1);
                FUN16(&VAR2->VAR122[VAR63[32]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            if (VAR8 & 0x30)
            {
                for (VAR96 = 0; VAR96 < 2; VAR96++)
                    if (FUN44(VAR2, VAR24, VAR2->VAR50 + ((256 + 16 * 16 * VAR96) << VAR15), VAR117 + VAR96, VAR123, NULL, 4) < 0)
                    {
                        return -1;
                    }
            }
            if (VAR8 & 0x20)
            {
                for (VAR96 = 0; VAR96 < 2; VAR96++)
                {
                    const VAR84 *VAR119 = VAR2->VAR120[VAR96 + 1 + (FUN13(VAR7) ? 0 : 3)][VAR2->VAR114[VAR96]];
                    for (VAR94 = 0; VAR94 < 4; VAR94++)
                    {
                        const int VAR82 = 16 + 16 * VAR96 + VAR94;
                        if (FUN44(VAR2, VAR24, VAR2->VAR50 + (16 * VAR82 << VAR15), VAR82, VAR102 + 1, VAR119, 15) < 0)
                        {
                            return -1;
                        }
                    }
                }
            }
            else
            {
                FUN16(&VAR2->VAR122[VAR63[16]], 4, 4, 8, 0, 1);
                FUN16(&VAR2->VAR122[VAR63[32]], 4, 4, 8, 0, 1);
            }
        }
    }
    else
    {
        FUN16(&VAR2->VAR122[VAR63[0]], 4, 4, 8, 0, 1);
        FUN16(&VAR2->VAR122[VAR63[16]], 4, 4, 8, 0, 1);
        FUN16(&VAR2->VAR122[VAR63[32]], 4, 4, 8, 0, 1);
    }
    VAR4->VAR51.VAR52.VAR53[VAR5] = VAR4->VAR105;
    FUN45(VAR2);
    if (VAR55)
    {
        VAR2->VAR56[0] >>= 1;
        VAR2->VAR56[1] >>= 1;
    }
    return 0;
}