static void FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5;
    char *VAR6;
    time_t VAR7;
    int VAR8, VAR9;
    ByteIOContext VAR10, *VAR11 = &VAR10;
    if (FUN2(VAR11) < 0)
    {
        VAR2->VAR12 = VAR2->VAR13;
        VAR2->VAR14 = VAR2->VAR13;
        return;
    }
    FUN3(VAR11, "");
    FUN3(VAR11, "", "");
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    if (VAR2->VAR5->VAR15)
        FUN3(VAR11, ""shortcut VAR16\""%VAR17\"", VAR2->VAR5->VAR15);
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    VAR5 = VAR18;
    while (VAR5 != NULL)
    {
        char VAR19[1024];
        char *VAR20;
        if (VAR5->VAR21 != VAR5)
        {
            FUN4(VAR19, VAR5->VAR22, sizeof(VAR19) - 10);
            VAR20 = VAR19 + strlen(VAR19);
            if (VAR20 - VAR19 >= 4)
            {
                if (strcmp(VAR20 - 4, "") == 0)
                    strcpy(VAR20 - 4, "");
                else if (strcmp(VAR20 - 3, "") == 0)
                    strcpy(VAR20 - 3, "");
                else if (!strcmp(VAR5->VAR23->VAR24, ""))
                {
                    VAR20 = strrchr(VAR19, '');
                    if (!VAR20)
                        VAR20 = VAR19 + strlen(VAR19);
                    if (VAR5->VAR25)
                        strcpy(VAR20, "");
                    else
                        strcpy(VAR20, "");
                }
            }
            FUN3(VAR11, ""/%VAR17\"", VAR19, VAR5->VAR22);
            FUN3(VAR11, "", VAR5->VAR26);
            FUN5(VAR11, VAR5->VAR27);
            switch (VAR5->VAR28)
            {
            case VAR29:
            {
                int VAR30 = 0;
                int VAR31 = 0;
                const char *VAR32 = "";
                const char *VAR33 = "";
                const char *VAR34 = "";
                const char *VAR35 = "";
                for (VAR8 = 0; VAR8 < VAR5->VAR36; VAR8++)
                {
                    VAR37 *VAR38 = VAR5->VAR39[VAR8];
                    VAR40 *VAR41 = FUN6(VAR38->VAR41->VAR42);
                    switch (VAR38->VAR41->VAR43)
                    {
                    case VAR44:
                        VAR30 += VAR38->VAR41->VAR45;
                        if (VAR41)
                        {
                            if (*VAR32)
                                VAR34 = "";
                            VAR32 = VAR41->VAR24;
                        }
                        break;
                    case VAR46:
                        VAR31 += VAR38->VAR41->VAR45;
                        if (VAR41)
                        {
                            if (*VAR33)
                                VAR35 = "";
                            VAR33 = VAR41->VAR24;
                        }
                        break;
                    case VAR47:
                        VAR31 += VAR38->VAR41->VAR45;
                        break;
                    default:
                        FUN7();
                    }
                }
                FUN3(VAR11, "", VAR5->VAR23->VAR24, VAR5->VAR48, VAR31 / 1000, VAR33, VAR35, VAR30 / 1000, VAR32, VAR34);
                if (VAR5->VAR21)
                    FUN3(VAR11, "", VAR5->VAR21->VAR22);
                else
                    FUN3(VAR11, "", VAR5->VAR15);
                FUN3(VAR11, "");
            }
            break;
            default:
                FUN3(VAR11, "");
                break;
            }
        }
        VAR5 = VAR5->VAR49;
    }
    FUN3(VAR11, "");
    VAR5 = VAR18;
    while (VAR5 != NULL)
    {
        if (VAR5->VAR21 == VAR5)
        {
            FUN3(VAR11, "", VAR5->VAR22);
            if (VAR5->VAR50)
            {
                FUN3(VAR11, "", VAR5->VAR50);
                {
                    VAR51 *VAR52;
                    char VAR53[64];
                    snprintf(VAR53, sizeof(VAR53), ""%%VAR54,VAR55\"", VAR5->VAR50);
                    VAR52 = popen(VAR53, "");
                    if (VAR52)
                    {
                        char VAR56[10];
                        char VAR57[64];
                        if (fscanf(VAR52, "", VAR56, VAR57) == 2)
                        {
                            FUN3(VAR11, "", VAR56, VAR57);
                        }
                        fclose(VAR52);
                    }
                }
                FUN3(VAR11, "");
            }
            FUN3(VAR11, "");
            for (VAR8 = 0; VAR8 < VAR5->VAR36; VAR8++)
            {
                VAR37 *VAR38 = VAR5->VAR39[VAR8];
                VAR40 *VAR41 = FUN6(VAR38->VAR41->VAR42);
                const char *VAR58 = "";
                char VAR59[64];
                VAR59[0] = 0;
                switch (VAR38->VAR41->VAR43)
                {
                case VAR44:
                    VAR58 = "";
                    snprintf(VAR59, sizeof(VAR59), "", VAR38->VAR41->VAR60, VAR38->VAR41->VAR61);
                    break;
                case VAR46:
                    VAR58 = "";
                    snprintf(VAR59, sizeof(VAR59), "", VAR38->VAR41->VAR62, VAR38->VAR41->VAR63, VAR38->VAR41->VAR64, VAR38->VAR41->VAR65, VAR38->VAR41->VAR66.VAR67 / VAR38->VAR41->VAR66.VAR68);
                    break;
                default:
                    FUN7();
                }
                FUN3(VAR11, "", VAR8, VAR58, VAR38->VAR41->VAR45 / 1000, VAR41 ? VAR41->VAR24 : "", VAR59);
            }
            FUN3(VAR11, "");
        }
        VAR5 = VAR5->VAR49;
    }
    {
        float VAR69;
        VAR70 *VAR71;
        char VAR72[1024];
        VAR5 = VAR73;
        while (VAR5 != NULL)
        {
            FUN3(VAR11, "", VAR5->VAR22);
            FUN3(VAR11, "");
            FUN3(VAR11, "");
            for (VAR8 = 0; VAR8 < VAR5->VAR36; VAR8++)
            {
                VAR37 *VAR38 = VAR5->VAR39[VAR8];
                VAR74 *VAR75 = VAR38->VAR76;
                VAR71 = VAR38->VAR41;
                FUN8(VAR72, sizeof(VAR72), VAR71);
                VAR69 = VAR75->VAR77 * (float)VAR71->VAR78 * 8.0;
                if (VAR71->VAR41->VAR58 == VAR44 && VAR71->VAR79 > 0)
                    VAR69 /= VAR71->VAR79;
                FUN3(VAR11, "" VAR80 "", VAR72, VAR71->VAR81, VAR75->VAR82, VAR69 / 1000.0);
            }
            FUN3(VAR11, "");
            VAR5 = VAR5->VAR83;
        }
    }
    FUN3(VAR11, "");
    FUN3(VAR11, "", VAR84, VAR85);
    FUN3(VAR11, "", VAR86, VAR87);
    FUN3(VAR11, "");
    FUN3(VAR11, "");
    VAR3 = VAR88;
    VAR8 = 0;
    while (VAR3 != NULL)
    {
        int VAR89;
        int VAR90;
        VAR89 = 0;
        if (VAR3->VAR5)
        {
            for (VAR90 = 0; VAR90 < VAR3->VAR5->VAR36; VAR90++)
            {
                if (!VAR3->VAR5->VAR21)
                    VAR89 += VAR3->VAR5->VAR39[VAR90]->VAR41->VAR45;
                else if (VAR3->VAR91[VAR90] >= 0)
                    VAR89 += VAR3->VAR5->VAR21->VAR39[VAR3->VAR91[VAR90]]->VAR41->VAR45;
            }
        }
        VAR8++;
        VAR6 = FUN9(VAR3->VAR92.VAR93);
        FUN3(VAR11, "", VAR8, VAR3->VAR5 ? VAR3->VAR5->VAR22 : "", VAR3->VAR94 == VAR95 ? "" : "", VAR6, VAR3->VAR96, VAR97[VAR3->VAR94]);
        FUN5(VAR11, VAR89);
        FUN3(VAR11, "");
        FUN5(VAR11, FUN10(&VAR3->VAR98, VAR3->VAR82) * 8);
        FUN3(VAR11, "");
        FUN5(VAR11, VAR3->VAR82);
        FUN3(VAR11, "");
        VAR3 = VAR3->VAR49;
    }
    FUN3(VAR11, "");
    VAR7 = FUN11(NULL);
    VAR6 = FUN12(&VAR7);
    FUN3(VAR11, "", VAR6);
    FUN3(VAR11, "");
    VAR9 = FUN13(VAR11, &VAR2->VAR99);
    VAR2->VAR12 = VAR2->VAR99;
    VAR2->VAR14 = VAR2->VAR99 + VAR9;
}