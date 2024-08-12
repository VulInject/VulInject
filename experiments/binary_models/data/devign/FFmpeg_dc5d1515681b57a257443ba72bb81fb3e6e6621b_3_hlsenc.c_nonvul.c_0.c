static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    if (VAR4->VAR7 & VAR8)
    {
        char *VAR9 = NULL;
        if (FUN2(&VAR9, VAR2->VAR9, '', VAR4->VAR10 ? VAR6->VAR11 % VAR4->VAR10 : VAR6->VAR11) < 1)
        { VAR2 -> VAR9 , '' , VAR6 -> VAR11 ) < 1 )
            {
                FUN3(VAR4, VAR12, ""
                                        "",
                       VAR9);
                FUN4(VAR9);
                return FUN5(VAR13);
            }
            FUN6(VAR2->VAR9, VAR9, sizeof(VAR2->VAR9));
            FUN4(VAR9);
        }
        if (VAR4->VAR7 & (VAR14 | VAR15))
        {
            FUN6(VAR6->VAR16, VAR2->VAR9, sizeof(VAR6->VAR16));
            if (VAR4->VAR7 & VAR14)
            {
                char *VAR9 = NULL;
                if (FUN2(&VAR9, VAR2->VAR9, '', 0) < 1)
                {
                    FUN3(VAR4, VAR12, ""
                                            "",
                           VAR9);
                    FUN4(VAR9);
                    return FUN5(VAR13);
                }
                FUN6(VAR2->VAR9, VAR9, sizeof(VAR2->VAR9));
                FUN4(VAR9);
            }
            if (VAR4->VAR7 & VAR15)
            {
                char *VAR9 = NULL;
                if (FUN2(&VAR9, VAR2->VAR9, '', 0) < 1)
                {
                    FUN3(VAR4, VAR12, ""
                                            "",
                           VAR9);
                    FUN4(VAR9);
                    return FUN5(VAR13);
                }
                FUN6(VAR2->VAR9, VAR9, sizeof(VAR2->VAR9));
                FUN4(VAR9);
            }
        }
        return 0;
    }
    static int FUN7(struct VAR1 * VAR17, VAR3 * VAR18, VAR5 * VAR6, double VAR19, int64_t VAR20, int64_t VAR21)
    {
        VAR22 *VAR23 = FUN8(sizeof(*VAR23));
        const char *VAR9;
        int VAR24 = (VAR18->VAR7 & VAR25) || (VAR18->VAR26 > 0);
        int VAR27;
        if (!VAR23)
            return FUN5(VAR28);
        VAR27 = FUN9(VAR17, VAR18, VAR6, VAR23, VAR19, VAR20, VAR21);
        if (VAR27 < 0)
        {
            return VAR27;
        }
        VAR9 = FUN10(VAR6->VAR29->VAR9);
        if (VAR18->VAR30)
        {
            VAR9 = VAR6->VAR29->VAR9;
        }
        if ((FUN11(VAR6->VAR31, VAR9) || FUN11(VAR6->VAR32, VAR9)) && !VAR24)
        {
            FUN3(VAR18, VAR33, "", VAR9);
        }
        FUN6(VAR23->VAR9, VAR9, sizeof(VAR23->VAR9));
        if (VAR6->VAR34)
            FUN6(VAR23->VAR35, FUN10(VAR6->VAR36->VAR9), sizeof(VAR23->VAR35));
        else
            VAR23->VAR35[0] = '';
        VAR23->VAR19 = VAR19;
        VAR23->VAR20 = VAR20;
        VAR23->VAR21 = VAR21;
        VAR23->VAR37 = NULL;
        VAR23->VAR38 = 0;
        if (VAR6->VAR39)
        {
            VAR23->VAR38 = 1;
            VAR6->VAR39 = 0;
        }
        if (VAR18->VAR40 || VAR18->VAR41)
        {
            FUN6(VAR23->VAR42, VAR18->VAR42, sizeof(VAR23->VAR42));
            FUN6(VAR23->VAR43, VAR18->VAR43, sizeof(VAR23->VAR43));
        }
        if (!VAR6->VAR31)
            VAR6->VAR31 = VAR23;
        else
            VAR6->VAR44->VAR37 = VAR23;
        VAR6->VAR44 = VAR23;
        if (VAR18->VAR45 != VAR46)
            VAR18->VAR47 = 0;
        if (VAR18->VAR47 && VAR6->VAR48 >= VAR18->VAR47)
        {
            VAR23 = VAR6->VAR31;
            VAR6->VAR49 += VAR23->VAR19;
            VAR6->VAR31 = VAR23->VAR37;
            if (VAR23 && VAR18->VAR7 & VAR50 && !(VAR18->VAR7 & VAR25 || VAR18->VAR10))
            { ! ( VAR18 -> VAR7 & VAR25 ) )
                {
                    VAR23->VAR37 = VAR6->VAR32;
                    VAR6->VAR32 = VAR23;
                    if ((VAR27 = FUN12(VAR17, VAR18, VAR6)) < 0)
                        return VAR27;
                }
                else FUN4(VAR23);
            }
            else
                VAR6->VAR48++;
            if (VAR18->VAR26 > 0)
            {
                return 0;
            }
            VAR6->VAR11++;
            return 0;
        }
        static int FUN13(VAR1 * VAR17, const char *VAR51, VAR5 *VAR6)
        {
            VAR3 *VAR18 = VAR17->VAR52;
            VAR53 *VAR54;
            int VAR27 = 0, VAR55 = 0;
            int64_t VAR56;
            char VAR57[1024];
            const char *VAR58;
            const char *VAR59;
            if ((VAR27 = FUN14(&VAR54, VAR51, VAR60, &VAR17->VAR61, NULL, VAR17->VAR62, VAR17->VAR63)) < 0)
                return VAR27;
            FUN15(VAR54, VAR57, sizeof(VAR57));
            if (strcmp(VAR57, ""))
            {
                VAR27 = VAR64;
                goto VAR65;
            }
            VAR6->VAR39 = 0;
            while (!FUN16(VAR54))
            {
                FUN15(VAR54, VAR57, sizeof(VAR57));
                if (FUN17(VAR57, "", &VAR58))
                {
                    int64_t VAR66 = FUN18(VAR58, NULL, 10);
                    if (VAR66 < VAR6->VAR11)
                        FUN3(VAR18, VAR67, ""
                                                    ""
                                                    "" VAR68 "" VAR68 ""
                                                    "",
                               VAR66, VAR18->VAR69);
                    else
                    {
                        FUN3(VAR18, VAR70, "" VAR68 "", VAR66);
                        VAR6->VAR11 = VAR66;
                    }
                }
                else if (FUN17(VAR57, "", &VAR58))
                {
                    VAR55 = 1;
                    VAR6->VAR39 = 1;
                }
                else if (FUN17(VAR57, "", &VAR58))
                {
                    VAR55 = 1;
                    VAR6->VAR19 = FUN19(VAR58);
                }
                else if (FUN20(VAR57, "", &VAR58))
                {
                    VAR58 = FUN21(VAR57, """);
                    if (VAR58)
                    {
                        VAR58 += strlen(""");
                        VAR59 = FUN21(VAR58, "");
                        if (VAR59)
                        {
                            FUN6(VAR18->VAR42, VAR58, VAR59 - VAR58);
                        }
                        else
                        {
                            FUN6(VAR18->VAR42, VAR58, sizeof(VAR18->VAR42));
                        }
                    }
                    VAR58 = FUN21(VAR57, "");
                    if (VAR58)
                    {
                        VAR58 += strlen("");
                        VAR59 = FUN21(VAR58, "");
                        if (VAR59)
                        {
                            FUN6(VAR18->VAR43, VAR58, VAR59 - VAR58);
                        }
                        else
                        {
                            FUN6(VAR18->VAR43, VAR58, sizeof(VAR18->VAR43));
                        }
                    }
                }
                else if (FUN17(VAR57, "", NULL))
                {
                    continue;
                }
                else if (VAR57[0])
                {
                    if (VAR55)
                    {
                        VAR55 = 0;
                        VAR56 = FUN22(VAR6->VAR29->VAR71);
                        VAR6->VAR21 = VAR56 - VAR6->VAR72;
                        FUN6(VAR6->VAR29->VAR9, VAR57, sizeof(VAR57));
                        VAR27 = FUN7(VAR17, VAR18, VAR6, VAR6->VAR19, VAR6->VAR72, VAR6->VAR21);
                        if (VAR27 < 0)
                            goto VAR65;
                        VAR6->VAR72 = VAR56;
                    }
                }
            }
        VAR65:
            FUN23(VAR54);
            return VAR27;
        }
        static void FUN24(VAR22 * VAR73)
        {
            VAR22 *VAR23;
            while (VAR73)
            {
                VAR23 = VAR73;
                VAR73 = VAR73->VAR37;
                FUN4(VAR23);
            }
        }
        static void FUN25(VAR1 * VAR17, VAR1 * VAR2)
        {
            size_t VAR74 = strlen(VAR2->VAR9);
            char VAR75[sizeof(VAR2->VAR9)];
            FUN6(VAR75, VAR2->VAR9, VAR74);
            VAR75[VAR74 - 4] = '';
            FUN26(VAR2->VAR9, VAR75, VAR17);
            VAR2->VAR9[VAR74 - 4] = '';
        }
        static int FUN27(const char *VAR76, const char *VAR77, char *VAR78, int VAR79)
        {
            char *VAR73 = NULL;
            int VAR80 = -1;
            VAR73 = strrchr(VAR76, '') ? strrchr(VAR76, '') : strrchr(VAR76, '');
            if (VAR73)
            {
                VAR80 = FUN28(VAR73 - VAR76);
                if (FUN29(VAR76, VAR77, VAR80))
                {
                    FUN3(NULL, VAR33, "");
                    return FUN5(VAR13);
                }
            }
            FUN6(VAR78, &(VAR77[VAR80 + 1]), VAR79);
            return 0;
        }
        static int FUN30(VAR1 * VAR17, VAR5 *const VAR81)
        {
            VAR3 *VAR18 = VAR17->VAR52;
            VAR5 *VAR6, *VAR82;
            VAR83 *VAR84, *VAR85;
            VAR86 *VAR87 = NULL;
            unsigned int VAR88, VAR89;
            int VAR90, VAR27, VAR91;
            char *VAR92, *VAR93;
            VAR94 *VAR95;
            VAR81->VAR96 = 1;
            if (!VAR18->VAR97)
            {
                for (VAR88 = 0; VAR88 < VAR18->VAR98; VAR88++)
                    if (!VAR18->VAR99[VAR88].VAR96)
                        return 0;
            }
            else
            {
                if (&VAR18->VAR99[0] != VAR81 || !VAR18->VAR100 || VAR81->VAR101 % VAR18->VAR100)
                    return 0;
            }
            FUN31(VAR17, &VAR87, VAR18);
            VAR27 = FUN32(VAR17, &VAR18->VAR102, VAR18->VAR103, &VAR87);
            FUN33(&VAR87);
            if (VAR27 < 0)
            {
                FUN3(NULL, VAR12, "", VAR18->VAR103);
                goto VAR65;
            }
            FUN34(VAR18->VAR102, VAR18->VAR104);
            for (VAR88 = 0; VAR88 < VAR18->VAR105; VAR88++)
            {
                VAR95 = &(VAR18->VAR106[VAR88]);
                FUN35(VAR18->VAR102, "");
                FUN35(VAR18->VAR102, ""%VAR17\"", VAR95->VAR93);
                FUN35(VAR18->VAR102, ""%VAR17\"", VAR95->VAR107);
                if (VAR95->VAR108)
                    FUN35(VAR18->VAR102, ""%VAR17\"", VAR95->VAR108);
                FUN35(VAR18->VAR102, ""%VAR17\"", VAR95->VAR107);
            }
            for (VAR88 = 0; VAR88 < VAR18->VAR98; VAR88++)
            {
                VAR6 = &(VAR18->VAR99[VAR88]);
                if (VAR6->VAR109 || VAR6->VAR34 || !VAR6->VAR110)
                    continue;
                VAR90 = strlen(VAR6->VAR111) + 1;
                VAR92 = FUN8(VAR90);
                if (!VAR92)
                {
                    VAR27 = FUN5(VAR28);
                    goto VAR65;
                }
                FUN6(VAR92, VAR6->VAR111, VAR90);
                VAR27 = FUN27(VAR18->VAR103, VAR6->VAR111, VAR92, VAR90);
                if (VAR27 < 0)
                {
                    FUN3(VAR17, VAR12, "");
                    goto VAR65;
                }
                FUN36(VAR18->VAR102, VAR6->VAR110, VAR92, 0, 1);
                FUN37(&VAR92);
            }
            for (VAR88 = 0; VAR88 < VAR18->VAR98; VAR88++)
            {
                VAR6 = &(VAR18->VAR99[VAR88]);
                VAR90 = strlen(VAR6->VAR111) + 1;
                VAR92 = FUN8(VAR90);
                if (!VAR92)
                {
                    VAR27 = FUN5(VAR28);
                    goto VAR65;
                }
                FUN6(VAR92, VAR6->VAR111, VAR90);
                VAR27 = FUN27(VAR18->VAR103, VAR6->VAR111, VAR92, VAR90);
                if (VAR27 < 0)
                {
                    FUN3(NULL, VAR12, "");
                    goto VAR65;
                }
                VAR84 = NULL;
                VAR85 = NULL;
                for (VAR89 = 0; VAR89 < VAR6->VAR112; VAR89++)
                {
                    if (VAR6->VAR113[VAR89]->VAR114->VAR115 == VAR116)
                        VAR84 = VAR6->VAR113[VAR89];
                    else if (VAR6->VAR113[VAR89]->VAR114->VAR115 == VAR117)
                        VAR85 = VAR6->VAR113[VAR89];
                }
                if (!VAR84 && !VAR85)
                {
                    FUN3(NULL, VAR33, "");
                    continue;
                }
                if (VAR6->VAR110)
                {
                    for (VAR89 = 0; VAR89 < VAR18->VAR98; VAR89++)
                    {
                        VAR82 = &(VAR18->VAR99[VAR89]);
                        if (!VAR82->VAR109 && !VAR82->VAR34 && VAR82->VAR110 && !FUN38(VAR82->VAR110, VAR6->VAR110))
                        {
                            if (!VAR85)
                                VAR85 = VAR82->VAR113[0];
                            if (VAR82->VAR113[0]->VAR114->VAR118 > VAR85->VAR114->VAR118)
                                VAR85 = VAR82->VAR113[0];
                        }
                    }
                }
                VAR91 = 0;
                if (VAR84)
                    VAR91 += VAR84->VAR114->VAR118;
                if (VAR85)
                    VAR91 += VAR85->VAR114->VAR118;
                VAR91 += VAR91 / 10;
                VAR93 = NULL;
                if (VAR84 && VAR6->VAR93)
                {
                    for (VAR89 = 0; VAR89 < VAR18->VAR105; VAR89++)
                    {
                        VAR95 = &(VAR18->VAR106[VAR89]);
                        if (!FUN38(VAR95->VAR93, VAR6->VAR93))
                        {
                            VAR93 = VAR6->VAR93;
                            break;
                        }
                    }
                    if (VAR89 == VAR18->VAR105)
                        FUN3(NULL, VAR33, "", VAR6->VAR93);
                }
                FUN39(VAR84, VAR18->VAR102, VAR91, VAR92, VAR85 ? VAR6->VAR110 : NULL, VAR6->VAR119, VAR93);
                FUN37(&VAR92);
            }
        VAR65:
            if (VAR27 >= 0)
                VAR18->VAR97 = 1;
            FUN37(&VAR92);
            FUN40(VAR17, &VAR18->VAR102, VAR18->VAR103);
            return VAR27;
        }
        static int FUN41(VAR1 * VAR17, int VAR120, VAR5 *VAR6)
        {
            VAR3 *VAR18 = VAR17->VAR52;
            VAR22 *VAR23;
            int VAR121 = 0;
            int VAR27 = 0;
            char VAR122[1024];
            int64_t VAR11 = FUN42(VAR18->VAR69, VAR6->VAR11 - VAR6->VAR48);
            const char *VAR123 = FUN43(VAR17->VAR9);
            int VAR124 = VAR123 && !strcmp(VAR123, "");
            static unsigned VAR125;
            char *VAR42 = NULL;
            char *VAR43 = NULL;
            VAR86 *VAR87 = NULL;
            double VAR126 = VAR6->VAR49;
            double *VAR127 = (VAR18->VAR7 & VAR128) ? &VAR126 : NULL;
            int VAR24 = (VAR18->VAR7 & VAR25) || (VAR18->VAR26 > 0);
            VAR18->VAR104 = 3;
            if (VAR24)
            {
                VAR18->VAR104 = 4;
                VAR11 = 0;
            }
            if (VAR18->VAR7 & VAR129)
            {
                VAR18->VAR104 = 6;
            }
            if (VAR18->VAR130 == VAR131)
            {
                VAR18->VAR104 = 7;
            }
            if (!VAR124 && !VAR125++)
                FUN3(VAR17, VAR12, "");
            FUN31(VAR17, &VAR87, VAR18);
            snprintf(VAR122, sizeof(VAR122), VAR124 ? "" : "", VAR6->VAR111);
            if ((VAR27 = FUN32(VAR17, &VAR18->VAR102, VAR122, &VAR87)) < 0)
                goto VAR65;
            for (VAR23 = VAR6->VAR31; VAR23; VAR23 = VAR23->VAR37)
            {
                if (VAR121 <= VAR23->VAR19)
                    VAR121 = FUN44(VAR23->VAR19);
            }
            VAR6->VAR132 = 0;
            FUN45(VAR18->VAR102, VAR18->VAR104, VAR18->VAR133, VAR121, VAR11, VAR18->VAR45);
            if ((VAR18->VAR7 & VAR134) && VAR11 == VAR18->VAR69 && VAR6->VAR132 == 0)
            {
                FUN35(VAR18->VAR102, "");
                VAR6->VAR132 = 1;
            }
            if (VAR6->VAR109 && (VAR18->VAR7 & VAR129))
            {
                FUN35(VAR18->VAR102, "");
            }
            for (VAR23 = VAR6->VAR31; VAR23; VAR23 = VAR23->VAR37)
            {
                if ((VAR18->VAR41 || VAR18->VAR40) && (!VAR42 || strcmp(VAR23->VAR42, VAR42) || FUN38(VAR23->VAR43, VAR43)))
                {
                    FUN35(VAR18->VAR102, ""%VAR17\"", VAR23->VAR42);
                    if (*VAR23->VAR43)
                        FUN35(VAR18->VAR102, "", VAR23->VAR43);
                    FUN35(VAR18->VAR102, "");
                    VAR42 = VAR23->VAR42;
                    VAR43 = VAR23->VAR43;
                }
                if ((VAR18->VAR130 == VAR131) && (VAR23 == VAR6->VAR31))
                {
                    FUN46(VAR18->VAR102, VAR6->VAR135, VAR18->VAR7 & VAR25, VAR23->VAR21, VAR23->VAR20);
                }
                VAR27 = FUN47(VAR18->VAR102, VAR23->VAR38, VAR24, VAR23->VAR19, VAR18->VAR7 & VAR136, VAR23->VAR21, VAR23->VAR20, VAR6->VAR137, VAR23->VAR9, VAR127);
                if (VAR27 < 0)
                {
                    FUN3(VAR17, VAR33, "");
                }
            }
            if (VAR120 && (VAR18->VAR7 & VAR138) == 0)
                FUN48(VAR18->VAR102);
            if (VAR6->VAR139)
            {
                if ((VAR27 = FUN32(VAR17, &VAR18->VAR140, VAR6->VAR139, &VAR87)) < 0)
                    goto VAR65;
                FUN45(VAR18->VAR140, VAR18->VAR104, VAR18->VAR133, VAR121, VAR11, VAR46);
                for (VAR23 = VAR6->VAR31; VAR23; VAR23 = VAR23->VAR37)
                {
                    VAR27 = FUN47(VAR18->VAR140, 0, VAR24, VAR23->VAR19, 0, VAR23->VAR21, VAR23->VAR20, VAR6->VAR137, VAR23->VAR35, NULL);
                    if (VAR27 < 0)
                    {
                        FUN3(VAR17, VAR33, "");
                    }
                }
                if (VAR120)
                    FUN48(VAR18->VAR140);
            }
        VAR65:
            FUN33(&VAR87);
            FUN40(VAR17, &VAR18->VAR102, VAR122);
            FUN40(VAR17, &VAR18->VAR140, VAR6->VAR139);
            if (VAR27 >= 0 && VAR124)
                FUN26(VAR122, VAR6->VAR111, VAR17);
            if (VAR27 >= 0 && VAR18->VAR141)
                if (FUN30(VAR17, VAR6) < 0)
                    FUN3(VAR17, VAR33, "");
            return VAR27;
        }
        static int FUN49(VAR1 * VAR17, VAR5 * VAR6)
        {
            VAR3 *VAR4 = VAR17->VAR52;
            VAR1 *VAR2 = VAR6->VAR29;
            VAR1 *VAR142 = VAR6->VAR36;
            VAR86 *VAR87 = NULL;
            char *VAR9, VAR43[VAR143 * 2 + 1];
            int VAR144 = 0;
            if (VAR4->VAR7 & VAR25)
            {
                FUN6(VAR2->VAR9, VAR6->VAR145, sizeof(VAR2->VAR9));
                if (VAR6->VAR146)
                    FUN6(VAR142->VAR9, VAR6->VAR146, sizeof(VAR142->VAR9));
            }
            else if (VAR4->VAR26 > 0)
            {
                char *VAR9 = NULL;
                if (FUN2(&VAR9, VAR6->VAR145, '', VAR4->VAR10 ? VAR6->VAR11 % VAR4->VAR10 : VAR6->VAR11) < 1)
                { VAR6 -> VAR145 , '' , VAR6 -> VAR11 ) < 1 )
                    {
                        FUN4(VAR9);
                        FUN3(VAR2, VAR12, "", VAR6->VAR145);
                        return FUN5(VAR13);
                    }
                    FUN6(VAR2->VAR9, VAR9, sizeof(VAR2->VAR9));
                    FUN4(VAR9);
                }
                else
                {
                    if (VAR4->VAR147)
                    {
                        time_t VAR148;
                        struct VAR149 *VAR149, VAR150;
                        FUN50(&VAR148);
                        VAR149 = FUN51(&VAR148, &VAR150);
                        if (!FUN52(VAR2->VAR9, sizeof(VAR2->VAR9), VAR6->VAR145, VAR149))
                        {
                            FUN3(VAR2, VAR12, "");
                            return FUN5(VAR13);
                        }
                        VAR144 = FUN1(VAR2, VAR4, VAR6);
                        if (VAR144 < 0)
                        {
                            return FUN5(VAR28);
                        }
                        if (VAR4->VAR30)
                        {
                            const char *VAR151;
                            char *VAR152 = FUN53(VAR2->VAR9);
                            if (!VAR152)
                            {
                                return FUN5(VAR28);
                            }
                            VAR151 = FUN54(VAR152);
                            if (FUN55(VAR151) == -1 && VAR153 != VAR154)
                            {
                                FUN3(VAR2, VAR12, "", VAR151);
                                FUN4(VAR152);
                                return FUN5(VAR153);
                            }
                            FUN4(VAR152);
                        }
                    }
                    else
                    {
                        char *VAR9 = NULL;
                        if (FUN2(&VAR9, VAR6->VAR145, '', VAR4->VAR10 ? VAR6->VAR11 % VAR4->VAR10 : VAR6->VAR11) < 1)
                        { VAR6 -> VAR145 , '' , VAR6 -> VAR11 ) < 1 )
                            {
                                FUN4(VAR9);
                                FUN3(VAR2, VAR12, "", VAR6->VAR145);
                                return FUN5(VAR13);
                            }
                            FUN6(VAR2->VAR9, VAR9, sizeof(VAR2->VAR9));
                            FUN4(VAR9);
                        }
                        if (VAR6->VAR146)
                        {
                            char *VAR9 = NULL;
                            if (FUN2(&VAR9, VAR6->VAR146, '', VAR4->VAR10 ? VAR6->VAR11 % VAR4->VAR10 : VAR6->VAR11) < 1)
                            { VAR6 -> VAR146 , '' , VAR6 -> VAR11 ) < 1 )
                                {
                                    FUN4(VAR9);
                                    FUN3(VAR142, VAR12, "", VAR6->VAR146);
                                    return FUN5(VAR13);
                                }
                                FUN6(VAR142->VAR9, VAR9, sizeof(VAR142->VAR9));
                                FUN4(VAR9);
                            }
                        }
                        VAR6->VAR101++;
                        FUN31(VAR17, &VAR87, VAR4);
                        if (VAR4->VAR7 & VAR155)
                        {
                            FUN56(VAR2->VAR9, "", sizeof(VAR2->VAR9));
                        }
                        if (VAR4->VAR40 || VAR4->VAR41)
                        {
                            if (VAR4->VAR40 && VAR4->VAR41)
                            {
                                FUN3(VAR17, VAR33, ""
                                                          "");
                            }
                            if (!VAR4->VAR156 || (VAR4->VAR7 & VAR157))
                            {
                                if (VAR4->VAR40)
                                {
                                    if ((VAR144 = FUN57(VAR17)) < 0)
                                        goto VAR65;
                                }
                                else
                                {
                                    if ((VAR144 = FUN58(VAR17, VAR6)) < 0)
                                        goto VAR65;
                                }
                                VAR4->VAR156 = 1;
                            }
                            if ((VAR144 = FUN59(&VAR87, "", VAR4->VAR158, 0)) < 0)
                                goto VAR65;
                            VAR144 = FUN6(VAR43, VAR4->VAR43, sizeof(VAR43));
                            if (!VAR144)
                                snprintf(VAR43, sizeof(VAR43), "" VAR159, VAR6->VAR11);
                            if ((VAR144 = FUN59(&VAR87, "", VAR43, 0)) < 0)
                                goto VAR65;
                            VAR9 = FUN60("", VAR2->VAR9);
                            if (!VAR9)
                            {
                                VAR144 = FUN5(VAR28);
                                goto VAR65;
                            }
                            VAR144 = FUN32(VAR17, &VAR2->VAR71, VAR9, &VAR87);
                            FUN4(VAR9);
                            FUN33(&VAR87);
                            if (VAR144 < 0)
                                return VAR144;
                        }
                        else if (VAR4->VAR130 != VAR131)
                        {
                            if ((VAR144 = FUN32(VAR17, &VAR2->VAR71, VAR2->VAR9, &VAR87)) < 0)
                                goto VAR65;
                        }
                        if (VAR6->VAR146)
                        {
                            FUN31(VAR17, &VAR87, VAR4);
                            if ((VAR144 = FUN32(VAR17, &VAR142->VAR71, VAR142->VAR9, &VAR87)) < 0)
                                goto VAR65;
                        }
                        FUN33(&VAR87);
                        if (VAR4->VAR130 != VAR131)
                        {
                            if (VAR2->VAR160->VAR161 && VAR2->VAR52)
                            {
                                char VAR162[21];
                                snprintf(VAR162, sizeof(VAR162), "", (VAR163 / 2) - 1);
                                FUN61(VAR2->VAR52, "", "", 0);
                                FUN61(VAR2->VAR52, "", VAR162, 0);
                                FUN61(VAR2->VAR52, "", VAR162, 0);
                            }
                        }
                        if (VAR6->VAR146)
                        {
                            VAR144 = FUN62(VAR142, NULL);
                            if (VAR144 < 0)
                                return VAR144;
                        }
                        return 0;
                    VAR65:
                        FUN33(&VAR87);
                        return VAR144;
                    }
                    static const char *FUN63(VAR1 * VAR17)
                    {
                        char VAR164[21];
                        time_t VAR165 = FUN50(NULL);
                        struct VAR149 *VAR73, VAR166;
                        VAR3 *VAR18 = VAR17->VAR52;
                        VAR73 = FUN51(&VAR165, &VAR166);
                        if (VAR18->VAR130 == VAR131)
                        {
                            return (VAR167 || !FUN52(VAR164, sizeof(VAR164), "", VAR73) || !strcmp(VAR164, "")) ? "" : "";
                        }
                        return (VAR167 || !FUN52(VAR164, sizeof(VAR164), "", VAR73) || !strcmp(VAR164, "")) ? "" : "";
                    }
                    static int FUN64(char *VAR168, int VAR169, int VAR88)
                    {
                        char *VAR73;
                        char VAR170[10] = {''};
                        VAR73 = strrchr(VAR168, '');
                        if (VAR73)
                        {
                            FUN6(VAR170, VAR73, sizeof(VAR170));
                            *VAR73 = '';
                        }
                        snprintf(VAR168 + strlen(VAR168), VAR169 - strlen(VAR168), VAR171, VAR88);
                        if (strlen(VAR170))
                            FUN56(VAR168, VAR170, VAR169);
                        return 0;
                    }
                    static int FUN65(int VAR172, const char *VAR173)
                    {
                        const char *VAR9, *VAR174;
                        char *VAR175 = NULL;
                        int VAR27 = 0;
                        if (!VAR173)
                        {
                            VAR27 = FUN5(VAR13);
                            goto VAR65;
                        }
                        VAR175 = FUN53(VAR173);
                        if (!VAR175)
                        {
                            VAR27 = FUN5(VAR28);
                            goto VAR65;
                        }
                        VAR9 = FUN10(VAR173);
                        VAR174 = FUN54(VAR175);
                        if (VAR172 > 1 && !FUN21(VAR9, "") && !FUN21(VAR174, ""))
                        {
                            FUN3(NULL, VAR12, "", VAR173);
                            VAR27 = FUN5(VAR13);
                            goto VAR65;
                        }
                        if (FUN21(VAR9, "") && FUN21(VAR174, ""))
                        {
                            FUN3(NULL, VAR12, "", VAR173);
                            VAR27 = FUN5(VAR13);
                            goto VAR65;
                        }
                    VAR65:
                        FUN37(&VAR175);
                        return VAR27;
                    }
                    static int FUN66(char *VAR176, int VAR177, int VAR178)
                    {
                        const char *VAR123, *VAR151;
                        char *VAR179 = NULL, *VAR180 = NULL, *VAR181 = NULL;
                        int VAR27 = 0;
                        if (!FUN21(VAR176, ""))
                            return VAR27;
                        VAR179 = FUN53(VAR176);
                        if (!VAR179)
                        {
                            VAR27 = FUN5(VAR28);
                            goto VAR65;
                        }
                        if (FUN2(&VAR180, VAR179, '', VAR178) < 1)
                        {
                            VAR27 = FUN5(VAR13);
                            goto VAR65;
                        }
                        FUN6(VAR176, VAR180, VAR177);
                        VAR123 = FUN43(VAR179);
                        VAR151 = FUN54(VAR179);
                        if (FUN21(VAR151, "") && VAR123 && !strcmp(VAR123, ""))
                        {
                            VAR181 = FUN53(VAR176);
                            if (!VAR181)
                            {
                                VAR27 = FUN5(VAR28);
                                goto VAR65;
                            }
                            VAR151 = FUN54(VAR181);
                            if (FUN55(VAR151) == -1 && VAR153 != VAR154)
                            {
                                VAR27 = FUN5(VAR153);
                                goto VAR65;
                            }
                        }
                    VAR65:
                        FUN37(&VAR179);
                        FUN37(&VAR181);
                        FUN37(&VAR180);
                        return VAR27;
                    }
                    static int FUN67(VAR1 * VAR17, enum AVMediaType VAR115, int VAR182)
                    {
                        unsigned int VAR183, VAR184;
                        if (VAR182 < 0 || VAR182 > VAR17->VAR112 - 1)
                            return -1;
                        VAR184 = 0;
                        for (VAR183 = 0; VAR183 < VAR17->VAR112; VAR183++)
                        {
                            if (VAR17->VAR113[VAR183]->VAR114->VAR115 != VAR115)
                                continue;
                            if (VAR184 == VAR182)
                                return VAR183;
                            VAR184++;
                        }
                        return -1;
                    }
                    static int FUN68(VAR1 * VAR17)
                    {
                        VAR3 *VAR18 = VAR17->VAR52;
                        VAR5 *VAR6;
                        int VAR183;
                        enum AVMediaType VAR115;
                        int VAR98, VAR112;
                        char *VAR73, *VAR185, *VAR186, *VAR187, *VAR188, *VAR189;
                        const char *VAR190;
                        VAR73 = FUN53(VAR18->VAR191);
                        VAR185 = VAR73;
                        while (FUN69(VAR185, "", &VAR186))
                        {
                            VAR185 = NULL;
                            VAR18->VAR98++;
                        }
                        FUN37(&VAR73);
                        VAR18->VAR99 = FUN70(sizeof(*VAR18->VAR99) * VAR18->VAR98);
                        if (!VAR18->VAR99)
                            return FUN5(VAR28);
                        VAR73 = VAR18->VAR191;
                        VAR98 = 0;
                        while (VAR188 = FUN69(VAR73, "", &VAR186))
                        {
                            VAR73 = NULL;
                            if (VAR98 < VAR18->VAR98)
                                VAR6 = &(VAR18->VAR99[VAR98++]);
                            else
                                return FUN5(VAR13);
                            VAR185 = VAR188;
                            while (VAR185 < VAR188 + strlen(VAR188))
                            {
                                if (!FUN29(VAR185, "", 2) || !FUN29(VAR185, "", 2) || !FUN29(VAR185, "", 2))
                                    VAR6->VAR112++;
                                VAR185++;
                            }
                            VAR6->VAR113 = FUN70(sizeof(VAR83 *) * VAR6->VAR112);
                            if (!VAR6->VAR113)
                                return FUN5(VAR28);
                            VAR112 = 0;
                            while (VAR189 = FUN69(VAR188, "", &VAR187))
                            {
                                VAR188 = NULL;
                                if (FUN17(VAR189, "", &VAR190))
                                {
                                    VAR6->VAR110 = FUN53(VAR190);
                                    if (!VAR6->VAR110)
                                        return FUN5(VAR28);
                                    continue;
                                }
                                else if (FUN17(VAR189, "", &VAR190))
                                {
                                    VAR6->VAR93 = FUN53(VAR190);
                                    if (!VAR6->VAR93)
                                        return FUN5(VAR28);
                                    continue;
                                }
                                else if (FUN17(VAR189, "", &VAR190))
                                {
                                    VAR115 = VAR116;
                                }
                                else if (FUN17(VAR189, "", &VAR190))
                                {
                                    VAR115 = VAR117;
                                }
                                else if (FUN17(VAR189, "", &VAR190))
                                {
                                    VAR115 = VAR192;
                                }
                                else
                                {
                                    FUN3(VAR17, VAR12, "", VAR189);
                                    return FUN5(VAR13);
                                }
                                VAR183 = -1;
                                if (FUN71(*VAR190))
                                    VAR183 = FUN67(VAR17, VAR115, FUN72(VAR190));
                                if (VAR183 >= 0 && VAR112 < VAR6->VAR112)
                                {
                                    VAR6->VAR113[VAR112++] = VAR17->VAR113[VAR183];
                                }
                                else
                                {
                                    FUN3(VAR17, VAR12, "", VAR189);
                                    return FUN5(VAR13);
                                }
                            }
                        }
                        FUN3(VAR17, VAR70, "", VAR18->VAR98);
                        return 0;
                    }
                    static int FUN73(VAR1 * VAR17)
                    {
                        VAR3 *VAR18 = VAR17->VAR52;
                        int VAR105;
                        char *VAR73, *VAR185, *VAR186, *VAR187, *VAR193, *VAR189;
                        const char *VAR190;
                        VAR94 *VAR95;
                        VAR73 = FUN53(VAR18->VAR194);
                        VAR185 = VAR73;
                        while (FUN69(VAR185, "", &VAR186))
                        {
                            VAR185 = NULL;
                            VAR18->VAR105++;
                        }
                        FUN37(&VAR73);
                        VAR18->VAR106 = FUN70(sizeof(*VAR18->VAR106) * VAR18->VAR105);
                        if (!VAR18->VAR106)
                            return FUN5(VAR28);
                        VAR73 = VAR18->VAR194;
                        VAR105 = 0;
                        while (VAR193 = FUN69(VAR73, "", &VAR186))
                        {
                            VAR73 = NULL;
                            if (VAR105 < VAR18->VAR105)
                                VAR95 = &(VAR18->VAR106[VAR105++]);
                            else
                                return FUN5(VAR13);
                            while (VAR189 = FUN69(VAR193, "", &VAR187))
                            {
                                VAR193 = NULL;
                                if (FUN17(VAR189, "", &VAR190))
                                {
                                    VAR95->VAR93 = FUN53(VAR190);
                                    if (!VAR95->VAR93)
                                        return FUN5(VAR28);
                                }
                                else if (FUN17(VAR189, "", &VAR190))
                                {
                                    VAR95->VAR107 = FUN53(VAR190);
                                    if (!VAR95->VAR107)
                                        return FUN5(VAR28);
                                }
                                else if (FUN17(VAR189, "", &VAR190))
                                {
                                    VAR95->VAR108 = FUN53(VAR190);
                                    if (!VAR95->VAR108)
                                        return FUN5(VAR28);
                                }
                                else
                                {
                                    FUN3(VAR17, VAR12, "", VAR189);
                                    return FUN5(VAR13);
                                }
                            }
                            if (!VAR95->VAR93 || !VAR95->VAR107)
                            {
                                FUN3(VAR17, VAR12, "");
                                return FUN5(VAR13);
                            }
                            if (FUN17(VAR95->VAR107, "", &VAR190))
                            {
                                if (FUN72(VAR190) < 1 || FUN72(VAR190) > 4)
                                {
                                    FUN3(VAR17, VAR12, "", FUN72(VAR190), VAR95->VAR107);
                                    return FUN5(VAR13);
                                }
                            }
                            else if (FUN17(VAR95->VAR107, "", &VAR190))
                            {
                                if (FUN72(VAR190) < 1 || FUN72(VAR190) > 63)
                                {
                                    FUN3(VAR17, VAR12, "", FUN72(VAR190), VAR95->VAR107);
                                    return FUN5(VAR13);
                                }
                            }
                            else
                            {
                                FUN3(VAR17, VAR12, "", VAR95->VAR107);
                                return FUN5(VAR13);
                            }
                        }
                        return 0;
                    }
                    static int FUN74(VAR1 * VAR17)
                    {
                        VAR3 *VAR18 = VAR17->VAR52;
                        unsigned int VAR88;
                        int VAR27 = 0;
                        if (VAR18->VAR194)
                        {
                            VAR27 = FUN73(VAR17);
                            if (VAR27 < 0)
                                return VAR27;
                        }
                        if (VAR18->VAR191)
                        {
                            return FUN68(VAR17);
                        }
                        else
                        {
                            VAR18->VAR98 = 1;
                            VAR18->VAR99 = FUN70(sizeof(*VAR18->VAR99) * VAR18->VAR98);
                            if (!VAR18->VAR99)
                                return FUN5(VAR28);
                            VAR18->VAR99[0].VAR112 = VAR17->VAR112;
                            VAR18->VAR99[0].VAR113 = FUN70(sizeof(VAR83 *) * VAR18->VAR99[0].VAR112);
                            if (!VAR18->VAR99[0].VAR113)
                                return FUN5(VAR28);
                            if (VAR18->VAR105)
                            {
                                VAR18->VAR99[0].VAR93 = FUN53(VAR18->VAR106[0].VAR93);
                                if (!VAR18->VAR99[0].VAR93)
                                    return FUN5(VAR28);
                            }
                            for (VAR88 = 0; VAR88 < VAR17->VAR112; VAR88++)
                                VAR18->VAR99[0].VAR113[VAR88] = VAR17->VAR113[VAR88];
                        }
                        return 0;
                    }
                    static int FUN75(VAR1 * VAR17)
                    {
                        VAR3 *VAR18 = VAR17->VAR52;
                        const char *VAR151;
                        char *VAR195 = NULL, *VAR196 = NULL;
                        int VAR27 = 0;
                        VAR195 = FUN53(VAR17->VAR9);
                        if (!VAR195)
                        {
                            VAR27 = FUN5(VAR28);
                            goto VAR65;
                        }
                        VAR151 = FUN54(VAR195);
                        if (VAR151 && FUN21(FUN10(VAR151), ""))
                        {
                            VAR196 = FUN53(VAR151);
                            if (!VAR196)
                            {
                                VAR27 = FUN5(VAR28);
                                goto VAR65;
                            }
                            VAR151 = FUN54(VAR196);
                        }
                        if (VAR151 && strcmp(VAR151, ""))
                            VAR18->VAR103 = FUN76(VAR151, VAR18->VAR141);
                        else
                            VAR18->VAR103 = FUN53(VAR18->VAR141);
                        if (!VAR18->VAR103)
                        {
                            VAR27 = FUN5(VAR28);
                            goto VAR65;
                        }
                    VAR65:
                        FUN37(&VAR195);
                        FUN37(&VAR196);
                        return VAR27;
                    }
                    static int FUN77(VAR1 * VAR17)
                    {
                        VAR3 *VAR18 = VAR17->VAR52;
                        int VAR27, VAR88, VAR89;
                        VAR86 *VAR87 = NULL;
                        VAR5 *VAR6 = NULL;
                        for (VAR88 = 0; VAR88 < VAR18->VAR98; VAR88++)
                        {
                            VAR6 = &VAR18->VAR99[VAR88];
                            FUN78(&VAR87, VAR18->VAR197, 0);
                            VAR27 = FUN62(VAR6->VAR29, &VAR87);
                            if (FUN79(VAR87))
                            {
                                FUN3(VAR17, VAR12, "", VAR18->VAR198);
                                VAR27 = FUN5(VAR13);
                                FUN33(&VAR87);
                                goto VAR65;
                            }
                            FUN33(&VAR87);
                            for (VAR89 = 0; VAR89 < VAR6->VAR112; VAR89++)
                            {
                                VAR83 *VAR199;
                                VAR83 *VAR200 = VAR6->VAR113[VAR89];
                                if (VAR18->VAR26 > 0)
                                {
                                    if ((VAR200->VAR114->VAR115 == VAR116) && (VAR200->VAR114->VAR118 > VAR18->VAR26))
                                    {
                                        FUN3(VAR17, VAR33, ""
                                                                  "" VAR68 "" VAR68 "",
                                               VAR200->VAR114->VAR118, VAR18->VAR26);
                                    }
                                }
                                if (VAR200->VAR114->VAR115 != VAR192)
                                    VAR199 = VAR6->VAR29->VAR113[VAR89];
                                else if (VAR6->VAR36)
                                    VAR199 = VAR6->VAR36->VAR113[0];
                                else
                                {
                                    VAR199 = NULL;
                                    continue;
                                }
                                FUN80(VAR200, VAR199->VAR201, VAR199->VAR202.VAR203, VAR199->VAR202.VAR204);
                                FUN81(VAR200, VAR6);
                            }
                            if (VAR6->VAR109 && VAR6->VAR110)
                            {
                                for (VAR89 = 0; VAR89 < VAR18->VAR98; VAR89++)
                                {
                                    VAR5 *VAR205 = &(VAR18->VAR99[VAR89]);
                                    if (!VAR205->VAR109 && !VAR205->VAR34 && VAR205->VAR110 && !FUN38(VAR205->VAR110, VAR6->VAR110))
                                    {
                                        FUN81(VAR205->VAR113[0], VAR6);
                                    }
                                }
                            }
                        }
                    VAR65:
                        return VAR27;
                    }
                    static int FUN82(VAR1 * VAR17, VAR206 * VAR207)
                    {
                        VAR3 *VAR18 = VAR17->VAR52;
                        VAR1 *VAR2 = NULL;
                        VAR83 *VAR208 = VAR17->VAR113[VAR207->VAR183];
                        int64_t VAR209 = 0;
                        int VAR210 = 1;
                        int VAR27 = 0, VAR211 = 1, VAR88, VAR89;
                        int VAR183 = 0;
                        int VAR212 = 0;
                        VAR213 *VAR214 = NULL;
                        VAR5 *VAR6 = NULL;
                        for (VAR88 = 0; VAR88 < VAR18->VAR98; VAR88++)
                        {
                            VAR6 = &VAR18->VAR99[VAR88];
                            for (VAR89 = 0; VAR89 < VAR6->VAR112; VAR89++)
                            {
                                if (VAR6->VAR113[VAR89] == VAR208)
                                {
                                    if (VAR208->VAR114->VAR115 == VAR192)
                                    {
                                        VAR2 = VAR6->VAR36;
                                        VAR183 = 0;
                                    }
                                    else
                                    {
                                        VAR2 = VAR6->VAR29;
                                        VAR183 = VAR89;
                                    }
                                    break;
                                }
                            }
                            if (VAR2)
                                break;
                        }
                        if (!VAR2)
                        {
                            FUN3(VAR17, VAR12, "");
                            return FUN5(VAR28);
                        }
                        VAR209 = VAR18->VAR215 * VAR6->VAR101;
                        if (VAR6->VAR11 - VAR6->VAR48 > VAR18->VAR69 && VAR18->VAR216 > 0)
                        {
                            int VAR217 = VAR18->VAR216 * VAR6->VAR48 * VAR218;
                            int VAR219 = (VAR6->VAR11 - VAR6->VAR48) * VAR18->VAR220 * VAR218;
                            VAR18->VAR215 = VAR18->VAR220 * VAR218;
                            VAR209 = VAR217 + VAR219;
                        }
                        if (VAR6->VAR221 == VAR222)
                        {
                            VAR6->VAR221 = VAR207->VAR223;
                        }
                        if (VAR6->VAR109)
                        {
                            VAR211 = VAR208->VAR114->VAR115 == VAR116 && ((VAR207->VAR7 & VAR224) || (VAR18->VAR7 & VAR225));
                            VAR210 = VAR208->VAR114->VAR115 == VAR116;
                        }
                        if (VAR207->VAR223 == VAR222)
                            VAR210 = VAR211 = 0;
                        if (VAR210)
                        {
                            if (VAR6->VAR209 == VAR222)
                                VAR6->VAR209 = VAR207->VAR223;
                            if (VAR6->VAR226)
                            {
                                VAR6->VAR226 = 0;
                                VAR6->VAR19 = (double)(VAR207->VAR223 - VAR6->VAR209) * VAR208->VAR202.VAR203 / VAR208->VAR202.VAR204;
                                VAR6->VAR227 = (double)(VAR207->VAR19) * VAR208->VAR202.VAR203 / VAR208->VAR202.VAR204;
                            }
                            else
                            {
                                if (VAR207->VAR19)
                                {
                                    VAR6->VAR19 += (double)(VAR207->VAR19) * VAR208->VAR202.VAR203 / VAR208->VAR202.VAR204;
                                }
                                else
                                {
                                    FUN3(VAR17, VAR33, "");
                                    VAR6->VAR19 = (double)(VAR207->VAR223 - VAR6->VAR209) * VAR208->VAR202.VAR203 / VAR208->VAR202.VAR204;
                                }
                            }
                        }
                        if (VAR6->VAR228 && VAR211 && FUN83(VAR207->VAR223 - VAR6->VAR221, VAR208->VAR202, VAR209, VAR229) >= 0)
                        {
                            int64_t VAR56;
                            char *VAR230 = FUN53(VAR6->VAR29->VAR9);
                            int VAR24 = (VAR18->VAR7 & VAR25) || (VAR18->VAR26 > 0);
                            if (!VAR230)
                            {
                                return FUN5(VAR28);
                            }
                            FUN84(VAR6->VAR29, NULL);
                            VAR56 = FUN22(VAR6->VAR29->VAR71);
                            VAR6->VAR21 = VAR56 - VAR6->VAR72;
                            if (!VAR24)
                            {
                                if (VAR18->VAR130 == VAR131)
                                {
                                    if (!VAR6->VAR231)
                                    {
                                        FUN85(VAR2->VAR71);
                                        VAR212 = FUN86(VAR2->VAR71, &VAR214);
                                        FUN87(VAR6->VAR232, VAR214, VAR212);
                                        VAR6->VAR231 = VAR212;
                                        FUN88(&VAR2->VAR71);
                                        VAR6->VAR228 = 0;
                                        FUN89(VAR17, &VAR6->VAR232);
                                        FUN40(VAR17, &VAR6->VAR232, VAR6->VAR233);
                                    }
                                }
                                else
                                {
                                    FUN40(VAR17, &VAR2->VAR71, VAR2->VAR9);
                                }
                                if (VAR6->VAR36)
                                {
                                    FUN40(VAR17, &VAR6->VAR36->VAR71, VAR6->VAR36->VAR9);
                                }
                            }
                            if ((VAR18->VAR7 & VAR155) && VAR2->VAR9[0])
                            {
                                if (!(VAR18->VAR7 & VAR25) || (VAR18->VAR26 <= 0))
                                    if ((VAR6->VAR29->VAR160->VAR161 && VAR6->VAR29->VAR52) && VAR18->VAR130 != VAR131)
                                        FUN61(VAR6->VAR29->VAR52, "", "", 0);
                                FUN25(VAR17, VAR2);
                            }
                            if (VAR6->VAR234)
                            {
                                VAR6->VAR101--;
                            }
                            if (VAR18->VAR130 == VAR131)
                            {
                                VAR27 = FUN32(VAR17, &VAR6->VAR232, VAR6->VAR29->VAR9, NULL);
                                if (VAR27 < 0)
                                {
                                    FUN3(NULL, VAR12, "", VAR6->VAR29->VAR9);
                                    FUN4(VAR230);
                                    return VAR27;
                                }
                                FUN90(VAR6->VAR232);
                                VAR27 = FUN91(VAR6, &VAR212);
                                if (VAR27 < 0)
                                {
                                    FUN4(VAR230);
                                    return VAR27;
                                }
                                FUN89(VAR17, &VAR6->VAR232);
                            }
                            VAR27 = FUN7(VAR17, VAR18, VAR6, VAR6->VAR19, VAR6->VAR72, VAR6->VAR21);
                            VAR6->VAR72 = VAR56;
                            if (VAR27 < 0)
                            {
                                FUN4(VAR230);
                                return VAR27;
                            }
                            VAR6->VAR209 = VAR207->VAR223;
                            VAR6->VAR19 = 0;
                            VAR6->VAR234 = 0;
                            if (VAR18->VAR7 & VAR25)
                            {
                                VAR6->VAR101++;
                            }
                            else if (VAR18->VAR26 > 0)
                            {
                                if (VAR6->VAR72 >= VAR18->VAR26)
                                {
                                    VAR6->VAR11++;
                                    FUN92(VAR18, VAR6, VAR230);
                                    VAR27 = FUN49(VAR17, VAR6);
                                    VAR6->VAR72 = 0;
                                    VAR6->VAR101--;
                                }
                                VAR6->VAR101++;
                            }
                            else
                            {
                                FUN92(VAR18, VAR6, VAR230);
                                VAR27 = FUN49(VAR17, VAR6);
                            }
                            FUN4(VAR230);
                            if (VAR27 < 0)
                            {
                                return VAR27;
                            }
                            if (!VAR6->VAR234 || VAR24)
                                if ((VAR27 = FUN41(VAR17, 0, VAR6)) < 0)
                                {
                                    return VAR27;
                                }
                        }
                        VAR6->VAR228++;
                        VAR27 = FUN93(VAR2, VAR183, VAR207, VAR17, 0);
                        return VAR27;
                    }
                    static int FUN94(struct VAR1 * VAR17)
                    {
                        VAR3 *VAR18 = VAR17->VAR52;
                        VAR1 *VAR2 = NULL;
                        VAR1 *VAR142 = NULL;
                        char *VAR230 = NULL;
                        int VAR88;
                        int VAR27 = 0;
                        VAR5 *VAR6 = NULL;
                        for (VAR88 = 0; VAR88 < VAR18->VAR98; VAR88++)
                        {
                            VAR6 = &VAR18->VAR99[VAR88];
                            VAR2 = VAR6->VAR29;
                            VAR142 = VAR6->VAR36;
                            VAR230 = FUN53(VAR6->VAR29->VAR9);
                            if (!VAR230)
                            {
                                return FUN5(VAR28);
                            }
                            if (VAR18->VAR130 == VAR131)
                            {
                                int VAR212 = 0;
                                VAR27 = FUN32(VAR17, &VAR6->VAR232, VAR6->VAR29->VAR9, NULL);
                                if (VAR27 < 0)
                                {
                                    FUN3(NULL, VAR12, "", VAR6->VAR29->VAR9);
                                    goto VAR235;
                                }
                                FUN90(VAR6->VAR232);
                                VAR27 = FUN91(VAR6, &VAR212);
                                if (VAR27 < 0)
                                {
                                    goto VAR235;
                                }
                                FUN89(VAR17, &VAR6->VAR232);
                            }
                        VAR235:
                            FUN95(VAR2);
                            if (VAR2->VAR71)
                            {
                                VAR6->VAR21 = FUN22(VAR6->VAR29->VAR71) - VAR6->VAR72;
                                if (VAR18->VAR130 != VAR131)
                                    FUN89(VAR17, &VAR2->VAR71);
                                if ((VAR18->VAR7 & VAR155) && VAR2->VAR9[0])
                                {
                                    FUN25(VAR17, VAR2);
                                }
                                FUN7(VAR17, VAR18, VAR6, VAR6->VAR19 + VAR6->VAR227, VAR6->VAR72, VAR6->VAR21);
                            }
                            FUN92(VAR18, VAR6, VAR230);
                            if (VAR142)
                            {
                                if (VAR142->VAR71)
                                    FUN95(VAR142);
                                VAR6->VAR21 = FUN22(VAR6->VAR36->VAR71) - VAR6->VAR72;
                                FUN89(VAR17, &VAR142->VAR71);
                            }
                            FUN37(&VAR6->VAR145);
                            FUN37(&VAR6->VAR233);
                            FUN96(VAR2);
                            VAR6->VAR29 = NULL;
                            FUN41(VAR17, 1, VAR6);
                            FUN37(&VAR6->VAR135);
                            if (VAR142)
                            {
                                FUN37(&VAR6->VAR146);
                                FUN37(&VAR6->VAR139);
                                FUN96(VAR142);
                            }
                            FUN24(VAR6->VAR31);
                            FUN24(VAR6->VAR32);
                            FUN4(VAR230);
                            FUN37(&VAR6->VAR111);
                            FUN37(&VAR6->VAR113);
                            FUN37(&VAR6->VAR110);
                            FUN37(&VAR6->VAR93);
                            FUN37(&VAR6->VAR137);
                        }
                        for (VAR88 = 0; VAR88 < VAR18->VAR105; VAR88++)
                        {
                            VAR94 *VAR95 = &VAR18->VAR106[VAR88];
                            FUN37(&VAR95->VAR93);
                            FUN37(&VAR95->VAR107);
                            FUN37(&VAR95->VAR108);
                        }
                        FUN89(VAR17, &VAR18->VAR102);
                        FUN89(VAR17, &VAR18->VAR140);
                        FUN37(&VAR18->VAR236);
                        FUN37(&VAR18->VAR99);
                        FUN37(&VAR18->VAR106);
                        FUN37(&VAR18->VAR103);
                        return 0;
                    }
                    static int FUN97(VAR1 * VAR17)
                    {
                        int VAR27 = 0;
                        int VAR88 = 0;
                        int VAR89 = 0;
                        VAR3 *VAR18 = VAR17->VAR52;
                        const char *VAR237 = "";
                        VAR5 *VAR6 = NULL;
                        int VAR238 = 0;
                        const char *VAR239 = FUN63(VAR17);
                        const char *VAR240 = "";
                        char *VAR73 = NULL;
                        int VAR241 = 0;
                        int VAR242 = strlen(VAR18->VAR135) + 1;
                        VAR27 = FUN74(VAR17);
                        if (VAR27 < 0)
                        {
                            FUN3(VAR17, VAR12, "", VAR27);
                            goto VAR65;
                        }
                        if (VAR18->VAR98 > 1 && VAR18->VAR7 & VAR157)
                        {
                            VAR27 = FUN5(VAR13);
                            FUN3(VAR17, VAR12, "");
                            goto VAR65;
                        }
                        VAR27 = FUN65(VAR18->VAR98, VAR17->VAR9);
                        if (VAR27 < 0)
                            goto VAR65;
                        if (VAR18->VAR243)
                        {
                            VAR27 = FUN65(VAR18->VAR98, VAR18->VAR243);
                            if (VAR27 < 0)
                                goto VAR65;
                        }
                        if (FUN38(VAR18->VAR135, ""))
                        {
                            VAR27 = FUN65(VAR18->VAR98, VAR18->VAR135);
                            if (VAR27 < 0)
                                goto VAR65;
                        }
                        if (VAR18->VAR244)
                        {
                            VAR27 = FUN65(VAR18->VAR98, VAR18->VAR244);
                            if (VAR27 < 0)
                                goto VAR65;
                        }
                        if (VAR18->VAR141)
                        {
                            VAR27 = FUN75(VAR17);
                            if (VAR27 < 0)
                            {
                                FUN3(VAR17, VAR12, "", VAR27);
                                goto VAR65;
                            }
                        }
                        if (VAR18->VAR130 == VAR131)
                        {
                            VAR237 = "";
                        }
                        if ((VAR18->VAR245 == VAR246) || (VAR18->VAR245 == VAR247))
                        {
                            time_t VAR165 = FUN50(NULL);
                            if (VAR18->VAR245 == VAR246)
                            {
                                VAR18->VAR69 = (VAR248)VAR165;
                            }
                            else if (VAR18->VAR245 == VAR247)
                            {
                                char VAR164[15];
                                struct VAR149 *VAR73, VAR166;
                                if (!(VAR73 = FUN51(&VAR165, &VAR166)))
                                    return FUN5(VAR28);
                                if (!FUN52(VAR164, sizeof(VAR164), "", VAR73))
                                    return FUN5(VAR28);
                                VAR18->VAR69 = FUN18(VAR164, NULL, 10);
                            }
                            FUN3(VAR18, VAR70, "" VAR68 "", VAR18->VAR69);
                        }
                        VAR18->VAR215 = (VAR18->VAR216 ? VAR18->VAR216 : VAR18->VAR220) * VAR218;
                        for (VAR88 = 0; VAR88 < VAR18->VAR98; VAR88++)
                        {
                            VAR6 = &VAR18->VAR99[VAR88];
                            VAR6->VAR111 = FUN53(VAR17->VAR9);
                            if (!VAR6->VAR111)
                            {
                                VAR27 = FUN5(VAR28);
                                goto VAR65;
                            }
                            VAR27 = FUN66(VAR6->VAR111, strlen(VAR17->VAR9) + 1, VAR88);
                            if (VAR27 < 0)
                                goto VAR65;
                            VAR6->VAR11 = VAR18->VAR69;
                            VAR6->VAR221 = VAR222;
                            VAR6->VAR209 = VAR222;
                            VAR6->VAR16[0] = '';
                            if (VAR18->VAR7 & VAR225 && VAR18->VAR7 & VAR129)
                            {
                                VAR18->VAR7 &= ~VAR129;
                                FUN3(VAR17, VAR33, ""
                                                          "");
                            }
                            if (VAR18->VAR7 & VAR128)
                            {
                                time_t VAR148;
                                FUN50(&VAR148);
                                VAR6->VAR49 = VAR148;
                            }
                            if (VAR18->VAR198)
                            {
                                VAR27 = FUN98(&VAR18->VAR197, VAR18->VAR198, "", "", 0);
                                if (VAR27 < 0)
                                {
                                    FUN3(VAR17, VAR12, "", VAR18->VAR198);
                                    goto VAR65;
                                }
                            }
                            for (VAR89 = 0; VAR89 < VAR6->VAR112; VAR89++)
                            {
                                VAR6->VAR109 += VAR6->VAR113[VAR89]->VAR114->VAR115 == VAR116;
                                VAR6->VAR34 += VAR6->VAR113[VAR89]->VAR114->VAR115 == VAR192;
                            }
                            if (VAR6->VAR109 > 1)
                                FUN3(VAR17, VAR33, "");
                            if (VAR18->VAR130 == VAR131)
                            {
                                VAR6->VAR160 = FUN99("", NULL, NULL);
                            }
                            else
                            {
                                VAR6->VAR160 = FUN99("", NULL, NULL);
                            }
                            if (!VAR6->VAR160)
                            {
                                VAR27 = VAR249;
                                goto VAR65;
                            }
                            if (VAR6->VAR34)
                            {
                                VAR6->VAR250 = FUN99("", NULL, NULL);
                                if (!VAR6->VAR160)
                                {
                                    VAR27 = VAR249;
                                    goto VAR65;
                                }
                            }
                            if (VAR18->VAR243)
                            {
                                VAR238 = strlen(VAR18->VAR243) + 1;
                                VAR6->VAR145 = FUN8(VAR238);
                                if (!VAR6->VAR145)
                                {
                                    VAR27 = FUN5(VAR28);
                                    goto VAR65;
                                }
                                FUN6(VAR6->VAR145, VAR18->VAR243, VAR238);
                                VAR27 = FUN66(VAR6->VAR145, VAR238, VAR88);
                                if (VAR27 < 0)
                                    goto VAR65;
                            }
                            else
                            {
                                if (VAR18->VAR7 & VAR25)
                                {
                                    if (VAR18->VAR130 == VAR131)
                                    {
                                        VAR237 = "";
                                    }
                                    else
                                    {
                                        VAR237 = "";
                                    }
                                }
                                if (VAR18->VAR147)
                                {
                                    VAR238 = strlen(VAR6->VAR111) + strlen(VAR239) + 1;
                                }
                                else
                                {
                                    VAR238 = strlen(VAR6->VAR111) + strlen(VAR237) + 1;
                                }
                                VAR6->VAR145 = FUN8(VAR238);
                                if (!VAR6->VAR145)
                                {
                                    VAR27 = FUN5(VAR28);
                                    goto VAR65;
                                }
                                FUN6(VAR6->VAR145, VAR6->VAR111, VAR238);
                                VAR73 = strrchr(VAR6->VAR145, '');
                                if (VAR73)
                                    *VAR73 = '';
                                if (VAR18->VAR147)
                                {
                                    FUN56(VAR6->VAR145, VAR239, VAR238);
                                }
                                else
                                {
                                    FUN56(VAR6->VAR145, VAR237, VAR238);
                                }
                            }
                            if (VAR18->VAR130 == VAR131)
                            {
                                if (VAR18->VAR98 > 1)
                                    VAR242 += strlen(VAR171);
                                VAR6->VAR135 = FUN8(VAR242);
                                if (!VAR6->VAR135)
                                {
                                    VAR27 = FUN5(VAR28);
                                    goto VAR65;
                                }
                                FUN6(VAR6->VAR135, VAR18->VAR135, VAR242);
                                if (FUN38(VAR18->VAR135, ""))
                                {
                                    VAR27 = FUN66(VAR6->VAR135, VAR242, VAR88);
                                    if (VAR27 < 0)
                                        goto VAR65;
                                    VAR242 = strlen(VAR6->VAR135) + 1;
                                    VAR6->VAR233 = FUN8(VAR242);
                                    if (!VAR6->VAR233)
                                    {
                                        VAR27 = FUN5(VAR28);
                                        goto VAR65;
                                    }
                                    FUN6(VAR6->VAR233, VAR6->VAR135, VAR242);
                                }
                                else
                                {
                                    if (VAR18->VAR98 > 1)
                                    {
                                        VAR27 = FUN64(VAR6->VAR135, VAR242, VAR88);
                                        if (VAR27 < 0)
                                            goto VAR65;
                                    }
                                    VAR242 = strlen(VAR6->VAR111) + strlen(VAR6->VAR135) + 1;
                                    VAR6->VAR233 = FUN8(VAR242);
                                    if (!VAR6->VAR233)
                                    {
                                        VAR27 = FUN5(VAR28);
                                        goto VAR65;
                                    }
                                    FUN6(VAR6->VAR233, VAR6->VAR111, VAR242);
                                    VAR73 = strrchr(VAR6->VAR233, '');
                                    if (VAR73)
                                    {
                                        *(VAR73 + 1) = '';
                                        FUN56(VAR6->VAR233, VAR6->VAR135, VAR242);
                                    }
                                    else
                                    {
                                        FUN6(VAR6->VAR233, VAR6->VAR135, VAR242);
                                    }
                                }
                            }
                            if (!VAR18->VAR147)
                            {
                                VAR27 = FUN100(VAR18);
                                if (VAR27 < 0)
                                {
                                    goto VAR65;
                                }
                            }
                            else
                            {
                                VAR27 = FUN101(VAR18, VAR6);
                                if (VAR27 < 0)
                                {
                                    goto VAR65;
                                }
                            }
                            if (VAR6->VAR34)
                            {
                                if (VAR18->VAR7 & VAR25)
                                    VAR240 = "";
                                VAR241 = strlen(VAR6->VAR111) + strlen(VAR240) + 1;
                                VAR6->VAR146 = FUN8(VAR241);
                                if (!VAR6->VAR146)
                                {
                                    VAR27 = FUN5(VAR28);
                                    goto VAR65;
                                }
                                VAR6->VAR139 = FUN8(VAR241);
                                if (!VAR6->VAR139)
                                {
                                    VAR27 = FUN5(VAR28);
                                    goto VAR65;
                                }
                                FUN6(VAR6->VAR146, VAR6->VAR111, VAR241);
                                VAR73 = strrchr(VAR6->VAR146, '');
                                if (VAR73)
                                    *VAR73 = '';
                                if (VAR18->VAR244)
                                {
                                    strcpy(VAR6->VAR139, VAR18->VAR244);
                                    VAR27 = FUN66(VAR6->VAR139, VAR241, VAR88);
                                    if (VAR27 < 0)
                                        goto VAR65;
                                }
                                else
                                {
                                    strcpy(VAR6->VAR139, VAR6->VAR146);
                                    FUN56(VAR6->VAR139, "", VAR241);
                                }
                                FUN56(VAR6->VAR146, VAR240, VAR241);
                            }
                            if (VAR18->VAR137)
                            {
                                VAR6->VAR137 = FUN53(VAR18->VAR137);
                                if (!VAR6->VAR137)
                                {
                                    VAR27 = FUN5(VAR28);
                                    goto VAR65;
                                }
                            }
                            if ((VAR18->VAR7 & VAR25) && (VAR18->VAR130 == VAR131))
                            {
                                VAR6->VAR135 = FUN53(VAR6->VAR145);
                                if (!VAR6->VAR135)
                                {
                                    VAR27 = FUN5(VAR28);
                                    goto VAR65;
                                }
                            }
                            if ((VAR27 = FUN102(VAR17, VAR6)) < 0)
                                goto VAR65;
                            if (VAR18->VAR7 & VAR251)
                            {
                                FUN13(VAR17, VAR6->VAR111, VAR6);
                                VAR6->VAR39 = 1;
                                if (VAR18->VAR216 > 0)
                                {
                                    FUN3(VAR17, VAR33, ""
                                                              "");
                                    VAR18->VAR216 = 0;
                                    VAR18->VAR215 = VAR18->VAR220 * VAR218;
                                }
                            }
                            if ((VAR27 = FUN49(VAR17, VAR6)) < 0)
                                goto VAR65;
                        }
                    VAR65:
                        if (VAR27 < 0)
                        {
                            FUN37(&VAR18->VAR236);
                            for (VAR88 = 0; VAR88 < VAR18->VAR98 && VAR18->VAR99; VAR88++)
                            {
                                VAR6 = &VAR18->VAR99[VAR88];
                                FUN37(&VAR6->VAR145);
                                FUN37(&VAR6->VAR146);
                                FUN37(&VAR6->VAR135);
                                FUN37(&VAR6->VAR111);
                                FUN37(&VAR6->VAR139);
                                FUN37(&VAR6->VAR113);
                                FUN37(&VAR6->VAR110);
                                FUN37(&VAR6->VAR93);
                                FUN37(&VAR6->VAR137);
                                if (VAR6->VAR29)
                                    FUN96(VAR6->VAR29);
                                if (VAR6->VAR36)
                                    FUN96(VAR6->VAR36);
                            }
                            for (VAR88 = 0; VAR88 < VAR18->VAR105; VAR88++)
                            {
                                VAR94 *VAR95 = &VAR18->VAR106[VAR88];
                                FUN37(&VAR95->VAR93);
                                FUN37(&VAR95->VAR107);
                                FUN37(&VAR95->VAR108);
                            }
                            FUN37(&VAR18->VAR99);
                            FUN37(&VAR18->VAR106);
                            FUN37(&VAR18->VAR103);
                        }
                        return VAR27;
                    }
                    static const AVOption VAR87[] = {
                        {"", "", FUN103(VAR69), VAR252, {.VAR253 = 0}, 0, VAR254, VAR255},
                        {"", "", FUN103(VAR220), VAR256, {.VAR257 = 2}, 0, VAR258, VAR255},
                        {"", "", FUN103(VAR216), VAR256, {.VAR257 = 0}, 0, VAR258, VAR255},
                        {"", "", FUN103(VAR47), VAR259, {.VAR253 = 5}, 0, VAR163, VAR255},
                        {"", "", FUN103(VAR198), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR262), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR10), VAR259, {.VAR253 = 0}, 0, VAR163, VAR255},
                        {"", "", FUN103(VAR133), VAR259, {.VAR253 = -1}, VAR263, VAR163, VAR255},
                        {"", "", FUN103(VAR137), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR243), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR26), VAR259, {.VAR253 = 0}, 0, VAR163, VAR255},
                        {"", "", FUN103(VAR40), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR41), VAR264, {.VAR253 = 0}, 0, 1, VAR255},
                        {"", "", FUN103(VAR265), VAR260, .VAR7 = VAR255},
                        {"", "", FUN103(VAR266), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR267), VAR260, .VAR7 = VAR255},
                        {"", "", FUN103(VAR244), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR130), VAR259, {.VAR253 = VAR268}, 0, VAR131, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR268}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR131}, 0, VAR270, VAR255, ""},
                        {"", "", FUN103(VAR135), VAR260, {.VAR261 = ""}, 0, 0, VAR255},
                        {"", "", FUN103(VAR7), VAR271, {.VAR253 = 0}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR25}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR155}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR50}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR136}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR134}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR138}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR225}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR251}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR128}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR8}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR15}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR14}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR157}, 0, VAR270, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR129}, 0, VAR270, VAR255, ""},
                        {"", "", FUN103(VAR147), VAR264, {.VAR253 = 0}, 0, 1, VAR255},
                        {"", "", FUN103(VAR30), VAR264, {.VAR253 = 0}, 0, 1, VAR255},
                        {"", "", FUN103(VAR45), VAR259, {.VAR253 = VAR46}, 0, VAR272 - 1, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR273}, VAR263, VAR163, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR274}, VAR263, VAR163, VAR255, ""},
                        {"", "", FUN103(VAR275), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR245), VAR259, {.VAR253 = VAR276}, 0, VAR247, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR276}, VAR263, VAR163, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR246}, VAR263, VAR163, VAR255, ""},
                        {"", "", 0, VAR269, {.VAR253 = VAR247}, VAR263, VAR163, VAR255, ""},
                        {"", "", FUN103(VAR277), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR191), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR194), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR141), VAR260, {.VAR261 = NULL}, 0, 0, VAR255},
                        {"", "", FUN103(VAR100), VAR259, {.VAR253 = 0}, 0, VAR270, VAR255},
                        {"", "", FUN103(VAR278), VAR264, {.VAR253 = 0}, 0, 1, VAR255},
                        {NULL},
                    };
                    static const AVClass VAR279 = {
                        .VAR280 = "",
                        .VAR281 = VAR282,
                        .VAR283 = VAR87,
                        .VAR104 = VAR284,
                    };
                    AVOutputFormat VAR285 = {
                        .VAR168 = "",
                        .VAR286 = FUN104(""),
                        .VAR287 = "",
                        .VAR288 = sizeof(VAR3),
                        .VAR289 = VAR290,
                        .VAR291 = VAR292,
                        .VAR293 = VAR294,
                        .VAR7 = VAR295 | VAR296 | VAR297,
                        .VAR298 = VAR299,
                        .VAR300 = VAR301,
                        .VAR302 = VAR303,
                        .VAR304 = VAR305,
                        .VAR161 = &VAR279,
                    };