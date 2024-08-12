int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6, VAR7;
    int VAR8, VAR9;
    int VAR10;
    SwsFilter VAR11 = {NULL, NULL, NULL, NULL};
    int VAR12 = VAR2->VAR12;
    int VAR13 = VAR2->VAR13;
    int VAR14 = VAR2->VAR14;
    int VAR15 = VAR2->VAR15;
    int VAR16 = FUN2(VAR14 * sizeof(VAR17) + 66, 16);
    int VAR18, VAR19;
    enum PixelFormat VAR20 = VAR2->VAR20;
    enum PixelFormat VAR21 = VAR2->VAR21;
    VAR19 = FUN3();
    VAR18 = VAR2->VAR18;
    FUN4();
    if (!VAR22)
        FUN5();
    VAR10 = (VAR12 == VAR14 && VAR13 == VAR15);
    FUN6(&VAR20);
    FUN6(&VAR21);
    if (VAR20 != VAR2->VAR20 || VAR21 != VAR2->VAR21)
    {
        FUN7(VAR2, VAR23, "");
        VAR2->VAR20 = VAR20;
        VAR2->VAR21 = VAR21;
    }
    if (!FUN8(VAR20))
    {
        FUN7(VAR2, VAR24, "", FUN9(VAR20));
        return FUN10(VAR25);
    }
    if (!FUN11(VAR21))
    {
        FUN7(VAR2, VAR24, "", FUN9(VAR21));
        return FUN10(VAR25);
    }
    VAR6 = VAR18 & (VAR26 | VAR27 | VAR28 | VAR29 | VAR30 | VAR31 | VAR32 | VAR33 | VAR34 | VAR35 | VAR36);
    if (!VAR6 || (VAR6 & (VAR6 - 1)))
    {
        FUN7(VAR2, VAR24, "", VAR6);
        return FUN10(VAR25);
    }
    if (VAR12 < 4 || VAR13 < 1 || VAR14 < 8 || VAR15 < 1)
    {
        FUN7(VAR2, VAR24, "", VAR12, VAR13, VAR14, VAR15);
        return FUN10(VAR25);
    }
    if (!VAR5)
        VAR5 = &VAR11;
    if (!VAR4)
        VAR4 = &VAR11;
    VAR2->VAR37 = ((VAR12 << 16) + (VAR14 >> 1)) / VAR14;
    VAR2->VAR38 = ((VAR13 << 16) + (VAR15 >> 1)) / VAR15;
    VAR2->VAR39 = FUN12(&VAR40[VAR21]);
    VAR2->VAR41 = FUN12(&VAR40[VAR20]);
    VAR2->VAR42 = 4 * 0x0001000100010001ULL;
    VAR8 = (VAR4->VAR43 && VAR4->VAR43->VAR44 > 1) || (VAR4->VAR45 && VAR4->VAR45->VAR44 > 1) || (VAR5->VAR43 && VAR5->VAR43->VAR44 > 1) || (VAR5->VAR45 && VAR5->VAR45->VAR44 > 1);
    VAR9 = (VAR4->VAR46 && VAR4->VAR46->VAR44 > 1) || (VAR4->VAR47 && VAR4->VAR47->VAR44 > 1) || (VAR5->VAR46 && VAR5->VAR46->VAR44 > 1) || (VAR5->VAR47 && VAR5->VAR47->VAR44 > 1);
    FUN13(&VAR2->VAR48, &VAR2->VAR49, VAR20);
    FUN13(&VAR2->VAR50, &VAR2->VAR51, VAR21);
    if (FUN14(VAR21) && !(VAR18 & VAR52))
    {
        if (VAR14 & 1)
        {
            FUN7(VAR2, VAR53, "");
            VAR18 |= VAR52;
            VAR2->VAR18 = VAR18;
        }
        else
            VAR2->VAR50 = 1;
    }
    VAR2->VAR54 = (VAR18 & VAR55) >> VAR56;
    VAR2->VAR49 += VAR2->VAR54;
    if (FUN14(VAR20) && !(VAR18 & VAR57) && VAR20 != VAR58 && VAR20 != VAR59 && VAR20 != VAR60 && VAR20 != VAR61 && VAR20 != VAR62 && VAR20 != VAR63 && ((VAR14 >> VAR2->VAR50) <= (VAR12 >> 1) || (VAR18 & VAR29)))
        VAR2->VAR48 = 1;
    VAR2->VAR64 = -((-VAR12) >> VAR2->VAR48);
    VAR2->VAR65 = -((-VAR13) >> VAR2->VAR49);
    VAR2->VAR66 = -((-VAR14) >> VAR2->VAR50);
    VAR2->VAR67 = -((-VAR15) >> VAR2->VAR51);
    if (VAR10 && !VAR9 && !VAR8 && (VAR2->VAR68 == VAR2->VAR69 || FUN14(VAR21)))
    {
        FUN15(VAR2);
        if (VAR2->VAR70)
        {
            if (VAR18 & VAR71)
                FUN7(VAR2, VAR72, "", FUN9(VAR20), FUN9(VAR21));
            return 0;
        }
    }
    VAR2->VAR73 = 1 + VAR40[VAR20].VAR74[0].VAR75;
    if (VAR2->VAR73 < 8)
        VAR2->VAR73 = 8;
    VAR2->VAR76 = 1 + VAR40[VAR21].VAR74[0].VAR75;
    if (VAR2->VAR76 < 8)
        VAR2->VAR76 = 8;
    if (FUN14(VAR20) || VAR20 == VAR77)
        VAR2->VAR73 = 16;
    if (VAR2->VAR76 == 16)
        VAR16 <<= 1;
    FUN16(VAR2, VAR2->VAR78, FUN2(VAR12 * 2 + 78, 16) * 2, VAR79);
    if (VAR80 && VAR19 & VAR81 && VAR2->VAR73 == 8 && VAR2->VAR76 <= 10)
    {
        VAR2->VAR82 = (VAR14 >= VAR12 && (VAR14 & 31) == 0 && (VAR12 & 15) == 0) ? 1 : 0;
        if (!VAR2->VAR82 && VAR14 >= VAR12 && (VAR12 & 15) == 0 && (VAR18 & VAR29))
        {
            if (VAR18 & VAR71)
                FUN7(VAR2, VAR72, "");
        }
        if (VAR9 || FUN17(VAR2->VAR20) || FUN18(VAR2->VAR20) || FUN14(VAR2->VAR20))
            VAR2->VAR82 = 0;
    }
    else
        VAR2->VAR82 = 0;
    VAR2->VAR83 = ((VAR2->VAR64 << 16) + (VAR2->VAR66 >> 1)) / VAR2->VAR66;
    VAR2->VAR84 = ((VAR2->VAR65 << 16) + (VAR2->VAR67 >> 1)) / VAR2->VAR67;
    if (VAR18 & VAR29)
    {
        if (VAR2->VAR82)
        {
            VAR2->VAR37 += 20;
            VAR2->VAR83 += 20;
        }
        else if (VAR85 && VAR19 & VAR86 && VAR2->VAR76 <= 10)
        {
            VAR2->VAR37 = ((VAR12 - 2) << 16) / (VAR14 - 2) - 20;
            VAR2->VAR83 = ((VAR2->VAR64 - 2) << 16) / (VAR2->VAR66 - 2) - 20;
        }
    }
    {
        if (VAR2->VAR82 && (VAR18 & VAR29))
        {
            VAR2->VAR87 = FUN19(VAR14, VAR2->VAR37, NULL, NULL, NULL, 8);
            VAR2->VAR88 = FUN19(VAR2->VAR66, VAR2->VAR83, NULL, NULL, NULL, 4);
            VAR2->VAR89 = FUN20(NULL, VAR2->VAR87, VAR90 | VAR91, VAR92 | VAR93, -1, 0);
            VAR2->VAR94 = FUN20(NULL, VAR2->VAR88, VAR90 | VAR91, VAR92 | VAR93, -1, 0);
            VAR2->VAR89 = FUN21(NULL, VAR2->VAR87, VAR95, VAR96);
            VAR2->VAR94 = FUN21(NULL, VAR2->VAR88, VAR95, VAR96);
            VAR2->VAR89 = FUN22(VAR2->VAR87);
            VAR2->VAR94 = FUN22(VAR2->VAR88);
            if (VAR2->VAR89 == VAR97 || VAR2->VAR94 == VAR97)
                if (!VAR2->VAR89 || !VAR2->VAR94)
                {
                    FUN7(VAR2, VAR24, "");
                    return FUN10(VAR98);
                }
            FUN23(VAR2, VAR2->VAR99, (VAR14 / 8 + 8) * sizeof(VAR17), VAR79);
            FUN23(VAR2, VAR2->VAR100, (VAR2->VAR66 / 4 + 8) * sizeof(VAR17), VAR79);
            FUN23(VAR2, VAR2->VAR101, (VAR14 / 2 / 8 + 8) * sizeof(VAR102), VAR79);
            FUN23(VAR2, VAR2->VAR103, (VAR2->VAR66 / 2 / 4 + 8) * sizeof(VAR102), VAR79);
            FUN19(VAR14, VAR2->VAR37, VAR2->VAR89, VAR2->VAR99, (VAR104 *)VAR2->VAR101, 8);
            FUN19(VAR2->VAR66, VAR2->VAR83, VAR2->VAR94, VAR2->VAR100, (VAR104 *)VAR2->VAR103, 4);
            FUN24(VAR2->VAR89, VAR2->VAR87, VAR105 | VAR90);
            FUN24(VAR2->VAR94, VAR2->VAR88, VAR105 | VAR90);
        }
        else
        {
            const int VAR106 = (VAR85 && VAR19 & VAR86) ? 4 : (VAR107 && VAR19 & VAR108) ? 8
                                                                                                                                      : 1;
            if (FUN25(&VAR2->VAR99, &VAR2->VAR101, &VAR2->VAR109, VAR2->VAR37, VAR12, VAR14, VAR106, 1 << 14, (VAR18 & VAR36) ? (VAR18 | VAR30) : VAR18, VAR19, VAR4->VAR46, VAR5->VAR46, VAR2->VAR110) < 0)
                goto VAR79;
            if (FUN25(&VAR2->VAR100, &VAR2->VAR103, &VAR2->VAR111, VAR2->VAR83, VAR2->VAR64, VAR2->VAR66, VAR106, 1 << 14, (VAR18 & VAR36) ? (VAR18 | VAR28) : VAR18, VAR19, VAR4->VAR47, VAR5->VAR47, VAR2->VAR110) < 0)
                goto VAR79;
        }
    }
    {
        const int VAR106 = (VAR85 && VAR19 & VAR86) ? 2 : (VAR107 && VAR19 & VAR108) ? 8
                                                                                                                                  : 1;
        if (FUN25(&VAR2->VAR112, &VAR2->VAR113, &VAR2->VAR114, VAR2->VAR38, VAR13, VAR15, VAR106, (1 << 12), (VAR18 & VAR36) ? (VAR18 | VAR30) : VAR18, VAR19, VAR4->VAR43, VAR5->VAR43, VAR2->VAR110) < 0)
            goto VAR79;
        if (FUN25(&VAR2->VAR115, &VAR2->VAR116, &VAR2->VAR117, VAR2->VAR84, VAR2->VAR65, VAR2->VAR67, VAR106, (1 << 12), (VAR18 & VAR36) ? (VAR18 | VAR28) : VAR18, VAR19, VAR4->VAR45, VAR5->VAR45, VAR2->VAR110) < 0)
            goto VAR79;
        FUN16(VAR2, VAR2->VAR118, sizeof(vector signed short) * VAR2->VAR114 * VAR2->VAR15, VAR79);
        FUN16(VAR2, VAR2->VAR119, sizeof(vector signed short) * VAR2->VAR117 * VAR2->VAR67, VAR79);
        for (VAR6 = 0; VAR6 < VAR2->VAR114 * VAR2->VAR15; VAR6++)
        {
            int VAR7;
            short *VAR120 = (short *)&VAR2->VAR118[VAR6];
            for (VAR7 = 0; VAR7 < 8; VAR7++)
                VAR120[VAR7] = VAR2->VAR112[VAR6];
        }
        for (VAR6 = 0; VAR6 < VAR2->VAR117 * VAR2->VAR67; VAR6++)
        {
            int VAR7;
            short *VAR120 = (short *)&VAR2->VAR119[VAR6];
            for (VAR7 = 0; VAR7 < 8; VAR7++)
                VAR120[VAR7] = VAR2->VAR115[VAR6];
        }
    }
    VAR2->VAR121 = VAR2->VAR114;
    VAR2->VAR122 = VAR2->VAR117;
    for (VAR6 = 0; VAR6 < VAR15; VAR6++)
    {
        int VAR123 = (VAR124)VAR6 * VAR2->VAR67 / VAR15;
        int VAR125 = FUN26(VAR2->VAR113[VAR6] + VAR2->VAR114 - 1, ((VAR2->VAR116[VAR123] + VAR2->VAR117 - 1) << VAR2->VAR49));
        VAR125 >>= VAR2->VAR49;
        VAR125 <<= VAR2->VAR49;
        if (VAR2->VAR113[VAR6] + VAR2->VAR121 < VAR125)
            VAR2->VAR121 = VAR125 - VAR2->VAR113[VAR6];
        if (VAR2->VAR116[VAR123] + VAR2->VAR122 < (VAR125 >> VAR2->VAR49))
            VAR2->VAR122 = (VAR125 >> VAR2->VAR49) - VAR2->VAR116[VAR123];
    }
    FUN16(VAR2, VAR2->VAR126, VAR2->VAR121 * 2 * sizeof(VAR17 *), VAR79);
    FUN16(VAR2, VAR2->VAR127, VAR2->VAR122 * 2 * sizeof(VAR17 *), VAR79);
    FUN16(VAR2, VAR2->VAR128, VAR2->VAR122 * 2 * sizeof(VAR17 *), VAR79);
    if (VAR129 && FUN27(VAR2->VAR20) && FUN27(VAR2->VAR21))
        FUN23(VAR2, VAR2->VAR130, VAR2->VAR121 * 2 * sizeof(VAR17 *), VAR79);
    for (VAR6 = 0; VAR6 < VAR2->VAR121; VAR6++)
    {
        FUN23(VAR2, VAR2->VAR126[VAR6 + VAR2->VAR121], VAR16 + 16, VAR79);
        VAR2->VAR126[VAR6] = VAR2->VAR126[VAR6 + VAR2->VAR121];
    }
    VAR2->VAR131 = (VAR16 >> 1) + 64 / (VAR2->VAR76 & ~7);
    VAR2->VAR132 = VAR16 + 16;
    for (VAR6 = 0; VAR6 < VAR2->VAR122; VAR6++)
    {
        FUN16(VAR2, VAR2->VAR127[VAR6 + VAR2->VAR122], VAR16 * 2 + 32, VAR79);
        VAR2->VAR127[VAR6] = VAR2->VAR127[VAR6 + VAR2->VAR122];
        VAR2->VAR128[VAR6] = VAR2->VAR128[VAR6 + VAR2->VAR122] = VAR2->VAR127[VAR6] + (VAR16 >> 1) + 8;
    }
    if (VAR129 && VAR2->VAR130)
        for (VAR6 = 0; VAR6 < VAR2->VAR121; VAR6++)
        {
            FUN23(VAR2, VAR2->VAR130[VAR6 + VAR2->VAR121], VAR16 + 16, VAR79);
            VAR2->VAR130[VAR6] = VAR2->VAR130[VAR6 + VAR2->VAR121];
        }
    for (VAR6 = 0; VAR6 < VAR2->VAR122; VAR6++)
        if (VAR40[VAR2->VAR21].VAR74[0].VAR75 == 15)
        {
            FUN28(VAR2->VAR76 > 10);
            for (VAR7 = 0; VAR7 < VAR16 / 2 + 1; VAR7++)
                ((VAR102 *)(VAR2->VAR127[VAR6]))[VAR7] = 1 << 18;
        }
        else
            for (VAR7 = 0; VAR7 < VAR16 + 1; VAR7++)
                ((VAR17 *)(VAR2->VAR127[VAR6]))[VAR7] = 1 << 14;
    assert(VAR2->VAR67 <= VAR15);
    if (VAR18 & VAR71)
    {
        if (VAR18 & VAR29)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR28)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR30)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR31)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR26)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR27)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR36)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR32)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR34)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR33)
            FUN7(VAR2, VAR72, "");
        else if (VAR18 & VAR35)
            FUN7(VAR2, VAR72, "");
        else
            FUN7(VAR2, VAR72, "");
        FUN7(VAR2, VAR72, "", FUN9(VAR20), VAR21 == VAR133 || VAR21 == VAR134 || VAR21 == VAR135 || VAR21 == VAR136 || VAR21 == VAR137 || VAR21 == VAR138 ? "" : "", "", FUN9(VAR21));
        if (VAR80 && VAR19 & VAR81)
            FUN7(VAR2, VAR72, "");
        else if (VAR139 && VAR19 & VAR140)
            FUN7(VAR2, VAR72, "");
        else if (VAR85 && VAR19 & VAR86)
            FUN7(VAR2, VAR72, "");
        else if (VAR107 && VAR19 & VAR108)
            FUN7(VAR2, VAR72, "");
        else
            FUN7(VAR2, VAR72, "");
        FUN7(VAR2, VAR141, "", VAR12, VAR13, VAR14, VAR15);
        FUN7(VAR2, VAR53, "", VAR2->VAR12, VAR2->VAR13, VAR2->VAR14, VAR2->VAR15, VAR2->VAR37, VAR2->VAR38);
        FUN7(VAR2, VAR53, "", VAR2->VAR64, VAR2->VAR65, VAR2->VAR66, VAR2->VAR67, VAR2->VAR83, VAR2->VAR84);
    }
    VAR2->VAR70 = FUN29(VAR2);
    return 0;
VAR79:
    return -1;
}