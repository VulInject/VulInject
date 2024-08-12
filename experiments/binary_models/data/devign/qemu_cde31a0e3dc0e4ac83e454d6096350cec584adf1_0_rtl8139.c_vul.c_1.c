static int FUN1(VAR1 *VAR2)
{
    if (!FUN2(VAR2))
    {
        FUN3("");
        return 0;
    }
    if (!FUN4(VAR2))
    {
        FUN3("");
        return 0;
    }
    int VAR3 = VAR2->VAR4;
    dma_addr_t VAR5 = FUN5(VAR2->VAR6[0], VAR2->VAR6[1]);
    VAR5 += 16 * VAR3;
    FUN3(""
            "" VAR7 "",
            VAR3, VAR2->VAR6[1], VAR2->VAR6[0], VAR5);
    uint32_t VAR8, VAR9, VAR10, VAR11, VAR12;
    FUN6(&VAR2->VAR13, VAR5, (VAR14 *)&VAR8, 4);
    VAR9 = FUN7(VAR8);
    FUN6(&VAR2->VAR13, VAR5 + 4, (VAR14 *)&VAR8, 4);
    VAR10 = FUN7(VAR8);
    FUN6(&VAR2->VAR13, VAR5 + 8, (VAR14 *)&VAR8, 4);
    VAR11 = FUN7(VAR8);
    FUN6(&VAR2->VAR13, VAR5 + 12, (VAR14 *)&VAR8, 4);
    VAR12 = FUN7(VAR8);
    FUN3("", VAR3, VAR9, VAR10, VAR11, VAR12);
    if (!(VAR9 & VAR15))
    {
        FUN3("", VAR3);
        return 0;
    }
    FUN3("", VAR3);
    if (VAR9 & VAR16)
    {
        FUN3(""
                "",
                VAR3);
        VAR2->VAR17 = 0;
    }
    int VAR18 = VAR9 & VAR19;
    dma_addr_t VAR20 = FUN5(VAR11, VAR12);
    if (!VAR2->VAR21)
    {
        VAR2->VAR22 = VAR23;
        VAR2->VAR21 = FUN8(VAR2->VAR22);
        VAR2->VAR17 = 0;
        FUN3("", VAR2->VAR22);
    }
    while (VAR2->VAR21 && VAR2->VAR17 + VAR18 >= VAR2->VAR22)
    {
        VAR2->VAR22 += VAR23;
        VAR2->VAR21 = FUN9(VAR2->VAR21, VAR2->VAR22);
        FUN3("", VAR2->VAR22);
    }
    if (!VAR2->VAR21)
    {
        FUN3("", VAR2->VAR22);
        ++VAR2->VAR24.VAR25;
        ++VAR2->VAR24.VAR26;
        return 0;
    }
    FUN3("" VAR7 "", VAR18, VAR20, VAR2->VAR17);
    FUN6(&VAR2->VAR13, VAR20, VAR2->VAR21 + VAR2->VAR17, VAR18);
    VAR2->VAR17 += VAR18;
    if (VAR9 & VAR27)
    {
        VAR2->VAR4 = 0;
    }
    else
    {
        ++VAR2->VAR4;
        if (VAR2->VAR4 >= 64)
            VAR2->VAR4 = 0;
    }
    VAR9 &= ~VAR28;
    VAR9 &= ~VAR29;
    VAR9 &= ~VAR30;
    VAR9 &= ~VAR31;
    VAR9 &= ~VAR32;
    VAR9 &= ~VAR33;
    VAR8 = FUN10(VAR9);
    FUN11(&VAR2->VAR13, VAR5, (VAR14 *)&VAR8, 4);
    if (VAR9 & VAR34)
    {
        uint8_t VAR35[VAR36];
        VAR37 *VAR38;
        FUN3("", VAR3);
        VAR14 *VAR39 = VAR2->VAR21;
        int VAR40 = VAR2->VAR17;
        int VAR41 = VAR2->VAR22;
        if (VAR10 & VAR42)
        {
            FUN3(""
                    "",
                    FUN12(VAR10 & VAR43));
            VAR38 = (VAR37 *)VAR35;
            VAR38[0] = FUN13(VAR44);
            VAR38[1] = FUN14(VAR10 & VAR43);
        }
        else
        {
            VAR38 = NULL;
        }
        VAR2->VAR21 = NULL;
        VAR2->VAR17 = 0;
        VAR2->VAR22 = 0;
        if (VAR9 & (VAR45 | VAR46 | VAR47 | VAR48))
        {
            FUN3("");
            VAR49 *VAR50 = NULL;
            int VAR51 = 0;
            uint8_t VAR52 = 0;
            uint16_t VAR53 = 0;
            VAR14 *VAR54 = NULL;
            size_t VAR55 = 0;
            int VAR56 = FUN15(*(VAR37 *)(VAR39 + 12));
            if (VAR56 == VAR57)
            {
                FUN3("");
                VAR54 = VAR39 + VAR58;
                VAR55 = VAR40 - VAR58;
                VAR50 = (VAR49 *)VAR54;
                if (FUN16(VAR50) != VAR59)
                {
                    FUN3(""
                            "",
                            FUN16(VAR50), VAR59);
                    VAR50 = NULL;
                }
                else
                {
                    VAR51 = FUN17(VAR50);
                    VAR52 = VAR50->VAR60;
                    VAR53 = FUN15(VAR50->VAR61) - VAR51;
                }
            }
            if (VAR50)
            {
                if (VAR9 & VAR45)
                {
                    FUN3("");
                    if (VAR51 < sizeof(VAR49) || VAR51 > VAR55)
                    {
                    }
                    else
                    {
                        VAR50->VAR62 = 0;
                        VAR50->VAR62 = FUN18(VAR50, VAR51);
                        FUN3("", VAR51, VAR50->VAR62);
                    }
                }
                if ((VAR9 & VAR48) && VAR52 == VAR63)
                {
                    int VAR64 = (VAR9 >> 16) & VAR65;
                    FUN3(""
                            "",
                            VAR66, VAR53, VAR40 - VAR58, VAR64);
                    int VAR67 = 0;
                    int VAR68 = 0;
                    uint8_t VAR69[60];
                    memcpy(VAR69, VAR54, VAR51);
                    VAR14 *VAR70 = VAR54 + VAR51 - 12;
                    VAR71 *VAR72 = (VAR71 *)(VAR54 + VAR51);
                    int VAR73 = FUN19(VAR72);
                    int VAR74 = VAR53 - VAR73;
                    int VAR75 = VAR66 - VAR51 - VAR73;
                    FUN3(""
                            "",
                            VAR53, VAR73, VAR74, VAR75);
                    int VAR76 = 0;
                    for (VAR67 = 0; VAR67 < VAR74; VAR67 += VAR75)
                    {
                        uint16_t VAR77 = VAR75;
                        if (VAR67 + VAR75 >= VAR74)
                        {
                            VAR76 = 1;
                            VAR77 = VAR74 - VAR67;
                        }
                        FUN3("", FUN20(VAR72->VAR78));
                        memcpy(VAR70, VAR69 + 12, 8);
                        FUN3(""
                                "",
                                VAR73 + VAR77);
                        if (VAR67)
                        {
                            memcpy((VAR14 *)VAR72 + VAR73, (VAR14 *)VAR72 + VAR73 + VAR67, VAR77);
                        }
                        if (!VAR76)
                        {
                            FUN21(VAR72, VAR79 | VAR80);
                        }
                        VAR81 *VAR82 = (VAR81 *)VAR70;
                        VAR82->VAR83 = 0;
                        VAR82->VAR84 = VAR63;
                        VAR82->VAR85 = FUN13(VAR73 + VAR77);
                        VAR72->VAR86 = 0;
                        int VAR87 = FUN18(VAR70, VAR73 + VAR77 + 12);
                        FUN3("", VAR87);
                        VAR72->VAR86 = VAR87;
                        memcpy(VAR54, VAR69, VAR51);
                        VAR50->VAR61 = FUN13(VAR51 + VAR73 + VAR77);
                        VAR50->VAR88 = FUN13(VAR67 / VAR75 + FUN15(VAR50->VAR88));
                        VAR50->VAR62 = 0;
                        VAR50->VAR62 = FUN18(VAR54, VAR51);
                        FUN3(""
                                "",
                                VAR51, VAR50->VAR62);
                        int VAR89 = VAR58 + VAR51 + VAR73 + VAR77;
                        FUN3(""
                                "",
                                VAR89);
                        FUN22(VAR2, VAR39, VAR89, 0, (VAR14 *)VAR38);
                        VAR72->VAR78 = FUN23(VAR77 + FUN20(VAR72->VAR78));
                        ++VAR68;
                    }
                    VAR40 = 0;
                }
                else if (VAR9 & (VAR47 | VAR46))
                {
                    FUN3("");
                    uint8_t VAR69[60];
                    memcpy(VAR69, VAR54, VAR51);
                    VAR14 *VAR70 = VAR54 + VAR51 - 12;
                    memcpy(VAR70, VAR69 + 12, 8);
                    if ((VAR9 & VAR47) && VAR52 == VAR63)
                    {
                        FUN3(""
                                "",
                                VAR53);
                        VAR81 *VAR82 = (VAR81 *)VAR70;
                        VAR82->VAR83 = 0;
                        VAR82->VAR84 = VAR63;
                        VAR82->VAR85 = FUN13(VAR53);
                        VAR71 *VAR72 = (VAR71 *)(VAR70 + 12);
                        VAR72->VAR86 = 0;
                        int VAR87 = FUN18(VAR70, VAR53 + 12);
                        FUN3("", VAR87);
                        VAR72->VAR86 = VAR87;
                    }
                    else if ((VAR9 & VAR46) && VAR52 == VAR90)
                    {
                        FUN3(""
                                "",
                                VAR53);
                        VAR81 *VAR91 = (VAR81 *)VAR70;
                        VAR91->VAR83 = 0;
                        VAR91->VAR84 = VAR90;
                        VAR91->VAR85 = FUN13(VAR53);
                        VAR92 *VAR93 = (VAR92 *)(VAR70 + 12);
                        VAR93->VAR94 = 0;
                        int VAR95 = FUN18(VAR70, VAR53 + 12);
                        FUN3("", VAR95);
                        VAR93->VAR94 = VAR95;
                    }
                    memcpy(VAR54, VAR69, VAR51);
                }
            }
        }
        ++VAR2->VAR24.VAR96;
        FUN3("", VAR40);
        FUN22(VAR2, VAR39, VAR40, 1, (VAR14 *)VAR38);
        if (!VAR2->VAR21)
        {
            VAR2->VAR21 = VAR39;
            VAR2->VAR22 = VAR41;
            VAR2->VAR17 = 0;
        }
        else
        {
            FUN24(VAR39);
        }
    }
    else
    {
        FUN3("");
    }
    return 1;
}