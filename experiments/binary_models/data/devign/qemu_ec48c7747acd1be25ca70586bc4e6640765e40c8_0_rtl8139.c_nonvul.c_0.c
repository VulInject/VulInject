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
    target_phys_addr_t VAR5 = FUN5(VAR2->VAR6[0], VAR2->VAR6[1]);
    VAR5 += 16 * VAR3;
    FUN3(""
            "" VAR7 "",
            VAR3, VAR2->VAR6[1], VAR2->VAR6[0], VAR5);
    uint32_t VAR8, VAR9, VAR10, VAR11, VAR12;
    FUN6(VAR5, (VAR13 *)&VAR8, 4);
    VAR9 = FUN7(VAR8);
    FUN6(VAR5 + 4, (VAR13 *)&VAR8, 4);
    VAR10 = FUN7(VAR8);
    FUN6(VAR5 + 8, (VAR13 *)&VAR8, 4);
    VAR11 = FUN7(VAR8);
    FUN6(VAR5 + 12, (VAR13 *)&VAR8, 4);
    VAR12 = FUN7(VAR8);
    FUN3("", VAR3, VAR9, VAR10, VAR11, VAR12);
    if (!(VAR9 & VAR14))
    {
        FUN3("", VAR3);
        return 0;
    }
    FUN3("", VAR3);
    if (VAR9 & VAR15)
    {
        FUN3(""
                "",
                VAR3);
        VAR2->VAR16 = 0;
    }
    int VAR17 = VAR9 & VAR18;
    target_phys_addr_t VAR19 = FUN5(VAR11, VAR12);
    if (!VAR2->VAR20)
    {
        VAR2->VAR21 = VAR22;
        VAR2->VAR20 = FUN8(VAR2->VAR21);
        VAR2->VAR16 = 0;
        FUN3("", VAR2->VAR21);
    }
    while (VAR2->VAR20 && VAR2->VAR16 + VAR17 >= VAR2->VAR21)
    {
        VAR2->VAR21 += VAR22;
        VAR2->VAR20 = FUN9(VAR2->VAR20, VAR2->VAR21);
        FUN3("", VAR2->VAR21);
    }
    if (!VAR2->VAR20)
    {
        FUN3("", VAR2->VAR21);
        ++VAR2->VAR23.VAR24;
        ++VAR2->VAR23.VAR25;
        return 0;
    }
    FUN3("" VAR7 "", VAR17, VAR19, VAR2->VAR16);
    FUN6(VAR19, VAR2->VAR20 + VAR2->VAR16, VAR17);
    VAR2->VAR16 += VAR17;
    if (VAR9 & VAR26)
    {
        VAR2->VAR4 = 0;
    }
    else
    {
        ++VAR2->VAR4;
        if (VAR2->VAR4 >= 64)
            VAR2->VAR4 = 0;
    }
    VAR9 &= ~VAR27;
    VAR9 &= ~VAR28;
    VAR9 &= ~VAR29;
    VAR9 &= ~VAR30;
    VAR9 &= ~VAR31;
    VAR9 &= ~VAR32;
    VAR8 = FUN10(VAR9);
    FUN11(VAR5, (VAR13 *)&VAR8, 4);
    if (VAR9 & VAR33)
    {
        uint8_t VAR34[VAR35];
        VAR36 *VAR37;
        FUN3("", VAR3);
        VAR13 *VAR38 = VAR2->VAR20;
        int VAR39 = VAR2->VAR16;
        int VAR40 = VAR2->VAR21;
        if (VAR10 & VAR41)
        {
            FUN3(""
                    "",
                    FUN12(VAR10 & VAR42));
            VAR37 = (VAR36 *)VAR34;
            VAR37[0] = FUN13(VAR43);
            VAR37[1] = FUN14(VAR10 & VAR42);
        }
        else
        {
            VAR37 = NULL;
        }
        VAR2->VAR20 = NULL;
        VAR2->VAR16 = 0;
        VAR2->VAR21 = 0;
        if (VAR9 & (VAR44 | VAR45 | VAR46 | VAR47))
        {
            FUN3("");
            VAR48 *VAR49 = NULL;
            int VAR50 = 0;
            uint8_t VAR51 = 0;
            uint16_t VAR52 = 0;
            VAR13 *VAR53 = NULL;
            size_t VAR54 = 0;
            int VAR55 = FUN15(*(VAR36 *)(VAR38 + 12));
            if (VAR55 == VAR56)
            {
                FUN3("");
                VAR53 = VAR38 + VAR57;
                VAR54 = VAR39 - VAR57;
                VAR49 = (VAR48 *)VAR53;
                if (FUN16(VAR49) != VAR58)
                {
                    FUN3(""
                            "",
                            FUN16(VAR49), VAR58);
                    VAR49 = NULL;
                }
                else
                {
                    VAR50 = FUN17(VAR49);
                    VAR51 = VAR49->VAR59;
                    VAR52 = FUN15(VAR49->VAR60) - VAR50;
                }
            }
            if (VAR49)
            {
                if (VAR9 & VAR44)
                {
                    FUN3("");
                    if (VAR50 < sizeof(VAR48) || VAR50 > VAR54)
                    {
                    }
                    else
                    {
                        VAR49->VAR61 = 0;
                        VAR49->VAR61 = FUN18(VAR49, VAR50);
                        FUN3("", VAR50, VAR49->VAR61);
                    }
                }
                if ((VAR9 & VAR47) && VAR51 == VAR62)
                {
                    int VAR63 = (VAR9 >> 16) & VAR64;
                    FUN3(""
                            "",
                            VAR65, VAR52, VAR39 - VAR57, VAR63);
                    int VAR66 = 0;
                    int VAR67 = 0;
                    uint8_t VAR68[60];
                    memcpy(VAR68, VAR53, VAR50);
                    VAR13 *VAR69 = VAR53 + VAR50 - 12;
                    VAR70 *VAR71 = (VAR70 *)(VAR53 + VAR50);
                    int VAR72 = FUN19(VAR71);
                    int VAR73 = VAR52 - VAR72;
                    int VAR74 = VAR65 - VAR50 - VAR72;
                    FUN3(""
                            "",
                            VAR52, VAR72, VAR73, VAR74);
                    int VAR75 = 0;
                    for (VAR66 = 0; VAR66 < VAR73; VAR66 += VAR74)
                    {
                        uint16_t VAR76 = VAR74;
                        if (VAR66 + VAR74 >= VAR73)
                        {
                            VAR75 = 1;
                            VAR76 = VAR73 - VAR66;
                        }
                        FUN3("", FUN20(VAR71->VAR77));
                        memcpy(VAR69, VAR68 + 12, 8);
                        FUN3(""
                                "",
                                VAR72 + VAR76);
                        if (VAR66)
                        {
                            memcpy((VAR13 *)VAR71 + VAR72, (VAR13 *)VAR71 + VAR72 + VAR66, VAR76);
                        }
                        if (!VAR75)
                        {
                            FUN21(VAR71, VAR78 | VAR79);
                        }
                        VAR80 *VAR81 = (VAR80 *)VAR69;
                        VAR81->VAR82 = 0;
                        VAR81->VAR83 = VAR62;
                        VAR81->VAR84 = FUN13(VAR72 + VAR76);
                        VAR71->VAR85 = 0;
                        int VAR86 = FUN18(VAR69, VAR72 + VAR76 + 12);
                        FUN3("", VAR86);
                        VAR71->VAR85 = VAR86;
                        memcpy(VAR53, VAR68, VAR50);
                        VAR49->VAR60 = FUN13(VAR50 + VAR72 + VAR76);
                        VAR49->VAR87 = FUN13(VAR66 / VAR74 + FUN15(VAR49->VAR87));
                        VAR49->VAR61 = 0;
                        VAR49->VAR61 = FUN18(VAR53, VAR50);
                        FUN3(""
                                "",
                                VAR50, VAR49->VAR61);
                        int VAR88 = VAR57 + VAR50 + VAR72 + VAR76;
                        FUN3(""
                                "",
                                VAR88);
                        FUN22(VAR2, VAR38, VAR88, 0, (VAR13 *)VAR37);
                        VAR71->VAR77 = FUN23(VAR76 + FUN20(VAR71->VAR77));
                        ++VAR67;
                    }
                    VAR39 = 0;
                }
                else if (VAR9 & (VAR46 | VAR45))
                {
                    FUN3("");
                    uint8_t VAR68[60];
                    memcpy(VAR68, VAR53, VAR50);
                    VAR13 *VAR69 = VAR53 + VAR50 - 12;
                    memcpy(VAR69, VAR68 + 12, 8);
                    if ((VAR9 & VAR46) && VAR51 == VAR62)
                    {
                        FUN3(""
                                "",
                                VAR52);
                        VAR80 *VAR81 = (VAR80 *)VAR69;
                        VAR81->VAR82 = 0;
                        VAR81->VAR83 = VAR62;
                        VAR81->VAR84 = FUN13(VAR52);
                        VAR70 *VAR71 = (VAR70 *)(VAR69 + 12);
                        VAR71->VAR85 = 0;
                        int VAR86 = FUN18(VAR69, VAR52 + 12);
                        FUN3("", VAR86);
                        VAR71->VAR85 = VAR86;
                    }
                    else if ((VAR9 & VAR45) && VAR51 == VAR89)
                    {
                        FUN3(""
                                "",
                                VAR52);
                        VAR80 *VAR90 = (VAR80 *)VAR69;
                        VAR90->VAR82 = 0;
                        VAR90->VAR83 = VAR89;
                        VAR90->VAR84 = FUN13(VAR52);
                        VAR91 *VAR92 = (VAR91 *)(VAR69 + 12);
                        VAR92->VAR93 = 0;
                        int VAR94 = FUN18(VAR69, VAR52 + 12);
                        FUN3("", VAR94);
                        VAR92->VAR93 = VAR94;
                    }
                    memcpy(VAR53, VAR68, VAR50);
                }
            }
        }
        ++VAR2->VAR23.VAR95;
        FUN3("", VAR39);
        FUN22(VAR2, VAR38, VAR39, 1, (VAR13 *)VAR37);
        if (!VAR2->VAR20)
        {
            VAR2->VAR20 = VAR38;
            VAR2->VAR21 = VAR40;
            VAR2->VAR16 = 0;
        }
        else
        {
            FUN24(VAR38);
        }
    }
    else
    {
        FUN3("");
    }
    return 1;
}