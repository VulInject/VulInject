int FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6, VAR7, VAR8 = 0;
    int VAR9 = VAR2->VAR10.VAR11;
    int VAR12 = VAR2->VAR13.VAR14 == 1 || VAR2->VAR13.VAR14 == 2;
    const int VAR15 = VAR2->VAR15;
    VAR5 = VAR4->VAR5 = VAR4->VAR16 + VAR4->VAR17 * VAR2->VAR18;
    FUN2(VAR2->VAR19, "", VAR2->VAR20, VAR4->VAR16, VAR4->VAR17);
    if (VAR4->VAR21 != VAR22)
    {
        int VAR23;
        if (FUN3(VAR2) && (VAR4->VAR17 & 1) == 1 && VAR4->VAR24)
            VAR23 = VAR4->VAR25;
        else
            VAR23 = FUN4(VAR2, VAR4, VAR4->VAR16, VAR4->VAR17);
        if (VAR23)
        {
            if (FUN3(VAR2) && (VAR4->VAR17 & 1) == 0)
            {
                VAR2->VAR26.VAR6[VAR5] = VAR27;
                VAR4->VAR25 = FUN4(VAR2, VAR4, VAR4->VAR16, VAR4->VAR17 + 1);
                if (!VAR4->VAR25)
                    VAR4->VAR28 = VAR4->VAR29 = FUN5(VAR2, VAR4);
            }
            FUN6(VAR2, VAR4);
            VAR2->VAR30[VAR5] = 0;
            VAR2->VAR31[VAR5] = 0;
            VAR4->VAR32 = 0;
            return 0;
        }
    }
    if (FUN3(VAR2))
    {
        if ((VAR4->VAR17 & 1) == 0)
            VAR4->VAR28 = VAR4->VAR29 = FUN5(VAR2, VAR4);
    }
    VAR4->VAR24 = 0;
    FUN7(VAR2, VAR4, -(FUN8(VAR4)));
    if (VAR4->VAR21 == VAR33)
    {
        int VAR34 = 0;
        FUN9(VAR4->VAR21 == VAR33);
        if (!FUN10(VAR4->VAR35[VAR36] - 1))
            VAR34++;
        if (!FUN10(VAR4->VAR37 - 1))
            VAR34++;
        if (!FUN11(&VAR4->VAR38, &VAR4->VAR39[27 + VAR34]))
        {
            VAR6 = 0;
        }
        else if (!FUN11(&VAR4->VAR38, &VAR4->VAR39[27 + 3]))
        {
            VAR6 = 1 + FUN11(&VAR4->VAR38, &VAR4->VAR39[27 + 5]);
        }
        else
        {
            int VAR40;
            VAR40 = FUN11(&VAR4->VAR38, &VAR4->VAR39[27 + 4]) << 3;
            VAR40 += FUN11(&VAR4->VAR38, &VAR4->VAR39[27 + 5]) << 2;
            VAR40 += FUN11(&VAR4->VAR38, &VAR4->VAR39[27 + 5]) << 1;
            VAR40 += FUN11(&VAR4->VAR38, &VAR4->VAR39[27 + 5]);
            if (VAR40 < 8)
            {
                VAR6 = VAR40 + 3;
            }
            else if (VAR40 == 13)
            {
                VAR6 = FUN12(VAR4, 32, 0);
                goto VAR41;
            }
            else if (VAR40 == 14)
            {
                VAR6 = 11;
            }
            else if (VAR40 == 15)
            {
                VAR6 = 22;
            }
            else
            {
                VAR40 = (VAR40 << 1) + FUN11(&VAR4->VAR38, &VAR4->VAR39[27 + 5]);
                VAR6 = VAR40 - 4;
            }
        }
        VAR7 = VAR42[VAR6].VAR7;
        VAR6 = VAR42[VAR6].VAR43;
    }
    else if (VAR4->VAR21 == VAR44)
    {
        if (FUN11(&VAR4->VAR38, &VAR4->VAR39[14]) == 0)
        {
            if (FUN11(&VAR4->VAR38, &VAR4->VAR39[15]) == 0)
            {
                VAR6 = 3 * FUN11(&VAR4->VAR38, &VAR4->VAR39[16]);
            }
            else
            {
                VAR6 = 2 - FUN11(&VAR4->VAR38, &VAR4->VAR39[17]);
            }
            VAR7 = VAR45[VAR6].VAR7;
            VAR6 = VAR45[VAR6].VAR43;
        }
        else
        {
            VAR6 = FUN12(VAR4, 17, 0);
            goto VAR41;
        }
    }
    else
    {
        VAR6 = FUN12(VAR4, 3, 1);
        if (VAR4->VAR46 == VAR47 && VAR6)
            VAR6--;
        FUN9(VAR4->VAR21 == VAR22);
    VAR41:
        VAR7 = 0;
        VAR8 = VAR48[VAR6].VAR8;
        VAR4->VAR49 = VAR48[VAR6].VAR50;
        VAR6 = VAR48[VAR6].VAR43;
    }
    if (FUN8(VAR4))
        VAR6 |= VAR51;
    VAR2->VAR52[VAR5] = VAR4->VAR53;
    if (FUN13(VAR6))
    {
        const int VAR54 = VAR55[VAR2->VAR13.VAR14] * VAR2->VAR13.VAR56 >> 3;
        const VAR57 *VAR58;
        VAR58 = VAR4->VAR38.VAR59;
        if (VAR4->VAR38.VAR60 & 0x1)
            VAR58--;
        if (VAR61 == 16)
        {
            if (VAR4->VAR38.VAR60 & 0x1FF)
                VAR58--;
        }
        if ((int)(VAR4->VAR38.VAR62 - VAR58) < VAR54)
            return -1;
        VAR4->VAR63 = VAR58;
        VAR58 += VAR54;
        FUN14(&VAR4->VAR38, VAR58, VAR4->VAR38.VAR62 - VAR58);
        VAR2->VAR30[VAR5] = 0xf7ef;
        VAR2->VAR31[VAR5] = 0;
        VAR2->VAR26.VAR64[VAR5] = 0;
        memset(VAR2->VAR65[VAR5], 16, 48);
        VAR2->VAR26.VAR6[VAR5] = VAR6;
        VAR4->VAR32 = 0;
        return 0;
    }
    FUN15(VAR2, VAR4, VAR6);
    if (FUN16(VAR6))
    {
        int VAR66, VAR50;
        if (FUN17(VAR6))
        {
            if (VAR9 && FUN11(&VAR4->VAR38, &VAR4->VAR39[399 + VAR4->VAR67]))
            {
                VAR6 |= VAR68;
                for (VAR66 = 0; VAR66 < 16; VAR66 += 4)
                {
                    int VAR69 = FUN18(VAR2, VAR4, VAR66);
                    int VAR70 = FUN19(VAR4, VAR69);
                    FUN20(&VAR4->VAR71[VAR72[VAR66]], 2, 2, 8, VAR70, 1);
                }
            }
            else
            {
                for (VAR66 = 0; VAR66 < 16; VAR66++)
                {
                    int VAR69 = FUN18(VAR2, VAR4, VAR66);
                    VAR4->VAR71[VAR72[VAR66]] = FUN19(VAR4, VAR69);
                    FUN2(VAR2->VAR19, "", VAR69, VAR4->VAR71[VAR72[VAR66]]);
                }
            }
            FUN21(VAR2, VAR4);
            if (FUN22(VAR2, VAR4) < 0)
                return -1;
        }
        else
        {
            VAR4->VAR49 = FUN23(VAR2, VAR4, VAR4->VAR49, 0);
            if (VAR4->VAR49 < 0)
                return -1;
        }
        if (VAR12)
        {
            VAR2->VAR31[VAR5] = VAR50 = FUN24(VAR2, VAR4);
            VAR50 = FUN23(VAR2, VAR4, VAR50, 1);
            if (VAR50 < 0)
                return -1;
            VAR4->VAR73 = VAR50;
        }
        else
        {
            VAR4->VAR73 = VAR74;
        }
    }
    else if (VAR7 == 4)
    {
        int VAR66, VAR75, VAR76[4], VAR77, VAR78[2][4];
        if (VAR4->VAR21 == VAR33)
        {
            for (VAR66 = 0; VAR66 < 4; VAR66++)
            {
                VAR4->VAR79[VAR66] = FUN25(VAR4);
                VAR76[VAR66] = VAR80[VAR4->VAR79[VAR66]].VAR7;
                VAR4->VAR79[VAR66] = VAR80[VAR4->VAR79[VAR66]].VAR43;
            }
            if (FUN10(VAR4->VAR79[0] | VAR4->VAR79[1] | VAR4->VAR79[2] | VAR4->VAR79[3]))
            {
                FUN26(VAR2, VAR4, &VAR6);
                VAR4->VAR81[0][VAR72[4]] = VAR4->VAR81[1][VAR72[4]] = VAR4->VAR81[0][VAR72[12]] = VAR4->VAR81[1][VAR72[12]] = VAR82;
                for (VAR66 = 0; VAR66 < 4; VAR66++)
                    FUN20(&VAR4->VAR83[VAR72[4 * VAR66]], 2, 2, 8, (VAR4->VAR79[VAR66] >> 1) & 0xFF, 1);
            }
        }
        else
        {
            for (VAR66 = 0; VAR66 < 4; VAR66++)
            {
                VAR4->VAR79[VAR66] = FUN27(VAR4);
                VAR76[VAR66] = VAR84[VAR4->VAR79[VAR66]].VAR7;
                VAR4->VAR79[VAR66] = VAR84[VAR4->VAR79[VAR66]].VAR43;
            }
        }
        for (VAR77 = 0; VAR77 < VAR4->VAR85; VAR77++)
        {
            for (VAR66 = 0; VAR66 < 4; VAR66++)
            {
                if (FUN10(VAR4->VAR79[VAR66]))
                    continue;
                if (FUN28(VAR4->VAR79[VAR66], 0, VAR77))
                {
                    unsigned VAR86 = VAR4->VAR87[VAR77] << FUN29(VAR4);
                    if (VAR86 > 1)
                    {
                        VAR78[VAR77][VAR66] = FUN30(VAR4, VAR77, 4 * VAR66);
                        if (VAR78[VAR77][VAR66] >= VAR86)
                        {
                            FUN31(VAR2->VAR19, VAR88, "", VAR78[VAR77][VAR66], VAR86);
                            return -1;
                        }
                    }
                    else
                        VAR78[VAR77][VAR66] = 0;
                }
                else
                {
                    VAR78[VAR77][VAR66] = -1;
                }
                VAR4->VAR81[VAR77][VAR72[4 * VAR66] + 1] = VAR4->VAR81[VAR77][VAR72[4 * VAR66] + 8] = VAR4->VAR81[VAR77][VAR72[4 * VAR66] + 9] = VAR78[VAR77][VAR66];
            }
        }
        if (VAR9)
            VAR9 = FUN32(VAR2, VAR4);
        for (VAR77 = 0; VAR77 < VAR4->VAR85; VAR77++)
        {
            for (VAR66 = 0; VAR66 < 4; VAR66++)
            {
                VAR4->VAR81[VAR77][VAR72[4 * VAR66]] = VAR4->VAR81[VAR77][VAR72[4 * VAR66] + 1];
                if (FUN10(VAR4->VAR79[VAR66]))
                {
                    FUN20(VAR4->VAR89[VAR77][VAR72[4 * VAR66]], 2, 2, 8, 0, 2);
                    continue;
                }
                if (FUN28(VAR4->VAR79[VAR66], 0, VAR77) && !FUN10(VAR4->VAR79[VAR66]))
                {
                    const int VAR79 = VAR4->VAR79[VAR66];
                    const int VAR90 = (VAR79 & (VAR91 | VAR92)) ? 2 : 1;
                    for (VAR75 = 0; VAR75 < VAR76[VAR66]; VAR75++)
                    {
                        int VAR93, VAR94;
                        int VAR95, VAR96;
                        const int VAR97 = 4 * VAR66 + VAR90 * VAR75;
                        FUN33(*VAR98)[2] = &VAR4->VAR98[VAR77][VAR72[VAR97]];
                        FUN34(*VAR89)[2] = &VAR4->VAR89[VAR77][VAR72[VAR97]];
                        FUN35(VAR2, VAR4, VAR97, VAR90, VAR77, VAR4->VAR81[VAR77][VAR72[VAR97]], &VAR95, &VAR96);
                        FUN36(VAR4, VAR77, VAR97)
                        FUN2(VAR2->VAR19, "", VAR95, VAR96);
                        if (FUN37(VAR79))
                        {
                            VAR98[1][0] = VAR98[8][0] = VAR98[9][0] = VAR95;
                            VAR98[1][1] = VAR98[8][1] = VAR98[9][1] = VAR96;
                            VAR89[1][0] = VAR89[8][0] = VAR89[9][0] = VAR93;
                            VAR89[1][1] = VAR89[8][1] = VAR89[9][1] = VAR94;
                        }
                        else if (FUN38(VAR79))
                        {
                            VAR98[1][0] = VAR95;
                            VAR98[1][1] = VAR96;
                            VAR89[1][0] = VAR93;
                            VAR89[1][1] = VAR94;
                        }
                        else if (FUN39(VAR79))
                        {
                            VAR98[8][0] = VAR95;
                            VAR98[8][1] = VAR96;
                            VAR89[8][0] = VAR93;
                            VAR89[8][1] = VAR94;
                        }
                        VAR98[0][0] = VAR95;
                        VAR98[0][1] = VAR96;
                        VAR89[0][0] = VAR93;
                        VAR89[0][1] = VAR94;
                    }
                }
                else
                {
                    FUN20(VAR4->VAR98[VAR77][VAR72[4 * VAR66]], 2, 2, 8, 0, 4);
                    FUN20(VAR4->VAR89[VAR77][VAR72[4 * VAR66]], 2, 2, 8, 0, 2);
                }
            }
        }
    }
    else if (FUN10(VAR6))
    {
        FUN26(VAR2, VAR4, &VAR6);
        FUN20(VAR4->VAR89[0][VAR72[0]], 4, 4, 8, 0, 2);
        FUN20(VAR4->VAR89[1][VAR72[0]], 4, 4, 8, 0, 2);
        VAR9 &= VAR2->VAR13.VAR99;
    }
    else
    {
        int VAR77, VAR66;
        if (FUN40(VAR6))
        {
            for (VAR77 = 0; VAR77 < VAR4->VAR85; VAR77++)
            {
                if (FUN28(VAR6, 0, VAR77))
                {
                    int VAR78;
                    unsigned VAR86 = VAR4->VAR87[VAR77] << FUN29(VAR4);
                    if (VAR86 > 1)
                    {
                        VAR78 = FUN30(VAR4, VAR77, 0);
                        if (VAR78 >= VAR86)
                        {
                            FUN31(VAR2->VAR19, VAR88, "", VAR78, VAR86);
                            return -1;
                        }
                    }
                    else
                        VAR78 = 0;
                    FUN20(&VAR4->VAR81[VAR77][VAR72[0]], 4, 4, 8, VAR78, 1);
                }
            }
            for (VAR77 = 0; VAR77 < VAR4->VAR85; VAR77++)
            {
                if (FUN28(VAR6, 0, VAR77))
                {
                    int VAR95, VAR96, VAR93, VAR94;
                    FUN35(VAR2, VAR4, 0, 4, VAR77, VAR4->VAR81[VAR77][VAR72[0]], &VAR95, &VAR96);
                    FUN36(VAR4, VAR77, 0)
                    FUN2(VAR2->VAR19, "", VAR95, VAR96);
                    FUN20(VAR4->VAR89[VAR77][VAR72[0]], 4, 4, 8, FUN41(VAR93, VAR94), 2);
                    FUN20(VAR4->VAR98[VAR77][VAR72[0]], 4, 4, 8, FUN42(VAR95, VAR96), 4);
                }
            }
        }
        else if (FUN43(VAR6))
        {
            for (VAR77 = 0; VAR77 < VAR4->VAR85; VAR77++)
            {
                for (VAR66 = 0; VAR66 < 2; VAR66++)
                {
                    if (FUN28(VAR6, VAR66, VAR77))
                    {
                        int VAR78;
                        unsigned VAR86 = VAR4->VAR87[VAR77] << FUN29(VAR4);
                        if (VAR86 > 1)
                        {
                            VAR78 = FUN30(VAR4, VAR77, 8 * VAR66);
                            if (VAR78 >= VAR86)
                            {
                                FUN31(VAR2->VAR19, VAR88, "", VAR78, VAR86);
                                return -1;
                            }
                        }
                        else
                            VAR78 = 0;
                        FUN20(&VAR4->VAR81[VAR77][VAR72[0] + 16 * VAR66], 4, 2, 8, VAR78, 1);
                    }
                    else
                        FUN20(&VAR4->VAR81[VAR77][VAR72[0] + 16 * VAR66], 4, 2, 8, (VAR100 & 0xFF), 1);
                }
            }
            for (VAR77 = 0; VAR77 < VAR4->VAR85; VAR77++)
            {
                for (VAR66 = 0; VAR66 < 2; VAR66++)
                {
                    if (FUN28(VAR6, VAR66, VAR77))
                    {
                        int VAR95, VAR96, VAR93, VAR94;
                        FUN44(VAR2, VAR4, 8 * VAR66, VAR77, VAR4->VAR81[VAR77][VAR72[0] + 16 * VAR66], &VAR95, &VAR96);
                        FUN36(VAR4, VAR77, 8 * VAR66)
                        FUN2(VAR2->VAR19, "", VAR95, VAR96);
                        FUN20(VAR4->VAR89[VAR77][VAR72[0] + 16 * VAR66], 4, 2, 8, FUN41(VAR93, VAR94), 2);
                        FUN20(VAR4->VAR98[VAR77][VAR72[0] + 16 * VAR66], 4, 2, 8, FUN42(VAR95, VAR96), 4);
                    }
                    else
                    {
                        FUN20(VAR4->VAR89[VAR77][VAR72[0] + 16 * VAR66], 4, 2, 8, 0, 2);
                        FUN20(VAR4->VAR98[VAR77][VAR72[0] + 16 * VAR66], 4, 2, 8, 0, 4);
                    }
                }
            }
        }
        else
        {
            FUN9(FUN45(VAR6));
            for (VAR77 = 0; VAR77 < VAR4->VAR85; VAR77++)
            {
                for (VAR66 = 0; VAR66 < 2; VAR66++)
                {
                    if (FUN28(VAR6, VAR66, VAR77))
                    {
                        int VAR78;
                        unsigned VAR86 = VAR4->VAR87[VAR77] << FUN29(VAR4);
                        if (VAR86 > 1)
                        {
                            VAR78 = FUN30(VAR4, VAR77, 4 * VAR66);
                            if (VAR78 >= VAR86)
                            {
                                FUN31(VAR2->VAR19, VAR88, "", VAR78, VAR86);
                                return -1;
                            }
                        }
                        else
                            VAR78 = 0;
                        FUN20(&VAR4->VAR81[VAR77][VAR72[0] + 2 * VAR66], 2, 4, 8, VAR78, 1);
                    }
                    else
                        FUN20(&VAR4->VAR81[VAR77][VAR72[0] + 2 * VAR66], 2, 4, 8, (VAR100 & 0xFF), 1);
                }
            }
            for (VAR77 = 0; VAR77 < VAR4->VAR85; VAR77++)
            {
                for (VAR66 = 0; VAR66 < 2; VAR66++)
                {
                    if (FUN28(VAR6, VAR66, VAR77))
                    {
                        int VAR95, VAR96, VAR93, VAR94;
                        FUN46(VAR2, VAR4, VAR66 * 4, VAR77, VAR4->VAR81[VAR77][VAR72[0] + 2 * VAR66], &VAR95, &VAR96);
                        FUN36(VAR4, VAR77, 4 * VAR66)
                        FUN2(VAR2->VAR19, "", VAR95, VAR96);
                        FUN20(VAR4->VAR89[VAR77][VAR72[0] + 2 * VAR66], 2, 4, 8, FUN41(VAR93, VAR94), 2);
                        FUN20(VAR4->VAR98[VAR77][VAR72[0] + 2 * VAR66], 2, 4, 8, FUN42(VAR95, VAR96), 4);
                    }
                    else
                    {
                        FUN20(VAR4->VAR89[VAR77][VAR72[0] + 2 * VAR66], 2, 4, 8, 0, 2);
                        FUN20(VAR4->VAR98[VAR77][VAR72[0] + 2 * VAR66], 2, 4, 8, 0, 4);
                    }
                }
            }
        }
    }
    if (FUN47(VAR6))
    {
        VAR2->VAR31[VAR5] = 0;
        FUN48(VAR2, VAR4, VAR6);
    }
    if (!FUN49(VAR6))
    {
        VAR8 = FUN50(VAR4);
        if (VAR12)
            VAR8 |= FUN51(VAR4) << 4;
    }
    else
    {
        if (!VAR12 && VAR8 > 15)
        {
            FUN31(VAR2->VAR19, VAR88, "");
            return VAR101;
        }
    }
    VAR2->VAR30[VAR5] = VAR4->VAR8 = VAR8;
    if (VAR9 && (VAR8 & 15) && !FUN16(VAR6))
    {
        VAR6 |= VAR68 * FUN11(&VAR4->VAR38, &VAR4->VAR39[399 + VAR4->VAR67]);
    }
    if (FUN52(VAR2) && FUN53(VAR6))
    {
        int VAR66;
        VAR57 *VAR102 = VAR4->VAR103;
        for (VAR66 = 0; VAR66 < 2; VAR66++)
        {
            if (VAR4->VAR35[FUN54(VAR66)] && !FUN53(VAR4->VAR35[FUN54(VAR66)]))
            {
                VAR102[3 + 8 * 1 + 2 * 8 * VAR66] = VAR102[3 + 8 * 2 + 2 * 8 * VAR66] = VAR102[3 + 8 * 6 + 2 * 8 * VAR66] = VAR102[3 + 8 * 7 + 2 * 8 * VAR66] = VAR102[3 + 8 * 11 + 2 * 8 * VAR66] = VAR102[3 + 8 * 12 + 2 * 8 * VAR66] = FUN16(VAR6) ? 64 : 0;
            }
        }
        if (VAR4->VAR37 && !FUN53(VAR4->VAR37))
        {
            uint32_t VAR104 = FUN55(VAR2) && !FUN16(VAR6) ? 0 : 0x40404040;
            FUN56(&VAR102[4 + 8 * 0], VAR104);
            FUN56(&VAR102[4 + 8 * 5], VAR104);
            FUN56(&VAR102[4 + 8 * 10], VAR104);
        }
    }
    VAR2->VAR26.VAR6[VAR5] = VAR6;
    if (VAR8 || FUN49(VAR6))
    {
        const VAR57 *VAR105, *VAR106;
        const VAR107 *VAR108;
        if (FUN57(VAR6))
        {
            VAR106 = VAR4->VAR109 ? VAR2->VAR110 : VAR2->VAR111;
            VAR105 = VAR4->VAR109 ? VAR2->VAR112 : VAR2->VAR113;
        }
        else
        {
            VAR106 = VAR4->VAR109 ? VAR2->VAR114 : VAR2->VAR115;
            VAR105 = VAR4->VAR109 ? VAR2->VAR116 : VAR2->VAR117;
        }
        if (FUN11(&VAR4->VAR38, &VAR4->VAR39[60 + (VAR4->VAR32 != 0)]))
        {
            int VAR118 = 1;
            int VAR34 = 2;
            const int VAR119 = 51 + 6 * (VAR2->VAR13.VAR56 - 8);
            while (FUN11(&VAR4->VAR38, &VAR4->VAR39[60 + VAR34]))
            {
                VAR34 = 3;
                VAR118++;
                if (VAR118 > 2 * VAR119)
                {
                    FUN31(VAR2->VAR19, VAR88, "", VAR4->VAR16, VAR4->VAR17);
                    return -1;
                }
            }
            if (VAR118 & 0x01)
                VAR118 = (VAR118 + 1) >> 1;
            else
                VAR118 = -((VAR118 + 1) >> 1);
            VAR4->VAR32 = VAR118;
            VAR4->VAR109 += VAR118;
            if (((unsigned)VAR4->VAR109) > VAR119)
            {
                if (VAR4->VAR109 < 0)
                    VAR4->VAR109 += VAR119 + 1;
                else
                    VAR4->VAR109 -= VAR119 + 1;
            }
            VAR4->VAR120[0] = FUN58(VAR2, 0, VAR4->VAR109);
            VAR4->VAR120[1] = FUN58(VAR2, 1, VAR4->VAR109);
        }
        else
            VAR4->VAR32 = 0;
        FUN59(VAR2, VAR4, VAR105, VAR106, VAR15, VAR6, VAR8, 0);
        if (FUN52(VAR2))
        {
            FUN59(VAR2, VAR4, VAR105, VAR106, VAR15, VAR6, VAR8, 1);
            FUN59(VAR2, VAR4, VAR105, VAR106, VAR15, VAR6, VAR8, 2);
        }
        else if (FUN60(VAR2))
        {
            if (VAR8 & 0x30)
            {
                int VAR121;
                for (VAR121 = 0; VAR121 < 2; VAR121++)
                    FUN61(VAR2, VAR4, VAR4->VAR122 + ((256 + 16 * 16 * VAR121) << VAR15), 3, VAR123 + VAR121, VAR124, 8);
            }
            if (VAR8 & 0x20)
            {
                int VAR121, VAR66, VAR125;
                for (VAR121 = 0; VAR121 < 2; VAR121++)
                {
                    VAR126 *VAR122 = VAR4->VAR122 + (16 * (16 + 16 * VAR121) << VAR15);
                    VAR108 = VAR2->VAR127[VAR121 + 1 + (FUN16(VAR6) ? 0 : 3)][VAR4->VAR120[VAR121]];
                    for (VAR125 = 0; VAR125 < 2; VAR125++)
                    {
                        for (VAR66 = 0; VAR66 < 4; VAR66++)
                        {
                            const int VAR97 = 16 + 16 * VAR121 + 8 * VAR125 + VAR66;
                            FUN62(VAR2, VAR4, VAR122, 4, VAR97, VAR105 + 1, VAR108, 15);
                            VAR122 += 16 << VAR15;
                        }
                    }
                }
            }
            else
            {
                FUN20(&VAR4->VAR103[VAR72[16]], 4, 4, 8, 0, 1);
                FUN20(&VAR4->VAR103[VAR72[32]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            if (VAR8 & 0x30)
            {
                int VAR121;
                for (VAR121 = 0; VAR121 < 2; VAR121++)
                    FUN63(VAR2, VAR4, VAR4->VAR122 + ((256 + 16 * 16 * VAR121) << VAR15), 3, VAR123 + VAR121, VAR128, 4);
            }
            if (VAR8 & 0x20)
            {
                int VAR121, VAR66;
                for (VAR121 = 0; VAR121 < 2; VAR121++)
                {
                    VAR108 = VAR2->VAR127[VAR121 + 1 + (FUN16(VAR6) ? 0 : 3)][VAR4->VAR120[VAR121]];
                    for (VAR66 = 0; VAR66 < 4; VAR66++)
                    {
                        const int VAR97 = 16 + 16 * VAR121 + VAR66;
                        FUN62(VAR2, VAR4, VAR4->VAR122 + (16 * VAR97 << VAR15), 4, VAR97, VAR105 + 1, VAR108, 15);
                    }
                }
            }
            else
            {
                FUN20(&VAR4->VAR103[VAR72[16]], 4, 4, 8, 0, 1);
                FUN20(&VAR4->VAR103[VAR72[32]], 4, 4, 8, 0, 1);
            }
        }
    }
    else
    {
        FUN20(&VAR4->VAR103[VAR72[0]], 4, 4, 8, 0, 1);
        FUN20(&VAR4->VAR103[VAR72[16]], 4, 4, 8, 0, 1);
        FUN20(&VAR4->VAR103[VAR72[32]], 4, 4, 8, 0, 1);
        VAR4->VAR32 = 0;
    }
    VAR2->VAR26.VAR64[VAR5] = VAR4->VAR109;
    FUN64(VAR2, VAR4);
    return 0;
}