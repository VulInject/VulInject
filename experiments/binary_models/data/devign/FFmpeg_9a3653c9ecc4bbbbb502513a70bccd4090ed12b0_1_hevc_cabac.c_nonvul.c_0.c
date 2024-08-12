void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, enum ScanType VAR6, int VAR7)
{
    do
    {
        VAR8 = (VAR9 << 2) + VAR10[VAR11];
        VAR12 = (VAR13 << 2) + VAR14[VAR11];
    } while (0) VAR15 *VAR16 = VAR2->VAR17;
    int VAR18 = 0;
    int VAR19, VAR20;
    int VAR21;
    int VAR22;
    int VAR23 = 0;
    int VAR24 = 1;
    int VAR25;
    int VAR26, VAR27;
    const VAR28 *VAR29, *VAR30, *VAR10, *VAR14;
    ptrdiff_t VAR31 = VAR2->VAR32->VAR33[VAR7];
    int VAR34 = VAR2->VAR35->VAR34[VAR7];
    int VAR36 = VAR2->VAR35->VAR36[VAR7];
    VAR28 *VAR37 = &VAR2->VAR32->VAR38[VAR7][(VAR4 >> VAR36) * VAR31 + ((VAR3 >> VAR34) << VAR2->VAR35->VAR39)];
    VAR40 *VAR41 = (VAR40 *)(VAR7 ? VAR16->VAR42 : VAR16->VAR43);
    uint8_t VAR44[8][8] = {{0}};
    int VAR45 = 0;
    int VAR46;
    int VAR47 = 1 << VAR5;
    int VAR48;
    int VAR49, VAR50, VAR51, VAR52, VAR53;
    const uint8_t VAR54[] = {40, 45, 51, 57, 64, 72};
    const VAR28 *VAR55 = NULL;
    uint8_t VAR56;
    int VAR57 = (VAR7 == 0) ? VAR16->VAR58.VAR59 : VAR16->VAR58.VAR60;
    memset(VAR41, 0, VAR47 * VAR47 * sizeof(VAR40));
    if (!VAR16->VAR61.VAR62)
    {
        static const int VAR63[] = {29, 30, 31, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37};
        static const uint8_t VAR64[51 + 4 * 6 + 1] = {0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 5, 0, 1};
        static const uint8_t VAR65[51 + 4 * 6 + 1] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 12, 12};
        int VAR66 = VAR16->VAR66;
        if (VAR2->VAR67->VAR68 && VAR5 <= VAR2->VAR67->VAR69)
        {
            VAR18 = FUN2(VAR2, VAR7);
        }
        if (VAR7 == 0)
        {
            VAR49 = VAR66 + VAR2->VAR35->VAR70;
        }
        else
        {
            int VAR71, VAR72;
            if (VAR7 == 1)
                VAR72 = VAR2->VAR67->VAR73 + VAR2->VAR74.VAR75 + VAR16->VAR58.VAR76;
            else
                VAR72 = VAR2->VAR67->VAR77 + VAR2->VAR74.VAR78 + VAR16->VAR58.VAR79;
            VAR71 = FUN3(VAR66 + VAR72, -VAR2->VAR35->VAR70, 57);
            if (VAR2->VAR35->VAR80 == 1)
            {
                if (VAR71 < 30)
                    VAR49 = VAR71;
                else if (VAR71 > 43)
                    VAR49 = VAR71 - 6;
                else
                    VAR49 = VAR63[VAR71 - 30];
            }
            else
            {
                if (VAR71 > 51)
                    VAR49 = 51;
                else
                    VAR49 = VAR71;
            }
            VAR49 += VAR2->VAR35->VAR70;
        }
        VAR50 = VAR2->VAR35->VAR81 + VAR5 - 5;
        VAR51 = 1 << (VAR50 - 1);
        VAR52 = VAR54[VAR64[VAR49]] << (VAR65[VAR49]);
        VAR53 = 16;
        VAR56 = 16;
        if (VAR2->VAR35->VAR82 && !(VAR18 && VAR5 > 2))
        {
            const VAR83 *VAR84 = VAR2->VAR67->VAR85 ? &VAR2->VAR67->VAR86 : &VAR2->VAR35->VAR86;
            int VAR87 = VAR16->VAR61.VAR88 != VAR89;
            VAR87 = 3 * VAR87 + VAR7;
            VAR55 = VAR84->VAR84[VAR5 - 2][VAR87];
            if (VAR5 >= 4)
                VAR56 = VAR84->VAR90[VAR5 - 4][VAR87];
        }
    }
    else
    {
        VAR50 = 0;
        VAR51 = 0;
        VAR52 = 0;
        VAR56 = 0;
    }
    if (VAR16->VAR61.VAR88 == VAR91 && VAR2->VAR35->VAR92 && (VAR18 || VAR16->VAR61.VAR62))
    {
        VAR45 = FUN4(VAR2, VAR7);
        if (VAR45)
        {
            VAR46 = FUN5(VAR2, VAR7);
        }
    }
    FUN6(VAR2, VAR7, VAR5, &VAR19, &VAR20);
    if (VAR19 > 3)
    {
        int VAR93 = FUN7(VAR2, VAR19);
        VAR19 = (1 << ((VAR19 >> 1) - 1)) * (2 + (VAR19 & 1)) + VAR93;
    }
    if (VAR20 > 3)
    {
        int VAR93 = FUN7(VAR2, VAR20);
        VAR20 = (1 << ((VAR20 >> 1) - 1)) * (2 + (VAR20 & 1)) + VAR93;
    }
    if (VAR6 == VAR94)
        FUN8(int, VAR19, VAR20);
    VAR26 = VAR19 >> 2;
    VAR27 = VAR20 >> 2;
    switch (VAR6)
    {
    case VAR95:
    {
        int VAR96 = VAR19 & 3;
        int VAR97 = VAR20 & 3;
        VAR10 = VAR98;
        VAR14 = VAR99;
        VAR23 = VAR100[VAR97][VAR96];
        if (VAR47 == 4)
        {
            VAR29 = VAR101;
            VAR30 = VAR101;
        }
        else if (VAR47 == 8)
        {
            VAR23 += VAR102[VAR27][VAR26] << 4;
            VAR29 = VAR103;
            VAR30 = VAR104;
        }
        else if (VAR47 == 16)
        {
            VAR23 += VAR100[VAR27][VAR26] << 4;
            VAR29 = VAR98;
            VAR30 = VAR99;
        }
        else
        {
            VAR23 += VAR105[VAR27][VAR26] << 4;
            VAR29 = VAR106;
            VAR30 = VAR107;
        }
        break;
    }
    case VAR108:
        VAR29 = VAR109;
        VAR30 = VAR110;
        VAR10 = VAR111;
        VAR14 = VAR112;
        VAR23 = VAR113[VAR20][VAR19];
        break;
    default:
        VAR29 = VAR110;
        VAR30 = VAR109;
        VAR10 = VAR112;
        VAR14 = VAR111;
        VAR23 = VAR113[VAR19][VAR20];
        break;
    }
    VAR23++;
    VAR25 = (VAR23 - 1) >> 4;
    for (VAR48 = VAR25; VAR48 >= 0; VAR48--)
    {
        int VAR11, VAR114;
        int VAR9, VAR13, VAR8, VAR12, VAR115;
        int VAR116 = 0;
        int64_t VAR117;
        int VAR118 = 0;
        int VAR72 = VAR48 << 4;
        int VAR119 = 0;
        uint8_t VAR120[16];
        uint8_t VAR121 = 0;
        VAR9 = VAR29[VAR48];
        VAR13 = VAR30[VAR48];
        if ((VAR48 < VAR25) && (VAR48 > 0))
        {
            int VAR122 = 0;
            if (VAR9 < (1 << (VAR5 - 2)) - 1)
                VAR122 += VAR44[VAR9 + 1][VAR13];
            if (VAR13 < (1 << (VAR5 - 2)) - 1)
                VAR122 += VAR44[VAR9][VAR13 + 1];
            VAR44[VAR9][VAR13] = FUN9(VAR2, VAR7, VAR122);
            VAR116 = 1;
        }
        else
        {
            VAR44[VAR9][VAR13] = ((VAR9 == VAR26 && VAR13 == VAR27) || (VAR9 == 0 && VAR13 == 0));
        }
        VAR21 = VAR23 - VAR72 - 1;
        if (VAR48 == VAR25)
        {
            VAR22 = VAR21 - 1;
            VAR120[0] = VAR21;
            VAR121 = 1;
        }
        else
        {
            VAR22 = 15;
        }
        if (VAR9 < ((1 << VAR5) - 1) >> 2)
            VAR118 = !!VAR44[VAR9 + 1][VAR13];
        if (VAR13 < ((1 << VAR5) - 1) >> 2)
            VAR118 += (!!VAR44[VAR9][VAR13 + 1] << 1);
        if (VAR44[VAR9][VAR13] && VAR22 >= 0)
        {
            static const uint8_t VAR123[] = {0, 1, 4, 5, 2, 3, 4, 5, 6, 6, 8, 8, 7, 7, 8, 8, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 2, 1, 0, 0, 2, 1, 0, 0, 2, 1, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
            const VAR28 *VAR124;
            int VAR125 = 0;
            if (VAR2->VAR35->VAR126 && (VAR18 || VAR16->VAR61.VAR62))
            {
                VAR124 = (VAR28 *)&VAR123[4 * 16];
                if (VAR7 == 0)
                {
                    VAR125 = 40;
                }
                else
                {
                    VAR125 = 14 + 27;
                }
            }
            else
            {
                if (VAR7 != 0)
                    VAR125 = 27;
                if (VAR5 == 2)
                {
                    VAR124 = (VAR28 *)&VAR123[0];
                }
                else
                {
                    VAR124 = (VAR28 *)&VAR123[(VAR118 + 1) << 4];
                    if (VAR7 == 0)
                    {
                        if ((VAR9 > 0 || VAR13 > 0))
                            VAR125 += 3;
                        if (VAR5 == 3)
                        {
                            VAR125 += (VAR6 == VAR95) ? 9 : 15;
                        }
                        else
                        {
                            VAR125 += 21;
                        }
                    }
                    else
                    {
                        if (VAR5 == 3)
                            VAR125 += 9;
                        else
                            VAR125 += 12;
                    }
                }
            }
            for (VAR11 = VAR22; VAR11 > 0; VAR11--)
            {
                VAR8 = VAR10[VAR11];
                VAR12 = VAR14[VAR11];
                if (FUN10(VAR2, VAR8, VAR12, VAR125, VAR124))
                {
                    VAR120[VAR121] = VAR11;
                    VAR121++;
                    VAR116 = 0;
                }
            }
            if (VAR116 == 0)
            {
                if (VAR2->VAR35->VAR126 && (VAR18 || VAR16->VAR61.VAR62))
                {
                    if (VAR7 == 0)
                    {
                        VAR125 = 42;
                    }
                    else
                    {
                        VAR125 = 16 + 27;
                    }
                }
                else
                {
                    if (VAR48 == 0)
                    {
                        if (VAR7 == 0)
                            VAR125 = 0;
                        else
                            VAR125 = 27;
                    }
                    else
                    {
                        VAR125 = 2 + VAR125;
                    }
                }
                if (FUN11(VAR2, VAR7, VAR125) == 1)
                {
                    VAR120[VAR121] = 0;
                    VAR121++;
                }
            }
            else
            {
                VAR120[VAR121] = 0;
                VAR121++;
            }
        }
        VAR22 = VAR121;
        if (VAR22)
        {
            int VAR127;
            int VAR128;
            int VAR129 = 0;
            int VAR130 = -1;
            uint8_t VAR131[8];
            uint16_t VAR132;
            int VAR133 = 0;
            int VAR134;
            int VAR135;
            int VAR136 = (VAR48 > 0 && VAR7 == 0) ? 2 : 0;
            if (VAR2->VAR35->VAR137)
            {
                if (!VAR18 && !VAR16->VAR61.VAR62)
                    VAR135 = 2 * (VAR7 == 0 ? 1 : 0);
                else
                    VAR135 = 2 * (VAR7 == 0 ? 1 : 0) + 1;
                VAR129 = VAR16->VAR138[VAR135] / 4;
            }
            if (!(VAR48 == VAR25) && VAR24 == 0)
                VAR136++;
            VAR24 = 1;
            VAR128 = VAR120[0];
            for (VAR114 = 0; VAR114 < (VAR22 > 8 ? 8 : VAR22); VAR114++)
            {
                int VAR139 = (VAR136 << 2) + VAR24;
                VAR131[VAR114] = FUN12(VAR2, VAR7, VAR139);
                if (VAR131[VAR114])
                {
                    VAR24 = 0;
                    if (VAR130 == -1)
                        VAR130 = VAR114;
                }
                else if (VAR24 > 0 && VAR24 < 3)
                {
                    VAR24++;
                }
            }
            VAR127 = VAR120[VAR22 - 1];
            if (VAR16->VAR61.VAR62 || (VAR16->VAR61.VAR88 == VAR89 && VAR2->VAR35->VAR140 && VAR18 && (VAR57 == 10 || VAR57 == 26)) || VAR45)
                VAR134 = 0;
            else
                VAR134 = (VAR128 - VAR127 >= 4);
            if (VAR130 != -1)
            {
                VAR131[VAR130] += FUN13(VAR2, VAR7, VAR136);
            }
            if (!VAR2->VAR67->VAR141 || !VAR134)
            {
                VAR132 = FUN14(VAR2, VAR121) << (16 - VAR121);
            }
            else
            {
                VAR132 = FUN14(VAR2, VAR121 - 1) << (16 - (VAR121 - 1));
            }
            for (VAR114 = 0; VAR114 < VAR22; VAR114++)
            {
                VAR11 = VAR120[VAR114];
                FUN15(VAR72, VAR11);
                if (VAR114 < 8)
                {
                    VAR117 = 1 + VAR131[VAR114];
                    if (VAR117 == ((VAR114 == VAR130) ? 3 : 2))
                    {
                        int VAR142 = FUN16(VAR2, VAR129);
                        VAR117 += VAR142;
                        if (VAR117 > (3 << VAR129))
                            VAR129 = VAR2->VAR35->VAR137 ? VAR129 + 1 : FUN17(VAR129 + 1, 4);
                        if (VAR2->VAR35->VAR137 && !VAR119)
                        {
                            int VAR143 = VAR16->VAR138[VAR135] / 4;
                            if (VAR142 >= (3 << VAR143))
                                VAR16->VAR138[VAR135]++;
                            else if (2 * VAR142 < (1 << VAR143))
                                if (VAR16->VAR138[VAR135] > 0)
                                    VAR16->VAR138[VAR135]--;
                            VAR119 = 1;
                        }
                    }
                }
                else
                {
                    int VAR142 = FUN16(VAR2, VAR129);
                    VAR117 = 1 + VAR142;
                    if (VAR117 > (3 << VAR129))
                        VAR129 = VAR2->VAR35->VAR137 ? VAR129 + 1 : FUN17(VAR129 + 1, 4);
                    if (VAR2->VAR35->VAR137 && !VAR119)
                    {
                        int VAR143 = VAR16->VAR138[VAR135] / 4;
                        if (VAR142 >= (3 << VAR143))
                            VAR16->VAR138[VAR135]++;
                        else if (2 * VAR142 < (1 << VAR143))
                            if (VAR16->VAR138[VAR135] > 0)
                                VAR16->VAR138[VAR135]--;
                        VAR119 = 1;
                    }
                }
                if (VAR2->VAR67->VAR141 && VAR134)
                {
                    VAR133 += VAR117;
                    if (VAR11 == VAR127 && (VAR133 & 1))
                        VAR117 = -VAR117;
                }
                if (VAR132 >> 15)
                    VAR117 = -VAR117;
                VAR132 <<= 1;
                if (!VAR16->VAR61.VAR62)
                {
                    if (VAR2->VAR35->VAR82 && !(VAR18 && VAR5 > 2))
                    {
                        if (VAR12 || VAR8 || VAR5 < 4)
                        {
                            switch (VAR5)
                            {
                            case 3:
                                VAR115 = (VAR12 << 3) + VAR8;
                                break;
                            case 4:
                                VAR115 = ((VAR12 >> 1) << 3) + (VAR8 >> 1);
                                break;
                            case 5:
                                VAR115 = ((VAR12 >> 2) << 3) + (VAR8 >> 2);
                                break;
                            default:
                                VAR115 = (VAR12 << 2) + VAR8;
                                break;
                            }
                            VAR53 = VAR55[VAR115];
                        }
                        else
                        {
                            VAR53 = VAR56;
                        }
                    }
                    VAR117 = (VAR117 * (VAR144)VAR52 * (VAR144)VAR53 + VAR51) >> VAR50;
                    if (VAR117 < 0)
                    {
                        if ((~VAR117) & 0xFffffffffff8000)
                            VAR117 = -32768;
                    }
                    else
                    {
                        if (VAR117 & 0xffffffffffff8000)
                            VAR117 = 32767;
                    }
                }
                VAR41[VAR12 * VAR47 + VAR8] = VAR117;
            }
        }
    }
    if (VAR16->VAR61.VAR62)
    {
        if (VAR45 || (VAR2->VAR35->VAR140 && (VAR57 == 10 || VAR57 == 26)))
        {
            int VAR145 = VAR2->VAR35->VAR140 ? (VAR57 == 26) : VAR46;
            VAR2->VAR146.FUN18(VAR41, VAR5, VAR145);
        }
    }
    else
    {
        if (VAR18)
        {
            int VAR147 = VAR2->VAR35->VAR148 && VAR5 == 2 && VAR16->VAR61.VAR88 == VAR89;
            if (VAR147)
            {
                for (VAR48 = 0; VAR48 < 8; VAR48++)
                    FUN8(VAR40, VAR41[VAR48], VAR41[16 - VAR48 - 1]);
            }
            VAR2->VAR146.FUN19(VAR41, VAR5);
            if (VAR45 || (VAR2->VAR35->VAR140 && VAR16->VAR61.VAR88 == VAR89 && (VAR57 == 10 || VAR57 == 26)))
            {
                int VAR145 = VAR45 ? VAR46 : (VAR57 == 26);
                VAR2->VAR146.FUN18(VAR41, VAR5, VAR145);
            }
        }
        else if (VAR16->VAR61.VAR88 == VAR89 && VAR7 == 0 && VAR5 == 2)
        {
            VAR2->VAR146.FUN20(VAR41);
        }
        else
        {
            int VAR149 = FUN21(VAR19, VAR20);
            if (VAR149 == 0)
                VAR2->VAR146.VAR150[VAR5 - 2](VAR41);
            else
            {
                int VAR151 = VAR19 + VAR20 + 4;
                if (VAR149 < 4)
                    VAR151 = FUN17(4, VAR151);
                else if (VAR149 < 8)
                    VAR151 = FUN17(8, VAR151);
                else if (VAR149 < 12)
                    VAR151 = FUN17(24, VAR151);
                VAR2->VAR146.VAR152[VAR5 - 2](VAR41, VAR151);
            }
        }
    }
    if (VAR16->VAR58.VAR153)
    {
        VAR40 *VAR154 = (VAR40 *)VAR16->VAR43;
        for (VAR48 = 0; VAR48 < (VAR47 * VAR47); VAR48++)
        {
            VAR41[VAR48] = VAR41[VAR48] + ((VAR16->VAR58.VAR155 * VAR154[VAR48]) >> 3);
        }
    }
    VAR2->VAR146.VAR156[VAR5 - 2](VAR37, VAR41, VAR31);
}