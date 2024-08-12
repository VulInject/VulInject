static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = FUN2(VAR2->VAR8, "", NULL, 0);
    int VAR9, VAR10;
    VAR4->VAR11 = VAR2;
    VAR4->VAR12 = VAR13;
    if (VAR2->VAR14)
    {
        if (!strcmp("", VAR2->VAR14->VAR15))
            VAR4->VAR12 = VAR16;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR4->VAR12 = VAR16 | VAR17;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR4->VAR12 = VAR18;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR4->VAR12 = VAR19;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR4->VAR12 = VAR20;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR4->VAR12 = VAR21;
        else if (!strcmp("", VAR2->VAR14->VAR15))
            VAR4->VAR12 = VAR22;
    }
    if (VAR4->VAR23 & VAR24)
        VAR4->VAR23 |= VAR25;
    if (VAR4->VAR26 || VAR4->VAR27 || VAR4->VAR23 & (VAR25 | VAR28 | VAR29))
        VAR4->VAR23 |= VAR30;
    if (VAR4->VAR12 == VAR21)
        VAR4->VAR23 |= VAR25 | VAR31 | VAR30;
    if (VAR4->VAR23 & VAR32)
        VAR4->VAR23 |= VAR30 | VAR25 | VAR33;
    if (VAR4->VAR23 & VAR25 && VAR2->VAR23 & VAR34)
    {
        FUN3(VAR2, VAR35, "");
        VAR2->VAR23 &= ~VAR34;
    }
    if (VAR4->VAR23 & VAR36)
    {
        VAR4->VAR37 = -1;
    }
    if (VAR4->VAR38 < 0)
    {
        VAR4->VAR38 = 1;
        if (VAR4->VAR23 & VAR30 && !(VAR4->VAR23 & VAR24))
        {
            if (VAR2->VAR39 == VAR40 || VAR2->VAR39 == VAR41)
                VAR4->VAR38 = 0;
        }
    }
    if (VAR4->VAR23 & VAR25 && !(VAR4->VAR23 & VAR24) && VAR4->VAR38)
        FUN3(VAR2, VAR42, "");
    if (!VAR4->VAR38 && VAR2->VAR39 == VAR40)
        VAR2->VAR39 = VAR41;
    if (VAR4->VAR23 & VAR43 && VAR4->VAR23 & VAR33)
        VAR4->VAR23 &= ~VAR43;
    if (VAR4->VAR44 && VAR4->VAR23 & (VAR43 | VAR31))
    {
        FUN3(VAR2, VAR45, ""
                                "");
        return FUN4(VAR46);
    }
    if (!(VAR2->VAR47->VAR48 & VAR49) && (!(VAR4->VAR23 & VAR30) || VAR4->VAR50))
    {
        FUN3(VAR2, VAR45, "");
        return FUN4(VAR46);
    }
    VAR4->VAR51 = VAR2->VAR51;
    if (VAR4->VAR12 & (VAR13 | VAR18 | VAR20) && VAR2->VAR52)
        VAR4->VAR53 = VAR4->VAR51++;
    if (VAR4->VAR23 & VAR54)
    {
        for (VAR9 = 0; VAR9 < VAR2->VAR51; VAR9++)
        {
            VAR55 *VAR56 = VAR2->VAR57[VAR9];
            if (VAR56->VAR58->VAR59 == VAR60 || VAR56->VAR58->VAR59 == VAR61)
            {
                VAR4->VAR51++;
            }
        }
    }
    if (VAR4->VAR62 == -1 && (VAR4->VAR12 == VAR18 || VAR4->VAR12 == VAR13) || VAR4->VAR62 == 1)
    {
        for (VAR9 = 0; VAR9 < VAR2->VAR51; VAR9++)
        {
            VAR55 *VAR56 = VAR2->VAR57[VAR9];
            VAR6 *VAR63 = VAR7;
            if (VAR56->VAR58->VAR59 == VAR60 && (VAR63 || (VAR63 = FUN2(VAR56->VAR8, "", NULL, 0))))
            {
                AVTimecode VAR64;
                VAR10 = FUN5(VAR2, &VAR64, VAR9, VAR63->VAR65);
                if (VAR10 >= 0)
                    VAR4->VAR66++;
            }
        }
        if (VAR4->VAR66)
        {
            for (VAR9 = 0; VAR9 < VAR2->VAR51; VAR9++)
            {
                VAR55 *VAR56 = VAR2->VAR57[VAR9];
                if (VAR56->VAR58->VAR67 == FUN6('', '', '', ''))
                {
                    FUN3(VAR2, VAR42, ""
                                              "");
                    VAR4->VAR66 = 0;
                }
            }
        }
        VAR4->VAR51 += VAR4->VAR66;
    }
    VAR4->VAR68 = FUN7((VAR4->VAR51 + 1), sizeof(*VAR4->VAR68));
    if (!VAR4->VAR68)
        return FUN4(VAR69);
    if (VAR4->VAR70 != NULL && strcmp(VAR4->VAR70, "") != 0)
    {
        if (strcmp(VAR4->VAR70, "") == 0)
        {
            VAR4->VAR71 = VAR72;
            if (VAR4->VAR73 != VAR74)
            {
                FUN3(VAR2, VAR45, "", VAR4->VAR73, VAR74);
                return FUN4(VAR46);
            }
            if (VAR4->VAR75 != VAR76)
            {
                FUN3(VAR2, VAR45, "", VAR4->VAR75, VAR76);
                return FUN4(VAR46);
            }
        }
        else
        {
            FUN3(VAR2, VAR45, "", VAR4->VAR70);
            return FUN4(VAR46);
        }
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR51; VAR9++)
    {
        VAR55 *VAR56 = VAR2->VAR57[VAR9];
        VAR77 *VAR78 = &VAR4->VAR68[VAR9];
        VAR6 *VAR79 = FUN2(VAR56->VAR8, "", NULL, 0);
        VAR78->VAR56 = VAR56;
        VAR78->VAR80 = VAR56->VAR58;
        VAR78->VAR81 = FUN8(VAR79 ? VAR79->VAR65 : "", VAR4->VAR12 != VAR18);
        if (VAR78->VAR81 < 0)
            VAR78->VAR81 = 0;
        VAR78->VAR12 = VAR4->VAR12;
        VAR78->VAR82 = FUN9(VAR2, VAR78);
        if (!VAR78->VAR82)
        {
            FUN3(VAR2, VAR45, ""
                                    "",
                   FUN10(VAR56->VAR58->VAR83), VAR9);
            return FUN4(VAR46);
        }
        VAR78->VAR84 = -1;
        VAR78->VAR85 = VAR86;
        VAR78->VAR87 = VAR86;
        VAR78->VAR88 = VAR86;
        if (VAR56->VAR58->VAR59 == VAR60)
        {
            if (VAR78->VAR82 == FUN6('', '', '', '') || VAR78->VAR82 == FUN6('', '', '', '') || VAR78->VAR82 == FUN6('', '', '', '') || VAR78->VAR82 == FUN6('', '', '', '') || VAR78->VAR82 == FUN6('', '', '', '') || VAR78->VAR82 == FUN6('', '', '', ''))
            {
                if (VAR56->VAR58->VAR89 != 720 || (VAR56->VAR58->VAR90 != 608 && VAR56->VAR58->VAR90 != 512))
                {
                    FUN3(VAR2, VAR45, "");
                    return FUN4(VAR46);
                }
                VAR78->VAR90 = VAR78->VAR82 >> 24 == '' ? 486 : 576;
            }
            if (VAR4->VAR91)
            {
                VAR78->VAR92 = VAR4->VAR91;
            }
            else
            {
                VAR78->VAR92 = VAR56->VAR93.VAR94;
                while (VAR78->VAR92 < 10000)
                    VAR78->VAR92 *= 2;
            }
            if (VAR56->VAR58->VAR89 > 65535 || VAR56->VAR58->VAR90 > 65535)
            {
                FUN3(VAR2, VAR45, "", VAR56->VAR58->VAR89, VAR56->VAR58->VAR90);
                return FUN4(VAR46);
            }
            if (VAR78->VAR12 == VAR18 && VAR78->VAR92 > 100000)
                FUN3(VAR2, VAR42, ""
                                          ""
                                          "");
            if (VAR78->VAR12 == VAR18 && VAR78->VAR80->VAR83 == VAR95 && VAR78->VAR82 == FUN6('', '', '', ''))
            {
                enum AVPixelFormat VAR96 = VAR78->VAR80->VAR97;
                if (VAR96 == VAR98 && VAR78->VAR80->VAR99 == 1)
                    VAR96 = VAR100;
                VAR78->VAR101 = VAR96 == VAR102 || VAR96 == VAR103 || VAR96 == VAR104 || VAR96 == VAR105 || VAR96 == VAR100 || VAR96 == VAR106;
            }
            if (VAR78->VAR80->VAR83 == VAR107)
            {
                if (VAR78->VAR12 != VAR13)
                {
                    FUN3(VAR2, VAR45, "");
                    return FUN4(VAR46);
                }
            }
        }
        else if (VAR56->VAR58->VAR59 == VAR61)
        {
            VAR78->VAR92 = VAR56->VAR58->VAR108;
            if (!VAR56->VAR58->VAR109 && !FUN11(VAR56->VAR58->VAR83))
            {
                FUN3(VAR2, VAR42, "", VAR9);
                VAR78->VAR110 = 1;
            }
            else if (VAR56->VAR58->VAR83 == VAR111 || VAR56->VAR58->VAR83 == VAR112 || VAR56->VAR58->VAR83 == VAR113)
            {
                if (!VAR56->VAR58->VAR114)
                {
                    FUN3(VAR2, VAR45, "", VAR9);
                    return FUN4(VAR46);
                }
                VAR78->VAR115 = VAR56->VAR58->VAR114;
            }
            else if (VAR56->VAR58->VAR109 > 1)
            {
                VAR78->VAR110 = 1;
            }
            else
            {
                VAR78->VAR115 = (FUN11(VAR56->VAR58->VAR83) >> 3) * VAR56->VAR58->VAR116;
            }
            if (VAR56->VAR58->VAR83 == VAR113 || VAR56->VAR58->VAR83 == VAR117)
            {
                VAR78->VAR110 = 1;
            }
            if (VAR78->VAR12 != VAR18 && VAR78->VAR80->VAR83 == VAR118 && VAR78->VAR92 < 16000)
            {
                if (VAR2->VAR119 >= VAR120)
                {
                    FUN3(VAR2, VAR45, "", VAR9, VAR78->VAR80->VAR108);
                    return FUN4(VAR46);
                }
                else
                {
                    FUN3(VAR2, VAR42, "", VAR9, VAR78->VAR80->VAR108);
                }
            }
            if (VAR78->VAR80->VAR83 == VAR121 || VAR78->VAR80->VAR83 == VAR122)
            {
                if (VAR78->VAR12 != VAR13)
                {
                    FUN3(VAR2, VAR45, "", FUN10(VAR78->VAR80->VAR83));
                    return FUN4(VAR46);
                }
                if (VAR2->VAR119 > VAR123)
                {
                    FUN3(VAR2, VAR45, ""
                                            "",
                           FUN10(VAR78->VAR80->VAR83), VAR123);
                    return VAR124;
                }
            }
        }
        else if (VAR56->VAR58->VAR59 == VAR125)
        {
            VAR78->VAR92 = VAR56->VAR93.VAR94;
        }
        else if (VAR56->VAR58->VAR59 == VAR126)
        {
            VAR78->VAR92 = VAR56->VAR93.VAR94;
        }
        else
        {
            VAR78->VAR92 = VAR127;
        }
        if (!VAR78->VAR90)
            VAR78->VAR90 = VAR56->VAR58->VAR90;
        if (VAR4->VAR12 == VAR21)
            VAR78->VAR92 = 10000000;
        FUN12(VAR56, 64, 1, VAR78->VAR92);
        if (VAR4->VAR71 == VAR72)
        {
            VAR10 = FUN13(&VAR78->VAR128, VAR4->VAR129, VAR78->VAR80->VAR83 == VAR130, VAR2->VAR23 & VAR131);
            if (VAR10)
                return VAR10;
        }
    }
    FUN14(VAR2);
    return 0;
}