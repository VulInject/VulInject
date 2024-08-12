static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    VAR12 **VAR13, *VAR14;
    target_ulong VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    int VAR20, VAR21 = -1;
    int VAR22;
    int VAR23;
    VAR15 = VAR4->VAR24;
    VAR17 = VAR25.VAR26 + VAR27;
    VAR10.VAR28 = VAR15;
    VAR10.VAR4 = VAR4;
    VAR10.VAR29 = VAR30;
    VAR10.VAR31 = VAR9->VAR31;
    VAR10.VAR32 = VAR33;
    VAR10.VAR34 = !VAR33 && VAR35;
    VAR10.VAR36 = VAR9->VAR37;
    VAR10.VAR38 = VAR9->VAR38;
    VAR10.VAR39 = VAR9->VAR39;
    VAR10.VAR40 = -1;
    VAR10.VAR41 = VAR9->VAR42 & (1 << VAR43) ? 1 : 0;
    VAR10.VAR44 = VAR10.VAR41 ? VAR45 : VAR46;
    VAR10.VAR47 = FUN3(VAR9, VAR9->VAR48);
    VAR10.VAR49 = !!(VAR9->VAR50 & VAR51);
    VAR10.VAR52 = VAR53;
    if ((VAR9->VAR50 & VAR54) && VAR55)
        VAR10.VAR56 = VAR55;
    else
        VAR10.VAR56 = 0;
    if ((VAR9->VAR50 & VAR57) && VAR58)
        VAR10.VAR59 = VAR58;
    else
        VAR10.VAR59 = 0;
    if ((VAR9->VAR50 & VAR60) && VAR61)
    {
        VAR10.VAR62 = VAR61;
    }
    else
    {
        VAR10.VAR62 = 0;
    }
    if ((VAR9->VAR50 & VAR63) && VAR64)
        VAR10.VAR65 = VAR66;
    else
        VAR10.VAR65 = 0;
    if ((VAR9->VAR50 & VAR67) && VAR68)
        VAR10.VAR65 |= VAR69;
    if (FUN4(VAR7->VAR65))
    {
        VAR10.VAR65 |= VAR70;
    }
    VAR64 = 1;
    VAR22 = 0;
    VAR23 = VAR4->VAR71 & VAR72;
    if (VAR23 == 0)
        VAR23 = VAR72;
    FUN5(VAR4);
    FUN6();
    while (VAR10.VAR29 == VAR30 && VAR25.VAR73 < VAR17)
    {
        if (FUN4(!FUN7(&VAR7->VAR74)))
        {
            FUN8(VAR19, &VAR7->VAR74, VAR75)
            {
                if (VAR19->VAR24 == VAR10.VAR28)
                {
                    FUN9(VAR11);
                    break;
                }
            }
        }
        if (FUN4(VAR5))
        {
            VAR20 = VAR25.VAR73 - VAR25.VAR26;
            if (VAR21 < VAR20)
            {
                VAR21++;
                while (VAR21 < VAR20)
                    VAR25.VAR76[VAR21++] = 0;
            }
            VAR25.VAR77[VAR21] = VAR10.VAR28;
            VAR25.VAR76[VAR21] = 1;
            VAR25.VAR78[VAR21] = VAR22;
        }
        FUN10("");
        FUN10("" VAR79 "", VAR10.VAR28, VAR10.VAR36, (int)VAR80);
        if (VAR22 + 1 == VAR23 && (VAR4->VAR71 & VAR81))
            FUN11();
        if (FUN4(FUN12(&VAR10)))
        {
            VAR10.VAR82 = FUN13(FUN14(VAR9, VAR10.VAR28));
        }
        else
        {
            VAR10.VAR82 = FUN14(VAR9, VAR10.VAR28);
        }
        FUN10("", VAR10.VAR82, FUN15(VAR10.VAR82), FUN16(VAR10.VAR82), FUN17(VAR10.VAR82), VAR10.VAR41 ? "" : "");
        if (FUN4(FUN18(VAR83 | VAR84)))
        {
            FUN19(VAR10.VAR28);
        }
        VAR10.VAR28 += 4;
        VAR13 = VAR9->VAR85;
        VAR22++;
        VAR14 = VAR13[FUN15(VAR10.VAR82)];
        if (FUN20(VAR14))
        {
            VAR13 = FUN21(VAR14);
            VAR14 = VAR13[FUN16(VAR10.VAR82)];
            if (FUN20(VAR14))
            {
                VAR13 = FUN21(VAR14);
                VAR14 = VAR13[FUN17(VAR10.VAR82)];
            }
        }
        if (FUN4(VAR14->VAR14 == &VAR86))
        {
            if (FUN22())
            {
                FUN23(""
                         "" VAR79 "",
                         FUN15(VAR10.VAR82), FUN16(VAR10.VAR82), FUN17(VAR10.VAR82), VAR10.VAR82, VAR10.VAR28 - 4, (int)VAR80);
            }
        }
        else
        {
            uint32_t VAR87;
            if (FUN4(VAR14->VAR88 & (VAR89 | VAR90 | VAR91) && FUN24(VAR10.VAR82)))
            {
                VAR87 = VAR14->VAR92;
            }
            else
            {
                VAR87 = VAR14->VAR93;
            }
            if (FUN4((VAR10.VAR82 & VAR87) != 0))
            {
                if (FUN22())
                {
                    FUN23(""
                             "" VAR79 "",
                             VAR10.VAR82 & VAR87, FUN15(VAR10.VAR82), FUN16(VAR10.VAR82), FUN17(VAR10.VAR82), VAR10.VAR82, VAR10.VAR28 - 4);
                }
                FUN25(VAR11, VAR94);
                break;
            }
        }
        (*(VAR14->VAR14))(&VAR10);
        VAR14->VAR95++;
        if (FUN4(VAR10.VAR65 & VAR66 && (VAR10.VAR28 <= 0x100 || VAR10.VAR28 > 0xF00) && VAR10.VAR29 != VAR96 && VAR10.VAR29 != VAR97 && VAR10.VAR29 != VAR98))
        {
            FUN26(VAR11, VAR99);
        }
        else if (FUN4(((VAR10.VAR28 & (VAR100 - 1)) == 0) || (VAR7->VAR65) || VAR101 || VAR22 >= VAR23))
        {
            break;
        }
        if (FUN27())
        {
            fprintf(VAR102, "", FUN15(VAR10.VAR82), FUN16(VAR10.VAR82), FUN17(VAR10.VAR82), VAR10.VAR82);
            FUN28(1);
        }
    }
    if (VAR4->VAR71 & VAR81)
        FUN29();
    if (VAR10.VAR29 == VAR30)
    {
        FUN30(&VAR10, 0, VAR10.VAR28);
    }
    else if (VAR10.VAR29 != VAR98)
    {
        if (FUN4(VAR7->VAR65))
        {
            FUN9(VAR11);
        }
        FUN31(0);
    }
    FUN32(VAR4, VAR22);
    *VAR25.VAR73 = VAR103;
    if (FUN4(VAR5))
    {
        VAR20 = VAR25.VAR73 - VAR25.VAR26;
        VAR21++;
        while (VAR21 <= VAR20)
            VAR25.VAR76[VAR21++] = 0;
    }
    else
    {
        VAR4->VAR104 = VAR10.VAR28 - VAR15;
        VAR4->VAR105 = VAR22;
    }
    if (FUN18(VAR106))
    {
        int VAR50;
        VAR50 = VAR9->VAR107;
        VAR50 |= VAR10.VAR41 << 16;
        FUN23("", FUN33(VAR15));
        FUN34(VAR9, VAR15, VAR10.VAR28 - VAR15, VAR50);
        FUN23("");
    }
}