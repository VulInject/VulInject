int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    long (*VAR7)(void);
    VAR8 *VAR9;
    VAR10 *VAR11;
    if (FUN2(VAR2) == VAR12)
        return VAR12;
    VAR13 = VAR2;
    VAR14 = VAR2;
    FUN3();
    FUN4();
    VAR15 = VAR14->VAR16 & (VAR17 | VAR18 | VAR19 | VAR20 | VAR21 | VAR22);
    VAR23 = 1 - (2 * ((VAR14->VAR16 >> 10) & 1));
    VAR24 = VAR25;
    VAR14->VAR16 &= ~(VAR26 | VAR17 | VAR18 | VAR19 | VAR20 | VAR21 | VAR22);
    VAR4 = VAR27;
    VAR14->VAR28 = VAR29;
    VAR14->VAR30 = VAR14->VAR31 & 0xf;
    VAR14->VAR32 = (VAR14->VAR31 >> 4) & 1;
    VAR14->VAR33 = -1;
    for (;;)
    {
        if (FUN5(VAR14->VAR34) == 0)
        {
            VAR14->VAR35 = NULL;
            if (VAR14->VAR33 >= 0)
            {
                if (VAR14->VAR33 >= VAR36)
                {
                    VAR5 = VAR14->VAR33;
                    break;
                }
                else if (VAR14->VAR37)
                {
                    FUN6(VAR14->VAR33, VAR14->VAR38, VAR14->VAR39, VAR14->VAR40);
                    VAR5 = VAR14->VAR33;
                    break;
                }
                else
                {
                    FUN7(VAR14->VAR33, VAR14->VAR38, VAR14->VAR39, VAR14->VAR40, 0);
                    VAR14->VAR41 = -1;
                    FUN7(VAR14);
                    FUN7(VAR14);
                    FUN7(VAR14->VAR33);
                    FUN7(VAR14);
                    FUN7(VAR14);
                    FUN7(VAR14);
                    FUN7(VAR14);
                    FUN7(0);
                }
                VAR14->VAR33 = -1;
            }
            if (FUN8(VAR14) && VAR14->VAR6 == 0)
            {
                int VAR5;
                VAR14->VAR16 = VAR14->VAR16 | VAR42[VAR24].FUN9() | (VAR23 & VAR26);
                VAR5 = FUN10(VAR14);
                VAR15 = VAR14->VAR16 & (VAR17 | VAR18 | VAR19 | VAR20 | VAR21 | VAR22);
                VAR23 = 1 - (2 * ((VAR14->VAR16 >> 10) & 1));
                VAR24 = VAR25;
                VAR14->VAR16 &= ~(VAR26 | VAR17 | VAR18 | VAR19 | VAR20 | VAR21 | VAR22);
                if (VAR5 == 1)
                {
                    FUN11(VAR14->VAR34, 1);
                }
                else if (VAR5 == 2)
                {
                }
                else
                {
                    if (VAR14->VAR6 != 0)
                    {
                    }
                    else
                    {
                        FUN11(VAR14->VAR34, 1);
                    }
                }
            }
            VAR43 = 0;
            for (;;)
            {
                FUN3();
                VAR6 = VAR14->VAR6;
                if (FUN12(VAR6, 0) && VAR14->VAR44 & VAR45)
                {
                    if (VAR6 & VAR46)
                    {
                        VAR14->VAR6 &= ~VAR46;
                        VAR14->VAR33 = VAR47;
                        FUN13();
                    }
                    FUN14(VAR48) || FUN14(VAR49) || FUN14(VAR50) if (VAR6 & VAR51)
                    {
                        VAR14->VAR6 &= ~VAR51;
                        VAR14->VAR52 = 1;
                        VAR14->VAR33 = VAR53;
                        FUN13();
                    }
                    if ((VAR6 & VAR54) && !(VAR14->VAR44 & VAR55))
                    {
                        FUN15(VAR56);
                        VAR14->VAR6 &= ~VAR54;
                        FUN16();
                        VAR57;
                    }
                    else if ((VAR6 & VAR58) && !(VAR14->VAR44 & VAR59))
                    {
                        VAR14->VAR6 &= ~VAR58;
                        VAR14->VAR44 |= VAR59;
                        FUN7(VAR60, 0, 0, 0, 1);
                        VAR57;
                    }
                    else if ((VAR6 & VAR61) && (VAR14->VAR16 & VAR62 || VAR14->VAR44 & VAR63) && !(VAR14->VAR44 & VAR64))
                    {
                        int VAR65;
                        FUN15(VAR66);
                        VAR14->VAR6 &= ~(VAR61 | VAR67);
                        VAR65 = FUN17(VAR14);
                        if (VAR68 & VAR69)
                        {
                            fprintf(VAR70, "", VAR65);
                        }
                        FUN7(VAR65, 0, 0, 0, 1);
                        VAR57;
                    }
                    else if ((VAR6 & VAR67) && (VAR14->VAR16 & VAR62) && !(VAR14->VAR44 & VAR64))
                    {
                        int VAR65;
                        VAR14->VAR6 &= ~VAR67;
                        FUN15(VAR71);
                        VAR65 = FUN18(VAR14->VAR72 + FUN19(struct VAR73, VAR74.VAR75));
                        if (VAR68 & VAR69)
                            fprintf(VAR70, "", VAR65);
                        FUN7(VAR65, 0, 0, -1, 1);
                        FUN20(VAR14->VAR72 + FUN19(struct VAR73, VAR74.VAR76), FUN18(VAR14->VAR72 + FUN19(struct VAR73, VAR74.VAR76)) & ~VAR77);
                        VAR57;
                    }
                    if ((VAR6 & VAR78))
                    {
                        FUN21(VAR14);
                    }
                    if (VAR6 & VAR61)
                    {
                        FUN22(VAR14);
                        if (VAR14->VAR79 == 0)
                            VAR14->VAR6 &= ~VAR61;
                        VAR57;
                    }
                    if ((VAR6 & VAR61) && (VAR14->VAR80 & VAR14->VAR81 & VAR82) && (VAR14->VAR80 & (1 << VAR83)) && !(VAR14->VAR80 & (1 << VAR84)) && !(VAR14->VAR80 & (1 << VAR85)) && !(VAR14->VAR44 & VAR86))
                    {
                        VAR14->VAR33 = VAR87;
                        VAR14->VAR39 = 0;
                        FUN7(VAR14);
                        VAR57;
                    }
                    if ((VAR6 & VAR61) && (VAR14->VAR88 != 0))
                    {
                        int VAR89 = VAR14->VAR90 & 15;
                        int VAR91 = VAR14->VAR90 & 0xf0;
                        if (((VAR91 == VAR92) && (VAR89 == 15 || VAR89 > VAR14->VAR93)) || VAR91 != VAR92)
                        {
                            VAR14->VAR6 &= ~VAR61;
                            FUN7(VAR14->VAR90);
                            VAR14->VAR90 = 0;
                            FUN23(VAR14);
                            VAR57;
                        }
                    }
                    else if (VAR6 & VAR94)
                    {
                        VAR14->VAR6 &= ~VAR94;
                    }
                    if (VAR6 & VAR95 && !(VAR14->VAR96 & VAR97))
                    {
                        VAR14->VAR33 = VAR98;
                        FUN7(VAR14);
                        VAR57;
                    }
                    if (VAR6 & VAR61 && ((FUN24(VAR14) && VAR14->VAR99[15] < 0xfffffff0) || !(VAR14->VAR96 & VAR100)))
                    {
                        VAR14->VAR33 = VAR101;
                        FUN7(VAR14);
                        VAR57;
                    }
                    if (VAR6 & VAR61)
                    {
                        FUN7(VAR14);
                        VAR57;
                    }
                    if (VAR6 & VAR61)
                    {
                        FUN7(VAR14);
                        VAR57;
                    }
                    if (VAR6 & VAR61)
                    {
                        FUN7(VAR14);
                        VAR57;
                    }
                    if (VAR6 & VAR61 && ((VAR14->VAR31 & VAR102) >> VAR103) < VAR14->VAR104)
                    {
                        VAR14->VAR33 = VAR14->VAR105;
                        FUN7(1);
                        VAR57;
                    }
                    if (VAR14->VAR6 & VAR106)
                    {
                        VAR14->VAR6 &= ~VAR106;
                        VAR57;
                    }
                    if (VAR6 & VAR107)
                    {
                        VAR14->VAR6 &= ~VAR107;
                        VAR14->VAR33 = VAR36;
                        FUN13();
                    }
                }
                if ((VAR68 & VAR108))
                {
                    FUN25();
                    VAR14->VAR16 = VAR14->VAR16 | VAR42[VAR24].FUN9() | (VAR23 & VAR26);
                    FUN26(VAR14, VAR70, fprintf, VAR109);
                    VAR14->VAR16 &= ~(VAR26 | VAR17 | VAR18 | VAR19 | VAR20 | VAR21 | VAR22);
                    FUN26(VAR14, VAR70, fprintf, 0);
                    VAR27 = VAR14->VAR110 + (VAR14->VAR111 * 16);
                    VAR14->VAR112 = VAR27;
                    FUN26(VAR14, VAR70, fprintf, 0);
                    FUN26(VAR14, VAR70, fprintf, 0);
                    FUN27(VAR14, VAR14->VAR28);
                    VAR14->VAR28 = VAR29;
                    VAR14->VAR31 = (VAR14->VAR31 & 0xffe0) | VAR14->VAR30 | (VAR14->VAR32 << 4);
                    FUN26(VAR14, VAR70, fprintf, 0);
                    FUN26(VAR14, VAR70, fprintf, 0);
                    FUN26(VAR14, VAR70, fprintf, 0);
                    FUN26(VAR14, VAR70, fprintf, 0);
                    FUN26(VAR14, VAR70, fprintf, 0);
                }
                VAR9 = FUN28();
                if ((VAR68 & VAR113))
                {
                    fprintf(VAR70, "" VAR114 "", (long)VAR9->VAR11, VAR9->VAR115, FUN29(VAR9->VAR115));
                }
                FUN30();
                {
                    if (VAR43 != 0 && (VAR14->VAR116 != 2) && VAR9->VAR117[1] == -1)
                    {
                        FUN31(&VAR118);
                        FUN32((VAR8 *)(long)(VAR43 & ~3), VAR43 & 3, VAR9);
                        FUN33(&VAR118);
                    }
                }
                VAR11 = VAR9->VAR11;
                VAR14->VAR35 = VAR9;
                VAR7 = (void *)VAR11;
                VAR119 FUN34(""
                                     ""
                                     :
                                     : ""(VAR7)
                                     : "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "");
                asm volatile(""
                             ""
                             ""
                             : ""(VAR43)
                             : ""(VAR7)
                             : "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "");
                asm volatile(""
                             ""
                             ""
                             :
                             : ""(VAR7)
                             : "", "", "", "", "", "", "", "");
                struct VAR120
                {
                    void *VAR121;
                    void *VAR122;
                } VAR123;
                VAR123.VAR121 = VAR11;
                VAR123.VAR122 = VAR124 + 2 * (1 << 20);
                (*(void (*)(void)) & VAR123)();
                VAR43 = FUN35();
                VAR14->VAR35 = NULL;
                if (VAR14->VAR44 & VAR125)
                {
                    VAR14->VAR44 &= ~VAR125;
                    VAR43 = 0;
                }
                if (FUN8(VAR14) && (FUN36() - VAR14->VAR126) >= VAR127)
                {
                    FUN13();
                }
            }
        }
        else
        {
            FUN4();
        }
    }
    VAR14->VAR16 = VAR14->VAR16 | VAR42[VAR24].FUN9() | (VAR23 & VAR26);
    VAR27 = VAR4;
    FUN27(VAR14, VAR14->VAR28);
    VAR14->VAR28 = VAR29;
    VAR14->VAR31 = (VAR14->VAR31 & 0xffe0) | VAR14->VAR30 | (VAR14->VAR32 << 4);
    FUN30();
    VAR13 = NULL;
    return VAR5;
}