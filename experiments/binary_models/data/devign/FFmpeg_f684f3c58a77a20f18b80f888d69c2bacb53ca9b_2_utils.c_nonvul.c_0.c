VAR1 *FUN1(int VAR2, int VAR3, enum PixelFormat VAR4, int VAR5, int VAR6, enum PixelFormat VAR7, int VAR8, VAR9 *VAR10, VAR9 *VAR11, const double *VAR12)
{
    VAR1 *VAR13;
    int VAR14;
    int VAR15, VAR16;
    int VAR17;
    int VAR18, VAR19;
    SwsFilter VAR20 = {NULL, NULL, NULL, NULL};
    if (VAR8 & VAR21)
        VAR22 volatile(""
                         :
                         :
                         : "");
    VAR8 &= ~(VAR21 | VAR23 | VAR24 | VAR25 | VAR26);
    VAR8 |= FUN2();
    if (!VAR27)
        FUN3(VAR8);
    VAR17 = (VAR2 == VAR5 && VAR3 == VAR6);
    VAR18 = FUN4(&VAR4);
    VAR19 = FUN4(&VAR7);
    if (!FUN5(VAR4))
    {
        FUN6(NULL, VAR28, "", FUN7(VAR4));
        return NULL;
    }
    if (!FUN8(VAR7))
    {
        FUN6(NULL, VAR28, "", FUN7(VAR7));
        return NULL;
    }
    VAR14 = VAR8 & (VAR29 | VAR30 | VAR31 | VAR32 | VAR33 | VAR34 | VAR35 | VAR36 | VAR37 | VAR38 | VAR39);
    if (!VAR14 || (VAR14 & (VAR14 - 1)))
    {
        FUN6(NULL, VAR28, "");
        return NULL;
    }
    if (VAR2 < 4 || VAR3 < 1 || VAR5 < 8 || VAR6 < 1)
    {
        FUN6(NULL, VAR28, "", VAR2, VAR3, VAR5, VAR6);
        return NULL;
    }
    if (VAR2 > VAR40 || VAR5 > VAR40)
    {
        FUN6(NULL, VAR28, "" FUN9(VAR40) "");
        return NULL;
    }
    if (!VAR11)
        VAR11 = &VAR20;
    if (!VAR10)
        VAR10 = &VAR20;
    FUN10(NULL, VAR13, sizeof(VAR1), VAR41);
    VAR13->VAR42 = &VAR43;
    VAR13->VAR2 = VAR2;
    VAR13->VAR3 = VAR3;
    VAR13->VAR5 = VAR5;
    VAR13->VAR6 = VAR6;
    VAR13->VAR44 = ((VAR2 << 16) + (VAR5 >> 1)) / VAR5;
    VAR13->VAR45 = ((VAR3 << 16) + (VAR6 >> 1)) / VAR6;
    VAR13->VAR8 = VAR8;
    VAR13->VAR7 = VAR7;
    VAR13->VAR4 = VAR4;
    VAR13->VAR46 = FUN11(&VAR47[VAR7]);
    VAR13->VAR48 = FUN11(&VAR47[VAR4]);
    VAR13->VAR49 = 4 * 0x0001000100010001ULL;
    VAR15 = (VAR10->VAR50 && VAR10->VAR50->VAR51 > 1) || (VAR10->VAR52 && VAR10->VAR52->VAR51 > 1) || (VAR11->VAR50 && VAR11->VAR50->VAR51 > 1) || (VAR11->VAR52 && VAR11->VAR52->VAR51 > 1);
    VAR16 = (VAR10->VAR53 && VAR10->VAR53->VAR51 > 1) || (VAR10->VAR54 && VAR10->VAR54->VAR51 > 1) || (VAR11->VAR53 && VAR11->VAR53->VAR51 > 1) || (VAR11->VAR54 && VAR11->VAR54->VAR51 > 1);
    FUN12(&VAR13->VAR55, &VAR13->VAR56, VAR4);
    FUN12(&VAR13->VAR57, &VAR13->VAR58, VAR7);
    if (FUN13(VAR7) && !(VAR8 & VAR59))
        VAR13->VAR57 = 1;
    VAR13->VAR60 = (VAR8 & VAR61) >> VAR62;
    VAR13->VAR56 += VAR13->VAR60;
    if (FUN13(VAR4) && !(VAR8 & VAR63) && VAR4 != VAR64 && VAR4 != VAR65 && VAR4 != VAR66 && VAR4 != VAR67 && VAR4 != VAR68 && VAR4 != VAR69 && ((VAR5 >> VAR13->VAR57) <= (VAR2 >> 1) || (VAR8 & (VAR32 | VAR29))))
        VAR13->VAR55 = 1;
    if (VAR12)
    {
        VAR13->VAR12[0] = VAR12[0];
        VAR13->VAR12[1] = VAR12[1];
    }
    else
    {
        VAR13->VAR12[0] = VAR13->VAR12[1] = VAR70;
    }
    VAR13->VAR71 = -((-VAR2) >> VAR13->VAR55);
    VAR13->VAR72 = -((-VAR3) >> VAR13->VAR56);
    VAR13->VAR73 = -((-VAR5) >> VAR13->VAR57);
    VAR13->VAR74 = -((-VAR6) >> VAR13->VAR58);
    FUN14(VAR13, VAR75[VAR76], VAR18, VAR75[VAR76], VAR19, 0, 1 << 16, 1 << 16);
    if (VAR17 && !VAR16 && !VAR15 && (VAR18 == VAR19 || FUN13(VAR7)))
    {
        FUN15(VAR13);
        if (VAR13->VAR77)
        {
            if (VAR8 & VAR78)
                FUN6(VAR13, VAR79, "", FUN7(VAR4), FUN7(VAR7));
            return VAR13;
        }
    }
    if (VAR8 & VAR23)
    {
        VAR13->VAR80 = (VAR5 >= VAR2 && (VAR5 & 31) == 0 && (VAR2 & 15) == 0) ? 1 : 0;
        if (!VAR13->VAR80 && VAR5 >= VAR2 && (VAR2 & 15) == 0 && (VAR8 & VAR32))
        {
            if (VAR8 & VAR78)
                FUN6(VAR13, VAR79, "");
        }
        if (VAR16)
            VAR13->VAR80 = 0;
    }
    else
        VAR13->VAR80 = 0;
    VAR13->VAR81 = ((VAR13->VAR71 << 16) + (VAR13->VAR73 >> 1)) / VAR13->VAR73;
    VAR13->VAR82 = ((VAR13->VAR72 << 16) + (VAR13->VAR74 >> 1)) / VAR13->VAR74;
    if (VAR8 & VAR32)
    {
        if (VAR13->VAR80)
        {
            VAR13->VAR44 += 20;
            VAR13->VAR81 += 20;
        }
        else if (VAR8 & VAR21)
        {
            VAR13->VAR44 = ((VAR2 - 2) << 16) / (VAR5 - 2) - 20;
            VAR13->VAR81 = ((VAR13->VAR71 - 2) << 16) / (VAR13->VAR73 - 2) - 20;
        }
    }
    {
        if (VAR13->VAR80 && (VAR8 & VAR32))
        {
            VAR13->VAR83 = FUN16(VAR5, VAR13->VAR44, NULL, NULL, NULL, 8);
            VAR13->VAR84 = FUN16(VAR13->VAR73, VAR13->VAR81, NULL, NULL, NULL, 4);
            VAR13->VAR85 = FUN17(NULL, VAR13->VAR83, VAR86 | VAR87, VAR88 | VAR89, 0, 0);
            VAR13->VAR90 = FUN17(NULL, VAR13->VAR84, VAR86 | VAR87, VAR88 | VAR89, 0, 0);
            VAR13->VAR85 = FUN18(NULL, VAR13->VAR83, VAR91, VAR92);
            VAR13->VAR90 = FUN18(NULL, VAR13->VAR84, VAR91, VAR92);
            VAR13->VAR85 = FUN19(VAR13->VAR83);
            VAR13->VAR90 = FUN19(VAR13->VAR84);
            if (!VAR13->VAR85 || !VAR13->VAR90)
                goto VAR41;
            FUN10(VAR13, VAR13->VAR93, (VAR5 / 8 + 8) * sizeof(VAR94), VAR41);
            FUN10(VAR13, VAR13->VAR95, (VAR13->VAR73 / 4 + 8) * sizeof(VAR94), VAR41);
            FUN10(VAR13, VAR13->VAR96, (VAR5 / 2 / 8 + 8) * sizeof(VAR97), VAR41);
            FUN10(VAR13, VAR13->VAR98, (VAR13->VAR73 / 2 / 4 + 8) * sizeof(VAR97), VAR41);
            FUN16(VAR5, VAR13->VAR44, VAR13->VAR85, VAR13->VAR93, VAR13->VAR96, 8);
            FUN16(VAR13->VAR73, VAR13->VAR81, VAR13->VAR90, VAR13->VAR95, VAR13->VAR98, 4);
            FUN20(VAR13->VAR85, VAR13->VAR83, VAR99 | VAR86);
            FUN20(VAR13->VAR90, VAR13->VAR84, VAR99 | VAR86);
        }
        else
        {
            const int VAR100 = (VAR8 & VAR21) ? 4 : (VAR8 & VAR25) ? 8
                                                                                                    : 1;
            if (FUN21(&VAR13->VAR93, &VAR13->VAR96, &VAR13->VAR101, VAR13->VAR44, VAR2, VAR5, VAR100, 1 << 14, (VAR8 & VAR39) ? (VAR8 | VAR33) : VAR8, VAR10->VAR53, VAR11->VAR53, VAR13->VAR12) < 0)
                goto VAR41;
            if (FUN21(&VAR13->VAR95, &VAR13->VAR98, &VAR13->VAR102, VAR13->VAR81, VAR13->VAR71, VAR13->VAR73, VAR100, 1 << 14, (VAR8 & VAR39) ? (VAR8 | VAR31) : VAR8, VAR10->VAR54, VAR11->VAR54, VAR13->VAR12) < 0)
                goto VAR41;
        }
    }
    {
        const int VAR100 = (VAR8 & VAR21) && (VAR8 & VAR103) ? 2 : (VAR8 & VAR25) ? 8
                                                                                                                              : 1;
        if (FUN21(&VAR13->VAR104, &VAR13->VAR105, &VAR13->VAR106, VAR13->VAR45, VAR3, VAR6, VAR100, (1 << 12), (VAR8 & VAR39) ? (VAR8 | VAR33) : VAR8, VAR10->VAR50, VAR11->VAR50, VAR13->VAR12) < 0)
            goto VAR41;
        if (FUN21(&VAR13->VAR107, &VAR13->VAR108, &VAR13->VAR109, VAR13->VAR82, VAR13->VAR72, VAR13->VAR74, VAR100, (1 << 12), (VAR8 & VAR39) ? (VAR8 | VAR31) : VAR8, VAR10->VAR52, VAR11->VAR52, VAR13->VAR12) < 0)
            goto VAR41;
        FUN22(VAR13, VAR13->VAR110, sizeof(vector signed short) * VAR13->VAR106 * VAR13->VAR6, VAR41);
        FUN22(VAR13, VAR13->VAR111, sizeof(vector signed short) * VAR13->VAR109 * VAR13->VAR74, VAR41);
        for (VAR14 = 0; VAR14 < VAR13->VAR106 * VAR13->VAR6; VAR14++)
        {
            int VAR112;
            short *VAR113 = (short *)&VAR13->VAR110[VAR14];
            for (VAR112 = 0; VAR112 < 8; VAR112++)
                VAR113[VAR112] = VAR13->VAR104[VAR14];
        }
        for (VAR14 = 0; VAR14 < VAR13->VAR109 * VAR13->VAR74; VAR14++)
        {
            int VAR112;
            short *VAR113 = (short *)&VAR13->VAR111[VAR14];
            for (VAR112 = 0; VAR112 < 8; VAR112++)
                VAR113[VAR112] = VAR13->VAR107[VAR14];
        }
    }
    VAR13->VAR114 = VAR13->VAR106;
    VAR13->VAR115 = VAR13->VAR109;
    for (VAR14 = 0; VAR14 < VAR6; VAR14++)
    {
        int VAR116 = VAR14 * VAR13->VAR74 / VAR6;
        int VAR117 = FUN23(VAR13->VAR105[VAR14] + VAR13->VAR106 - 1, ((VAR13->VAR108[VAR116] + VAR13->VAR109 - 1) << VAR13->VAR56));
        VAR117 >>= VAR13->VAR56;
        VAR117 <<= VAR13->VAR56;
        if (VAR13->VAR105[VAR14] + VAR13->VAR114 < VAR117)
            VAR13->VAR114 = VAR117 - VAR13->VAR105[VAR14];
        if (VAR13->VAR108[VAR116] + VAR13->VAR115 < (VAR117 >> VAR13->VAR56))
            VAR13->VAR115 = (VAR117 >> VAR13->VAR56) - VAR13->VAR108[VAR116];
    }
    FUN22(VAR13, VAR13->VAR118, VAR13->VAR114 * 2 * sizeof(VAR94 *), VAR41);
    FUN22(VAR13, VAR13->VAR119, VAR13->VAR115 * 2 * sizeof(VAR94 *), VAR41);
    if (VAR120 && FUN24(VAR13->VAR4) && FUN24(VAR13->VAR7))
        FUN10(VAR13, VAR13->VAR121, VAR13->VAR114 * 2 * sizeof(VAR94 *), VAR41);
    for (VAR14 = 0; VAR14 < VAR13->VAR114; VAR14++)
    {
        FUN10(VAR13, VAR13->VAR118[VAR14 + VAR13->VAR114], VAR122 + 1, VAR41);
        VAR13->VAR118[VAR14] = VAR13->VAR118[VAR14 + VAR13->VAR114];
    }
    for (VAR14 = 0; VAR14 < VAR13->VAR115; VAR14++)
    {
        FUN22(VAR13, VAR13->VAR119[VAR14 + VAR13->VAR115], (VAR122 + 1) * 2, VAR41);
        VAR13->VAR119[VAR14] = VAR13->VAR119[VAR14 + VAR13->VAR115];
    }
    if (VAR120 && VAR13->VAR121)
        for (VAR14 = 0; VAR14 < VAR13->VAR114; VAR14++)
        {
            FUN10(VAR13, VAR13->VAR121[VAR14 + VAR13->VAR114], VAR122 + 1, VAR41);
            VAR13->VAR121[VAR14] = VAR13->VAR121[VAR14 + VAR13->VAR114];
        }
    for (VAR14 = 0; VAR14 < VAR13->VAR115; VAR14++)
        memset(VAR13->VAR119[VAR14], 64, (VAR122 + 1) * 2);
    assert(2 * VAR40 == VAR122);
    assert(VAR13->VAR74 <= VAR6);
    if (VAR8 & VAR78)
    {
        if (VAR8 & VAR32)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR31)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR33)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR34)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR29)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR30)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR39)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR35)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR37)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR36)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR38)
            FUN6(VAR13, VAR79, "");
        else
            FUN6(VAR13, VAR79, "");
        FUN6(VAR13, VAR79, "", FUN7(VAR4), VAR7 == VAR123 || VAR7 == VAR124 || VAR7 == VAR125 || VAR7 == VAR126 || VAR7 == VAR127 || VAR7 == VAR128 ? "" : "", "", FUN7(VAR7));
        if (VAR8 & VAR23)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR24)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR21)
            FUN6(VAR13, VAR79, "");
        else if (VAR8 & VAR25)
            FUN6(VAR13, VAR79, "");
        else
            FUN6(VAR13, VAR79, "");
        if (VAR8 & VAR21)
        {
            if (VAR13->VAR80 && (VAR8 & VAR32))
                FUN6(VAR13, VAR129, "");
            else
            {
                if (VAR13->VAR101 == 4)
                    FUN6(VAR13, VAR129, "");
                else if (VAR13->VAR101 == 8)
                    FUN6(VAR13, VAR129, "");
                else
                    FUN6(VAR13, VAR129, "");
                if (VAR13->VAR102 == 4)
                    FUN6(VAR13, VAR129, "");
                else if (VAR13->VAR102 == 8)
                    FUN6(VAR13, VAR129, "");
                else
                    FUN6(VAR13, VAR129, "");
            }
        }
        else
        {
            FUN6(VAR13, VAR129, "");
            if (VAR8 & VAR32)
                FUN6(VAR13, VAR129, "");
            else
                FUN6(VAR13, VAR129, "");
        }
        if (FUN25(VAR7))
        {
            if (VAR13->VAR106 == 1)
                FUN6(VAR13, VAR129, ""VAR130\"", (VAR8 & VAR21) ? "" : "");
            else
                FUN6(VAR13, VAR129, "", (VAR8 & VAR21) ? "" : "");
        }
        else
        {
            if (VAR13->VAR106 == 1 && VAR13->VAR109 == 2)
                FUN6(VAR13, VAR129, ""VAR130\""
                                          "",
                       (VAR8 & VAR21) ? "" : "");
            else if (VAR13->VAR106 == 2 && VAR13->VAR109 == 2)
                FUN6(VAR13, VAR129, "", (VAR8 & VAR21) ? "" : "");
            else
                FUN6(VAR13, VAR129, "", (VAR8 & VAR21) ? "" : "");
        }
        if (VAR7 == VAR131)
            FUN6(VAR13, VAR129, "", (VAR8 & VAR23) ? "" : ((VAR8 & VAR21) ? "" : ""));
        else if (VAR7 == VAR132)
            FUN6(VAR13, VAR129, "", (VAR8 & VAR21) ? "" : "");
        else if (VAR7 == VAR124)
            FUN6(VAR13, VAR129, "", (VAR8 & VAR21) ? "" : "");
        else if (VAR7 == VAR123)
            FUN6(VAR13, VAR129, "", (VAR8 & VAR21) ? "" : "");
        else if (VAR7 == VAR125 || VAR7 == VAR126 || VAR7 == VAR127 || VAR7 == VAR128)
            FUN6(VAR13, VAR129, "", (VAR8 & VAR21) ? "" : "");
        FUN6(VAR13, VAR129, "", VAR2, VAR3, VAR5, VAR6);
        FUN6(VAR13, VAR133, "", VAR13->VAR2, VAR13->VAR3, VAR13->VAR5, VAR13->VAR6, VAR13->VAR44, VAR13->VAR45);
        FUN6(VAR13, VAR133, "", VAR13->VAR71, VAR13->VAR72, VAR13->VAR73, VAR13->VAR74, VAR13->VAR81, VAR13->VAR82);
    }
    VAR13->VAR77 = FUN26(VAR13);
    return VAR13;
VAR41:
    FUN27(VAR13);
    return NULL;
}