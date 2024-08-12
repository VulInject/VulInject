int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    unsigned long VAR9;
    if (VAR2->VAR10)
    {
        if (!FUN2(VAR2))
        {
            return VAR11;
        }
        VAR2->VAR10 = 0;
    }
    VAR12 = VAR2;
    if (FUN3(VAR13))
    {
        VAR2->VAR13 = 1;
    }
    VAR14 = VAR2->VAR15 & (VAR16 | VAR17 | VAR18 | VAR19 | VAR20 | VAR21);
    VAR22 = 1 - (2 * ((VAR2->VAR15 >> 10) & 1));
    VAR23 = VAR24;
    VAR2->VAR15 &= ~(VAR25 | VAR16 | VAR17 | VAR18 | VAR19 | VAR20 | VAR21);
    VAR2->VAR26 = VAR27;
    VAR2->VAR28 = VAR2->VAR29 & 0xf;
    VAR2->VAR30 = (VAR2->VAR29 >> 4) & 1;
    VAR2->VAR31 = -1;
    for (;;)
    {
        if (FUN4(VAR2->VAR32) == 0)
        {
            if (VAR2->VAR31 >= 0)
            {
                if (VAR2->VAR31 >= VAR33)
                {
                    VAR3 = VAR2->VAR31;
                    if (VAR3 == VAR34)
                    {
                        FUN5(VAR2);
                    }
                    break;
                    FUN6(VAR2);
                    VAR3 = VAR2->VAR31;
                    break;
                    FUN6(VAR2);
                    VAR2->VAR31 = -1;
                }
            }
            VAR9 = 0;
            for (;;)
            {
                VAR4 = VAR2->VAR4;
                if (FUN3(VAR4))
                {
                    if (FUN3(VAR2->VAR35 & VAR36))
                    {
                        VAR4 &= ~VAR37;
                    }
                    if (VAR4 & VAR38)
                    {
                        VAR2->VAR4 &= ~VAR38;
                        VAR2->VAR31 = VAR34;
                        FUN7(VAR2);
                    }
                    FUN8(VAR39) || FUN8(VAR40) || FUN8(VAR41) || FUN8(VAR42) || FUN8(VAR43) || FUN8(VAR44) if (VAR4 & VAR45)
                    {
                        VAR2->VAR4 &= ~VAR45;
                        VAR2->VAR10 = 1;
                        VAR2->VAR31 = VAR46;
                        FUN7(VAR2);
                    }
                    if (VAR4 & VAR47)
                    {
                        FUN9(VAR2, VAR48);
                        FUN10(VAR2);
                        VAR2->VAR31 = VAR11;
                        FUN7(VAR2);
                    }
                    else if (VAR4 & VAR49)
                    {
                        FUN11(VAR2);
                    }
                    else if (VAR2->VAR50 & VAR51)
                    {
                        if ((VAR4 & VAR52) && !(VAR2->VAR53 & VAR54))
                        {
                            FUN9(VAR2, VAR55);
                            VAR2->VAR4 &= ~VAR52;
                            FUN12(VAR2);
                            VAR9 = 0;
                        }
                        else if ((VAR4 & VAR56) && !(VAR2->VAR50 & VAR57))
                        {
                            VAR2->VAR4 &= ~VAR56;
                            VAR2->VAR50 |= VAR57;
                            FUN13(VAR2, VAR58, 1);
                            VAR9 = 0;
                        }
                        else if (VAR4 & VAR59)
                        {
                            VAR2->VAR4 &= ~VAR59;
                            FUN13(VAR2, VAR60, 0);
                            VAR9 = 0;
                        }
                        else if ((VAR4 & VAR61) && (((VAR2->VAR50 & VAR62) && (VAR2->VAR50 & VAR63)) || (!(VAR2->VAR50 & VAR62) && (VAR2->VAR15 & VAR64 && !(VAR2->VAR53 & VAR65)))))
                        {
                            int VAR66;
                            FUN9(VAR2, VAR67);
                            VAR2->VAR4 &= ~(VAR61 | VAR68);
                            VAR66 = FUN14(VAR2);
                            FUN15(VAR69, "", VAR66);
                            FUN13(VAR2, VAR66, 1);
                            VAR9 = 0;
                        }
                        else if ((VAR4 & VAR68) && (VAR2->VAR15 & VAR64) && !(VAR2->VAR53 & VAR65))
                        {
                            int VAR66;
                            FUN9(VAR2, VAR70);
                            VAR66 = FUN16(VAR2->VAR71 + FUN17(struct VAR72, VAR73.VAR74));
                            FUN15(VAR69, "", VAR66);
                            FUN13(VAR2, VAR66, 1);
                            VAR2->VAR4 &= ~VAR68;
                            VAR9 = 0;
                        }
                    }
                    if ((VAR4 & VAR75))
                    {
                        FUN18(VAR2);
                    }
                    if (VAR4 & VAR61)
                    {
                        FUN19(VAR2);
                        if (VAR2->VAR76 == 0)
                            VAR2->VAR4 &= ~VAR61;
                        VAR9 = 0;
                    }
                    if ((VAR4 & VAR61) && (VAR2->VAR77 & VAR78))
                    {
                        VAR2->VAR31 = VAR79;
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    if ((VAR4 & VAR61) && (VAR2->VAR80[VAR81] & VAR82) && !(VAR2->VAR80[VAR81] & (VAR83 | VAR84)) && !(VAR2->VAR85 & (VAR86 | VAR87)))
                    {
                        VAR2->VAR31 = VAR79;
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    if ((VAR4 & VAR61) && FUN20(VAR2))
                    {
                        VAR2->VAR31 = VAR88;
                        VAR2->VAR89 = 0;
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR61)
                    {
                        if (FUN21(VAR2) && VAR2->VAR90 > 0)
                        {
                            int VAR91 = VAR2->VAR90 & 0xf;
                            int VAR92 = VAR2->VAR90 & 0xf0;
                            if (((VAR92 == VAR93) && FUN22(VAR2, VAR91)) || VAR92 != VAR93)
                            {
                                VAR2->VAR31 = VAR2->VAR90;
                                FUN6(VAR2);
                                VAR9 = 0;
                            }
                        }
                    }
                    if (VAR4 & VAR94 && !(VAR2->VAR95 & VAR96))
                    {
                        VAR2->VAR31 = VAR97;
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR61 && ((FUN23(VAR2) && VAR2->VAR98[15] < 0xfffffff0) || !(VAR2->VAR95 & VAR99)))
                    {
                        VAR2->VAR31 = VAR79;
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR61 && !(VAR2->VAR100 & VAR101))
                    {
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR61)
                    {
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    {
                        int VAR102 = -1;
                        switch (VAR2->VAR103 ? 7 : VAR2->VAR104 & VAR105)
                        {
                        case 0 ... 3:
                            if (VAR4 & VAR61)
                            {
                                VAR102 = VAR106;
                            }
                        case 4:
                            if (VAR4 & VAR107)
                            {
                                VAR102 = VAR108;
                            }
                        case 5:
                            if (VAR4 & VAR109)
                            {
                                VAR102 = VAR110;
                            }
                        case 6:
                            if (VAR4 & VAR111)
                            {
                                VAR102 = VAR112;
                            }
                        }
                        if (VAR102 >= 0)
                        {
                            VAR2->VAR31 = VAR102;
                            VAR2->VAR89 = 0;
                            FUN6(VAR2);
                            VAR9 = 0;
                        }
                    }
                    if (VAR4 & VAR61 && (VAR2->VAR113[VAR114] & VAR115) && !VAR2->VAR116)
                    {
                        VAR2->VAR31 = VAR79;
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR56 && (VAR2->VAR113[VAR114] & VAR117))
                    {
                        VAR2->VAR31 = VAR118;
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR61 && ((VAR2->VAR29 & VAR119) >> VAR120) < VAR2->VAR121)
                    {
                        VAR2->VAR31 = VAR2->VAR122;
                        FUN24(VAR2);
                        VAR9 = 0;
                    }
                    if ((VAR4 & VAR61) && (VAR2->VAR123.VAR124 & VAR125))
                    {
                        FUN6(VAR2);
                        VAR9 = 0;
                    }
                    if (VAR2->VAR4 & VAR126)
                    {
                        VAR2->VAR4 &= ~VAR126;
                        VAR9 = 0;
                    }
                }
                if (FUN3(VAR2->VAR13))
                {
                    VAR2->VAR13 = 0;
                    VAR2->VAR31 = VAR33;
                    FUN7(VAR2);
                }
                if (FUN25(VAR127))
                {
                    VAR2->VAR15 = VAR2->VAR15 | FUN26(VAR2, VAR23) | (VAR22 & VAR25);
                    FUN27(VAR2, VAR128);
                    VAR2->VAR15 &= ~(VAR25 | VAR16 | VAR17 | VAR18 | VAR19 | VAR20 | VAR21);
                    FUN28(VAR2, VAR2->VAR26);
                    VAR2->VAR26 = VAR27;
                    VAR2->VAR29 = (VAR2->VAR29 & 0xffe0) | VAR2->VAR28 | (VAR2->VAR30 << 4);
                    FUN27(VAR2, 0);
                    FUN27(VAR2, 0);
                }
                FUN29(&VAR129);
                VAR6 = FUN30(VAR2);
                if (VAR130)
                {
                    VAR9 = 0;
                    VAR130 = 0;
                }
                FUN15(VAR131, "" VAR132 "", (long)VAR6->VAR8, VAR6->VAR133, FUN31(VAR6->VAR133));
                if (VAR9 != 0 && VAR6->VAR134[1] == -1)
                {
                    FUN32((VAR5 *)(VAR9 & ~3), VAR9 & 3, VAR6);
                }
                FUN33(&VAR129);
                VAR2->VAR135 = VAR6;
                FUN34();
                if (FUN35(!VAR2->VAR13))
                {
                    VAR8 = VAR6->VAR8;
                    VAR9 = FUN36(VAR2, VAR8);
                    if ((VAR9 & 3) == 2)
                    {
                        int VAR136;
                        VAR6 = (VAR5 *)(long)(VAR9 & ~3);
                        FUN37(VAR2, VAR6);
                        VAR136 = VAR2->VAR137.VAR138;
                        if (VAR2->VAR139 && VAR136 >= 0)
                        {
                            VAR2->VAR139 += VAR136;
                            if (VAR2->VAR139 > 0xffff)
                            {
                                VAR136 = 0xffff;
                                VAR136 = VAR2->VAR139;
                            }
                            VAR2->VAR139 -= VAR136;
                            VAR2->VAR137.VAR140.VAR141 = VAR136;
                            if (VAR136 > 0)
                            {
                                FUN38(VAR2, VAR136, VAR6);
                            }
                            VAR2->VAR31 = VAR33;
                            VAR9 = 0;
                            FUN7(VAR2);
                        }
                    }
                }
                VAR2->VAR135 = NULL;
            }
        }
    }
    VAR2->VAR15 = VAR2->VAR15 | FUN26(VAR2, VAR23) | (VAR22 & VAR25);
    FUN28(VAR2, VAR2->VAR26);
    VAR2->VAR26 = VAR27;
    VAR2->VAR29 = (VAR2->VAR29 & 0xffe0) | VAR2->VAR28 | (VAR2->VAR30 << 4);
    VAR12 = NULL;
    return VAR3;