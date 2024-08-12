static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9, *VAR10 = FUN2(VAR2->VAR11, "", NULL, 0);
    int VAR12, VAR13, VAR14 = 0, VAR15 = 0;
    VAR6->VAR16 = VAR2;
    VAR6->VAR17 = VAR18;
    if (VAR2->VAR19)
    {
        if (!strcmp("", VAR2->VAR19->VAR20))
            VAR6->VAR17 = VAR21;
        else if (!strcmp("", VAR2->VAR19->VAR20))
            VAR6->VAR17 = VAR21 | VAR22;
        else if (!strcmp("", VAR2->VAR19->VAR20))
            VAR6->VAR17 = VAR23;
        else if (!strcmp("", VAR2->VAR19->VAR20))
            VAR6->VAR17 = VAR24;
        else if (!strcmp("", VAR2->VAR19->VAR20))
            VAR6->VAR17 = VAR25;
        else if (!strcmp("", VAR2->VAR19->VAR20))
            VAR6->VAR17 = VAR26;
        else if (!strcmp("", VAR2->VAR19->VAR20))
            VAR6->VAR17 = VAR27;
    }
    if (VAR2->VAR28 & VAR29)
        VAR6->VAR30 = 1;
    if (VAR6->VAR28 & VAR31)
        VAR6->VAR28 |= VAR32;
    if (VAR6->VAR33 || VAR6->VAR34 || VAR6->VAR28 & (VAR32 | VAR35 | VAR36))
        VAR6->VAR28 |= VAR37;
    if (VAR6->VAR17 == VAR26)
        VAR6->VAR28 |= VAR32 | VAR38 | VAR37;
    if (VAR6->VAR28 & VAR39)
        VAR6->VAR28 |= VAR37 | VAR32 | VAR40;
    if (VAR6->VAR28 & VAR41)
    {
        VAR6->VAR42 = -1;
    }
    if (VAR6->VAR43 < 0)
    {
        VAR6->VAR43 = 1;
        if (VAR6->VAR28 & VAR37 && !(VAR6->VAR28 & VAR31))
        {
            if (VAR2->VAR44 == VAR45 || VAR2->VAR44 == VAR46)
                VAR6->VAR43 = 0;
        }
    }
    if (VAR6->VAR28 & VAR32 && !(VAR6->VAR28 & VAR31) && VAR6->VAR43)
        FUN3(VAR2, VAR47, "");
    if (!VAR6->VAR43 && VAR2->VAR44 == VAR45)
        VAR2->VAR44 = VAR46;
    if (VAR6->VAR28 & VAR48 && VAR6->VAR28 & VAR40)
        VAR6->VAR28 &= ~VAR48;
    if (VAR6->VAR49 && VAR6->VAR28 & (VAR48 | VAR38))
    {
        FUN3(VAR2, VAR50, ""
                                "");
        return FUN4(VAR51);
    }
    if (!VAR2->VAR4->VAR52 && (!(VAR6->VAR28 & VAR37) || VAR6->VAR53))
    {
        FUN3(VAR2, VAR50, "");
        return FUN4(VAR51);
    }
    if (!(VAR6->VAR28 & VAR31))
    {
        if ((VAR13 = FUN5(VAR4, VAR2)) < 0)
            return VAR13;
    }
    VAR6->VAR54 = VAR2->VAR54;
    if (VAR6->VAR17 & (VAR18 | VAR23 | VAR25) && VAR2->VAR55)
        VAR6->VAR56 = VAR6->VAR54++;
    if (VAR6->VAR28 & VAR57)
    {
        VAR14 = VAR6->VAR54;
        for (VAR12 = 0; VAR12 < VAR2->VAR54; VAR12++)
        {
            VAR58 *VAR59 = VAR2->VAR60[VAR12];
            if (VAR59->VAR61->VAR62 == VAR63 || VAR59->VAR61->VAR62 == VAR64)
            {
                VAR6->VAR54++;
            }
        }
    }
    if (VAR6->VAR17 == VAR23)
    {
        VAR15 = VAR6->VAR54;
        for (VAR12 = 0; VAR12 < VAR2->VAR54; VAR12++)
        {
            VAR58 *VAR59 = VAR2->VAR60[VAR12];
            if (VAR59->VAR61->VAR62 == VAR63 && (VAR10 || FUN2(VAR59->VAR11, "", NULL, 0)))
                VAR6->VAR65++;
        }
        if (VAR6->VAR65)
        {
            for (VAR12 = 0; VAR12 < VAR2->VAR54; VAR12++)
            {
                VAR58 *VAR59 = VAR2->VAR60[VAR12];
                if (VAR59->VAR61->VAR66 == FUN6('', '', '', ''))
                {
                    FUN3(VAR2, VAR47, ""
                                              "");
                    VAR6->VAR65 = 0;
                }
            }
        }
        VAR6->VAR54 += VAR6->VAR65;
    }
    VAR6->VAR67 = FUN7((VAR6->VAR54 + 1), sizeof(*VAR6->VAR67));
    if (!VAR6->VAR67)
        return FUN4(VAR68);
    for (VAR12 = 0; VAR12 < VAR2->VAR54; VAR12++)
    {
        VAR58 *VAR59 = VAR2->VAR60[VAR12];
        VAR69 *VAR70 = &VAR6->VAR67[VAR12];
        VAR8 *VAR71 = FUN2(VAR59->VAR11, "", NULL, 0);
        VAR70->VAR59 = VAR59;
        VAR70->VAR72 = VAR59->VAR61;
        VAR70->VAR73 = FUN8(VAR71 ? VAR71->VAR74 : "", VAR6->VAR17 != VAR23);
        if (VAR70->VAR73 < 0)
            VAR70->VAR73 = 0;
        VAR70->VAR17 = VAR6->VAR17;
        VAR70->VAR75 = FUN9(VAR2, VAR70);
        if (!VAR70->VAR75)
        {
            FUN3(VAR2, VAR50, ""
                                    "",
                   FUN10(VAR59->VAR61->VAR76), VAR12);
            VAR13 = FUN4(VAR51);
            goto VAR77;
        }
        VAR70->VAR14 = -1;
        VAR70->VAR78 = VAR79;
        VAR70->VAR80 = VAR79;
        VAR70->VAR81 = VAR79;
        if (VAR59->VAR61->VAR62 == VAR63)
        {
            if (VAR70->VAR75 == FUN6('', '', '', '') || VAR70->VAR75 == FUN6('', '', '', '') || VAR70->VAR75 == FUN6('', '', '', '') || VAR70->VAR75 == FUN6('', '', '', '') || VAR70->VAR75 == FUN6('', '', '', '') || VAR70->VAR75 == FUN6('', '', '', ''))
            {
                if (VAR59->VAR61->VAR82 != 720 || (VAR59->VAR61->VAR83 != 608 && VAR59->VAR61->VAR83 != 512))
                {
                    FUN3(VAR2, VAR50, "");
                    VAR13 = FUN4(VAR51);
                    goto VAR77;
                }
                VAR70->VAR83 = VAR70->VAR75 >> 24 == '' ? 486 : 576;
            }
            if (VAR6->VAR84)
            {
                VAR70->VAR85 = VAR6->VAR84;
            }
            else
            {
                VAR70->VAR85 = VAR59->VAR86.VAR87;
                while (VAR70->VAR85 < 10000)
                    VAR70->VAR85 *= 2;
            }
            if (VAR59->VAR61->VAR82 > 65535 || VAR59->VAR61->VAR83 > 65535)
            {
                FUN3(VAR2, VAR50, "", VAR59->VAR61->VAR82, VAR59->VAR61->VAR83);
                VAR13 = FUN4(VAR51);
                goto VAR77;
            }
            if (VAR70->VAR17 == VAR23 && VAR70->VAR85 > 100000)
                FUN3(VAR2, VAR47, ""
                                          ""
                                          "");
        }
        else if (VAR59->VAR61->VAR62 == VAR64)
        {
            VAR70->VAR85 = VAR59->VAR61->VAR88;
            if (!VAR59->VAR61->VAR89 && !FUN11(VAR59->VAR61->VAR76))
            {
                FUN3(VAR2, VAR47, "", VAR12);
                VAR70->VAR90 = 1;
            }
            else if (VAR59->VAR61->VAR76 == VAR91 || VAR59->VAR61->VAR76 == VAR92 || VAR59->VAR61->VAR76 == VAR93)
            {
                if (!VAR59->VAR61->VAR94)
                {
                    FUN3(VAR2, VAR50, "", VAR12);
                    VAR13 = FUN4(VAR51);
                    goto VAR77;
                }
                VAR70->VAR95 = VAR59->VAR61->VAR94;
            }
            else if (VAR59->VAR61->VAR89 > 1)
            {
                VAR70->VAR90 = 1;
            }
            else
            {
                VAR70->VAR95 = (FUN11(VAR59->VAR61->VAR76) >> 3) * VAR59->VAR61->VAR96;
            }
            if (VAR59->VAR61->VAR76 == VAR93 || VAR59->VAR61->VAR76 == VAR97)
            {
                VAR70->VAR90 = 1;
            }
            if (VAR70->VAR17 != VAR23 && VAR70->VAR72->VAR76 == VAR98 && VAR70->VAR85 < 16000)
            {
                if (VAR70->VAR72->VAR99 >= VAR100)
                {
                    FUN3(VAR2, VAR50, "", VAR12, VAR70->VAR72->VAR88);
                    VAR13 = FUN4(VAR51);
                    goto VAR77;
                }
                else
                {
                    FUN3(VAR2, VAR47, "", VAR12, VAR70->VAR72->VAR88);
                }
            }
        }
        else if (VAR59->VAR61->VAR62 == VAR101)
        {
            VAR70->VAR85 = VAR59->VAR86.VAR87;
        }
        else if (VAR59->VAR61->VAR62 == VAR102)
        {
            VAR70->VAR85 = VAR59->VAR86.VAR87;
        }
        else
        {
            VAR70->VAR85 = VAR103;
        }
        if (!VAR70->VAR83)
            VAR70->VAR83 = VAR59->VAR61->VAR83;
        if (VAR6->VAR17 == VAR26)
            VAR70->VAR85 = 10000000;
        FUN12(VAR59, 64, 1, VAR70->VAR85);
        if (VAR59->VAR61->VAR104)
        {
            if (VAR59->VAR61->VAR76 == VAR105)
                FUN13(VAR70, VAR59);
            else if (!FUN14(VAR70->VAR75) && VAR59->VAR61->VAR76 != VAR106)
            {
                VAR70->VAR107 = VAR59->VAR61->VAR104;
                VAR70->VAR108 = FUN15(VAR70->VAR107);
                if (!VAR70->VAR108)
                {
                    VAR13 = FUN4(VAR68);
                    goto VAR77;
                }
                memcpy(VAR70->VAR108, VAR59->VAR61->VAR109, VAR70->VAR107);
            }
        }
    }
    for (VAR12 = 0; VAR12 < VAR2->VAR54; VAR12++)
    {
        int VAR110;
        VAR58 *VAR59 = VAR2->VAR60[VAR12];
        VAR69 *VAR70 = &VAR6->VAR67[VAR12];
        if (VAR59->VAR61->VAR62 != VAR64 || VAR70->VAR72->VAR111 != VAR112)
            continue;
        for (VAR110 = 0; VAR110 < VAR2->VAR54; VAR110++)
        {
            VAR58 *VAR113 = VAR2->VAR60[VAR110];
            VAR69 *VAR114 = &VAR6->VAR67[VAR110];
            if (VAR110 == VAR12)
                continue;
            if (VAR113->VAR61->VAR62 != VAR64 || VAR114->VAR72->VAR111 != VAR112 || VAR114->VAR73 != VAR70->VAR73 || VAR114->VAR75 != VAR70->VAR75)
                continue;
            VAR70->VAR115++;
        }
    }
    FUN16(VAR2);
    if (VAR6->VAR42)
    {
        VAR6->VAR116 = FUN17(VAR4);
        if (VAR6->VAR42 > 0)
            FUN18(VAR4, VAR6->VAR42);
    }
    if (VAR6->VAR28 & VAR37)
    {
        if (!(VAR6->VAR28 & (VAR35 | VAR36)) && !VAR6->VAR33 && !VAR6->VAR34)
            VAR6->VAR28 |= VAR35;
    }
    else
    {
        if (VAR6->VAR28 & VAR41)
            VAR6->VAR116 = FUN17(VAR4);
        FUN19(VAR4, VAR6);
    }
    if (VAR9 = FUN2(VAR2->VAR11, "", NULL, 0))
    {
        VAR6->VAR117 = FUN20(VAR9->VAR74);
        if (VAR6->VAR117 < 0)
        {
            FUN3(VAR2, VAR47, "", VAR9->VAR74);
            VAR6->VAR117 = 0;
        }
    }
    if (VAR6->VAR117)
        VAR6->VAR117 += 0x7C25B080;
    if (VAR6->VAR56)
        if ((VAR13 = FUN21(VAR2, VAR6->VAR56)) < 0)
            goto VAR77;
    if (VAR6->VAR28 & VAR57)
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR54; VAR12++)
        {
            VAR58 *VAR59 = VAR2->VAR60[VAR12];
            if (VAR59->VAR61->VAR62 == VAR63 || VAR59->VAR61->VAR62 == VAR64)
            {
                if ((VAR13 = FUN22(VAR2, VAR14, VAR12)) < 0)
                    goto VAR77;
                VAR14++;
            }
        }
    }
    if (VAR6->VAR65)
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR54; VAR12++)
        {
            VAR58 *VAR59 = VAR2->VAR60[VAR12];
            VAR9 = VAR10;
            if (VAR59->VAR61->VAR62 == VAR63)
            {
                if (!VAR9)
                    VAR9 = FUN2(VAR59->VAR11, "", NULL, 0);
                if (!VAR9)
                    continue;
                if ((VAR13 = FUN23(VAR2, VAR15, VAR12, VAR9->VAR74)) < 0)
                    goto VAR77;
                VAR15++;
            }
        }
    }
    FUN24(VAR4);
    if (VAR6->VAR28 & VAR118)
        FUN25(VAR4, VAR6);
    if (VAR6->VAR28 & VAR32 && !(VAR6->VAR28 & VAR31))
    {
        if ((VAR13 = FUN26(VAR4, VAR6, VAR2)) < 0)
            return VAR13;
        VAR6->VAR119 = 1;
        if (VAR6->VAR28 & VAR41)
            VAR6->VAR116 = FUN17(VAR4);
    }
    return 0;
VAR77:
    FUN27(VAR2);
    return VAR13;
}