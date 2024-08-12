int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6;
    int VAR7, VAR8;
    int VAR9;
    SwsFilter VAR10 = {NULL, NULL, NULL, NULL};
    int VAR11 = VAR2->VAR11;
    int VAR12 = VAR2->VAR12;
    int VAR13 = VAR2->VAR13;
    int VAR14 = VAR2->VAR14;
    int VAR15 = FUN2(VAR13 * sizeof(VAR16) + 16, 16), VAR17 = VAR15 >> 1;
    int VAR18, VAR19;
    enum PixelFormat VAR20 = VAR2->VAR20;
    enum PixelFormat VAR21 = VAR2->VAR21;
    VAR19 = FUN3();
    VAR18 = VAR2->VAR18;
    FUN4();
    if (!VAR22)
        FUN5();
    VAR9 = (VAR11 == VAR13 && VAR12 == VAR14);
    if (!FUN6(VAR20))
    {
        FUN7(VAR2, VAR23, "", FUN8(VAR20));
        return FUN9(VAR24);
    }
    if (!FUN10(VAR21))
    {
        FUN7(VAR2, VAR23, "", FUN8(VAR21));
        return FUN9(VAR24);
    }
    VAR6 = VAR18 & (VAR25 | VAR26 | VAR27 | VAR28 | VAR29 | VAR30 | VAR31 | VAR32 | VAR33 | VAR34 | VAR35);
    if (!VAR6 || (VAR6 & (VAR6 - 1)))
    {
        FUN7(VAR2, VAR23, "");
        return FUN9(VAR24);
    }
    if (VAR11 < 4 || VAR12 < 1 || VAR13 < 8 || VAR14 < 1)
    {
        FUN7(VAR2, VAR23, "", VAR11, VAR12, VAR13, VAR14);
        return FUN9(VAR24);
    }
    if (!VAR5)
        VAR5 = &VAR10;
    if (!VAR4)
        VAR4 = &VAR10;
    VAR2->VAR36 = ((VAR11 << 16) + (VAR13 >> 1)) / VAR13;
    VAR2->VAR37 = ((VAR12 << 16) + (VAR14 >> 1)) / VAR14;
    VAR2->VAR38 = FUN11(&VAR39[VAR21]);
    VAR2->VAR40 = FUN11(&VAR39[VAR20]);
    VAR2->VAR41 = 4 * 0x0001000100010001ULL;
    VAR7 = (VAR4->VAR42 && VAR4->VAR42->VAR43 > 1) || (VAR4->VAR44 && VAR4->VAR44->VAR43 > 1) || (VAR5->VAR42 && VAR5->VAR42->VAR43 > 1) || (VAR5->VAR44 && VAR5->VAR44->VAR43 > 1);
    VAR8 = (VAR4->VAR45 && VAR4->VAR45->VAR43 > 1) || (VAR4->VAR46 && VAR4->VAR46->VAR43 > 1) || (VAR5->VAR45 && VAR5->VAR45->VAR43 > 1) || (VAR5->VAR46 && VAR5->VAR46->VAR43 > 1);
    FUN12(&VAR2->VAR47, &VAR2->VAR48, VAR20);
    FUN12(&VAR2->VAR49, &VAR2->VAR50, VAR21);
    if (VAR18 & VAR51 && VAR21 != VAR52 && VAR21 != VAR53 && VAR21 != VAR54 && VAR21 != VAR55 && VAR21 != VAR56 && VAR21 != VAR57)
    {
        FUN7(VAR2, VAR23, "", FUN8(VAR21));
        VAR18 &= ~VAR51;
        VAR2->VAR18 = VAR18;
    }
    if (FUN13(VAR21) && !(VAR18 & VAR51))
        VAR2->VAR49 = 1;
    VAR2->VAR58 = (VAR18 & VAR59) >> VAR60;
    VAR2->VAR48 += VAR2->VAR58;
    if (FUN13(VAR20) && !(VAR18 & VAR61) && VAR20 != VAR62 && VAR20 != VAR63 && VAR20 != VAR64 && VAR20 != VAR65 && VAR20 != VAR66 && VAR20 != VAR67 && ((VAR13 >> VAR2->VAR49) <= (VAR11 >> 1) || (VAR18 & VAR28)))
        VAR2->VAR47 = 1;
    VAR2->VAR68 = -((-VAR11) >> VAR2->VAR47);
    VAR2->VAR69 = -((-VAR12) >> VAR2->VAR48);
    VAR2->VAR70 = -((-VAR13) >> VAR2->VAR49);
    VAR2->VAR71 = -((-VAR14) >> VAR2->VAR50);
    if (VAR9 && !VAR8 && !VAR7 && (VAR2->VAR72 == VAR2->VAR73 || FUN13(VAR21)))
    {
        FUN14(VAR2);
        if (VAR2->VAR74)
        {
            if (VAR18 & VAR75)
                FUN7(VAR2, VAR76, "", FUN8(VAR20), FUN8(VAR21));
            return 0;
        }
    }
    VAR2->VAR77 = FUN15(VAR39[VAR20].VAR78[0].VAR79, VAR39[VAR21].VAR78[0].VAR79) >= 8 ? 16 : 8;
    if (VAR2->VAR77 == 16)
        VAR15 <<= 1;
    FUN16(VAR2, VAR2->VAR80, FUN2(VAR11, 16) * 2 * VAR2->VAR77 >> 3, VAR81);
    if (VAR82 && VAR19 & VAR83 && VAR2->VAR77 == 8)
    {
        VAR2->VAR84 = (VAR13 >= VAR11 && (VAR13 & 31) == 0 && (VAR11 & 15) == 0) ? 1 : 0;
        if (!VAR2->VAR84 && VAR13 >= VAR11 && (VAR11 & 15) == 0 && (VAR18 & VAR28))
        {
            if (VAR18 & VAR75)
                FUN7(VAR2, VAR76, "");
        }
        if (VAR8)
            VAR2->VAR84 = 0;
    }
    else
        VAR2->VAR84 = 0;
    VAR2->VAR85 = ((VAR2->VAR68 << 16) + (VAR2->VAR70 >> 1)) / VAR2->VAR70;
    VAR2->VAR86 = ((VAR2->VAR69 << 16) + (VAR2->VAR71 >> 1)) / VAR2->VAR71;
    if (VAR18 & VAR28)
    {
        if (VAR2->VAR84)
        {
            VAR2->VAR36 += 20;
            VAR2->VAR85 += 20;
        }
        else if (VAR87 && VAR19 & VAR88)
        {
            VAR2->VAR36 = ((VAR11 - 2) << 16) / (VAR13 - 2) - 20;
            VAR2->VAR85 = ((VAR2->VAR68 - 2) << 16) / (VAR2->VAR70 - 2) - 20;
        }
    }
    {
        if (VAR2->VAR84 && (VAR18 & VAR28))
        {
            VAR2->VAR89 = FUN17(VAR13, VAR2->VAR36, NULL, NULL, NULL, 8);
            VAR2->VAR90 = FUN17(VAR2->VAR70, VAR2->VAR85, NULL, NULL, NULL, 4);
            VAR2->VAR91 = FUN18(NULL, VAR2->VAR89, VAR92 | VAR93, VAR94 | VAR95, -1, 0);
            VAR2->VAR96 = FUN18(NULL, VAR2->VAR90, VAR92 | VAR93, VAR94 | VAR95, -1, 0);
            VAR2->VAR91 = FUN19(NULL, VAR2->VAR89, VAR97, VAR98);
            VAR2->VAR96 = FUN19(NULL, VAR2->VAR90, VAR97, VAR98);
            VAR2->VAR91 = FUN20(VAR2->VAR89);
            VAR2->VAR96 = FUN20(VAR2->VAR90);
            if (!VAR2->VAR91 || !VAR2->VAR96)
                return FUN9(VAR99);
            FUN21(VAR2, VAR2->VAR100, (VAR13 / 8 + 8) * sizeof(VAR16), VAR81);
            FUN21(VAR2, VAR2->VAR101, (VAR2->VAR70 / 4 + 8) * sizeof(VAR16), VAR81);
            FUN21(VAR2, VAR2->VAR102, (VAR13 / 2 / 8 + 8) * sizeof(VAR103), VAR81);
            FUN21(VAR2, VAR2->VAR104, (VAR2->VAR70 / 2 / 4 + 8) * sizeof(VAR103), VAR81);
            FUN17(VAR13, VAR2->VAR36, VAR2->VAR91, VAR2->VAR100, VAR2->VAR102, 8);
            FUN17(VAR2->VAR70, VAR2->VAR85, VAR2->VAR96, VAR2->VAR101, VAR2->VAR104, 4);
            FUN22(VAR2->VAR91, VAR2->VAR89, VAR105 | VAR92);
            FUN22(VAR2->VAR96, VAR2->VAR90, VAR105 | VAR92);
        }
        else
        {
            const int VAR106 = (VAR87 && VAR19 & VAR88) ? 4 : (VAR107 && VAR19 & VAR108) ? 8
                                                                                                                                      : 1;
            if (FUN23(&VAR2->VAR100, &VAR2->VAR102, &VAR2->VAR109, VAR2->VAR36, VAR11, VAR13, VAR106, 1 << 14, (VAR18 & VAR35) ? (VAR18 | VAR29) : VAR18, VAR19, VAR4->VAR45, VAR5->VAR45, VAR2->VAR110) < 0)
                goto VAR81;
            if (FUN23(&VAR2->VAR101, &VAR2->VAR104, &VAR2->VAR111, VAR2->VAR85, VAR2->VAR68, VAR2->VAR70, VAR106, 1 << 14, (VAR18 & VAR35) ? (VAR18 | VAR27) : VAR18, VAR19, VAR4->VAR46, VAR5->VAR46, VAR2->VAR110) < 0)
                goto VAR81;
        }
    }
    {
        const int VAR106 = (VAR87 && VAR19 & VAR88) && (VAR18 & VAR112) ? 2 : (VAR107 && VAR19 & VAR108) ? 8
                                                                                                                                                                : 1;
        if (FUN23(&VAR2->VAR113, &VAR2->VAR114, &VAR2->VAR115, VAR2->VAR37, VAR12, VAR14, VAR106, (1 << 12), (VAR18 & VAR35) ? (VAR18 | VAR29) : VAR18, VAR19, VAR4->VAR42, VAR5->VAR42, VAR2->VAR110) < 0)
            goto VAR81;
        if (FUN23(&VAR2->VAR116, &VAR2->VAR117, &VAR2->VAR118, VAR2->VAR86, VAR2->VAR69, VAR2->VAR71, VAR106, (1 << 12), (VAR18 & VAR35) ? (VAR18 | VAR27) : VAR18, VAR19, VAR4->VAR44, VAR5->VAR44, VAR2->VAR110) < 0)
            goto VAR81;
        FUN16(VAR2, VAR2->VAR119, sizeof(vector signed short) * VAR2->VAR115 * VAR2->VAR14, VAR81);
        FUN16(VAR2, VAR2->VAR120, sizeof(vector signed short) * VAR2->VAR118 * VAR2->VAR71, VAR81);
        for (VAR6 = 0; VAR6 < VAR2->VAR115 * VAR2->VAR14; VAR6++)
        {
            int VAR121;
            short *VAR122 = (short *)&VAR2->VAR119[VAR6];
            for (VAR121 = 0; VAR121 < 8; VAR121++)
                VAR122[VAR121] = VAR2->VAR113[VAR6];
        }
        for (VAR6 = 0; VAR6 < VAR2->VAR118 * VAR2->VAR71; VAR6++)
        {
            int VAR121;
            short *VAR122 = (short *)&VAR2->VAR120[VAR6];
            for (VAR121 = 0; VAR121 < 8; VAR121++)
                VAR122[VAR121] = VAR2->VAR116[VAR6];
        }
    }
    VAR2->VAR123 = VAR2->VAR115;
    VAR2->VAR124 = VAR2->VAR118;
    for (VAR6 = 0; VAR6 < VAR14; VAR6++)
    {
        int VAR125 = VAR6 * VAR2->VAR71 / VAR14;
        int VAR126 = FUN15(VAR2->VAR114[VAR6] + VAR2->VAR115 - 1, ((VAR2->VAR117[VAR125] + VAR2->VAR118 - 1) << VAR2->VAR48));
        VAR126 >>= VAR2->VAR48;
        VAR126 <<= VAR2->VAR48;
        if (VAR2->VAR114[VAR6] + VAR2->VAR123 < VAR126)
            VAR2->VAR123 = VAR126 - VAR2->VAR114[VAR6];
        if (VAR2->VAR117[VAR125] + VAR2->VAR124 < (VAR126 >> VAR2->VAR48))
            VAR2->VAR124 = (VAR126 >> VAR2->VAR48) - VAR2->VAR117[VAR125];
    }
    FUN16(VAR2, VAR2->VAR127, VAR2->VAR123 * 2 * sizeof(VAR16 *), VAR81);
    FUN16(VAR2, VAR2->VAR128, VAR2->VAR124 * 2 * sizeof(VAR16 *), VAR81);
    FUN16(VAR2, VAR2->VAR129, VAR2->VAR124 * 2 * sizeof(VAR16 *), VAR81);
    if (VAR130 && FUN24(VAR2->VAR20) && FUN24(VAR2->VAR21))
        FUN21(VAR2, VAR2->VAR131, VAR2->VAR123 * 2 * sizeof(VAR16 *), VAR81);
    for (VAR6 = 0; VAR6 < VAR2->VAR123; VAR6++)
    {
        FUN21(VAR2, VAR2->VAR127[VAR6 + VAR2->VAR123], VAR15 + 1, VAR81);
        VAR2->VAR127[VAR6] = VAR2->VAR127[VAR6 + VAR2->VAR123];
    }
    VAR2->VAR132 = VAR17;
    VAR2->VAR133 = VAR15;
    for (VAR6 = 0; VAR6 < VAR2->VAR124; VAR6++)
    {
        FUN16(VAR2, VAR2->VAR128[VAR6 + VAR2->VAR124], VAR15 * 2 + 1, VAR81);
        VAR2->VAR128[VAR6] = VAR2->VAR128[VAR6 + VAR2->VAR124];
        VAR2->VAR129[VAR6] = VAR2->VAR129[VAR6 + VAR2->VAR124] = VAR2->VAR128[VAR6] + (VAR15 >> 1);
    }
    if (VAR130 && VAR2->VAR131)
        for (VAR6 = 0; VAR6 < VAR2->VAR123; VAR6++)
        {
            FUN21(VAR2, VAR2->VAR131[VAR6 + VAR2->VAR123], VAR15 + 1, VAR81);
            VAR2->VAR131[VAR6] = VAR2->VAR131[VAR6 + VAR2->VAR123];
        }
    for (VAR6 = 0; VAR6 < VAR2->VAR124; VAR6++)
        memset(VAR2->VAR128[VAR6], 64, VAR15 * 2 + 1);
    assert(VAR2->VAR71 <= VAR14);
    if (VAR18 & VAR75)
    {
        if (VAR18 & VAR28)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR27)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR29)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR30)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR25)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR26)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR35)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR31)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR33)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR32)
            FUN7(VAR2, VAR76, "");
        else if (VAR18 & VAR34)
            FUN7(VAR2, VAR76, "");
        else
            FUN7(VAR2, VAR76, "");
        FUN7(VAR2, VAR76, "", FUN8(VAR20), VAR21 == VAR134 || VAR21 == VAR135 || VAR21 == VAR136 || VAR21 == VAR137 || VAR21 == VAR138 || VAR21 == VAR139 ? "" : "", "", FUN8(VAR21));
        if (VAR82 && VAR19 & VAR83)
            FUN7(VAR2, VAR76, "");
        else if (VAR140 && VAR19 & VAR141)
            FUN7(VAR2, VAR76, "");
        else if (VAR87 && VAR19 & VAR88)
            FUN7(VAR2, VAR76, "");
        else if (VAR107 && VAR19 & VAR108)
            FUN7(VAR2, VAR76, "");
        else
            FUN7(VAR2, VAR76, "");
        if (VAR87 && VAR19 & VAR88)
        {
            if (VAR2->VAR84 && (VAR18 & VAR28))
                FUN7(VAR2, VAR142, "");
            else
            {
                if (VAR2->VAR109 == 4)
                    FUN7(VAR2, VAR142, "");
                else if (VAR2->VAR109 == 8)
                    FUN7(VAR2, VAR142, "");
                else
                    FUN7(VAR2, VAR142, "");
                if (VAR2->VAR111 == 4)
                    FUN7(VAR2, VAR142, "");
                else if (VAR2->VAR111 == 8)
                    FUN7(VAR2, VAR142, "");
                else
                    FUN7(VAR2, VAR142, "");
            }
        }
        else
        {
            FUN7(VAR2, VAR142, "");
            if (VAR18 & VAR28)
                FUN7(VAR2, VAR142, "");
            else
                FUN7(VAR2, VAR142, "");
        }
        if (FUN25(VAR21))
        {
            if (VAR2->VAR115 == 1)
                FUN7(VAR2, VAR142, ""VAR143\"", (VAR87 && VAR19 & VAR88) ? "" : "");
            else
                FUN7(VAR2, VAR142, "", (VAR87 && VAR19 & VAR88) ? "" : "");
        }
        else
        {
            if (VAR2->VAR115 == 1 && VAR2->VAR118 == 2)
                FUN7(VAR2, VAR142, ""VAR143\""
                                          "",
                       (VAR87 && VAR19 & VAR88) ? "" : "");
            else if (VAR2->VAR115 == 2 && VAR2->VAR118 == 2)
                FUN7(VAR2, VAR142, "", (VAR87 && VAR19 & VAR88) ? "" : "");
            else
                FUN7(VAR2, VAR142, "", (VAR87 && VAR19 & VAR88) ? "" : "");
        }
        if (VAR21 == VAR57)
            FUN7(VAR2, VAR142, "", (VAR82 && VAR19 & VAR83) ? "" : ((VAR87 && VAR19 & VAR88) ? "" : ""));
        else if (VAR21 == VAR144)
            FUN7(VAR2, VAR142, "", (VAR87 && VAR19 & VAR88) ? "" : "");
        else if (VAR21 == VAR135)
            FUN7(VAR2, VAR142, "", (VAR87 && VAR19 & VAR88) ? "" : "");
        else if (VAR21 == VAR134)
            FUN7(VAR2, VAR142, "", (VAR87 && VAR19 & VAR88) ? "" : "");
        else if (VAR21 == VAR136 || VAR21 == VAR137 || VAR21 == VAR138 || VAR21 == VAR139)
            FUN7(VAR2, VAR142, "", (VAR87 && VAR19 & VAR88) ? "" : "");
        FUN7(VAR2, VAR142, "", VAR11, VAR12, VAR13, VAR14);
        FUN7(VAR2, VAR145, "", VAR2->VAR11, VAR2->VAR12, VAR2->VAR13, VAR2->VAR14, VAR2->VAR36, VAR2->VAR37);
        FUN7(VAR2, VAR145, "", VAR2->VAR68, VAR2->VAR69, VAR2->VAR70, VAR2->VAR71, VAR2->VAR85, VAR2->VAR86);
    }
    VAR2->VAR74 = FUN26(VAR2);
    return 0;
VAR81:
    return -1;
}