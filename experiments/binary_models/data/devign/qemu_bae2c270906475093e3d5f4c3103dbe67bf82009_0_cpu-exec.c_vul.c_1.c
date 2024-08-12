int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2); ( FUN3 ( VAR5 ) || FUN3 ( VAR6 ) || FUN3 ( VAR7 ) ) ) VAR8 * VAR9 = FUN4 ( VAR4 ) ;
    VAR10 *VAR11 = FUN5(VAR4);
    int VAR12, VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    uintptr_t VAR18;
    if (VAR4->VAR19)
    {
        if (!FUN6(VAR4))
        {
            return VAR20;
        }
        VAR4->VAR19 = 0;
    }
    VAR21 = VAR4;
    FUN7();
    if (FUN8(VAR22))
    {
        VAR4->VAR22 = 1;
    }
    VAR23 = VAR2->VAR24 & (VAR25 | VAR26 | VAR27 | VAR28 | VAR29 | VAR30);
    VAR2->VAR31 = 1 - (2 * ((VAR2->VAR24 >> 10) & 1));
    VAR32 = VAR33;
    VAR2->VAR24 &= ~(VAR34 | VAR25 | VAR26 | VAR27 | VAR28 | VAR29 | VAR30);
    VAR2->VAR35 = VAR36;
    VAR2->VAR37 = VAR2->VAR38 & 0xf;
    VAR2->VAR39 = (VAR2->VAR38 >> 4) & 1;
    VAR2->VAR40 = -1;
    VAR4->VAR41 = -1;
    for (;;)
    {
        if (FUN9(VAR4->VAR42, 0) == 0)
        {
            if (VAR4->VAR41 >= 0)
            {
                if (VAR4->VAR41 >= VAR43)
                {
                    VAR12 = VAR4->VAR41;
                    if (VAR12 == VAR44)
                    {
                        FUN10(VAR2);
                    }
                    break;
                }
                else
                {
                    VAR9->FUN11(VAR4);
                    VAR12 = VAR4->VAR41;
                    break;
                    VAR9->FUN11(VAR4);
                    VAR4->VAR41 = -1;
                }
            }
            VAR18 = 0;
            for (;;)
            {
                VAR13 = VAR4->VAR13;
                if (FUN8(VAR13))
                {
                    if (FUN8(VAR4->VAR45 & VAR46))
                    {
                        VAR13 &= ~VAR47;
                    }
                    if (VAR13 & VAR48)
                    {
                        VAR4->VAR13 &= ~VAR48;
                        VAR4->VAR41 = VAR44;
                        FUN12(VAR4);
                    }
                    FUN3(VAR6) || FUN3(VAR49) || FUN3(VAR50) || FUN3(VAR51) || FUN3(VAR52) || FUN3(VAR53) if (VAR13 & VAR54)
                    {
                        VAR4->VAR13 &= ~VAR54;
                        VAR4->VAR19 = 1;
                        VAR4->VAR41 = VAR55;
                        FUN12(VAR4);
                    }
                    if (VAR13 & VAR56)
                    {
                        VAR4->VAR13 &= ~VAR56;
                        FUN13(VAR11->VAR57);
                    }
                    if (VAR13 & VAR58)
                    {
                        FUN14(VAR2, VAR59, 0);
                        FUN15(VAR11);
                        VAR4->VAR41 = VAR20;
                        FUN12(VAR4);
                    }
                    else if (VAR13 & VAR60)
                    {
                        FUN16(VAR11);
                    }
                    else if (VAR2->VAR61 & VAR62)
                    {
                        if ((VAR13 & VAR63) && !(VAR2->VAR64 & VAR65))
                        {
                            FUN14(VAR2, VAR66, 0);
                            VAR4->VAR13 &= ~VAR63;
                            FUN17(VAR11);
                            VAR18 = 0;
                        }
                        else if ((VAR13 & VAR67) && !(VAR2->VAR61 & VAR68))
                        {
                            VAR4->VAR13 &= ~VAR67;
                            VAR2->VAR61 |= VAR68;
                            FUN18(VAR2, VAR69, 1);
                            VAR18 = 0;
                        }
                        else if (VAR13 & VAR70)
                        {
                            VAR4->VAR13 &= ~VAR70;
                            FUN18(VAR2, VAR71, 0);
                            VAR18 = 0;
                        }
                        else if ((VAR13 & VAR72) && (((VAR2->VAR61 & VAR73) && (VAR2->VAR61 & VAR74)) || (!(VAR2->VAR61 & VAR73) && (VAR2->VAR24 & VAR75 && !(VAR2->VAR64 & VAR76)))))
                        {
                            int VAR77;
                            FUN14(VAR2, VAR78, 0);
                            VAR4->VAR13 &= ~(VAR72 | VAR79);
                            VAR77 = FUN19(VAR2);
                            FUN20(VAR80, "", VAR77);
                            FUN18(VAR2, VAR77, 1);
                            VAR18 = 0;
                        }
                        else if ((VAR13 & VAR79) && (VAR2->VAR24 & VAR75) && !(VAR2->VAR64 & VAR76))
                        {
                            int VAR77;
                            FUN14(VAR2, VAR81, 0);
                            VAR77 = FUN21(VAR4->VAR82, VAR2->VAR83 + FUN22(struct VAR84, VAR85.VAR86));
                            FUN20(VAR80, "", VAR77);
                            FUN18(VAR2, VAR77, 1);
                            VAR4->VAR13 &= ~VAR79;
                            VAR18 = 0;
                        }
                    }
                    if ((VAR13 & VAR87))
                    {
                        FUN23(VAR4);
                    }
                    if (VAR13 & VAR72)
                    {
                        FUN24(VAR2);
                        if (VAR2->VAR88 == 0)
                        {
                            VAR4->VAR13 &= ~VAR72;
                        }
                        VAR18 = 0;
                    }
                    if ((VAR13 & VAR72) && (VAR2->VAR89 & VAR90))
                    {
                        VAR4->VAR41 = VAR91;
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    if ((VAR13 & VAR72) && (VAR2->VAR92[VAR93] & VAR94) && !(VAR2->VAR92[VAR93] & (VAR95 | VAR96)) && !(VAR2->VAR97 & (VAR98 | VAR99)))
                    {
                        VAR4->VAR41 = VAR91;
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    if ((VAR13 & VAR72) && FUN25(VAR2))
                    {
                        VAR4->VAR41 = VAR100;
                        VAR2->VAR101 = 0;
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    {
                        int VAR102 = -1;
                        if ((VAR13 & VAR72) && (VAR2->VAR38 & VAR103))
                        {
                            VAR102 = VAR104;
                        }
                        if ((VAR13 & VAR105) && (VAR2->VAR38 & VAR106))
                        {
                            VAR102 = VAR107;
                        }
                        if (VAR102 >= 0)
                        {
                            VAR4->VAR41 = VAR102;
                            VAR9->FUN11(VAR4);
                            VAR18 = 0;
                        }
                    }
                    if (VAR13 & VAR72)
                    {
                        if (FUN26(VAR2) && VAR2->VAR108 > 0)
                        {
                            int VAR109 = VAR2->VAR108 & 0xf;
                            int VAR110 = VAR2->VAR108 & 0xf0;
                            if (((VAR110 == VAR111) && FUN27(VAR2, VAR109)) || VAR110 != VAR111)
                            {
                                VAR4->VAR41 = VAR2->VAR108;
                                VAR9->FUN11(VAR4);
                                VAR18 = 0;
                            }
                        }
                    }
                    if (VAR13 & VAR112 && !(VAR2->VAR113 & VAR114))
                    {
                        VAR4->VAR41 = VAR115;
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    if (VAR13 & VAR72 && ((FUN28(VAR2) && VAR2->VAR116[15] < 0xfffffff0) || !(VAR2->VAR113 & VAR117)))
                    {
                        VAR4->VAR41 = VAR91;
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    if (VAR13 & VAR72 && !(VAR2->VAR118 & VAR119))
                    {
                        VAR4->VAR41 = VAR120;
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    if (VAR13 & VAR72)
                    {
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    {
                        int VAR102 = -1;
                        switch (VAR2->VAR121 ? 7 : VAR2->VAR122 & VAR123)
                        {
                        case 0 ... 3:
                            if (VAR13 & VAR72)
                            {
                                VAR102 = VAR124;
                            }
                        case 4:
                            if (VAR13 & VAR105)
                            {
                                VAR102 = VAR125;
                            }
                        case 5:
                            if (VAR13 & VAR126)
                            {
                                VAR102 = VAR127;
                            }
                        case 6:
                            if (VAR13 & VAR128)
                            {
                                VAR102 = VAR129;
                            }
                        }
                        if (VAR102 >= 0)
                        {
                            VAR4->VAR41 = VAR102;
                            VAR2->VAR101 = 0;
                            VAR9->FUN11(VAR4);
                            VAR18 = 0;
                        }
                    }
                    if (VAR13 & VAR72 && (VAR2->VAR130[VAR131] & VAR132) && !VAR2->VAR133)
                    {
                        VAR4->VAR41 = VAR91;
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    if (VAR13 & VAR67)
                    {
                        unsigned int VAR134;
                        if (VAR2->VAR130[VAR135] < 32)
                        {
                            VAR134 = VAR136;
                        }
                        else
                        {
                            VAR134 = VAR137;
                        }
                        if ((VAR2->VAR130[VAR131] & VAR134))
                        {
                            VAR4->VAR41 = VAR138;
                            VAR9->FUN11(VAR4);
                            VAR18 = 0;
                        }
                    }
                    if (VAR13 & VAR72 && ((VAR2->VAR38 & VAR139) >> VAR140) < VAR2->VAR141)
                    {
                        VAR4->VAR41 = VAR2->VAR142;
                        FUN29(VAR2);
                        VAR18 = 0;
                    }
                    if ((VAR13 & VAR72) && (VAR2->VAR143.VAR144 & VAR145))
                    {
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    if (VAR13 & VAR72)
                    {
                        VAR4->VAR41 = VAR146;
                        VAR9->FUN11(VAR4);
                        VAR18 = 0;
                    }
                    if (VAR4->VAR13 & VAR147)
                    {
                        VAR4->VAR13 &= ~VAR147;
                        VAR18 = 0;
                    }
                }
                if (FUN8(VAR4->VAR22))
                {
                    VAR4->VAR22 = 0;
                    VAR4->VAR41 = VAR43;
                    FUN12(VAR4);
                }
                FUN30(&VAR148.VAR149.VAR150);
                VAR151 = true;
                VAR15 = FUN31(VAR2);
                if (VAR148.VAR149.VAR152)
                {
                    VAR18 = 0;
                    VAR148.VAR149.VAR152 = 0;
                }
                if (FUN32(VAR153))
                {
                    FUN33("" VAR154 "", VAR15->VAR17, VAR15->VAR155, FUN34(VAR15->VAR155));
                }
                if (VAR18 != 0 && VAR15->VAR156[1] == -1)
                {
                    FUN35((VAR14 *)(VAR18 & ~VAR157), VAR18 & VAR157, VAR15);
                }
                VAR151 = false;
                FUN36(&VAR148.VAR149.VAR150);
                VAR4->VAR158 = VAR15;
                FUN37();
                if (FUN38(!VAR4->VAR22))
                {
                    VAR17 = VAR15->VAR17;
                    VAR18 = FUN39(VAR4, VAR17);
                    switch (VAR18 & VAR157)
                    {
                    case VAR159:
                        VAR15 = (VAR14 *)(VAR18 & ~VAR157);
                        VAR18 = 0;
                        break;
                    case VAR160:
                    {
                        int VAR161;
                        VAR15 = (VAR14 *)(VAR18 & ~VAR157);
                        VAR161 = VAR4->VAR162.VAR163;
                        if (VAR4->VAR164 && VAR161 >= 0)
                        {
                            VAR4->VAR164 += VAR161;
                            if (VAR4->VAR164 > 0xffff)
                            {
                                VAR161 = 0xffff;
                            }
                            else
                            {
                                VAR161 = VAR4->VAR164;
                            }
                            VAR4->VAR164 -= VAR161;
                            VAR4->VAR162.VAR165.VAR166 = VAR161;
                        }
                        else
                        {
                            if (VAR161 > 0)
                            {
                                FUN40(VAR2, VAR161, VAR15);
                            }
                            VAR4->VAR41 = VAR43;
                            VAR18 = 0;
                            FUN12(VAR4);
                        }
                        break;
                    }
                    default:
                        break;
                    }
                }
                VAR4->VAR158 = NULL;
            }
        }
        else
        {
            VAR4 = VAR21;
            VAR2 = VAR4->VAR167; ( FUN3 ( VAR5 ) || FUN3 ( VAR6 ) || FUN3 ( VAR7 ) ) ) VAR9 = FUN4 ( VAR4 ) ;
            VAR11 = FUN5(VAR4);
            if (VAR151)
            {
                FUN36(&VAR148.VAR149.VAR150);
                VAR151 = false;
            }
        }
    }
    VAR2->VAR24 = VAR2->VAR24 | FUN41(VAR2, VAR32) | (VAR2->VAR31 & VAR34);
    FUN42(VAR2, VAR2->VAR35);
    VAR2->VAR35 = VAR36;
    VAR2->VAR38 = (VAR2->VAR38 & 0xffe0) | VAR2->VAR37 | (VAR2->VAR39 << 4);
    VAR21 = NULL;
    return VAR12;