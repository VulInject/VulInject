static int FUN1(void)
{
    int VAR1 = 0, VAR2, VAR3, VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8, *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    char VAR14[1024];
    int VAR15 = 1;
    for (VAR2 = 0; VAR2 < VAR16; VAR2++)
    {
        VAR17 *VAR18 = VAR19[VAR2];
        if (VAR18->VAR20)
            for (VAR3 = 0; VAR3 < VAR18->VAR21; VAR3++)
                VAR22[VAR3 + VAR18->VAR23]->VAR24 = FUN2();
    }
    for (VAR2 = 0; VAR2 < VAR25; VAR2++)
    {
        VAR6 = VAR26[VAR2]->VAR27;
        if (!VAR6->VAR21 && !(VAR6->VAR28->VAR29 & VAR30))
        {
            FUN3(VAR6, VAR2, VAR6->VAR31, 1);
            FUN4(NULL, VAR32, "", VAR2);
            return FUN5(VAR33);
        }
    }
    for (VAR2 = 0; VAR2 < VAR34; VAR2++)
        if ((VAR1 = FUN6(VAR35[VAR2]->VAR36, NULL)) < 0)
            return VAR1;
    for (VAR2 = 0; VAR2 < VAR37; VAR2++)
    {
        VAR11 = VAR38[VAR2];
        VAR6 = VAR26[VAR11->VAR39]->VAR27;
        VAR13 = FUN7(VAR11);
        if (VAR11->VAR40)
            continue;
        VAR8 = VAR11->VAR41->VAR8;
        if (VAR13)
        {
            VAR9 = VAR13->VAR41->VAR8;
            VAR11->VAR41->VAR42 = VAR13->VAR41->VAR42;
            VAR8->VAR43 = VAR9->VAR43;
            VAR8->VAR44 = VAR9->VAR44;
        }
        if (VAR11->VAR45)
        {
            uint64_t VAR46;
            FUN8(VAR13 && !VAR11->VAR47);
            VAR46 = (VAR48)VAR9->VAR49 + VAR50;
            if (VAR46 > VAR51)
            {
                return FUN5(VAR33);
            }
            VAR8->VAR52 = VAR9->VAR52;
            VAR8->VAR53 = VAR9->VAR53;
            if (!VAR8->VAR54)
            {
                if (!VAR6->VAR28->VAR54 || FUN9(VAR6->VAR28->VAR54, VAR9->VAR54) == VAR8->VAR52 || FUN10(VAR6->VAR28->VAR54, VAR9->VAR52) <= 0)
                    VAR8->VAR54 = VAR9->VAR54;
            }
            VAR8->VAR55 = VAR9->VAR55;
            VAR8->VAR56 = VAR9->VAR56;
            VAR8->VAR57 = VAR9->VAR57;
            VAR8->VAR58 = VAR9->VAR58;
            VAR8->VAR59 = FUN11(VAR46);
            if (!VAR8->VAR59)
            {
                return FUN5(VAR60);
            }
            memcpy(VAR8->VAR59, VAR9->VAR59, VAR9->VAR49);
            VAR8->VAR49 = VAR9->VAR49;
            if (!VAR61)
            {
                VAR8->VAR62 = VAR9->VAR62;
                VAR8->VAR62.VAR63 *= VAR9->VAR64;
                FUN12(&VAR8->VAR62.VAR63, &VAR8->VAR62.VAR65, VAR8->VAR62.VAR63, VAR8->VAR62.VAR65, VAR51);
            }
            else
                VAR8->VAR62 = VAR13->VAR41->VAR62;
            switch (VAR8->VAR53)
            {
            case VAR66:
                if (VAR67 != 256)
                {
                    FUN4(NULL, VAR68, "");
                    FUN13(1);
                }
                VAR8->VAR69 = VAR9->VAR69;
                VAR8->VAR70 = VAR9->VAR70;
                VAR8->VAR71 = VAR9->VAR71;
                VAR8->VAR72 = VAR9->VAR72;
                VAR8->VAR73 = VAR9->VAR73;
                VAR8->VAR74 = VAR9->VAR74;
                break;
            case VAR75:
                VAR8->VAR76 = VAR9->VAR76;
                VAR8->VAR77 = VAR9->VAR77;
                VAR8->VAR78 = VAR9->VAR78;
                VAR8->VAR79 = VAR9->VAR79;
                if (!VAR8->VAR80.VAR63)
                {
                    VAR8->VAR80 = VAR11->VAR41->VAR80 = VAR13->VAR41->VAR80.VAR63 ? VAR13->VAR41->VAR80 : VAR13->VAR41->VAR8->VAR80.VAR63 ? VAR13->VAR41->VAR8->VAR80
                                                                                                                                                                                          : (VAR81){0, 1};
                }
                break;
            case VAR82:
                VAR8->VAR77 = VAR9->VAR77;
                VAR8->VAR78 = VAR9->VAR78;
                break;
            case VAR83:
            case VAR84:
                break;
            default:
                FUN14();
            }
        }
        else
        {
            if (!VAR11->VAR85)
            {
                snprintf(VAR14, sizeof(VAR14), ""
                                               ""
                                               ""
                                               "",
                         VAR11->VAR39, VAR11->VAR86, VAR6->VAR28->VAR87);
                VAR1 = FUN5(VAR33);
                goto VAR88;
            }
            if (VAR13)
                VAR13->VAR89 = 1;
            VAR11->VAR90 = 1;
            switch (VAR8->VAR53)
            {
            case VAR66:
                VAR11->VAR91 = FUN15(1024);
                if (!VAR11->VAR91)
                {
                    return FUN5(VAR60);
                }
                if (!VAR8->VAR70)
                    VAR8->VAR70 = VAR9->VAR70;
                FUN16(VAR11->VAR41, VAR11->VAR85);
                VAR8->VAR62 = (VAR81){1, VAR8->VAR70};
                if (VAR8->VAR92 == VAR93)
                    VAR8->VAR92 = VAR9->VAR92;
                FUN17(VAR11->VAR41, VAR11->VAR85);
                if (!VAR8->VAR71)
                    VAR8->VAR71 = VAR9->VAR71;
                if (!VAR8->VAR69)
                    VAR8->VAR69 = VAR9->VAR69;
                if (FUN18(VAR8->VAR69) != VAR8->VAR71)
                    VAR8->VAR69 = 0;
                VAR9->VAR94 = VAR8->VAR71;
                VAR11->VAR95 = VAR9->VAR92;
                VAR11->VAR96 = VAR9->VAR70;
                VAR11->VAR97 = VAR9->VAR71;
                VAR11->VAR98 = VAR9->VAR69;
                break;
            case VAR75:
                if (!VAR11->VAR47)
                {
                    VAR99 *VAR100;
                    VAR100 = FUN19(VAR13, VAR11);
                    if (FUN20(VAR100))
                    {
                        FUN4(NULL, VAR68, "");
                        FUN21(1);
                    }
                }
                if (!VAR11->VAR101.VAR63 && VAR13 && (VAR102 == VAR103 || (VAR102 == VAR104 && !(VAR6->VAR28->VAR29 & (VAR105 | VAR106)))))
                {
                    VAR11->VAR101 = VAR13->VAR41->VAR107.VAR63 ? VAR13->VAR41->VAR107 : (VAR81){25, 1};
                    if (VAR11->VAR85 && VAR11->VAR85->VAR108 && !VAR11->VAR109)
                    {
                        int VAR110 = FUN22(VAR11->VAR101, VAR11->VAR85->VAR108);
                        VAR11->VAR101 = VAR11->VAR85->VAR108[VAR110];
                    }
                }
                if (VAR11->VAR101.VAR63)
                {
                    VAR8->VAR62 = (VAR81){VAR11->VAR101.VAR65, VAR11->VAR101.VAR63};
                    VAR102 = VAR103;
                }
                else if (VAR13)
                    VAR8->VAR62 = VAR13->VAR41->VAR62;
                else
                    VAR8->VAR62 = VAR11->VAR47->VAR47->VAR111[0]->VAR62;
                VAR8->VAR77 = VAR11->VAR47->VAR47->VAR111[0]->VAR112;
                VAR8->VAR78 = VAR11->VAR47->VAR47->VAR111[0]->VAR113;
                VAR8->VAR80 = VAR11->VAR41->VAR80 = VAR11->VAR114 ? FUN23(VAR11->VAR114 * VAR8->VAR78 / VAR8->VAR77, 255) : VAR11->VAR47->VAR47->VAR111[0]->VAR80;
                VAR8->VAR76 = VAR11->VAR47->VAR47->VAR111[0]->VAR115;
                if (VAR8->VAR77 != VAR9->VAR77 || VAR8->VAR78 != VAR9->VAR78 || VAR8->VAR76 != VAR9->VAR76)
                {
                    VAR8->VAR43 = 0;
                }
                break;
            case VAR82:
                VAR8->VAR62 = (VAR81){1, 1000};
                break;
            default:
                FUN14();
                break;
            }
            if ((VAR8->VAR29 & (VAR116 | VAR117)))
            {
                char VAR118[1024];
                VAR119 *VAR120;
                snprintf(VAR118, sizeof(VAR118), "", VAR121 ? VAR121 : VAR122, VAR2);
                if (!strcmp(VAR11->VAR85->VAR87, ""))
                {
                    FUN24(&VAR11->VAR123, "", VAR118, VAR124);
                }
                else
                {
                    if (VAR8->VAR29 & VAR116)
                    {
                        VAR120 = fopen(VAR118, "");
                        if (!VAR120)
                        {
                            FUN4(NULL, VAR68, "", VAR118, strerror(VAR125));
                            FUN13(1);
                        }
                        VAR11->VAR126 = VAR120;
                    }
                    else
                    {
                        char *VAR127;
                        size_t VAR128;
                        if (FUN25(VAR118, &VAR127, &VAR128) < 0)
                        {
                            FUN4(NULL, VAR68, "", VAR118);
                            FUN13(1);
                        }
                        VAR8->VAR129 = VAR127;
                    }
                }
            }
        }
    }
    for (VAR2 = 0; VAR2 < VAR37; VAR2++)
    {
        VAR11 = VAR38[VAR2];
        if (VAR11->VAR90)
        {
            VAR130 *VAR8 = VAR11->VAR85;
            VAR7 *VAR131 = NULL;
            if ((VAR13 = FUN7(VAR11)))
                VAR131 = VAR13->VAR41->VAR8;
            if (VAR131 && VAR131->VAR132)
            {
                VAR11->VAR41->VAR8->VAR132 = FUN26(VAR131->VAR133);
                if (!VAR11->VAR41->VAR8->VAR132)
                {
                    VAR1 = FUN5(VAR60);
                    goto VAR88;
                }
                memcpy(VAR11->VAR41->VAR8->VAR132, VAR131->VAR132, VAR131->VAR133);
                VAR11->VAR41->VAR8->VAR133 = VAR131->VAR133;
            }
            if (!FUN27(VAR11->VAR123, "", NULL, 0))
                FUN24(&VAR11->VAR123, "", "", 0);
            if (FUN28(VAR11->VAR41->VAR8, VAR8, &VAR11->VAR123) < 0)
            {
                snprintf(VAR14, sizeof(VAR14), "", VAR11->VAR39, VAR11->VAR86);
                VAR1 = FUN5(VAR33);
                goto VAR88;
            }
            FUN29(VAR11->VAR41->VAR8, 1);
            FUN30(VAR11->VAR123);
            if (VAR11->VAR41->VAR8->VAR55 && VAR11->VAR41->VAR8->VAR55 < 1000)
                FUN4(NULL, VAR134, ""
                                             "");
            VAR46 += VAR11->VAR41->VAR8->VAR49;
            if (VAR11->VAR41->VAR8->VAR135)
                VAR22[VAR11->VAR136]->VAR41->VAR8->VAR137 |= VAR138;
        }
    }
    for (VAR2 = 0; VAR2 < VAR139; VAR2++)
        if ((VAR1 = FUN31(VAR2, VAR14, sizeof(VAR14))) < 0)
            goto VAR88;
    for (VAR2 = 0; VAR2 < VAR16; VAR2++)
    {
        VAR17 *VAR18 = VAR19[VAR2];
        for (VAR3 = 0; VAR3 < VAR18->VAR27->VAR140; VAR3++)
        {
            VAR141 *VAR142 = VAR18->VAR27->VAR143[VAR3];
            int VAR144 = VAR145;
            for (VAR4 = 0; VAR4 < VAR142->VAR146; VAR4++)
                if (!VAR22[VAR18->VAR23 + VAR142->VAR147[VAR4]]->VAR144)
                {
                    VAR144 = VAR148;
                    break;
                }
            VAR142->VAR144 = VAR144;
        }
    }
    for (VAR2 = 0; VAR2 < VAR25; VAR2++)
    {
        VAR6 = VAR26[VAR2]->VAR27;
        VAR6->VAR149 = VAR150;
        if (FUN32(VAR6, &VAR26[VAR2]->VAR123) < 0)
        {
            snprintf(VAR14, sizeof(VAR14), "", VAR2);
            VAR1 = FUN5(VAR33);
            goto VAR88;
        }
        FUN30(VAR26[VAR2]->VAR123);
        if (strcmp(VAR6->VAR28->VAR87, ""))
        {
            VAR15 = 0;
        }
    }
VAR88:
    for (VAR2 = 0; VAR2 < VAR25; VAR2++)
    {
        FUN3(VAR26[VAR2]->VAR27, VAR2, VAR26[VAR2]->VAR27->VAR31, 1);
    }
    FUN4(NULL, VAR151, "");
    for (VAR2 = 0; VAR2 < VAR139; VAR2++)
    {
        VAR13 = VAR22[VAR2];
        for (VAR3 = 0; VAR3 < VAR13->VAR152; VAR3++)
        {
            VAR153 *VAR154 = VAR13->VAR155[VAR3]->VAR47->VAR156[0];
            if (VAR13->VAR155[VAR3]->VAR36->VAR157)
            {
                FUN4(NULL, VAR151, "", VAR13->VAR39, VAR13->VAR41->VAR86, VAR13->VAR131 ? VAR13->VAR131->VAR87 : "", VAR154->VAR158->VAR47->VAR87);
                if (VAR154->VAR158->VAR159 > 1)
                    FUN4(NULL, VAR151, "", VAR154->VAR160->VAR87);
                if (VAR34 > 1)
                    FUN4(NULL, VAR151, "", VAR13->VAR155[VAR3]->VAR36->VAR86);
                FUN4(NULL, VAR151, "");
            }
        }
    }
    for (VAR2 = 0; VAR2 < VAR37; VAR2++)
    {
        VAR11 = VAR38[VAR2];
        if (VAR11->VAR40)
        {
            FUN4(NULL, VAR151, "", VAR11->VAR40, VAR11->VAR39, VAR11->VAR86);
            continue;
        }
        if (VAR11->VAR47 && VAR11->VAR47->VAR36->VAR157)
        {
            VAR153 *VAR154 = VAR11->VAR47->VAR47->VAR111[0];
            FUN4(NULL, VAR151, "", VAR154->VAR161->VAR47->VAR87);
            if (VAR154->VAR161->VAR162 > 1)
                FUN4(NULL, VAR151, "", VAR154->VAR163->VAR87);
            if (VAR34 > 1)
                FUN4(NULL, VAR151, "", VAR11->VAR47->VAR36->VAR86);
            FUN4(NULL, VAR151, "", VAR11->VAR39, VAR11->VAR86, VAR11->VAR85 ? VAR11->VAR85->VAR87 : "");
            continue;
        }
        FUN4(NULL, VAR151, "", VAR22[VAR11->VAR136]->VAR39, VAR22[VAR11->VAR136]->VAR41->VAR86, VAR11->VAR39, VAR11->VAR86);
        if (VAR11->VAR164 != VAR22[VAR11->VAR136])
            FUN4(NULL, VAR151, "", VAR11->VAR164->VAR39, VAR11->VAR164->VAR41->VAR86);
        if (VAR11->VAR45)
            FUN4(NULL, VAR151, "");
        else
            FUN4(NULL, VAR151, "", VAR22[VAR11->VAR136]->VAR131 ? VAR22[VAR11->VAR136]->VAR131->VAR87 : "", VAR11->VAR85 ? VAR11->VAR85->VAR87 : "");
        FUN4(NULL, VAR151, "");
    }
    if (VAR1)
    {
        FUN4(NULL, VAR32, "", VAR14);
        return VAR1;
    }
    if (VAR15)
    {
        FUN33();
    }
    return 0;
}