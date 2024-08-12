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
                    VAR22->VAR72 = 1;
                    VAR22->VAR73 = 0;
                    if (FUN9(&VAR22->VAR76, VAR77, VAR19->VAR59, VAR19->VAR60))
                        goto VAR31;
                    VAR22->VAR78 = FUN10(VAR22->VAR34->VAR19.VAR59, VAR22->VAR34->VAR19.VAR60, VAR25->VAR34->VAR19.VAR59, VAR25->VAR34->VAR19.VAR60, VAR68, VAR69, VAR70, VAR71);
                }
                VAR22->VAR67 = 1;
                VAR25->VAR66 = 1;
                break;
            default:
                FUN5();
            }
            if (VAR22->VAR67 && (VAR19->VAR79 & (VAR80 | VAR81)))
            {
                char VAR82[1024];
                VAR83 *VAR84;
                int VAR85;
                char *VAR86;
                snprintf(VAR82, sizeof(VAR82), "", VAR87 ? VAR87 : VAR88, VAR10);
                if (VAR19->VAR79 & VAR80)
                {
                    VAR84 = fopen(VAR82, "");
                    if (!VAR84)
                    {
                        FUN11(VAR82);
                        FUN4(1);
                    }
                    VAR22->VAR89 = VAR84;
                }
                else
                {
                    VAR84 = fopen(VAR82, "");
                    if (!VAR84)
                    {
                        FUN11(VAR82);
                        FUN4(1);
                    }
                    FUN12(VAR84, 0, VAR90);
                    VAR85 = FUN13(VAR84);
                    FUN12(VAR84, 0, VAR91);
                    VAR86 = FUN14(VAR85 + 1);
                    if (!VAR86)
                    {
                        fprintf(VAR42, "");
                        FUN4(1);
                    }
                    VAR85 = fread(VAR86, 1, VAR85, VAR84);
                    fclose(VAR84);
                    VAR86[VAR85] = '';
                    VAR19->VAR92 = VAR86;
                }
            }
        }
    }
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        FUN15(VAR2[VAR10], VAR10, VAR2[VAR10]->VAR93, 1);
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
            VAR94 *VAR19;
            VAR19 = FUN16(VAR22->VAR34->VAR19.VAR50);
            if (!VAR19)
            {
                fprintf(VAR42, "", VAR22->VAR36, VAR22->VAR37);
                FUN4(1);
            }
            if (FUN17(&VAR22->VAR34->VAR19, VAR19) < 0)
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
            VAR94 *VAR19;
            VAR19 = FUN18(VAR25->VAR34->VAR19.VAR50);
            if (!VAR19)
            {
                fprintf(VAR42, "", VAR25->VAR34->VAR19.VAR50, VAR25->VAR36, VAR25->VAR37);
                FUN4(1);
            }
            if (FUN17(&VAR25->VAR34->VAR19, VAR19) < 0)
            {
                fprintf(VAR42, "", VAR25->VAR36, VAR25->VAR37);
                FUN4(1);
            }
        }
    }
    for (VAR10 = 0; VAR10 < VAR14; VAR10++)
    {
        VAR25 = VAR26[VAR10];
        VAR16 = VAR4[VAR25->VAR36];
        VAR25->VAR95 = 0;
        VAR25->VAR96 = 0;
    }
    for (VAR10 = 0; VAR10 < VAR5; VAR10++)
    {
        VAR28[VAR10].VAR97 = 2048;
    }
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        VAR17 = VAR2[VAR10];
        if (FUN19(VAR17) < 0)
        {
            fprintf(VAR42, "", VAR10);
            VAR9 = -VAR98;
            goto VAR31;
        }
    }
    if (!VAR99)
    {
        fprintf(VAR42, "");
        FUN20(VAR100);
    }
    FUN21();
    VAR29 = 0;
    VAR30 = -1;
    for (; VAR101 == 0;)
    {
        int VAR36, VAR32;
        AVPacket VAR102;
        double VAR103;
    VAR104:
        if (!VAR99)
        {
            if (VAR105)
                break;
            VAR30 = FUN22();
            if (VAR30 == '')
                break;
        }
        VAR36 = -1;
        VAR103 = 1e10;
        for (VAR10 = 0; VAR10 < VAR15; VAR10++)
        {
            double VAR95;
            VAR22 = VAR23[VAR10];
            VAR17 = VAR2[VAR22->VAR36];
            VAR25 = VAR26[VAR22->VAR47];
            VAR95 = (double)VAR22->VAR34->VAR95.VAR106 * VAR17->VAR107 / VAR17->VAR108;
            if (!VAR28[VAR25->VAR36].VAR109 && VAR95 < VAR103)
            {
                VAR103 = VAR95;
                VAR36 = VAR25->VAR36;
            }
        }
        if (VAR36 < 0)
        {
            break;
        }
        if (VAR110 > 0 && VAR103 >= (VAR110 / 1000000.0))
            break;
        VAR16 = VAR4[VAR36];
        if (FUN23(VAR16, &VAR102) < 0)
        {
            VAR28[VAR36].VAR109 = 1;
            continue;
        }
        if (!VAR102.VAR85)
        {
            VAR29 = VAR16;
        }
        else
        {
            VAR29 = 0;
        }
        if (VAR111)
        {
            FUN24(VAR112, &VAR102, VAR113);
        }
        if (VAR102.VAR45 >= VAR28[VAR36].VAR33)
            goto VAR114;
        VAR32 = VAR28[VAR36].VAR32 + VAR102.VAR45;
        VAR25 = VAR26[VAR32];
        if (VAR25->VAR38)
            goto VAR114;
        if (FUN25(VAR25, VAR32, VAR23, VAR15, &VAR102) < 0)
        {
            fprintf(VAR42, "", VAR25->VAR36, VAR25->VAR37);
            FUN26(&VAR102);
            goto VAR104;
        }
    VAR114:
        FUN26(&VAR102);
        FUN27(VAR2, VAR23, VAR15, 0);
    }
    for (VAR10 = 0; VAR10 < VAR14; VAR10++)
    {
        VAR25 = VAR26[VAR10];
        if (VAR25->VAR66)
        {
            FUN25(VAR25, VAR10, VAR23, VAR15, NULL);
        }
    }
    FUN28();
    FUN27(VAR2, VAR23, VAR15, 1);
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        VAR17 = VAR2[VAR10];
        FUN29(VAR17);
    }
    for (VAR10 = 0; VAR10 < VAR15; VAR10++)
    {
        VAR22 = VAR23[VAR10];
        if (VAR22->VAR67)
        {
            FUN30(&VAR22->VAR34->VAR19.VAR92);
            FUN31(&VAR22->VAR34->VAR19);
        }
    }
    for (VAR10 = 0; VAR10 < VAR14; VAR10++)
    {
        VAR25 = VAR26[VAR10];
        if (VAR25->VAR66)
        {
            FUN31(&VAR25->VAR34->VAR19);
        }
    }
    VAR9 = 0;
VAR115:
    FUN32(VAR28);
    if (VAR26)
    {
        for (VAR10 = 0; VAR10 < VAR14; VAR10++)
        {
            VAR25 = VAR26[VAR10];
            FUN32(VAR25);
        }
        FUN32(VAR26);
    }
    if (VAR23)
    {
        for (VAR10 = 0; VAR10 < VAR15; VAR10++)
        {
            VAR22 = VAR23[VAR10];
            if (VAR22)
            {
                if (VAR22->VAR89)
                {
                    fclose(VAR22->VAR89);
                    VAR22->VAR89 = NULL;
                }
                FUN33(&VAR22->VAR61);
                FUN32(VAR22->VAR76.VAR116[0]);
                if (VAR22->VAR72)
                    FUN34(VAR22->VAR78);
                if (VAR22->VAR63)
                    FUN35(VAR22->VAR65);
                FUN32(VAR22);
            }
        }
        FUN32(VAR23);
    }
    return VAR9;
VAR31:
    VAR9 = -VAR117;
    goto VAR115;
}