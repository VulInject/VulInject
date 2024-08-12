static int FUN1(VAR1 **VAR2, int VAR3, VAR1 **VAR4, int VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14 = 0, VAR15 = 0;
    VAR1 *VAR16, *VAR17;
    VAR18 *VAR19, *VAR20;
    VAR21 *VAR22, **VAR23 = NULL;
    VAR24 *VAR25, **VAR26 = NULL;
    VAR27 *VAR28;
    VAR1 *VAR29;
    int VAR30;
    VAR28 = (VAR27 *)FUN2(VAR5 * sizeof(VAR27));
    if (!VAR28)
        goto VAR31;
    VAR11 = 0;
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        VAR16 = VAR4[VAR10];
        VAR28[VAR10].VAR32 = VAR11;
        VAR28[VAR10].VAR33 = VAR16->VAR33;
        VAR11 += VAR16->VAR33;
    }
    VAR14 = VAR11;
    VAR26 = FUN2(VAR14 * sizeof(VAR24 *));
    if (!VAR26)
        goto VAR31;
    for (VAR10 = 0; VAR10 < VAR14; VAR10++)
    {
        VAR25 = FUN2(sizeof(VAR24));
        if (!VAR25)
            goto VAR31;
        VAR26[VAR10] = VAR25;
    }
    VAR11 = 0;
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        VAR16 = VAR4[VAR10];
        for (VAR12 = 0; VAR12 < VAR16->VAR33; VAR12++)
        {
            VAR25 = VAR26[VAR11++];
            VAR25->VAR34 = VAR16->VAR35[VAR12];
            VAR25->VAR36 = VAR10;
            VAR25->VAR37 = VAR12;
            VAR25->VAR38 = 1;
            if (VAR25->VAR34->VAR19.VAR39)
            {
                VAR25->VAR40 = FUN3();
                VAR25->VAR41 = 0;
            }
        }
    }
    VAR15 = 0;
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        VAR17 = VAR2[VAR10];
        VAR15 += VAR17->VAR33;
    }
    if (VAR8 > 0 && VAR8 != VAR15)
    {
        fprintf(VAR42, "");
        FUN4(1);
    }
    for (VAR10 = 0; VAR10 < VAR8; VAR10++)
    {
        int VAR43 = VAR7[VAR10].VAR36;
        int VAR44 = VAR7[VAR10].VAR45;
        if (VAR43 < 0 || VAR43 > VAR5 - 1 || VAR44 < 0 || VAR44 > VAR28[VAR43].VAR33 - 1)
        {
            fprintf(VAR42, "", VAR43, VAR44);
            FUN4(1);
        }
    }
    VAR23 = FUN2(sizeof(VAR21 *) * VAR15);
    if (!VAR23)
        goto VAR31;
    for (VAR10 = 0; VAR10 < VAR15; VAR10++)
    {
        VAR22 = FUN2(sizeof(VAR21));
        if (!VAR22)
            goto VAR31;
        VAR23[VAR10] = VAR22;
    }
    VAR13 = 0;
    for (VAR12 = 0; VAR12 < VAR3; VAR12++)
    {
        VAR17 = VAR2[VAR12];
        for (VAR10 = 0; VAR10 < VAR17->VAR33; VAR10++)
        {
            int VAR46;
            VAR22 = VAR23[VAR13++];
            VAR22->VAR36 = VAR12;
            VAR22->VAR37 = VAR10;
            VAR22->VAR34 = VAR17->VAR35[VAR10];
            if (VAR8 > 0)
            {
                VAR22->VAR47 = VAR28[VAR7[VAR13 - 1].VAR36].VAR32 + VAR7[VAR13 - 1].VAR45;
                if (VAR26[VAR22->VAR47]->VAR34->VAR19.VAR48 != VAR22->VAR34->VAR19.VAR48)
                {
                    fprintf(VAR42, "", VAR7[VAR13 - 1].VAR36, VAR7[VAR13 - 1].VAR45, VAR22->VAR36, VAR22->VAR37);
                    FUN4(1);
                }
            }
            else
            {
                VAR46 = 0;
                for (VAR11 = 0; VAR11 < VAR14; VAR11++)
                {
                    VAR25 = VAR26[VAR11];
                    if (VAR25->VAR38 && VAR25->VAR34->VAR19.VAR48 == VAR22->VAR34->VAR19.VAR48)
                    {
                        VAR22->VAR47 = VAR11;
                        VAR46 = 1;
                    }
                }
                if (!VAR46)
                {
                    for (VAR11 = 0; VAR11 < VAR14; VAR11++)
                    {
                        VAR25 = VAR26[VAR11];
                        if (VAR25->VAR34->VAR19.VAR48 == VAR22->VAR34->VAR19.VAR48)
                        {
                            VAR22->VAR47 = VAR11;
                            VAR46 = 1;
                        }
                    }
                    if (!VAR46)
                    {
                        fprintf(VAR42, "", VAR22->VAR36, VAR22->VAR37);
                        FUN4(1);
                    }
                }
            }
            VAR25 = VAR26[VAR22->VAR47];
            VAR25->VAR38 = 0;
        }
    }
    for (VAR10 = 0; VAR10 < VAR15; VAR10++)
    {
        VAR22 = VAR23[VAR10];
        VAR25 = VAR26[VAR22->VAR47];
        VAR19 = &VAR22->VAR34->VAR19;
        VAR20 = &VAR25->VAR34->VAR19;
        if (VAR22->VAR34->VAR49)
        {
            VAR19->VAR50 = VAR20->VAR50;
            VAR19->VAR48 = VAR20->VAR48;
            VAR19->VAR51 = VAR20->VAR51;
            VAR19->VAR52 = VAR20->VAR52;
            switch (VAR19->VAR48)
            {
            case VAR53:
                VAR19->VAR54 = VAR20->VAR54;
                VAR19->VAR55 = VAR20->VAR55;
                break;
            case VAR56:
                VAR19->VAR57 = VAR20->VAR57;
                VAR19->VAR58 = VAR20->VAR58;
                VAR19->VAR59 = VAR20->VAR59;
                VAR19->VAR60 = VAR20->VAR60;
                break;
            default:
                FUN5();
            }
        }
        else
        {
            switch (VAR19->VAR48)
            {
            case VAR53:
                if (FUN6(&VAR22->VAR61, 2 * VAR62))
                    goto VAR31;
                if (VAR19->VAR55 == VAR20->VAR55 && VAR19->VAR54 == VAR20->VAR54)
                {
                    VAR22->VAR63 = 0;
                }
                else
                {
                    if (VAR19->VAR55 != VAR20->VAR55 && VAR20->VAR50 == VAR64)
                    {
                        VAR20->VAR55 = VAR19->VAR55;
                        if (VAR19->VAR54 == VAR20->VAR54)
                            VAR22->VAR63 = 0;
                        else
                        {
                            VAR22->VAR63 = 1;
                            VAR22->VAR65 = FUN7(VAR19->VAR55, VAR20->VAR55, VAR19->VAR54, VAR20->VAR54);
                            if (!VAR22->VAR65)
                            {
                                FUN8("");
                                FUN5();
                            }
                        }
                        VAR20->VAR55 = VAR19->VAR55;
                    }
                    else
                    {
                        VAR22->VAR63 = 1;
                        VAR22->VAR65 = FUN7(VAR19->VAR55, VAR20->VAR55, VAR19->VAR54, VAR20->VAR54);
                        if (!VAR22->VAR65)
                        {
                            FUN8("");
                            FUN5();
                        }
                    }
                }
                VAR25->VAR66 = 1;
                VAR22->VAR67 = 1;
                break;
            case VAR56:
                if (VAR19->VAR59 == VAR20->VAR59 && VAR19->VAR60 == VAR20->VAR60 && VAR68 == 0 && VAR69 == 0 && VAR70 == 0 && VAR71 == 0)
                {
                    VAR22->VAR72 = 0;
                    VAR22->VAR73 = 0;
                }
                else if ((VAR19->VAR59 == VAR20->VAR59 - (VAR70 + VAR71)) && (VAR19->VAR60 == VAR20->VAR60 - (VAR68 + VAR69)))
                {
                    VAR22->VAR72 = 0;
                    VAR22->VAR73 = 1;
                    VAR22->VAR74 = VAR68;
                    VAR22->VAR75 = VAR70;
                }
                else
                {
                    VAR76 *VAR77;
                    VAR22->VAR72 = 1;
                    VAR22->VAR73 = 0;
                    VAR77 = FUN9((VAR19->VAR59 * VAR19->VAR60 * 3) / 2);
                    if (!VAR77)
                        goto VAR31;
                    VAR22->VAR78.VAR79[0] = VAR77;
                    VAR22->VAR78.VAR79[1] = VAR22->VAR78.VAR79[0] + (VAR19->VAR59 * VAR19->VAR60);
                    VAR22->VAR78.VAR79[2] = VAR22->VAR78.VAR79[1] + (VAR19->VAR59 * VAR19->VAR60) / 4;
                    VAR22->VAR78.VAR80[0] = VAR19->VAR59;
                    VAR22->VAR78.VAR80[1] = VAR19->VAR59 / 2;
                    VAR22->VAR78.VAR80[2] = VAR19->VAR59 / 2;
                    VAR22->VAR81 = FUN10(VAR22->VAR34->VAR19.VAR59, VAR22->VAR34->VAR19.VAR60, VAR25->VAR34->VAR19.VAR59, VAR25->VAR34->VAR19.VAR60, VAR68, VAR69, VAR70, VAR71);
                }
                VAR22->VAR67 = 1;
                VAR25->VAR66 = 1;
                break;
            default:
                FUN5();
            }
            if (VAR22->VAR67 && (VAR19->VAR82 & (VAR83 | VAR84)))
            {
                char VAR85[1024];
                VAR86 *VAR87;
                int VAR88;
                char *VAR89;
                snprintf(VAR85, sizeof(VAR85), "", VAR90 ? VAR90 : VAR91, VAR10);
                if (VAR19->VAR82 & VAR83)
                {
                    VAR87 = fopen(VAR85, "");
                    if (!VAR87)
                    {
                        FUN11(VAR85);
                        FUN4(1);
                    }
                    VAR22->VAR92 = VAR87;
                }
                else
                {
                    VAR87 = fopen(VAR85, "");
                    if (!VAR87)
                    {
                        FUN11(VAR85);
                        FUN4(1);
                    }
                    FUN12(VAR87, 0, VAR93);
                    VAR88 = FUN13(VAR87);
                    FUN12(VAR87, 0, VAR94);
                    VAR89 = FUN9(VAR88 + 1);
                    if (!VAR89)
                    {
                        fprintf(VAR42, "");
                        FUN4(1);
                    }
                    fread(VAR89, 1, VAR88, VAR87);
                    fclose(VAR87);
                    VAR89[VAR88] = '';
                    VAR19->VAR95 = VAR89;
                }
            }
        }
    }
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        FUN14(VAR2[VAR10], VAR10, VAR2[VAR10]->VAR96, 1);
    }
    fprintf(VAR42, "");
    for (VAR10 = 0; VAR10 < VAR15; VAR10++)
    {
        VAR22 = VAR23[VAR10];
        fprintf(VAR42, "", VAR26[VAR22->VAR47]->VAR36, VAR26[VAR22->VAR47]->VAR37, VAR22->VAR36, VAR22->VAR37);
    }
    for (VAR10 = 0; VAR10 < VAR15; VAR10++)
    {
        VAR22 = VAR23[VAR10];
        if (VAR22->VAR67)
        {
            VAR97 *VAR19;
            VAR19 = FUN15(VAR22->VAR34->VAR19.VAR50);
            if (!VAR19)
            {
                fprintf(VAR42, "", VAR22->VAR36, VAR22->VAR37);
                FUN4(1);
            }
            if (FUN16(&VAR22->VAR34->VAR19, VAR19) < 0)
            {
                fprintf(VAR42, "", VAR22->VAR36, VAR22->VAR37);
                FUN4(1);
            }
        }
    }
    for (VAR10 = 0; VAR10 < VAR14; VAR10++)
    {
        VAR25 = VAR26[VAR10];
        if (VAR25->VAR66)
        {
            VAR97 *VAR19;
            VAR19 = FUN17(VAR25->VAR34->VAR19.VAR50);
            if (!VAR19)
            {
                fprintf(VAR42, "", VAR25->VAR34->VAR19.VAR50, VAR25->VAR36, VAR25->VAR37);
                FUN4(1);
            }
            if (FUN16(&VAR25->VAR34->VAR19, VAR19) < 0)
            {
                fprintf(VAR42, "", VAR25->VAR36, VAR25->VAR37);
                FUN4(1);
            }
            VAR25->VAR98 = 1;
        }
    }
    for (VAR10 = 0; VAR10 < VAR14; VAR10++)
    {
        VAR25 = VAR26[VAR10];
        VAR16 = VAR4[VAR25->VAR36];
        VAR25->VAR99 = 0;
        if (VAR25->VAR66)
        {
            switch (VAR25->VAR34->VAR19.VAR48)
            {
            case VAR53:
                FUN18(&VAR25->VAR100, 0, 0, VAR16->VAR101 * VAR25->VAR34->VAR19.VAR54);
                break;
            case VAR56:
                FUN18(&VAR25->VAR100, 0, 0, VAR16->VAR101 * VAR25->VAR34->VAR19.VAR57);
                break;
            default:
                break;
            }
        }
    }
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        VAR28[VAR10].VAR102 = 2048;
    }
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        VAR17 = VAR2[VAR10];
        if (FUN19(VAR17) < 0)
        {
            fprintf(VAR42, "", VAR10);
            VAR9 = -VAR103;
            goto VAR31;
        }
    }
    if (!VAR104)
        fprintf(VAR42, "");
    FUN20();
    VAR29 = 0;
    VAR30 = -1;
    for (; VAR105 == 0;)
    {
        int VAR36, VAR32;
        AVPacket VAR106;
        VAR76 *VAR107;
        int VAR108;
        VAR76 *VAR109;
        int VAR110, VAR111;
        AVPicture VAR112;
        short VAR113[VAR114 / 2];
        void *VAR115;
        double VAR116;
    VAR117:
        if (!VAR104)
        {
            VAR30 = FUN21();
            if (VAR30 == '')
                break;
        }
        VAR36 = -1;
        VAR116 = 1e10;
        for (VAR10 = 0; VAR10 < VAR15; VAR10++)
        {
            double VAR99;
            VAR22 = VAR23[VAR10];
            VAR17 = VAR2[VAR22->VAR36];
            VAR25 = VAR26[VAR22->VAR47];
            VAR99 = (double)VAR22->VAR34->VAR99.VAR118 * VAR17->VAR101 / VAR17->VAR119;
            if (!VAR28[VAR25->VAR36].VAR120 && VAR99 < VAR116)
            {
                VAR116 = VAR99;
                VAR36 = VAR25->VAR36;
            }
        }
        if (VAR36 < 0)
        {
            break;
        }
        if (VAR121 > 0 && VAR116 >= (VAR121 / 1000000.0))
            break;
        VAR16 = VAR4[VAR36];
        if (FUN22(VAR16, &VAR106) < 0)
        {
            VAR28[VAR36].VAR120 = 1;
            continue;
        }
        if (!VAR106.VAR88)
        {
            VAR29 = VAR16;
        }
        else
        {
            VAR29 = 0;
        }
        if (VAR122)
        {
            FUN8("", VAR106.VAR45, VAR106.VAR88);
            FUN23(VAR106.VAR79, VAR106.VAR88);
        }
        if (VAR106.VAR45 >= VAR28[VAR36].VAR33)
            goto VAR123;
        VAR32 = VAR28[VAR36].VAR32 + VAR106.VAR45;
        VAR25 = VAR26[VAR32];
        if (VAR25->VAR38)
            goto VAR123;
        VAR108 = VAR106.VAR88;
        VAR107 = VAR106.VAR79;
        while (VAR108 > 0)
        {
            VAR109 = NULL;
            VAR110 = 0;
            if (VAR25->VAR66)
            {
                if (VAR25->VAR98)
                {
                    if (VAR106.VAR99 != VAR124)
                    {
                        VAR25->VAR99 = VAR25->VAR100.VAR118 = VAR106.VAR99;
                    }
                    else
                    {
                        VAR25->VAR99 = VAR25->VAR100.VAR118;
                    }
                    VAR25->VAR98 = 0;
                }
                switch (VAR25->VAR34->VAR19.VAR48)
                {
                case VAR53:
                    VAR9 = FUN24(&VAR25->VAR34->VAR19, VAR113, &VAR110, VAR107, VAR108);
                    if (VAR9 < 0)
                        goto VAR125;
                    if (VAR110 <= 0)
                    {
                        VAR107 += VAR9;
                        VAR108 -= VAR9;
                        continue;
                    }
                    VAR109 = (VAR76 *)VAR113;
                    FUN25(&VAR25->VAR100, VAR16->VAR119 * VAR110 / (2 * VAR25->VAR34->VAR19.VAR55));
                    break;
                case VAR56:
                {
                    AVFrame VAR126;
                    VAR110 = (VAR25->VAR34->VAR19.VAR59 * VAR25->VAR34->VAR19.VAR60 * 3) / 2;
                    VAR9 = FUN26(&VAR25->VAR34->VAR19, &VAR126, &VAR111, VAR107, VAR108);
                    VAR112 = *(VAR127 *)&VAR126;
                    VAR25->VAR34->VAR128 = VAR126.VAR128;
                    if (VAR9 < 0)
                    {
                    VAR125:
                        fprintf(VAR42, "", VAR25->VAR36, VAR25->VAR37);
                        FUN27(&VAR106);
                        goto VAR117;
                    }
                    if (!VAR111)
                    {
                        VAR107 += VAR9;
                        VAR108 -= VAR9;
                        continue;
                    }
                    FUN25(&VAR25->VAR100, VAR16->VAR119 * VAR25->VAR34->VAR19.VAR58);
                }
                break;
                default:
                    goto VAR125;
                }
            }
            else
            {
                VAR109 = VAR107;
                VAR110 = VAR108;
                VAR9 = VAR108;
            }
            VAR107 += VAR9;
            VAR108 -= VAR9;
            VAR115 = 0;
            if (VAR25->VAR34->VAR19.VAR48 == VAR56)
            {
                FUN28(VAR25, &VAR112, &VAR115);
            }
            VAR25->VAR98 = 1;
            if (VAR25->VAR34->VAR19.VAR39)
            {
                int64_t VAR99 = FUN29((VAR129)VAR25->VAR41 * VAR25->VAR34->VAR19.VAR58, 1000000, VAR25->VAR34->VAR19.VAR57);
                int64_t VAR130 = FUN3() - VAR25->VAR40;
                if (VAR99 > VAR130)
                    FUN30(VAR99 - VAR130);
                VAR25->VAR41++;
            }
            if (VAR25->VAR34->VAR19.VAR50 == VAR131)
            {
                if (VAR25->VAR34->VAR19.VAR132 != VAR133)
                {
                    int64_t VAR134;
                    VAR134 = VAR25->VAR135;
                    VAR25->VAR135 = VAR25->VAR136.VAR118;
                    VAR25->VAR136.VAR118 = VAR134;
                }
            }
            for (VAR10 = 0; VAR10 < VAR15; VAR10++)
            {
                int VAR137;
                VAR22 = VAR23[VAR10];
                if (VAR22->VAR47 == VAR32)
                {
                    VAR17 = VAR2[VAR22->VAR36];
                    FUN8("", VAR10, VAR106.VAR99 / 90000.0, (VAR25->VAR99 - VAR22->VAR34->VAR99.VAR118) / 90000.0);
                    VAR22->VAR138 = (double)VAR25->VAR99 * VAR16->VAR101 / VAR16->VAR119;
                    VAR22->VAR139 = VAR22->VAR34->VAR99.VAR118;
                    if (VAR22->VAR67)
                    {
                        switch (VAR22->VAR34->VAR19.VAR48)
                        {
                        case VAR53:
                            FUN31(VAR17, VAR22, VAR25, VAR109, VAR110);
                            break;
                        case VAR56:
                        {
                            int VAR10;
                            VAR21 *VAR140, *VAR141;
                            VAR140 = NULL;
                            for (VAR10 = 0; VAR10 < VAR15; VAR10++)
                            {
                                VAR141 = VAR23[VAR10];
                                if (VAR141->VAR36 == VAR22->VAR36 && VAR141->VAR34->VAR19.VAR48 == VAR53)
                                {
                                    VAR140 = VAR141;
                                    break;
                                }
                            }
                            FUN32(VAR17, VAR22, VAR25, &VAR112, &VAR137, VAR140);
                            if (VAR142 && VAR137)
                                FUN33(VAR17, VAR22, VAR137);
                        }
                        break;
                        default:
                            FUN5();
                        }
                    }
                    else
                    {
                        AVFrame VAR143;
                        memset(&VAR143, 0, sizeof(VAR144));
                        VAR22->VAR34->VAR19.VAR145 = &VAR143;
                        VAR143.VAR146 = VAR106.VAR82 & VAR147;
                        FUN34(VAR17, VAR22->VAR37, VAR109, VAR110);
                        VAR22->VAR34->VAR19.VAR148++;
                        VAR22->VAR148++;
                    }
                }
            }
            FUN35(VAR115);
        }
    VAR123:
        FUN27(&VAR106);
        FUN36(VAR2, VAR23, VAR15, 0);
    }
    FUN37();
    FUN36(VAR2, VAR23, VAR15, 1);
    for (VAR10 = 0; VAR10 < VAR15; VAR10++)
    {
        VAR22 = VAR23[VAR10];
        if (VAR22->VAR67)
        {
            FUN38(&VAR22->VAR34->VAR19.VAR95);
            FUN39(&VAR22->VAR34->VAR19);
        }
    }
    for (VAR10 = 0; VAR10 < VAR14; VAR10++)
    {
        VAR25 = VAR26[VAR10];
        if (VAR25->VAR66)
        {
            FUN39(&VAR25->VAR34->VAR19);
        }
    }
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        VAR17 = VAR2[VAR10];
        FUN40(VAR17);
    }
    VAR9 = 0;
VAR149:
    FUN35(VAR28);
    if (VAR26)
    {
        for (VAR10 = 0; VAR10 < VAR14; VAR10++)
        {
            VAR25 = VAR26[VAR10];
            FUN35(VAR25);
        }
        FUN35(VAR26);
    }
    if (VAR23)
    {
        for (VAR10 = 0; VAR10 < VAR15; VAR10++)
        {
            VAR22 = VAR23[VAR10];
            if (VAR22)
            {
                if (VAR22->VAR92)
                {
                    fclose(VAR22->VAR92);
                    VAR22->VAR92 = NULL;
                }
                FUN41(&VAR22->VAR61);
                FUN35(VAR22->VAR78.VAR79[0]);
                if (VAR22->VAR72)
                    FUN42(VAR22->VAR81);
                if (VAR22->VAR63)
                    FUN43(VAR22->VAR65);
                FUN35(VAR22);
            }
        }
        FUN35(VAR23);
    }
    return VAR9;
VAR31:
    VAR9 = -VAR150;
    goto VAR149;
}