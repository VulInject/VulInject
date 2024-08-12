int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    unsigned long VAR9;
    if (FUN2(VAR2) == VAR10)
        return VAR10;
    VAR11 = VAR2;
    VAR12 = VAR2;
    VAR13 = VAR12->VAR14 & (VAR15 | VAR16 | VAR17 | VAR18 | VAR19 | VAR20);
    VAR21 = 1 - (2 * ((VAR12->VAR14 >> 10) & 1));
    VAR22 = VAR23;
    VAR12->VAR14 &= ~(VAR24 | VAR15 | VAR16 | VAR17 | VAR18 | VAR19 | VAR20);
    VAR12->VAR25 = VAR26;
    VAR12->VAR27 = VAR12->VAR28 & 0xf;
    VAR12->VAR29 = (VAR12->VAR28 >> 4) & 1;
    VAR12->VAR30 = -1;
    for (;;)
    {
        if (FUN3(VAR12->VAR31) == 0)
        {
            VAR12 = VAR11;
            if (VAR12->VAR30 >= 0)
            {
                if (VAR12->VAR30 >= VAR32)
                {
                    VAR3 = VAR12->VAR30;
                    if (VAR3 == VAR33)
                        FUN4(VAR12);
                    break;
                }
                else
                {
                    FUN5(VAR12->VAR30, VAR12->VAR34, VAR12->VAR35, VAR12->VAR36);
                    VAR12->VAR37 = -1;
                    VAR3 = VAR12->VAR30;
                    break;
                    FUN6(VAR12->VAR30, VAR12->VAR34, VAR12->VAR35, VAR12->VAR36, 0);
                    VAR12->VAR37 = -1;
                    FUN6(VAR12);
                    FUN6(VAR12);
                    FUN6(VAR12);
                    FUN6(VAR12);
                    FUN6(VAR12);
                    FUN6(VAR12);
                    FUN6(VAR12);
                    FUN6(VAR12);
                    FUN6(0);
                    VAR12->VAR30 = -1;
                }
            }
            if (FUN7())
            {
                FUN8(VAR12);
                FUN9(VAR12->VAR31, 1);
            }
            VAR9 = 0;
            for (;;)
            {
                VAR4 = VAR12->VAR4;
                if (FUN10(VAR4))
                {
                    if (FUN10(VAR12->VAR38 & VAR39))
                    {
                        VAR4 &= ~(VAR40 | VAR41 | VAR42 | VAR43);
                    }
                    if (VAR4 & VAR44)
                    {
                        VAR12->VAR4 &= ~VAR44;
                        VAR12->VAR30 = VAR33;
                        FUN11();
                    }
                    FUN12(VAR45) || FUN12(VAR46) || FUN12(VAR47) || FUN12(VAR48) if (VAR4 & VAR49)
                    {
                        VAR12->VAR4 &= ~VAR49;
                        VAR12->VAR50 = 1;
                        VAR12->VAR30 = VAR51;
                        FUN11();
                    }
                    if (VAR4 & VAR52)
                    {
                        FUN13(VAR53);
                        FUN14(VAR12);
                        VAR12->VAR30 = VAR10;
                        FUN11();
                    }
                    else if (VAR4 & VAR54)
                    {
                        FUN15(VAR12);
                    }
                    else if (VAR12->VAR55 & VAR56)
                    {
                        if ((VAR4 & VAR42) && !(VAR12->VAR57 & VAR58))
                        {
                            FUN13(VAR59);
                            VAR12->VAR4 &= ~VAR42;
                            FUN16();
                            VAR9 = 0;
                        }
                        else if ((VAR4 & VAR43) && !(VAR12->VAR55 & VAR60))
                        {
                            VAR12->VAR4 &= ~VAR43;
                            VAR12->VAR55 |= VAR60;
                            FUN6(VAR61, 0, 0, 0, 1);
                            VAR9 = 0;
                        }
                        else if (VAR4 & VAR62)
                        {
                            VAR12->VAR4 &= ~VAR62;
                            FUN6(VAR63, 0, 0, 0, 0);
                            VAR9 = 0;
                        }
                        else if ((VAR4 & VAR40) && (((VAR12->VAR55 & VAR64) && (VAR12->VAR55 & VAR65)) || (!(VAR12->VAR55 & VAR64) && (VAR12->VAR14 & VAR66 && !(VAR12->VAR57 & VAR67)))))
                        {
                            int VAR68;
                            FUN13(VAR69);
                            VAR12->VAR4 &= ~(VAR40 | VAR70);
                            VAR68 = FUN17(VAR12);
                            FUN18(VAR71, "", VAR68);
                            VAR12 = VAR11;
                            FUN6(VAR68, 0, 0, 0, 1);
                            VAR9 = 0;
                        }
                        else if ((VAR4 & VAR70) && (VAR12->VAR14 & VAR66) && !(VAR12->VAR57 & VAR67))
                        {
                            int VAR68;
                            FUN13(VAR72);
                            VAR68 = FUN19(VAR12->VAR73 + FUN20(struct VAR74, VAR75.VAR76));
                            FUN18(VAR71, "", VAR68);
                            FUN6(VAR68, 0, 0, 0, 1);
                            VAR12->VAR4 &= ~VAR70;
                            VAR9 = 0;
                        }
                    }
                    if ((VAR4 & VAR77))
                    {
                        FUN21(VAR12);
                    }
                    if (VAR4 & VAR40)
                    {
                        FUN22(VAR12);
                        if (VAR12->VAR78 == 0)
                            VAR12->VAR4 &= ~VAR40;
                        VAR9 = 0;
                    }
                    if ((VAR4 & VAR40) && (VAR12->VAR79[VAR80] & VAR81) && !(VAR12->VAR79[VAR80] & (VAR82 | VAR83)) && !(VAR12->VAR84 & (VAR85 | VAR86)))
                    {
                        VAR12->VAR30 = VAR87;
                        FUN6(VAR12);
                        VAR9 = 0;
                    }
                    if ((VAR4 & VAR40) && (VAR12->VAR88 & VAR12->VAR89 & VAR90) && (VAR12->VAR88 & (1 << VAR91)) && !(VAR12->VAR88 & (1 << VAR92)) && !(VAR12->VAR88 & (1 << VAR93)) && !(VAR12->VAR57 & VAR94))
                    {
                        VAR12->VAR30 = VAR95;
                        VAR12->VAR35 = 0;
                        FUN6(VAR12);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR40)
                    {
                        if (FUN23(VAR12) && VAR12->VAR96 > 0)
                        {
                            int VAR97 = VAR12->VAR96 & 0xf;
                            int VAR98 = VAR12->VAR96 & 0xf0;
                            if (((VAR98 == VAR99) && FUN24(VAR12, VAR97)) || VAR98 != VAR99)
                            {
                                VAR12->VAR30 = VAR12->VAR96;
                                FUN6(VAR12);
                                VAR9 = 0;
                            }
                        }
                    }
                    else if (VAR4 & VAR100)
                    {
                        VAR12->VAR4 &= ~VAR100;
                    }
                    if (VAR4 & VAR41 && !(VAR12->VAR101 & VAR102))
                    {
                        VAR12->VAR30 = VAR103;
                        FUN6(VAR12);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR40 && ((FUN25(VAR12) && VAR12->VAR104[15] < 0xfffffff0) || !(VAR12->VAR101 & VAR105)))
                    {
                        VAR12->VAR30 = VAR87;
                        FUN6(VAR12);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR40)
                    {
                        FUN6(VAR12);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR40)
                    {
                        FUN6(VAR12);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR40 && (VAR12->VAR106[VAR107] & VAR108) && !VAR12->VAR109)
                    {
                        VAR12->VAR30 = VAR87;
                        FUN6(VAR12);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR43 && (VAR12->VAR106[VAR107] & VAR110))
                    {
                        VAR12->VAR30 = VAR111;
                        FUN6(VAR12);
                        VAR9 = 0;
                    }
                    if (VAR4 & VAR40 && ((VAR12->VAR28 & VAR112) >> VAR113) < VAR12->VAR114)
                    {
                        VAR12->VAR30 = VAR12->VAR115;
                        FUN6(1);
                        VAR9 = 0;
                    }
                    if (VAR12->VAR4 & VAR116)
                    {
                        VAR12->VAR4 &= ~VAR116;
                        VAR9 = 0;
                    }
                }
                if (FUN10(VAR12->VAR117))
                {
                    VAR12->VAR117 = 0;
                    VAR12->VAR30 = VAR32;
                    FUN11();
                }
                if (FUN26(VAR118))
                {
                    VAR12->VAR14 = VAR12->VAR14 | FUN27(VAR22) | (VAR21 & VAR24);
                    FUN28(VAR12, VAR119);
                    VAR12->VAR14 &= ~(VAR24 | VAR15 | VAR16 | VAR17 | VAR18 | VAR19 | VAR20);
                    FUN28(VAR12, 0);
                    FUN28(VAR12, 0);
                    FUN28(VAR12, 0);
                    FUN29(VAR12, VAR12->VAR25);
                    VAR12->VAR25 = VAR26;
                    VAR12->VAR28 = (VAR12->VAR28 & 0xffe0) | VAR12->VAR27 | (VAR12->VAR29 << 4);
                    FUN28(VAR12, 0);
                    FUN28(VAR12, 0);
                    FUN28(VAR12, 0);
                    FUN28(VAR12, 0);
                    FUN28(VAR12, 0);
                    FUN28(VAR12, 0);
                }
                FUN30(&VAR120);
                VAR6 = FUN31();
                if (VAR121)
                {
                    VAR9 = 0;
                    VAR121 = 0;
                }
                FUN18(VAR122, "" VAR123 "", (long)VAR6->VAR8, VAR6->VAR124, FUN32(VAR6->VAR124));
                if (VAR9 != 0 && VAR6->VAR125[1] == -1)
                {
                    FUN33((VAR5 *)(VAR9 & ~3), VAR9 & 3, VAR6);
                }
                FUN34(&VAR120);
                if (!FUN10(VAR12->VAR117))
                {
                    VAR12->VAR126 = VAR6;
                    VAR8 = VAR6->VAR8;
                    VAR12 = VAR11;
                    VAR9 = FUN35(VAR8);
                    VAR12->VAR126 = NULL;
                    if ((VAR9 & 3) == 2)
                    {
                        int VAR127;
                        VAR6 = (VAR5 *)(long)(VAR9 & ~3);
                        FUN36(VAR12, VAR6);
                        VAR127 = VAR12->VAR128.VAR129;
                        if (VAR12->VAR130 && VAR127 >= 0)
                        {
                            VAR12->VAR130 += VAR127;
                            if (VAR12->VAR130 > 0xffff)
                            {
                                VAR127 = 0xffff;
                            }
                            else
                            {
                                VAR127 = VAR12->VAR130;
                            }
                            VAR12->VAR130 -= VAR127;
                            VAR12->VAR128.VAR131.VAR132 = VAR127;
                        }
                        else
                        {
                            if (VAR127 > 0)
                            {
                                FUN37(VAR127, VAR6);
                            }
                            VAR12->VAR30 = VAR32;
                            VAR9 = 0;
                            FUN11();
                        }
                    }
                }
            }
        }
    }
    VAR12->VAR14 = VAR12->VAR14 | FUN27(VAR22) | (VAR21 & VAR24);
    FUN29(VAR12, VAR12->VAR25);
    VAR12->VAR25 = VAR26;
    VAR12->VAR28 = (VAR12->VAR28 & 0xffe0) | VAR12->VAR27 | (VAR12->VAR29 << 4);
    VAR11 = NULL;
    return VAR3;
}