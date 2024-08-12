static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18 = NULL;
    VAR19 *VAR20 = NULL;
    if (FUN2() < 0)
    {
        FUN3(NULL, VAR21, "");
        FUN4(1);
    }
    if (VAR2->VAR22 != VAR23 && VAR2->VAR24 != VAR23)
    {
        VAR2->VAR22 = VAR23;
        FUN3(NULL, VAR25, "");
    }
    if (VAR2->VAR22 != VAR23 && VAR2->VAR24 == VAR23)
    {
        int64_t VAR26 = VAR2->VAR26 == VAR27 ? 0 : VAR2->VAR26;
        if (VAR2->VAR22 <= VAR26)
        {
            FUN3(NULL, VAR25, "");
            VAR2->VAR22 = VAR23;
        }
        else
        {
            VAR2->VAR24 = VAR2->VAR22 - VAR26;
        }
    }
    FUN5(VAR28, VAR29);
    VAR12 = FUN6(sizeof(*VAR12));
    if (!VAR12)
        FUN4(1);
    VAR28[VAR29 - 1] = VAR12;
    VAR12->VAR30 = VAR31;
    VAR12->VAR24 = VAR2->VAR24;
    VAR12->VAR26 = VAR2->VAR26;
    VAR12->VAR32 = VAR2->VAR32;
    VAR12->VAR33 = VAR2->VAR33;
    FUN7(&VAR12->VAR34, VAR2->VAR35->VAR36, 0);
    if (!strcmp(VAR3, ""))
        VAR3 = "";
    VAR8 = FUN8(&VAR5, NULL, VAR2->VAR37, VAR3);
    if (!VAR5)
    {
        FUN9(VAR3, VAR8);
        FUN4(1);
    }
    VAR12->VAR38 = VAR5;
    if (VAR2->VAR24 != VAR23)
        VAR5->VAR39 = VAR2->VAR24;
    VAR10 = VAR5->VAR40;
    VAR5->VAR41 = VAR42;
    for (VAR6 = 0; VAR6 < VAR43; VAR6++)
    {
        VAR44 *VAR45 = VAR46[VAR6];
        for (VAR7 = 0; VAR7 < VAR45->VAR47; VAR7++)
        {
            VAR48 *VAR49 = VAR45->VAR50[VAR7];
            if (!VAR49->VAR51 || VAR49->VAR51->VAR52)
                continue;
            switch (FUN10(VAR49->VAR51->VAR53->VAR54, VAR49->VAR51->VAR55))
            {
            case VAR56:
                VAR2->VAR57 = 1;
                break;
            case VAR58:
                VAR2->VAR59 = 1;
                break;
            case VAR60:
                VAR2->VAR61 = 1;
                break;
            }
            FUN11(VAR49, VAR2, VAR5);
        }
    }
    if (!strcmp(VAR10->VAR52, "") && FUN12(VAR3, "", NULL))
    {
        int VAR8 = FUN13(VAR2, "", "", VAR62);
        if (VAR8 < 0)
        {
            FUN9(VAR3, VAR8);
            FUN4(1);
        }
    }
    if (!strcmp(VAR10->VAR52, "") && !VAR63 && FUN12(VAR3, "", NULL))
    {
        int VAR7;
        int VAR8 = FUN14(VAR2, VAR5, VAR3);
        if (VAR8 < 0)
        {
            FUN9(VAR3, VAR8);
            FUN4(1);
        }
        for (VAR7 = VAR31 - VAR5->VAR64; VAR7 < VAR31; VAR7++)
        {
            VAR14 = VAR65[VAR7];
            for (VAR6 = 0; VAR6 < VAR66; VAR6++)
            {
                VAR16 = VAR67[VAR6];
                if (VAR16->VAR68->VAR69->VAR70 == VAR14->VAR68->VAR69->VAR70)
                {
                    VAR14->VAR71 = VAR16;
                    VAR14->VAR72 = VAR6;
                    if (VAR14->VAR68->VAR69->VAR70 == VAR58)
                        VAR14->VAR73 = FUN15("");
                    if (VAR14->VAR68->VAR69->VAR70 == VAR56)
                        VAR14->VAR73 = FUN15("");
                    VAR16->VAR74 = 0;
                    VAR16->VAR68->VAR74 = VAR75;
                    break;
                }
            }
            if (!VAR14->VAR71)
            {
                FUN3(NULL, VAR21, "", FUN16(VAR14->VAR68->VAR69->VAR70));
                FUN4(1);
            }
        }
    }
    else if (!VAR2->VAR76)
    {
        char *VAR77 = NULL;
        if (!VAR2->VAR57 && VAR5->VAR40->VAR78 != VAR79)
        {
            int VAR80 = 0, VAR81 = -1;
            int VAR82 = FUN17(VAR5->VAR40, VAR5->VAR40->VAR78, 0);
            for (VAR6 = 0; VAR6 < VAR66; VAR6++)
            {
                int VAR83;
                VAR16 = VAR67[VAR6];
                VAR83 = VAR16->VAR68->VAR69->VAR84 * VAR16->VAR68->VAR69->VAR85;
                if ((VAR82 != FUN18('', '', '', '')) && (VAR16->VAR68->VAR86 & VAR87))
                    VAR83 = 1;
                if (VAR16->VAR68->VAR69->VAR70 == VAR56 && VAR83 > VAR80)
                {
                    if ((VAR82 == FUN18('', '', '', '')) && !(VAR16->VAR68->VAR86 & VAR87))
                        continue;
                    VAR80 = VAR83;
                    VAR81 = VAR6;
                }
            }
            if (VAR81 >= 0)
                FUN19(VAR2, VAR5, VAR81);
        }
        if (!VAR2->VAR59 && VAR5->VAR40->VAR88 != VAR79)
        {
            int VAR89 = 0, VAR81 = -1;
            for (VAR6 = 0; VAR6 < VAR66; VAR6++)
            {
                VAR16 = VAR67[VAR6];
                if (VAR16->VAR68->VAR69->VAR70 == VAR58 && VAR16->VAR68->VAR69->VAR89 > VAR89)
                {
                    VAR89 = VAR16->VAR68->VAR69->VAR89;
                    VAR81 = VAR6;
                }
            }
            if (VAR81 >= 0)
                FUN20(VAR2, VAR5, VAR81);
        }
        FUN21(VAR90, VAR91, VAR77, VAR5, "");
        if (!VAR2->VAR61 && (FUN22(VAR5->VAR40->VAR92) || VAR77))
        {
            for (VAR6 = 0; VAR6 < VAR66; VAR6++)
                if (VAR67[VAR6]->VAR68->VAR69->VAR70 == VAR60)
                {
                    FUN23(VAR2, VAR5, VAR6);
                    break;
                }
        }
    }
    else
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR76; VAR6++)
        {
            VAR93 *VAR94 = &VAR2->VAR95[VAR6];
            if (VAR94->VAR96)
                continue;
            if (VAR94->VAR97)
            {
                VAR44 *VAR45;
                VAR48 *VAR49 = NULL;
                int VAR7, VAR98;
                for (VAR7 = 0; VAR7 < VAR43; VAR7++)
                {
                    VAR45 = VAR46[VAR7];
                    for (VAR98 = 0; VAR98 < VAR45->VAR47; VAR98++)
                    {
                        VAR99 *VAR100 = VAR45->VAR50[VAR98]->VAR51;
                        if (VAR100 && !strcmp(VAR100->VAR52, VAR94->VAR97))
                        {
                            VAR49 = VAR45->VAR50[VAR98];
                            goto VAR101;
                        }
                    }
                }
            VAR101:
                if (!VAR49)
                {
                    FUN3(NULL, VAR21, ""
                                               "",
                           VAR94->VAR97);
                    FUN4(1);
                }
                FUN11(VAR49, VAR2, VAR5);
            }
            else
            {
                int VAR102 = VAR103[VAR94->VAR104]->VAR105 + VAR94->VAR106;
                VAR16 = VAR67[VAR103[VAR94->VAR104]->VAR105 + VAR94->VAR106];
                if (VAR2->VAR61 && VAR16->VAR68->VAR69->VAR70 == VAR60)
                    continue;
                if (VAR2->VAR59 && VAR16->VAR68->VAR69->VAR70 == VAR58)
                    continue;
                if (VAR2->VAR57 && VAR16->VAR68->VAR69->VAR70 == VAR56)
                    continue;
                if (VAR2->VAR107 && VAR16->VAR68->VAR69->VAR70 == VAR108)
                    continue;
                switch (VAR16->VAR68->VAR69->VAR70)
                {
                case VAR56:
                    VAR14 = FUN19(VAR2, VAR5, VAR102);
                    break;
                case VAR58:
                    VAR14 = FUN20(VAR2, VAR5, VAR102);
                    break;
                case VAR60:
                    VAR14 = FUN23(VAR2, VAR5, VAR102);
                    break;
                case VAR108:
                    VAR14 = FUN24(VAR2, VAR5, VAR102);
                    break;
                case VAR109:
                    VAR14 = FUN25(VAR2, VAR5, VAR102);
                    break;
                default:
                    FUN3(NULL, VAR21, "", VAR94->VAR104, VAR94->VAR106);
                    FUN4(1);
                }
            }
        }
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR110; VAR6++)
    {
        VAR111 *VAR112;
        VAR113 *VAR114;
        const char *VAR115;
        int64_t VAR116;
        if ((VAR8 = FUN26(&VAR112, VAR2->VAR117[VAR6], VAR118, &VAR42, NULL)) < 0)
        {
            FUN3(NULL, VAR21, "", VAR2->VAR117[VAR6]);
            FUN4(1);
        }
        if ((VAR116 = FUN27(VAR112)) <= 0)
        {
            FUN3(NULL, VAR21, "", VAR2->VAR117[VAR6]);
            FUN4(1);
        }
        if (!(VAR114 = FUN28(VAR116)))
        {
            FUN3(NULL, VAR21, "", VAR2->VAR117[VAR6]);
            FUN4(1);
        }
        FUN29(VAR112, VAR114, VAR116);
        VAR14 = FUN25(VAR2, VAR5, -1);
        VAR14->VAR119 = 0;
        VAR14->VAR120 = VAR2->VAR117[VAR6];
        VAR14->VAR121 = 1;
        VAR14->VAR68->VAR69->VAR122 = VAR114;
        VAR14->VAR68->VAR69->VAR123 = VAR116;
        VAR115 = strrchr(VAR2->VAR117[VAR6], '');
        FUN30(&VAR14->VAR68->VAR124, "", (VAR115 && *VAR115) ? VAR115 + 1 : VAR2->VAR117[VAR6], VAR125);
        FUN31(VAR112);
    }
    for (VAR6 = VAR31 - VAR5->VAR64; VAR6 < VAR31; VAR6++)
    {
        VAR19 *VAR20;
        VAR14 = VAR65[VAR6];
        if ((VAR14->VAR119 || VAR14->VAR120) && (VAR20 = FUN32(VAR2->VAR35->VAR126, "", NULL, VAR127)) && (!VAR20->VAR128[5] || FUN33(VAR5, VAR14->VAR68, VAR20->VAR128 + 6)))
            if (FUN34(VAR14->VAR68->VAR69, "", VAR20->VAR129, 0) < 0)
                FUN4(1);
    }
    VAR18 = FUN35(VAR2->VAR35->VAR126);
    for (VAR6 = VAR12->VAR30; VAR6 < VAR31; VAR6++)
    {
        VAR20 = NULL;
        while ((VAR20 = FUN32(VAR65[VAR6]->VAR34, "", VAR20, VAR127)))
            FUN30(&VAR18, VAR20->VAR128, NULL, 0);
    }
    VAR20 = NULL;
    while ((VAR20 = FUN32(VAR18, "", VAR20, VAR127)))
    {
        const VAR130 *class = FUN36();
        const VAR131 *VAR132 = FUN37(&class, VAR20->VAR128, NULL, 0, VAR133 | VAR134);
        if (!VAR132)
            continue;
        if (!(VAR132->VAR135 & VAR136))
        {
            FUN3(NULL, VAR137, ""
                                       "",
                   VAR20->VAR128, VAR132->VAR138 ? VAR132->VAR138 : "", VAR29 - 1, VAR3);
            FUN4(1);
        }
        if (!strcmp(VAR20->VAR128, ""))
            continue;
        FUN3(NULL, VAR25, ""
                                     ""
                                     ""
                                     ""
                                     "",
               VAR20->VAR128, VAR132->VAR138 ? VAR132->VAR138 : "", VAR29 - 1, VAR3);
    }
    FUN38(&VAR18);
    if (VAR5->VAR40->VAR135 & VAR139)
    {
        if (!FUN39(VAR5->VAR3))
        {
            FUN9(VAR5->VAR3, FUN40(VAR140));
            FUN4(1);
        }
    }
    if (!(VAR5->VAR40->VAR135 & VAR141))
    {
        FUN41(VAR3);
        if ((VAR8 = FUN26(&VAR5->VAR112, VAR3, VAR142, &VAR5->VAR41, &VAR12->VAR34)) < 0)
        {
            FUN9(VAR3, VAR8);
            FUN4(1);
        }
    }
    else if (strcmp(VAR5->VAR40->VAR52, "") == 0 && !FUN39(VAR3))
        FUN41(VAR3);
    if (VAR2->VAR143)
    {
        uint8_t VAR144[64];
        snprintf(VAR144, sizeof(VAR144), "", (int)(VAR2->VAR143 * VAR145));
        FUN30(&VAR12->VAR34, "", VAR144, 0);
    }
    VAR5->VAR146 = (int)(VAR2->VAR147 * VAR145);
    for (VAR6 = 0; VAR6 < VAR2->VAR148; VAR6++)
    {
        char *VAR115;
        int VAR149 = FUN42(VAR2->VAR150[VAR6].VAR151.VAR91, &VAR115, 0);
        if (VAR149 >= VAR152)
        {
            FUN3(NULL, VAR21, "", VAR149);
            FUN4(1);
        }
        FUN43(VAR2->VAR150[VAR6].VAR153, *VAR115 ? VAR115 + 1 : VAR115, VAR5, VAR149 >= 0 ? VAR103[VAR149]->VAR38 : NULL, VAR2);
    }
    if (VAR2->VAR154 >= VAR152)
    {
        if (VAR2->VAR154 == VAR155)
        {
            VAR2->VAR154 = -1;
            for (VAR6 = 0; VAR6 < VAR152; VAR6++)
                if (VAR103[VAR6]->VAR38->VAR156)
                {
                    VAR2->VAR154 = VAR6;
                    break;
                }
        }
        else
        {
            FUN3(NULL, VAR21, "", VAR2->VAR154);
            FUN4(1);
        }
    }
    if (VAR2->VAR154 >= 0)
        FUN44(VAR103[VAR2->VAR154], VAR12, !VAR2->VAR157);
    if (!VAR2->VAR158 && VAR152)
    {
        FUN7(&VAR5->VAR124, VAR103[0]->VAR38->VAR124, VAR125);
        if (VAR2->VAR24 != VAR23)
            FUN30(&VAR5->VAR124, "", NULL, 0);
        FUN30(&VAR5->VAR124, "", NULL, 0);
    }
    if (!VAR2->VAR159)
        for (VAR6 = VAR12->VAR30; VAR6 < VAR31; VAR6++)
        {
            VAR15 *VAR16;
            if (VAR65[VAR6]->VAR72 < 0)
                continue;
            VAR16 = VAR67[VAR65[VAR6]->VAR72];
            FUN7(&VAR65[VAR6]->VAR68->VAR124, VAR16->VAR68->VAR124, VAR125);
        }
    for (VAR6 = 0; VAR6 < VAR2->VAR160; VAR6++)
    {
        VAR17 **VAR161;
        char VAR162, *VAR163;
        const char *VAR164;
        int VAR165 = 0, VAR7, VAR166 = 0;
        VAR163 = strchr(VAR2->VAR124[VAR6].VAR151.VAR91, '');
        if (!VAR163)
        {
            FUN3(NULL, VAR21, "", VAR2->VAR124[VAR6].VAR151.VAR91);
            FUN4(1);
        }
        *VAR163++ = 0;
        FUN45(VAR2->VAR124[VAR6].VAR153, &VAR162, &VAR165, &VAR164);
        if (VAR162 == '')
        {
            for (VAR7 = 0; VAR7 < VAR5->VAR64; VAR7++)
            {
                if ((VAR166 = FUN33(VAR5, VAR5->VAR167[VAR7], VAR164)) > 0)
                {
                    FUN30(&VAR5->VAR167[VAR7]->VAR124, VAR2->VAR124[VAR6].VAR151.VAR91, *VAR163 ? VAR163 : NULL, 0);
                }
                else if (VAR166 < 0)
                    FUN4(1);
            }
        }
        else
        {
            switch (VAR162)
            {
            case '':
                VAR161 = &VAR5->VAR124;
                break;
            case '':
                if (VAR165 < 0 || VAR165 >= VAR5->VAR156)
                {
                    FUN3(NULL, VAR21, "", VAR165);
                    FUN4(1);
                }
                VAR161 = &VAR5->VAR168[VAR165]->VAR124;
                break;
            default:
                FUN3(NULL, VAR21, "", VAR2->VAR124[VAR6].VAR153);
                FUN4(1);
            }
            FUN30(VAR161, VAR2->VAR124[VAR6].VAR151.VAR91, *VAR163 ? VAR163 : NULL, 0);
        }
    }
    return 0;
}