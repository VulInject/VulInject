static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR4->VAR9;
    VAR1 *VAR10 = VAR4->VAR11;
    VAR12 *VAR13 = NULL;
    char *VAR14, VAR15[VAR16 * 2 + 1];
    int VAR17 = 0;
    if (VAR6->VAR18 & VAR19)
    {
        FUN2(VAR8->VAR14, VAR4->VAR20, sizeof(VAR8->VAR14));
        if (VAR4->VAR21)
            FUN2(VAR10->VAR14, VAR4->VAR21, sizeof(VAR10->VAR14));
    }
    else if (VAR6->VAR22 > 0)
    {
        char *VAR14 = NULL;
        if (FUN3(&VAR14, VAR4->VAR20, '', VAR6->VAR23 ? VAR4->VAR24 % VAR6->VAR23 : VAR4->VAR24) < 1)
        { VAR4 -> VAR20 , '' , VAR4 -> VAR24 ) < 1 )
            {
                FUN4(VAR14);
                FUN5(VAR8, VAR25, "", VAR4->VAR20);
                return FUN6(VAR26);
            }
            FUN2(VAR8->VAR14, VAR14, sizeof(VAR8->VAR14));
            FUN4(VAR14);
        }
        else
        {
            if (VAR6->VAR27)
            {
                time_t VAR28;
                struct VAR29 *VAR29, VAR30;
                FUN7(&VAR28);
                VAR29 = FUN8(&VAR28, &VAR30);
                if (!FUN9(VAR8->VAR14, sizeof(VAR8->VAR14), VAR4->VAR20, VAR29))
                {
                    FUN5(VAR8, VAR25, "");
                    return FUN6(VAR26);
                }
                VAR17 = FUN10(VAR8, VAR6, VAR4);
                if (VAR17 < 0)
                {
                    return FUN6(VAR31);
                }
                if (VAR6->VAR32)
                {
                    const char *VAR33;
                    char *VAR34 = FUN11(VAR8->VAR14);
                    if (!VAR34)
                    {
                        return FUN6(VAR31);
                    }
                    VAR33 = FUN12(VAR34);
                    if (FUN13(VAR33) == -1 && VAR35 != VAR36)
                    {
                        FUN5(VAR8, VAR25, "", VAR33);
                        FUN4(VAR34);
                        return FUN6(VAR35);
                    }
                    FUN4(VAR34);
                }
            }
            else
            {
                char *VAR14 = NULL;
                if (FUN3(&VAR14, VAR4->VAR20, '', VAR6->VAR23 ? VAR4->VAR24 % VAR6->VAR23 : VAR4->VAR24) < 1)
                { VAR4 -> VAR20 , '' , VAR4 -> VAR24 ) < 1 )
                    {
                        FUN4(VAR14);
                        FUN5(VAR8, VAR25, "", VAR4->VAR20);
                        return FUN6(VAR26);
                    }
                    FUN2(VAR8->VAR14, VAR14, sizeof(VAR8->VAR14));
                    FUN4(VAR14);
                }
                if (VAR4->VAR21)
                {
                    char *VAR14 = NULL;
                    if (FUN3(&VAR14, VAR4->VAR21, '', VAR6->VAR23 ? VAR4->VAR24 % VAR6->VAR23 : VAR4->VAR24) < 1)
                    { VAR4 -> VAR21 , '' , VAR4 -> VAR24 ) < 1 )
                        {
                            FUN4(VAR14);
                            FUN5(VAR10, VAR25, "", VAR4->VAR21);
                            return FUN6(VAR26);
                        }
                        FUN2(VAR10->VAR14, VAR14, sizeof(VAR10->VAR14));
                        FUN4(VAR14);
                    }
                }
                VAR4->VAR37++;
                FUN14(VAR2, &VAR13, VAR6);
                if (VAR6->VAR18 & VAR38)
                {
                    FUN15(VAR8->VAR14, "", sizeof(VAR8->VAR14));
                }
                if (VAR6->VAR39 || VAR6->VAR40)
                {
                    if (VAR6->VAR39 && VAR6->VAR40)
                    {
                        FUN5(VAR2, VAR41, ""
                                                  "");
                    }
                    if (!VAR6->VAR42 || (VAR6->VAR18 & VAR43))
                    {
                        if (VAR6->VAR39)
                        {
                            if ((VAR17 = FUN16(VAR2)) < 0)
                                goto VAR44;
                        }
                        else
                        {
                            if ((VAR17 = FUN17(VAR2, VAR4)) < 0)
                                goto VAR44;
                        }
                        VAR6->VAR42 = 1;
                    }
                    if ((VAR17 = FUN18(&VAR13, "", VAR6->VAR45, 0)) < 0)
                        goto VAR44;
                    VAR17 = FUN2(VAR15, VAR6->VAR15, sizeof(VAR15));
                    if (!VAR17)
                        snprintf(VAR15, sizeof(VAR15), "" VAR46, VAR4->VAR24);
                    if ((VAR17 = FUN18(&VAR13, "", VAR15, 0)) < 0)
                        goto VAR44;
                    VAR14 = FUN19("", VAR8->VAR14);
                    if (!VAR14)
                    {
                        VAR17 = FUN6(VAR31);
                        goto VAR44;
                    }
                    VAR17 = FUN20(VAR2, &VAR8->VAR47, VAR14, &VAR13);
                    FUN4(VAR14);
                    FUN21(&VAR13);
                    if (VAR17 < 0)
                        return VAR17;
                }
                else if (VAR6->VAR48 != VAR49)
                {
                    if ((VAR17 = FUN20(VAR2, &VAR8->VAR47, VAR8->VAR14, &VAR13)) < 0)
                        goto VAR44;
                }
                if (VAR4->VAR21)
                {
                    FUN14(VAR2, &VAR13, VAR6);
                    if ((VAR17 = FUN20(VAR2, &VAR10->VAR47, VAR10->VAR14, &VAR13)) < 0)
                        goto VAR44;
                }
                FUN21(&VAR13);
                if (VAR6->VAR48 != VAR49)
                {
                    if (VAR8->VAR50->VAR51 && VAR8->VAR7)
                    {
                        char VAR52[21];
                        snprintf(VAR52, sizeof(VAR52), "", (VAR53 / 2) - 1);
                        FUN22(VAR8->VAR7, "", "", 0);
                        FUN22(VAR8->VAR7, "", VAR52, 0);
                        FUN22(VAR8->VAR7, "", VAR52, 0);
                    }
                }
                if (VAR4->VAR21)
                {
                    VAR17 = FUN23(VAR10, NULL);
                    if (VAR17 < 0)
                        return VAR17;
                }
                return 0;
            VAR44:
                FUN21(&VAR13);
                return VAR17;
            }
            static const char *FUN24(VAR1 * VAR2)
            {
                char VAR54[21];
                time_t VAR55 = FUN7(NULL);
                struct VAR29 *VAR56, VAR57;
                VAR5 *VAR58 = VAR2->VAR7;
                VAR56 = FUN8(&VAR55, &VAR57);
                if (VAR58->VAR48 == VAR49)
                {
                    return (VAR59 || !FUN9(VAR54, sizeof(VAR54), "", VAR56) || !strcmp(VAR54, "")) ? "" : "";
                }
                return (VAR59 || !FUN9(VAR54, sizeof(VAR54), "", VAR56) || !strcmp(VAR54, "")) ? "" : "";
            }
            static int FUN25(char *VAR60, int VAR61, int VAR62)
            {
                char *VAR56;
                char VAR63[10] = {''};
                VAR56 = strrchr(VAR60, '');
                if (VAR56)
                {
                    FUN2(VAR63, VAR56, sizeof(VAR63));
                    *VAR56 = '';
                }
                snprintf(VAR60 + strlen(VAR60), VAR61 - strlen(VAR60), VAR64, VAR62);
                if (strlen(VAR63))
                    FUN15(VAR60, VAR63, VAR61);
                return 0;
            }
            static int FUN26(int VAR65, const char *VAR66)
            {
                const char *VAR14, *VAR67;
                char *VAR68 = NULL;
                int VAR69 = 0;
                if (!VAR66)
                {
                    VAR69 = FUN6(VAR26);
                    goto VAR44;
                }
                VAR68 = FUN11(VAR66);
                if (!VAR68)
                {
                    VAR69 = FUN6(VAR31);
                    goto VAR44;
                }
                VAR14 = FUN27(VAR66);
                VAR67 = FUN12(VAR68);
                if (VAR65 > 1 && !FUN28(VAR14, "") && !FUN28(VAR67, ""))
                {
                    FUN5(NULL, VAR25, "", VAR66);
                    VAR69 = FUN6(VAR26);
                    goto VAR44;
                }
                if (FUN28(VAR14, "") && FUN28(VAR67, ""))
                {
                    FUN5(NULL, VAR25, "", VAR66);
                    VAR69 = FUN6(VAR26);
                    goto VAR44;
                }
            VAR44:
                FUN29(&VAR68);
                return VAR69;
            }
            static int FUN30(char *VAR70, int VAR71, int VAR72)
            {
                const char *VAR73, *VAR33;
                char *VAR74 = NULL, *VAR75 = NULL, *VAR76 = NULL;
                int VAR69 = 0;
                if (!FUN28(VAR70, ""))
                    return VAR69;
                VAR74 = FUN11(VAR70);
                if (!VAR74)
                {
                    VAR69 = FUN6(VAR31);
                    goto VAR44;
                }
                if (FUN3(&VAR75, VAR74, '', VAR72) < 1)
                {
                    VAR69 = FUN6(VAR26);
                    goto VAR44;
                }
                FUN2(VAR70, VAR75, VAR71);
                VAR73 = FUN31(VAR74);
                VAR33 = FUN12(VAR74);
                if (FUN28(VAR33, "") && VAR73 && !strcmp(VAR73, ""))
                {
                    VAR76 = FUN11(VAR70);
                    if (!VAR76)
                    {
                        VAR69 = FUN6(VAR31);
                        goto VAR44;
                    }
                    VAR33 = FUN12(VAR76);
                    if (FUN13(VAR33) == -1 && VAR35 != VAR36)
                    {
                        VAR69 = FUN6(VAR35);
                        goto VAR44;
                    }
                }
            VAR44:
                FUN29(&VAR74);
                FUN29(&VAR76);
                FUN29(&VAR75);
                return VAR69;
            }
            static int FUN32(VAR1 * VAR2, enum AVMediaType VAR77, int VAR78)
            {
                unsigned int VAR79, VAR80;
                if (VAR78 < 0 || VAR78 > VAR2->VAR81 - 1)
                    return -1;
                VAR80 = 0;
                for (VAR79 = 0; VAR79 < VAR2->VAR81; VAR79++)
                {
                    if (VAR2->VAR82[VAR79]->VAR83->VAR77 != VAR77)
                        continue;
                    if (VAR80 == VAR78)
                        return VAR79;
                    VAR80++;
                }
                return -1;
            }
            static int FUN33(VAR1 * VAR2)
            {
                VAR5 *VAR58 = VAR2->VAR7;
                VAR3 *VAR4;
                int VAR79;
                enum AVMediaType VAR77;
                int VAR84, VAR81;
                char *VAR56, *VAR85, *VAR86, *VAR87, *VAR88, *VAR89;
                const char *VAR90;
                VAR56 = FUN11(VAR58->VAR91);
                VAR85 = VAR56;
                while (FUN34(VAR85, "", &VAR86))
                {
                    VAR85 = NULL;
                    VAR58->VAR84++;
                }
                FUN29(&VAR56);
                VAR58->VAR92 = FUN35(sizeof(*VAR58->VAR92) * VAR58->VAR84);
                if (!VAR58->VAR92)
                    return FUN6(VAR31);
                VAR56 = VAR58->VAR91;
                VAR84 = 0;
                while (VAR88 = FUN34(VAR56, "", &VAR86))
                {
                    VAR56 = NULL;
                    if (VAR84 < VAR58->VAR84)
                        VAR4 = &(VAR58->VAR92[VAR84++]);
                    else
                        return FUN6(VAR26);
                    VAR85 = VAR88;
                    while (VAR85 < VAR88 + strlen(VAR88))
                    {
                        if (!FUN36(VAR85, "", 2) || !FUN36(VAR85, "", 2) || !FUN36(VAR85, "", 2))
                            VAR4->VAR81++;
                        VAR85++;
                    }
                    VAR4->VAR82 = FUN35(sizeof(VAR93 *) * VAR4->VAR81);
                    if (!VAR4->VAR82)
                        return FUN6(VAR31);
                    VAR81 = 0;
                    while (VAR89 = FUN34(VAR88, "", &VAR87))
                    {
                        VAR88 = NULL;
                        if (FUN37(VAR89, "", &VAR90))
                        {
                            VAR4->VAR94 = FUN11(VAR90);
                            if (!VAR4->VAR94)
                                return FUN6(VAR31);
                            continue;
                        }
                        else if (FUN37(VAR89, "", &VAR90))
                        {
                            VAR4->VAR95 = FUN11(VAR90);
                            if (!VAR4->VAR95)
                                return FUN6(VAR31);
                            continue;
                        }
                        else if (FUN37(VAR89, "", &VAR90))
                        {
                            VAR77 = VAR96;
                        }
                        else if (FUN37(VAR89, "", &VAR90))
                        {
                            VAR77 = VAR97;
                        }
                        else if (FUN37(VAR89, "", &VAR90))
                        {
                            VAR77 = VAR98;
                        }
                        else
                        {
                            FUN5(VAR2, VAR25, "", VAR89);
                            return FUN6(VAR26);
                        }
                        VAR79 = -1;
                        if (FUN38(*VAR90))
                            VAR79 = FUN32(VAR2, VAR77, FUN39(VAR90));
                        if (VAR79 >= 0 && VAR81 < VAR4->VAR81)
                        {
                            VAR4->VAR82[VAR81++] = VAR2->VAR82[VAR79];
                        }
                        else
                        {
                            FUN5(VAR2, VAR25, "", VAR89);
                            return FUN6(VAR26);
                        }
                    }
                }
                FUN5(VAR2, VAR99, "", VAR58->VAR84);
                return 0;
            }
            static int FUN40(VAR1 * VAR2)
            {
                VAR5 *VAR58 = VAR2->VAR7;
                int VAR100;
                char *VAR56, *VAR85, *VAR86, *VAR87, *VAR101, *VAR89;
                const char *VAR90;
                VAR102 *VAR103;
                VAR56 = FUN11(VAR58->VAR104);
                VAR85 = VAR56;
                while (FUN34(VAR85, "", &VAR86))
                {
                    VAR85 = NULL;
                    VAR58->VAR100++;
                }
                FUN29(&VAR56);
                VAR58->VAR105 = FUN35(sizeof(*VAR58->VAR105) * VAR58->VAR100);
                if (!VAR58->VAR105)
                    return FUN6(VAR31);
                VAR56 = VAR58->VAR104;
                VAR100 = 0;
                while (VAR101 = FUN34(VAR56, "", &VAR86))
                {
                    VAR56 = NULL;
                    if (VAR100 < VAR58->VAR100)
                        VAR103 = &(VAR58->VAR105[VAR100++]);
                    else
                        return FUN6(VAR26);
                    while (VAR89 = FUN34(VAR101, "", &VAR87))
                    {
                        VAR101 = NULL;
                        if (FUN37(VAR89, "", &VAR90))
                        {
                            VAR103->VAR95 = FUN11(VAR90);
                            if (!VAR103->VAR95)
                                return FUN6(VAR31);
                        }
                        else if (FUN37(VAR89, "", &VAR90))
                        {
                            VAR103->VAR106 = FUN11(VAR90);
                            if (!VAR103->VAR106)
                                return FUN6(VAR31);
                        }
                        else if (FUN37(VAR89, "", &VAR90))
                        {
                            VAR103->VAR107 = FUN11(VAR90);
                            if (!VAR103->VAR107)
                                return FUN6(VAR31);
                        }
                        else
                        {
                            FUN5(VAR2, VAR25, "", VAR89);
                            return FUN6(VAR26);
                        }
                    }
                    if (!VAR103->VAR95 || !VAR103->VAR106)
                    {
                        FUN5(VAR2, VAR25, "");
                        return FUN6(VAR26);
                    }
                    if (FUN37(VAR103->VAR106, "", &VAR90))
                    {
                        if (FUN39(VAR90) < 1 || FUN39(VAR90) > 4)
                        {
                            FUN5(VAR2, VAR25, "", FUN39(VAR90), VAR103->VAR106);
                            return FUN6(VAR26);
                        }
                    }
                    else if (FUN37(VAR103->VAR106, "", &VAR90))
                    {
                        if (FUN39(VAR90) < 1 || FUN39(VAR90) > 63)
                        {
                            FUN5(VAR2, VAR25, "", FUN39(VAR90), VAR103->VAR106);
                            return FUN6(VAR26);
                        }
                    }
                    else
                    {
                        FUN5(VAR2, VAR25, "", VAR103->VAR106);
                        return FUN6(VAR26);
                    }
                }
                return 0;
            }
            static int FUN41(VAR1 * VAR2)
            {
                VAR5 *VAR58 = VAR2->VAR7;
                unsigned int VAR62;
                int VAR69 = 0;
                if (VAR58->VAR104)
                {
                    VAR69 = FUN40(VAR2);
                    if (VAR69 < 0)
                        return VAR69;
                }
                if (VAR58->VAR91)
                {
                    return FUN33(VAR2);
                }
                else
                {
                    VAR58->VAR84 = 1;
                    VAR58->VAR92 = FUN35(sizeof(*VAR58->VAR92) * VAR58->VAR84);
                    if (!VAR58->VAR92)
                        return FUN6(VAR31);
                    VAR58->VAR92[0].VAR81 = VAR2->VAR81;
                    VAR58->VAR92[0].VAR82 = FUN35(sizeof(VAR93 *) * VAR58->VAR92[0].VAR81);
                    if (!VAR58->VAR92[0].VAR82)
                        return FUN6(VAR31);
                    if (VAR58->VAR100)
                    {
                        VAR58->VAR92[0].VAR95 = FUN11(VAR58->VAR105[0].VAR95);
                        if (!VAR58->VAR92[0].VAR95)
                            return FUN6(VAR31);
                    }
                    for (VAR62 = 0; VAR62 < VAR2->VAR81; VAR62++)
                        VAR58->VAR92[0].VAR82[VAR62] = VAR2->VAR82[VAR62];
                }
                return 0;
            }
            static int FUN42(VAR1 * VAR2)
            {
                VAR5 *VAR58 = VAR2->VAR7;
                const char *VAR33;
                char *VAR108 = NULL, *VAR109 = NULL;
                int VAR69 = 0;
                VAR108 = FUN11(VAR2->VAR14);
                if (!VAR108)
                {
                    VAR69 = FUN6(VAR31);
                    goto VAR44;
                }
                VAR33 = FUN12(VAR108);
                if (VAR33 && FUN28(FUN27(VAR33), ""))
                {
                    VAR109 = FUN11(VAR33);
                    if (!VAR109)
                    {
                        VAR69 = FUN6(VAR31);
                        goto VAR44;
                    }
                    VAR33 = FUN12(VAR109);
                }
                if (VAR33 && strcmp(VAR33, ""))
                    VAR58->VAR110 = FUN43(VAR33, VAR58->VAR111);
                else
                    VAR58->VAR110 = FUN11(VAR58->VAR111);
                if (!VAR58->VAR110)
                {
                    VAR69 = FUN6(VAR31);
                    goto VAR44;
                }
            VAR44:
                FUN29(&VAR108);
                FUN29(&VAR109);
                return VAR69;
            }
            static int FUN44(VAR1 * VAR2)
            {
                VAR5 *VAR58 = VAR2->VAR7;
                int VAR69, VAR62, VAR112;
                VAR12 *VAR13 = NULL;
                VAR3 *VAR4 = NULL;
                for (VAR62 = 0; VAR62 < VAR58->VAR84; VAR62++)
                {
                    VAR4 = &VAR58->VAR92[VAR62];
                    FUN45(&VAR13, VAR58->VAR113, 0);
                    VAR69 = FUN23(VAR4->VAR9, &VAR13);
                    if (FUN46(VAR13))
                    {
                        FUN5(VAR2, VAR25, "", VAR58->VAR114);
                        VAR69 = FUN6(VAR26);
                        FUN21(&VAR13);
                        goto VAR44;
                    }
                    FUN21(&VAR13);
                    for (VAR112 = 0; VAR112 < VAR4->VAR81; VAR112++)
                    {
                        VAR93 *VAR115;
                        VAR93 *VAR116 = VAR4->VAR82[VAR112];
                        if (VAR58->VAR22 > 0)
                        {
                            if ((VAR116->VAR83->VAR77 == VAR96) && (VAR116->VAR83->VAR117 > VAR58->VAR22))
                            {
                                FUN5(VAR2, VAR41, ""
                                                          "" VAR118 "" VAR118 "",
                                       VAR116->VAR83->VAR117, VAR58->VAR22);
                            }
                        }
                        if (VAR116->VAR83->VAR77 != VAR98)
                            VAR115 = VAR4->VAR9->VAR82[VAR112];
                        else if (VAR4->VAR11)
                            VAR115 = VAR4->VAR11->VAR82[0];
                        else
                        {
                            VAR115 = NULL;
                            continue;
                        }
                        FUN47(VAR116, VAR115->VAR119, VAR115->VAR120.VAR121, VAR115->VAR120.VAR122);
                        FUN48(VAR116, VAR4);
                    }
                    if (VAR4->VAR123 && VAR4->VAR94)
                    {
                        for (VAR112 = 0; VAR112 < VAR58->VAR84; VAR112++)
                        {
                            VAR3 *VAR124 = &(VAR58->VAR92[VAR112]);
                            if (!VAR124->VAR123 && !VAR124->VAR125 && VAR124->VAR94 && !FUN49(VAR124->VAR94, VAR4->VAR94))
                            {
                                FUN48(VAR124->VAR82[0], VAR4);
                            }
                        }
                    }
                }
            VAR44:
                return VAR69;
            }
            static int FUN50(VAR1 * VAR2, VAR126 * VAR127)
            {
                VAR5 *VAR58 = VAR2->VAR7;
                VAR1 *VAR8 = NULL;
                VAR93 *VAR128 = VAR2->VAR82[VAR127->VAR79];
                int64_t VAR129 = 0;
                int VAR130 = 1;
                int VAR69 = 0, VAR131 = 1, VAR62, VAR112;
                int VAR79 = 0;
                int VAR132 = 0;
                VAR133 *VAR134 = NULL;
                VAR3 *VAR4 = NULL;
                for (VAR62 = 0; VAR62 < VAR58->VAR84; VAR62++)
                {
                    VAR4 = &VAR58->VAR92[VAR62];
                    for (VAR112 = 0; VAR112 < VAR4->VAR81; VAR112++)
                    {
                        if (VAR4->VAR82[VAR112] == VAR128)
                        {
                            if (VAR128->VAR83->VAR77 == VAR98)
                            {
                                VAR8 = VAR4->VAR11;
                                VAR79 = 0;
                            }
                            else
                            {
                                VAR8 = VAR4->VAR9;
                                VAR79 = VAR112;
                            }
                            break;
                        }
                    }
                    if (VAR8)
                        break;
                }
                if (!VAR8)
                {
                    FUN5(VAR2, VAR25, "");
                    return FUN6(VAR31);
                }
                VAR129 = VAR58->VAR135 * VAR4->VAR37;
                if (VAR4->VAR24 - VAR4->VAR136 > VAR58->VAR137 && VAR58->VAR138 > 0)
                {
                    int VAR139 = VAR58->VAR138 * VAR4->VAR136 * VAR140;
                    int VAR141 = (VAR4->VAR24 - VAR4->VAR136) * VAR58->VAR142 * VAR140;
                    VAR58->VAR135 = VAR58->VAR142 * VAR140;
                    VAR129 = VAR139 + VAR141;
                }
                if (VAR4->VAR143 == VAR144)
                {
                    VAR4->VAR143 = VAR127->VAR145;
                }
                if (VAR4->VAR123)
                {
                    VAR131 = VAR128->VAR83->VAR77 == VAR96 && ((VAR127->VAR18 & VAR146) || (VAR58->VAR18 & VAR147));
                    VAR130 = VAR128->VAR83->VAR77 == VAR96;
                }
                if (VAR127->VAR145 == VAR144)
                    VAR130 = VAR131 = 0;
                if (VAR130)
                {
                    if (VAR4->VAR129 == VAR144)
                        VAR4->VAR129 = VAR127->VAR145;
                    if (VAR4->VAR148)
                    {
                        VAR4->VAR148 = 0;
                        VAR4->VAR149 = (double)(VAR127->VAR145 - VAR4->VAR129) * VAR128->VAR120.VAR121 / VAR128->VAR120.VAR122;
                        VAR4->VAR150 = (double)(VAR127->VAR149) * VAR128->VAR120.VAR121 / VAR128->VAR120.VAR122;
                    }
                    else
                    {
                        if (VAR127->VAR149)
                        {
                            VAR4->VAR149 += (double)(VAR127->VAR149) * VAR128->VAR120.VAR121 / VAR128->VAR120.VAR122;
                        }
                        else
                        {
                            FUN5(VAR2, VAR41, "");
                            VAR4->VAR149 = (double)(VAR127->VAR145 - VAR4->VAR129) * VAR128->VAR120.VAR121 / VAR128->VAR120.VAR122;
                        }
                    }
                }
                if (VAR4->VAR151 && VAR131 && FUN51(VAR127->VAR145 - VAR4->VAR143, VAR128->VAR120, VAR129, VAR152) >= 0)
                {
                    int64_t VAR153;
                    char *VAR154 = FUN11(VAR4->VAR9->VAR14);
                    int VAR155 = (VAR58->VAR18 & VAR19) || (VAR58->VAR22 > 0);
                    if (!VAR154)
                    {
                        return FUN6(VAR31);
                    }
                    FUN52(VAR4->VAR9, NULL);
                    VAR153 = FUN53(VAR4->VAR9->VAR47);
                    VAR4->VAR156 = VAR153 - VAR4->VAR157;
                    if (!VAR155)
                    {
                        if (VAR58->VAR48 == VAR49)
                        {
                            if (!VAR4->VAR158)
                            {
                                FUN54(VAR8->VAR47);
                                VAR132 = FUN55(VAR8->VAR47, &VAR134);
                                FUN56(VAR4->VAR159, VAR134, VAR132);
                                VAR4->VAR158 = VAR132;
                                FUN57(&VAR8->VAR47);
                                VAR4->VAR151 = 0;
                                FUN58(VAR2, &VAR4->VAR159);
                                FUN59(VAR2, &VAR4->VAR159, VAR4->VAR160);
                            }
                        }
                        else
                        {
                            FUN59(VAR2, &VAR8->VAR47, VAR8->VAR14);
                        }
                        if (VAR4->VAR11)
                        {
                            FUN59(VAR2, &VAR4->VAR11->VAR47, VAR4->VAR11->VAR14);
                        }
                    }
                    if ((VAR58->VAR18 & VAR38) && VAR8->VAR14[0])
                    {
                        if (!(VAR58->VAR18 & VAR19) || (VAR58->VAR22 <= 0))
                            if ((VAR4->VAR9->VAR50->VAR51 && VAR4->VAR9->VAR7) && VAR58->VAR48 != VAR49)
                                FUN22(VAR4->VAR9->VAR7, "", "", 0);
                        FUN60(VAR2, VAR8);
                    }
                    if (VAR4->VAR161)
                    {
                        VAR4->VAR37--;
                    }
                    if (VAR58->VAR48 == VAR49)
                    {
                        VAR69 = FUN20(VAR2, &VAR4->VAR159, VAR4->VAR9->VAR14, NULL);
                        if (VAR69 < 0)
                        {
                            FUN5(NULL, VAR25, "", VAR4->VAR9->VAR14);
                            FUN4(VAR154);
                            return VAR69;
                        }
                        FUN61(VAR4->VAR159);
                        VAR69 = FUN62(VAR4, &VAR132);
                        if (VAR69 < 0)
                        {
                            FUN4(VAR154);
                            return VAR69;
                        }
                        FUN58(VAR2, &VAR4->VAR159);
                    }
                    VAR69 = FUN63(VAR2, VAR58, VAR4, VAR4->VAR149, VAR4->VAR157, VAR4->VAR156);
                    VAR4->VAR157 = VAR153;
                    if (VAR69 < 0)
                    {
                        FUN4(VAR154);
                        return VAR69;
                    }
                    VAR4->VAR129 = VAR127->VAR145;
                    VAR4->VAR149 = 0;
                    VAR4->VAR161 = 0;
                    if (VAR58->VAR18 & VAR19)
                    {
                        VAR4->VAR37++;
                    }
                    else if (VAR58->VAR22 > 0)
                    {
                        if (VAR4->VAR157 >= VAR58->VAR22)
                        {
                            VAR4->VAR24++;
                            FUN64(VAR58, VAR4, VAR154);
                            VAR69 = FUN1(VAR2, VAR4);
                            VAR4->VAR157 = 0;
                            VAR4->VAR37--;
                        }
                        VAR4->VAR37++;
                    }
                    else
                    {
                        FUN64(VAR58, VAR4, VAR154);
                        VAR69 = FUN1(VAR2, VAR4);
                    }
                    FUN4(VAR154);
                    if (VAR69 < 0)
                    {
                        return VAR69;
                    }
                    if (!VAR4->VAR161 || VAR155)
                        if ((VAR69 = FUN65(VAR2, 0, VAR4)) < 0)
                        {
                            return VAR69;
                        }
                }
                VAR4->VAR151++;
                VAR69 = FUN66(VAR8, VAR79, VAR127, VAR2, 0);
                return VAR69;
            }
            static int FUN67(struct VAR1 * VAR2)
            {
                VAR5 *VAR58 = VAR2->VAR7;
                VAR1 *VAR8 = NULL;
                VAR1 *VAR10 = NULL;
                char *VAR154 = NULL;
                int VAR62;
                int VAR69 = 0;
                VAR3 *VAR4 = NULL;
                for (VAR62 = 0; VAR62 < VAR58->VAR84; VAR62++)
                {
                    VAR4 = &VAR58->VAR92[VAR62];
                    VAR8 = VAR4->VAR9;
                    VAR10 = VAR4->VAR11;
                    VAR154 = FUN11(VAR4->VAR9->VAR14);
                    if (!VAR154)
                    {
                        return FUN6(VAR31);
                    }
                    if (VAR58->VAR48 == VAR49)
                    {
                        int VAR132 = 0;
                        VAR69 = FUN20(VAR2, &VAR4->VAR159, VAR4->VAR9->VAR14, NULL);
                        if (VAR69 < 0)
                        {
                            FUN5(NULL, VAR25, "", VAR4->VAR9->VAR14);
                            goto VAR162;
                        }
                        FUN61(VAR4->VAR159);
                        VAR69 = FUN62(VAR4, &VAR132);
                        if (VAR69 < 0)
                        {
                            goto VAR162;
                        }
                        FUN58(VAR2, &VAR4->VAR159);
                    }
                VAR162:
                    FUN68(VAR8);
                    if (VAR8->VAR47)
                    {
                        VAR4->VAR156 = FUN53(VAR4->VAR9->VAR47) - VAR4->VAR157;
                        if (VAR58->VAR48 != VAR49)
                            FUN58(VAR2, &VAR8->VAR47);
                        if ((VAR58->VAR18 & VAR38) && VAR8->VAR14[0])
                        {
                            FUN60(VAR2, VAR8);
                        }
                        FUN63(VAR2, VAR58, VAR4, VAR4->VAR149 + VAR4->VAR150, VAR4->VAR157, VAR4->VAR156);
                    }
                    FUN64(VAR58, VAR4, VAR154);
                    if (VAR10)
                    {
                        if (VAR10->VAR47)
                            FUN68(VAR10);
                        VAR4->VAR156 = FUN53(VAR4->VAR11->VAR47) - VAR4->VAR157;
                        FUN58(VAR2, &VAR10->VAR47);
                    }
                    FUN29(&VAR4->VAR20);
                    FUN29(&VAR4->VAR160);
                    FUN69(VAR8);
                    VAR4->VAR9 = NULL;
                    FUN65(VAR2, 1, VAR4);
                    FUN29(&VAR4->VAR163);
                    if (VAR10)
                    {
                        FUN29(&VAR4->VAR21);
                        FUN29(&VAR4->VAR164);
                        FUN69(VAR10);
                    }
                    FUN70(VAR4->VAR165);
                    FUN70(VAR4->VAR166);
                    FUN4(VAR154);
                    FUN29(&VAR4->VAR167);
                    FUN29(&VAR4->VAR82);
                    FUN29(&VAR4->VAR94);
                    FUN29(&VAR4->VAR95);
                    FUN29(&VAR4->VAR168);
                }
                for (VAR62 = 0; VAR62 < VAR58->VAR100; VAR62++)
                {
                    VAR102 *VAR103 = &VAR58->VAR105[VAR62];
                    FUN29(&VAR103->VAR95);
                    FUN29(&VAR103->VAR106);
                    FUN29(&VAR103->VAR107);
                }
                FUN58(VAR2, &VAR58->VAR169);
                FUN58(VAR2, &VAR58->VAR170);
                FUN29(&VAR58->VAR171);
                FUN29(&VAR58->VAR92);
                FUN29(&VAR58->VAR105);
                FUN29(&VAR58->VAR110);
                return 0;
            }
            static int FUN71(VAR1 * VAR2)
            {
                int VAR69 = 0;
                int VAR62 = 0;
                int VAR112 = 0;
                VAR5 *VAR58 = VAR2->VAR7;
                const char *VAR172 = "";
                VAR3 *VAR4 = NULL;
                int VAR173 = 0;
                const char *VAR174 = FUN24(VAR2);
                const char *VAR175 = "";
                char *VAR56 = NULL;
                int VAR176 = 0;
                int VAR177 = strlen(VAR58->VAR163) + 1;
                VAR69 = FUN41(VAR2);
                if (VAR69 < 0)
                {
                    FUN5(VAR2, VAR25, "", VAR69);
                    goto VAR44;
                }
                if (VAR58->VAR84 > 1 && VAR58->VAR18 & VAR43)
                {
                    VAR69 = FUN6(VAR26);
                    FUN5(VAR2, VAR25, "");
                    goto VAR44;
                }
                VAR69 = FUN26(VAR58->VAR84, VAR2->VAR14);
                if (VAR69 < 0)
                    goto VAR44;
                if (VAR58->VAR178)
                {
                    VAR69 = FUN26(VAR58->VAR84, VAR58->VAR178);
                    if (VAR69 < 0)
                        goto VAR44;
                }
                if (FUN49(VAR58->VAR163, ""))
                {
                    VAR69 = FUN26(VAR58->VAR84, VAR58->VAR163);
                    if (VAR69 < 0)
                        goto VAR44;
                }
                if (VAR58->VAR179)
                {
                    VAR69 = FUN26(VAR58->VAR84, VAR58->VAR179);
                    if (VAR69 < 0)
                        goto VAR44;
                }
                if (VAR58->VAR111)
                {
                    VAR69 = FUN42(VAR2);
                    if (VAR69 < 0)
                    {
                        FUN5(VAR2, VAR25, "", VAR69);
                        goto VAR44;
                    }
                }
                if (VAR58->VAR48 == VAR49)
                {
                    VAR172 = "";
                }
                if ((VAR58->VAR180 == VAR181) || (VAR58->VAR180 == VAR182))
                {
                    time_t VAR55 = FUN7(NULL);
                    if (VAR58->VAR180 == VAR181)
                    {
                        VAR58->VAR137 = (VAR183)VAR55;
                    }
                    else if (VAR58->VAR180 == VAR182)
                    {
                        char VAR54[15];
                        struct VAR29 *VAR56, VAR57;
                        if (!(VAR56 = FUN8(&VAR55, &VAR57)))
                            return FUN6(VAR31);
                        if (!FUN9(VAR54, sizeof(VAR54), "", VAR56))
                            return FUN6(VAR31);
                        VAR58->VAR137 = FUN72(VAR54, NULL, 10);
                    }
                    FUN5(VAR58, VAR99, "" VAR118 "", VAR58->VAR137);
                }
                VAR58->VAR135 = (VAR58->VAR138 ? VAR58->VAR138 : VAR58->VAR142) * VAR140;
                for (VAR62 = 0; VAR62 < VAR58->VAR84; VAR62++)
                {
                    VAR4 = &VAR58->VAR92[VAR62];
                    VAR4->VAR167 = FUN11(VAR2->VAR14);
                    if (!VAR4->VAR167)
                    {
                        VAR69 = FUN6(VAR31);
                        goto VAR44;
                    }
                    VAR69 = FUN30(VAR4->VAR167, strlen(VAR2->VAR14) + 1, VAR62);
                    if (VAR69 < 0)
                        goto VAR44;
                    VAR4->VAR24 = VAR58->VAR137;
                    VAR4->VAR143 = VAR144;
                    VAR4->VAR129 = VAR144;
                    VAR4->VAR184[0] = '';
                    if (VAR58->VAR18 & VAR147 && VAR58->VAR18 & VAR185)
                    {
                        VAR58->VAR18 &= ~VAR185;
                        FUN5(VAR2, VAR41, ""
                                                  "");
                    }
                    if (VAR58->VAR18 & VAR186)
                    {
                        time_t VAR28;
                        FUN7(&VAR28);
                        VAR4->VAR187 = VAR28;
                    }
                    if (VAR58->VAR114)
                    {
                        VAR69 = FUN73(&VAR58->VAR113, VAR58->VAR114, "", "", 0);
                        if (VAR69 < 0)
                        {
                            FUN5(VAR2, VAR25, "", VAR58->VAR114);
                            goto VAR44;
                        }
                    }
                    for (VAR112 = 0; VAR112 < VAR4->VAR81; VAR112++)
                    {
                        VAR4->VAR123 += VAR4->VAR82[VAR112]->VAR83->VAR77 == VAR96;
                        VAR4->VAR125 += VAR4->VAR82[VAR112]->VAR83->VAR77 == VAR98;
                    }
                    if (VAR4->VAR123 > 1)
                        FUN5(VAR2, VAR41, "");
                    if (VAR58->VAR48 == VAR49)
                    {
                        VAR4->VAR50 = FUN74("", NULL, NULL);
                    }
                    else
                    {
                        VAR4->VAR50 = FUN74("", NULL, NULL);
                    }
                    if (!VAR4->VAR50)
                    {
                        VAR69 = VAR188;
                        goto VAR44;
                    }
                    if (VAR4->VAR125)
                    {
                        VAR4->VAR189 = FUN74("", NULL, NULL);
                        if (!VAR4->VAR50)
                        {
                            VAR69 = VAR188;
                            goto VAR44;
                        }
                    }
                    if (VAR58->VAR178)
                    {
                        VAR173 = strlen(VAR58->VAR178) + 1;
                        VAR4->VAR20 = FUN75(VAR173);
                        if (!VAR4->VAR20)
                        {
                            VAR69 = FUN6(VAR31);
                            goto VAR44;
                        }
                        FUN2(VAR4->VAR20, VAR58->VAR178, VAR173);
                        VAR69 = FUN30(VAR4->VAR20, VAR173, VAR62);
                        if (VAR69 < 0)
                            goto VAR44;
                    }
                    else
                    {
                        if (VAR58->VAR18 & VAR19)
                        {
                            if (VAR58->VAR48 == VAR49)
                            {
                                VAR172 = "";
                            }
                            else
                            {
                                VAR172 = "";
                            }
                        }
                        if (VAR58->VAR27)
                        {
                            VAR173 = strlen(VAR4->VAR167) + strlen(VAR174) + 1;
                        }
                        else
                        {
                            VAR173 = strlen(VAR4->VAR167) + strlen(VAR172) + 1;
                        }
                        VAR4->VAR20 = FUN75(VAR173);
                        if (!VAR4->VAR20)
                        {
                            VAR69 = FUN6(VAR31);
                            goto VAR44;
                        }
                        FUN2(VAR4->VAR20, VAR4->VAR167, VAR173);
                        VAR56 = strrchr(VAR4->VAR20, '');
                        if (VAR56)
                            *VAR56 = '';
                        if (VAR58->VAR27)
                        {
                            FUN15(VAR4->VAR20, VAR174, VAR173);
                        }
                        else
                        {
                            FUN15(VAR4->VAR20, VAR172, VAR173);
                        }
                    }
                    if (VAR58->VAR48 == VAR49)
                    {
                        if (VAR58->VAR84 > 1)
                            VAR177 += strlen(VAR64);
                        VAR4->VAR163 = FUN75(VAR177);
                        if (!VAR4->VAR163)
                        {
                            VAR69 = FUN6(VAR31);
                            goto VAR44;
                        }
                        FUN2(VAR4->VAR163, VAR58->VAR163, VAR177);
                        if (FUN49(VAR58->VAR163, ""))
                        {
                            VAR69 = FUN30(VAR4->VAR163, VAR177, VAR62);
                            if (VAR69 < 0)
                                goto VAR44;
                            VAR177 = strlen(VAR4->VAR163) + 1;
                            VAR4->VAR160 = FUN75(VAR177);
                            if (!VAR4->VAR160)
                            {
                                VAR69 = FUN6(VAR31);
                                goto VAR44;
                            }
                            FUN2(VAR4->VAR160, VAR4->VAR163, VAR177);
                        }
                        else
                        {
                            if (VAR58->VAR84 > 1)
                            {
                                VAR69 = FUN25(VAR4->VAR163, VAR177, VAR62);
                                if (VAR69 < 0)
                                    goto VAR44;
                            }
                            VAR177 = strlen(VAR4->VAR167) + strlen(VAR4->VAR163) + 1;
                            VAR4->VAR160 = FUN75(VAR177);
                            if (!VAR4->VAR160)
                            {
                                VAR69 = FUN6(VAR31);
                                goto VAR44;
                            }
                            FUN2(VAR4->VAR160, VAR4->VAR167, VAR177);
                            VAR56 = strrchr(VAR4->VAR160, '');
                            if (VAR56)
                            {
                                *(VAR56 + 1) = '';
                                FUN15(VAR4->VAR160, VAR4->VAR163, VAR177);
                            }
                            else
                            {
                                FUN2(VAR4->VAR160, VAR4->VAR163, VAR177);
                            }
                        }
                    }
                    if (!VAR58->VAR27)
                    {
                        VAR69 = FUN76(VAR58);
                        if (VAR69 < 0)
                        {
                            goto VAR44;
                        }
                    }
                    else
                    {
                        VAR69 = FUN77(VAR58, VAR4);
                        if (VAR69 < 0)
                        {
                            goto VAR44;
                        }
                    }
                    if (VAR4->VAR125)
                    {
                        if (VAR58->VAR18 & VAR19)
                            VAR175 = "";
                        VAR176 = strlen(VAR4->VAR167) + strlen(VAR175) + 1;
                        VAR4->VAR21 = FUN75(VAR176);
                        if (!VAR4->VAR21)
                        {
                            VAR69 = FUN6(VAR31);
                            goto VAR44;
                        }
                        VAR4->VAR164 = FUN75(VAR176);
                        if (!VAR4->VAR164)
                        {
                            VAR69 = FUN6(VAR31);
                            goto VAR44;
                        }
                        FUN2(VAR4->VAR21, VAR4->VAR167, VAR176);
                        VAR56 = strrchr(VAR4->VAR21, '');
                        if (VAR56)
                            *VAR56 = '';
                        if (VAR58->VAR179)
                        {
                            strcpy(VAR4->VAR164, VAR58->VAR179);
                            VAR69 = FUN30(VAR4->VAR164, VAR176, VAR62);
                            if (VAR69 < 0)
                                goto VAR44;
                        }
                        else
                        {
                            strcpy(VAR4->VAR164, VAR4->VAR21);
                            FUN15(VAR4->VAR164, "", VAR176);
                        }
                        FUN15(VAR4->VAR21, VAR175, VAR176);
                    }
                    if (VAR58->VAR168)
                    {
                        VAR4->VAR168 = FUN11(VAR58->VAR168);
                        if (!VAR4->VAR168)
                        {
                            VAR69 = FUN6(VAR31);
                            goto VAR44;
                        }
                    }
                    if ((VAR58->VAR18 & VAR19) && (VAR58->VAR48 == VAR49))
                    {
                        VAR4->VAR163 = FUN11(VAR4->VAR20);
                        if (!VAR4->VAR163)
                        {
                            VAR69 = FUN6(VAR31);
                            goto VAR44;
                        }
                    }
                    if ((VAR69 = FUN78(VAR2, VAR4)) < 0)
                        goto VAR44;
                    if (VAR58->VAR18 & VAR190)
                    {
                        FUN79(VAR2, VAR4->VAR167, VAR4);
                        VAR4->VAR191 = 1;
                        if (VAR58->VAR138 > 0)
                        {
                            FUN5(VAR2, VAR41, ""
                                                      "");
                            VAR58->VAR138 = 0;
                            VAR58->VAR135 = VAR58->VAR142 * VAR140;
                        }
                    }
                    if ((VAR69 = FUN1(VAR2, VAR4)) < 0)
                        goto VAR44;
                }
            VAR44:
                if (VAR69 < 0)
                {
                    FUN29(&VAR58->VAR171);
                    for (VAR62 = 0; VAR62 < VAR58->VAR84 && VAR58->VAR92; VAR62++)
                    {
                        VAR4 = &VAR58->VAR92[VAR62];
                        FUN29(&VAR4->VAR20);
                        FUN29(&VAR4->VAR21);
                        FUN29(&VAR4->VAR163);
                        FUN29(&VAR4->VAR167);
                        FUN29(&VAR4->VAR164);
                        FUN29(&VAR4->VAR82);
                        FUN29(&VAR4->VAR94);
                        FUN29(&VAR4->VAR95);
                        FUN29(&VAR4->VAR168);
                        if (VAR4->VAR9)
                            FUN69(VAR4->VAR9);
                        if (VAR4->VAR11)
                            FUN69(VAR4->VAR11);
                    }
                    for (VAR62 = 0; VAR62 < VAR58->VAR100; VAR62++)
                    {
                        VAR102 *VAR103 = &VAR58->VAR105[VAR62];
                        FUN29(&VAR103->VAR95);
                        FUN29(&VAR103->VAR106);
                        FUN29(&VAR103->VAR107);
                    }
                    FUN29(&VAR58->VAR92);
                    FUN29(&VAR58->VAR105);
                    FUN29(&VAR58->VAR110);
                }
                return VAR69;
            }
            static const AVOption VAR13[] = {
                {"", "", FUN80(VAR137), VAR192, {.VAR193 = 0}, 0, VAR194, VAR195},
                {"", "", FUN80(VAR142), VAR196, {.VAR197 = 2}, 0, VAR198, VAR195},
                {"", "", FUN80(VAR138), VAR196, {.VAR197 = 0}, 0, VAR198, VAR195},
                {"", "", FUN80(VAR199), VAR200, {.VAR193 = 5}, 0, VAR53, VAR195},
                {"", "", FUN80(VAR114), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR203), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR23), VAR200, {.VAR193 = 0}, 0, VAR53, VAR195},
                {"", "", FUN80(VAR204), VAR200, {.VAR193 = -1}, VAR205, VAR53, VAR195},
                {"", "", FUN80(VAR168), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR178), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR22), VAR200, {.VAR193 = 0}, 0, VAR53, VAR195},
                {"", "", FUN80(VAR39), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR40), VAR206, {.VAR193 = 0}, 0, 1, VAR195},
                {"", "", FUN80(VAR207), VAR201, .VAR18 = VAR195},
                {"", "", FUN80(VAR208), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR209), VAR201, .VAR18 = VAR195},
                {"", "", FUN80(VAR179), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR48), VAR200, {.VAR193 = VAR210}, 0, VAR49, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR210}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR49}, 0, VAR212, VAR195, ""},
                {"", "", FUN80(VAR163), VAR201, {.VAR202 = ""}, 0, 0, VAR195},
                {"", "", FUN80(VAR18), VAR213, {.VAR193 = 0}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR19}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR38}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR214}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR215}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR216}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR217}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR147}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR190}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR186}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR218}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR219}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR220}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR43}, 0, VAR212, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR185}, 0, VAR212, VAR195, ""},
                {"", "", FUN80(VAR27), VAR206, {.VAR193 = 0}, 0, 1, VAR195},
                {"", "", FUN80(VAR32), VAR206, {.VAR193 = 0}, 0, 1, VAR195},
                {"", "", FUN80(VAR221), VAR200, {.VAR193 = VAR222}, 0, VAR223 - 1, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR224}, VAR205, VAR53, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR225}, VAR205, VAR53, VAR195, ""},
                {"", "", FUN80(VAR226), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR180), VAR200, {.VAR193 = VAR227}, 0, VAR182, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR227}, VAR205, VAR53, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR181}, VAR205, VAR53, VAR195, ""},
                {"", "", 0, VAR211, {.VAR193 = VAR182}, VAR205, VAR53, VAR195, ""},
                {"", "", FUN80(VAR228), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR91), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR104), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR111), VAR201, {.VAR202 = NULL}, 0, 0, VAR195},
                {"", "", FUN80(VAR229), VAR200, {.VAR193 = 0}, 0, VAR212, VAR195},
                {"", "", FUN80(VAR230), VAR206, {.VAR193 = 0}, 0, 1, VAR195},
                {NULL},
            };
            static const AVClass VAR231 = {
                .VAR232 = "",
                .VAR233 = VAR234,
                .VAR235 = VAR13,
                .VAR236 = VAR237,
            };
            AVOutputFormat VAR238 = {
                .VAR60 = "",
                .VAR239 = FUN81(""),
                .VAR240 = "",
                .VAR241 = sizeof(VAR5),
                .VAR242 = VAR243,
                .VAR244 = VAR245,
                .VAR246 = VAR247,
                .VAR18 = VAR248 | VAR249 | VAR250,
                .VAR251 = VAR252,
                .VAR253 = VAR254,
                .VAR255 = VAR256,
                .VAR257 = VAR258,
                .VAR51 = &VAR231,
            };